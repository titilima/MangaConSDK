#ifndef DOWNLOADMGR_H
#define DOWNLOADMGR_H

#pragma once

#include <MangaDownloader.h>

class CDownloadMgr : public MangaCon::DownloaderManager
{
public:
    virtual void WINAPI EnumDownloaders(EnumProc pfnEnum, PVOID pvParam) OVERRIDE;
    virtual MangaCon::Downloader* WINAPI GetDownloader(PCSTR pszID) OVERRIDE;
private:
    static bool IsClassAvailable(REFCLSID clsid);
};

#endif // DOWNLOADMGR_H
