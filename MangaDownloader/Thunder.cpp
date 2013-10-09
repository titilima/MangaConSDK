#include <atlbase.h>
#include "Thunder.h"

using namespace std;

CThunder::CThunder(void) : CDownloaderBase<IAgent2>(CLSID_Agent)
{
    // Nothing
}

void WINAPI CThunder::AddImageURL(PCSTR pszURL, PCSTR pszRef)
{
    USES_CONVERSION;
    wstring wsURL, wsRef, wsNewName, wsCookies;
    wsURL = A2CW_CP(pszURL, CP_UTF8);
    if (NULL != pszRef && '\0' != *pszRef)
        wsRef = A2CW_CP(pszRef, CP_UTF8);

    wsNewName = GetNewFileName(wsURL);
    wsCookies = GetCookies();

    m_obj->AddTask2(CComBSTR(wsURL.c_str()), CComBSTR(wsNewName.c_str()), L"", L"",
        CComBSTR(wsRef.c_str()), -1, 1, -1, CComBSTR(wsCookies.c_str()));
}

void WINAPI CThunder::ClearTasks(void)
{
    m_obj->CancelTasks();
}

void WINAPI CThunder::CommitTasks(void)
{
    int ret = 0;
    ATLVERIFY(SUCCEEDED(m_obj->CommitTasks(&ret)));
}
