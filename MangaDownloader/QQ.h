#ifndef QQ_H
#define QQ_H

#pragma once

#include "external/qqdownloader.h"
#include "DownloaderBase.hpp"

class CQQ : public CDownloaderBase<IQQRightClick>
{
public:
    CQQ(void);
public:
    // Overrides for MangaCon::Downloader
    virtual void WINAPI ClearTasks(void) OVERRIDE;
    virtual void WINAPI CommitTasks(void) OVERRIDE;
    // Overrides for MangaCon::DownloadTask
    virtual void WINAPI AddImageURL(PCSTR pszURL, PCSTR pszRef) OVERRIDE;
};

#endif // QQ_H
