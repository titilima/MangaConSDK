#include <atlbase.h>
#include "QQ.h"

using namespace std;

CQQ::CQQ(void) : CDownloaderBase<IQQRightClick>(CLSID_QQRightClick)
{
    // Nothing
}

void WINAPI CQQ::AddImageURL(PCSTR pszURL, PCSTR pszRef)
{
    USES_CONVERSION;
    wstring wsURL, wsRef, wsNewName, wsCookies;
    wsURL = A2CW_CP(pszURL, CP_UTF8);
    if (NULL != pszRef && '\0' != *pszRef)
        wsRef = A2CW_CP(pszRef, CP_UTF8);

    wsNewName = GetNewFileName(wsURL);
    wsCookies = GetCookies();

    m_obj->AddTask3(CComBSTR(wsURL.c_str()), CComBSTR(wsRef.c_str()), L"", 0,
        CComBSTR(wsNewName.c_str()));
}

void WINAPI CQQ::ClearTasks(void)
{
    // Nothing
}

void WINAPI CQQ::CommitTasks(void)
{
    ATLVERIFY(SUCCEEDED(m_obj->SendMultiTask()));
}
