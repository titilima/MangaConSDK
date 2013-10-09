

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Jan 27 19:18:58 2010
 */
/* Compiler settings for thunder.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

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

MIDL_DEFINE_GUID(IID, LIBID_THUNDERAGENTLib,0x26D657AE,0xA466,0x4F44,0xAB,0x1D,0x5C,0xFF,0xFA,0xDB,0xED,0x97);


MIDL_DEFINE_GUID(IID, IID_IAgent,0x1622F56A,0x0C55,0x464C,0xB4,0x72,0x37,0x78,0x45,0xDE,0xF2,0x1D);


MIDL_DEFINE_GUID(IID, IID_IAgent2,0x1ADEFB0D,0x0FFA,0x4470,0x8A,0xB0,0xB9,0x21,0x08,0x0F,0x06,0x42);


MIDL_DEFINE_GUID(IID, IID_IAgent3,0x18243D84,0x9FE5,0x4977,0x92,0x47,0x1A,0xE4,0x13,0x55,0xC5,0xC3);


MIDL_DEFINE_GUID(IID, IID_IAgent4,0xD3830C5B,0x62EA,0x48EF,0xA7,0xCB,0x5B,0x39,0x44,0xCA,0xE1,0x2F);


MIDL_DEFINE_GUID(IID, IID_IAgent5,0x80BB764D,0x348B,0x48EA,0x9F,0x0F,0xD9,0x45,0x8E,0x0E,0xE1,0x86);


MIDL_DEFINE_GUID(IID, IID_IAgent6,0x6BEC8438,0x4AEB,0x4EE9,0x93,0x85,0x3C,0x9F,0x0F,0x11,0xF4,0x7D);


MIDL_DEFINE_GUID(IID, IID_IXunLeiAgent,0x3E9DE0FB,0xFFA0,0x4954,0xA5,0x14,0x1D,0x77,0x12,0x55,0x9E,0x35);


MIDL_DEFINE_GUID(CLSID, CLSID_Agent,0x485463B7,0x8FB2,0x4B3B,0xB2,0x9B,0x8B,0x91,0x9B,0x0E,0xAC,0xCE);


MIDL_DEFINE_GUID(CLSID, CLSID_XunLeiAgent,0xE1A931EB,0x13B6,0x40B9,0xBE,0xE9,0x3B,0x98,0xCC,0x8A,0x8D,0xF8);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



