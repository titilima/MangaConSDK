///////////////////////////////////////////////////////////////////////////////
// FileName:    MangaCommon.h
// Created:     2012/08/09
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2012
//-----------------------------------------------------------------------------
// Information: 漫画控 SDK 公共定义
///////////////////////////////////////////////////////////////////////////////

#ifndef MANGACOMMON_H
#define MANGACOMMON_H

#pragma once

#include <Windows.h>
#include <vector>
#include <string>
#include <assert.h>

#ifndef OVERRIDE

#if defined(_MSC_VER) || defined(__clang__)
#define OVERRIDE override
#else
#define OVERRIDE
#endif

#endif

namespace MangaCon {

class MemObject
{
public:
    bool AssignString(const std::string& str)
    {
        if (str.empty())
            return false;

        PSTR buf = Alloc(str.length());
        if (NULL == buf)
            return false;

        memcpy(buf, str.data(), str.length());
        return true;
    }
protected:
    virtual PSTR Alloc(size_t len) = 0;
};

class StrObject : public MemObject
{
public:
    PCSTR c_str(void) const
    {
        return m_str.c_str();
    }
    const std::string& cpp_str(void) const
    {
        return m_str;
    }
protected:
    virtual PSTR Alloc(size_t len) OVERRIDE
    {
        m_str.resize(len);
        return const_cast<PSTR>(m_str.data());
    }
private:
    std::string m_str;
};

class StringObject : public MemObject, public std::string
{
protected:
    virtual PSTR Alloc(size_t len)
    {
        resize(len);
        return const_cast<PSTR>(data());
    }
};

} // namespace MangaCon

#endif // MANGACOMMON_H
