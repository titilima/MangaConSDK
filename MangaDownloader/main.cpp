#include <Windows.h>
#include <MangaDownloader.h>
#include "DownloadMgr.h"

using namespace MangaCon;

DownloaderManager* WINAPI McGetDownloaderManager(void)
{
    static CDownloadMgr s_dm;
    return &s_dm;
}
