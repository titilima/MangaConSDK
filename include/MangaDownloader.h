///////////////////////////////////////////////////////////////////////////////
// FileName:    MangaDownloader.h
// Created:     2012/05/23
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2012
//-----------------------------------------------------------------------------
// Information: 第三方下载器接口
///////////////////////////////////////////////////////////////////////////////

#ifndef MANGADOWNLOADER_H
#define MANGADOWNLOADER_H

#pragma once

#include "MangaCommon.h"

namespace MangaCon {

class Manga
{
public:
    enum InfoType {
        URL = 0,
        RawContent,
        Name,
        Author,
        Cover,
        Intro,
        Category,
        MAX
    };
    virtual bool WINAPI GetInfo(int nInfo, MemObject *pDst) const = 0;
    virtual bool WINAPI GetFinishStatus(bool *bFinished) const = 0;
};

class DownloadTask
{
public:
    virtual void WINAPI AddImageURL(PCSTR pszURL, PCSTR pszRef) = 0;
    virtual void WINAPI SetCookies(PCSTR pszCookies) = 0;
    virtual void WINAPI SetHeaders(PCSTR pszHeaders) { /* Nothing */ }
    virtual void WINAPI Done(void) = 0;
    virtual void WINAPI SetOption(PCSTR pszName, PCSTR pszValue) { /* Nothing */ }
};

class Downloader
{
public:
    virtual void WINAPI ClearTasks(void) = 0;
    virtual DownloadTask* WINAPI NewTask(Manga *pManga, PCWSTR pwzVol, PCSTR pszVolURL) = 0;
    virtual void WINAPI CommitTasks(void) = 0;
    virtual void WINAPI SetActive(bool bActive) { /* Nothing */ }
};

class DownloaderManager
{
public:
    typedef void (WINAPI * EnumProc)(PCSTR pszID, PCWSTR pwzName, PVOID pvParam);
    virtual void WINAPI EnumDownloaders(EnumProc pfnEnum, PVOID pvParam) = 0;

    virtual Downloader* WINAPI GetDownloader(PCSTR pszID) = 0;
};

extern const __declspec(selectany) char FuncName[] = "McGetDownloaderManager";
typedef DownloaderManager* (WINAPI * FuncType)(void);

} // namespace MangaCon

#endif // MANGADOWNLOADER_H
