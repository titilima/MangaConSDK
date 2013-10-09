#ifndef THUNDER_H
#define THUNDER_H

#pragma once

#include "external\thunder.h"
#include "DownloaderBase.hpp"

class CThunder : public CDownloaderBase<IAgent2>
{
public:
    CThunder(void);
public:
    // Overrides for MangaCon::Downloader
    virtual void WINAPI ClearTasks(void) OVERRIDE;
    virtual void WINAPI CommitTasks(void) OVERRIDE;
    // Overrides for MangaCon::DownloadTask
    virtual void WINAPI AddImageURL(PCSTR pszURL, PCSTR pszRef) OVERRIDE;
};

#endif // THUNDER_H
