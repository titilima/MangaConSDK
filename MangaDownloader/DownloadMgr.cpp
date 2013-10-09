#include <atlbase.h>
#include "DownloadMgr.h"
#include "Thunder.h"
#include "QQ.h"

using namespace MangaCon;

static const char szThunderID[] = "thunder";
static const char szQQID[] = "qqdownloader";

void WINAPI CDownloadMgr::EnumDownloaders(EnumProc pfnEnum, PVOID pvParam)
{
    if (IsClassAvailable(CLSID_Agent))
        pfnEnum(szThunderID, L"Thunder (Ñ¸À×)", pvParam);
    if (IsClassAvailable(CLSID_QQRightClick))
        pfnEnum(szQQID, L"QQDownload (QQÐý·ç)", pvParam);
}

Downloader* WINAPI CDownloadMgr::GetDownloader(PCSTR pszID)
{
    if (0 == _strcmpi(pszID, szThunderID))
        return new CThunder;
    else if (0 == _strcmpi(pszID, szQQID))
        return new CQQ;
    else
        return NULL;
}

bool CDownloadMgr::IsClassAvailable(REFCLSID clsid)
{
    TCHAR tzKey[64];
    wsprintf(tzKey,
        _T("CLSID\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}"),
        clsid.Data1, clsid.Data2, clsid.Data3,
        clsid.Data4[0], clsid.Data4[1],
        clsid.Data4[2], clsid.Data4[3],
        clsid.Data4[4], clsid.Data4[5],
        clsid.Data4[6], clsid.Data4[7]);

    CRegKey key;
    LONG lr = key.Open(HKEY_CLASSES_ROOT, tzKey, KEY_QUERY_VALUE);
    if (ERROR_SUCCESS != lr)
        return false;

    CRegKey key2;
    lr = key2.Open(key, _T("InprocServer32"), KEY_QUERY_VALUE);
    if (ERROR_SUCCESS != lr)
        return false;

    TCHAR tzPath[MAX_PATH];
    ULONG ul = MAX_PATH;
    lr = key2.QueryStringValue(NULL, tzPath, &ul);
    if (ERROR_SUCCESS != lr)
        return false;
    return GetFileAttributes(tzPath) != INVALID_FILE_ATTRIBUTES;
}
