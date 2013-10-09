#ifndef DOWNLOADERBASE_HPP
#define DOWNLOADERBASE_HPP

#pragma once

#include <string>
#include <list>
#include <MangaDownloader.h>

template <class T>
class CDownloaderBase : public MangaCon::Downloader, public MangaCon::DownloadTask
{
public:
    CDownloaderBase(const CLSID &clsid) : m_obj(NULL), m_nImageIndex(0)
    {
        ::CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, __uuidof(T),
            reinterpret_cast<LPVOID *>(&m_obj));
    }
    virtual ~CDownloaderBase(void)
    {
        if (NULL == m_obj)
            m_obj->Release();
    }
public:
    // Overrides for MangaCon::Downloader
    virtual MangaCon::DownloadTask* WINAPI NewTask(MangaCon::Manga *pManga, PCWSTR pwzVol,
        PCSTR pszVolURL) OVERRIDE
    {
        USES_CONVERSION;

        MangaCon::StrObject soName;
        ATLVERIFY(pManga->GetInfo(MangaCon::Manga::Name, &soName));
        m_wsName = A2CW_CP(soName.c_str(), CP_UTF8);
        m_wsName.append(1, L'_').append(pwzVol).append(1, L'_');
        return this;
    }
    virtual void WINAPI SetActive(bool bActive) OVERRIDE
    {
        if (!bActive)
            delete this;
    }
    // Overrides for MangaCon::DownloadTask
    virtual void WINAPI SetCookies(PCSTR pszCookies) OVERRIDE
    {
        m_strCookies = pszCookies;
    }
    virtual void WINAPI Done(void) OVERRIDE
    {
        m_wsName.clear();
        m_strCookies.clear();
        m_nImageIndex = 0;
    }
protected:
    std::wstring GetCookies(void) const
    {
        wstring wsCookies;
        if (!m_strCookies.empty()) {
            USES_CONVERSION;
            wsCookies = A2CW_CP(m_strCookies.c_str(), CP_UTF8);
        }
        return wsCookies;
    }
    std::wstring GetNewFileName(const std::wstring &wsURL)
    {
        WCHAR wz[8];
        wsprintfW(wz, L"%04d", ++m_nImageIndex);

        std::wstring wsNewName(m_wsName);
        wsNewName.append(wz);

        std::wstring wsExt(L".jpg");
        size_t pos1 = wsURL.find_last_of(L'.');
        if (wstring::npos != pos1) {
            size_t pos2 = wsURL.find_last_of(L'/');
            if (pos1 > pos2)
                wsExt = wsURL.c_str() + pos1;
        }
        wsNewName.append(wsExt);

        return wsNewName;
    }
protected:
    T *m_obj;
private:
    std::wstring m_wsName;
    std::string m_strCookies;
    size_t m_nImageIndex;
};

#endif // DOWNLOADERBASE_HPP
