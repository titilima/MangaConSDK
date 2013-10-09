

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Jan 29 15:52:09 2010
 */
/* Compiler settings for qqdownloader.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_QQIEHELPERLib,0x83428D06,0x5608,0x4A6F,0x93,0x28,0x54,0xB0,0x1B,0x3B,0x6C,0x07);


MIDL_DEFINE_GUID(IID, IID_IQQBrowserHelperObject,0xD17CF0B4,0x0870,0x4426,0x84,0x5D,0x63,0x2C,0xC0,0x2C,0xE9,0xE6);


MIDL_DEFINE_GUID(IID, IID_IQQRightClick,0xDCE3B5F0,0x6682,0x4C85,0xAE,0x1F,0x27,0x2B,0x07,0x62,0xE7,0xFD);


MIDL_DEFINE_GUID(IID, IID_IQQDownload,0xB0D928DF,0x72EA,0x4EAD,0xA2,0xEA,0xDD,0x1B,0x50,0x89,0x16,0x92);


MIDL_DEFINE_GUID(IID, IID_IDownloadProxy,0x49D93A5F,0x434E,0x4F65,0xA7,0xAC,0x9A,0x09,0xEA,0x01,0xCA,0xA0);


MIDL_DEFINE_GUID(IID, IID_IMimeFilter,0x2AC5B8B9,0xBDEE,0x46F3,0xA2,0xFD,0x52,0xFA,0xF8,0x98,0xD0,0xD0);


MIDL_DEFINE_GUID(CLSID, CLSID_CycloneHelper,0x00000000,0x12C9,0x4305,0x82,0xF9,0x43,0x05,0x8F,0x20,0xE8,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_QQRightClick,0x4836C333,0x208E,0x4BCE,0xB3,0x0B,0x00,0xB9,0x54,0x5B,0x0F,0x6E);


MIDL_DEFINE_GUID(CLSID, CLSID_QQDownload,0x8AC3BC28,0xE145,0x4385,0xA6,0x94,0x8A,0xAC,0x12,0x8A,0xCB,0x16);


MIDL_DEFINE_GUID(CLSID, CLSID_DownloadProxy,0x64BA5C81,0xE498,0x432A,0x9A,0x34,0x0A,0x60,0x00,0x9C,0x4E,0x8A);


MIDL_DEFINE_GUID(CLSID, CLSID_MimeFilter,0x00000000,0x912B,0x41C8,0x89,0xAB,0x89,0x6B,0x2C,0xD0,0xD6,0xE6);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



