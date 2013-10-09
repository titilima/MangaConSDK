

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __qqdownloader_h__
#define __qqdownloader_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IQQBrowserHelperObject_FWD_DEFINED__
#define __IQQBrowserHelperObject_FWD_DEFINED__
typedef interface IQQBrowserHelperObject IQQBrowserHelperObject;
#endif 	/* __IQQBrowserHelperObject_FWD_DEFINED__ */


#ifndef __IQQRightClick_FWD_DEFINED__
#define __IQQRightClick_FWD_DEFINED__
typedef interface IQQRightClick IQQRightClick;
#endif 	/* __IQQRightClick_FWD_DEFINED__ */


#ifndef __IQQDownload_FWD_DEFINED__
#define __IQQDownload_FWD_DEFINED__
typedef interface IQQDownload IQQDownload;
#endif 	/* __IQQDownload_FWD_DEFINED__ */


#ifndef __IDownloadProxy_FWD_DEFINED__
#define __IDownloadProxy_FWD_DEFINED__
typedef interface IDownloadProxy IDownloadProxy;
#endif 	/* __IDownloadProxy_FWD_DEFINED__ */


#ifndef __IMimeFilter_FWD_DEFINED__
#define __IMimeFilter_FWD_DEFINED__
typedef interface IMimeFilter IMimeFilter;
#endif 	/* __IMimeFilter_FWD_DEFINED__ */


#ifndef __CycloneHelper_FWD_DEFINED__
#define __CycloneHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class CycloneHelper CycloneHelper;
#else
typedef struct CycloneHelper CycloneHelper;
#endif /* __cplusplus */

#endif 	/* __CycloneHelper_FWD_DEFINED__ */


#ifndef __QQRightClick_FWD_DEFINED__
#define __QQRightClick_FWD_DEFINED__

#ifdef __cplusplus
typedef class QQRightClick QQRightClick;
#else
typedef struct QQRightClick QQRightClick;
#endif /* __cplusplus */

#endif 	/* __QQRightClick_FWD_DEFINED__ */


#ifndef __QQDownload_FWD_DEFINED__
#define __QQDownload_FWD_DEFINED__

#ifdef __cplusplus
typedef class QQDownload QQDownload;
#else
typedef struct QQDownload QQDownload;
#endif /* __cplusplus */

#endif 	/* __QQDownload_FWD_DEFINED__ */


#ifndef __DownloadProxy_FWD_DEFINED__
#define __DownloadProxy_FWD_DEFINED__

#ifdef __cplusplus
typedef class DownloadProxy DownloadProxy;
#else
typedef struct DownloadProxy DownloadProxy;
#endif /* __cplusplus */

#endif 	/* __DownloadProxy_FWD_DEFINED__ */


#ifndef __MimeFilter_FWD_DEFINED__
#define __MimeFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class MimeFilter MimeFilter;
#else
typedef struct MimeFilter MimeFilter;
#endif /* __cplusplus */

#endif 	/* __MimeFilter_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __QQIEHELPERLib_LIBRARY_DEFINED__
#define __QQIEHELPERLib_LIBRARY_DEFINED__

/* library QQIEHELPERLib */
/* [custom][custom][helpstring][version][uuid] */ 







EXTERN_C const IID LIBID_QQIEHELPERLib;

#ifndef __IQQBrowserHelperObject_INTERFACE_DEFINED__
#define __IQQBrowserHelperObject_INTERFACE_DEFINED__

/* interface IQQBrowserHelperObject */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IQQBrowserHelperObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D17CF0B4-0870-4426-845D-632CC02CE9E6")
    IQQBrowserHelperObject : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IQQBrowserHelperObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQQBrowserHelperObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQQBrowserHelperObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQQBrowserHelperObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IQQBrowserHelperObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IQQBrowserHelperObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IQQBrowserHelperObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IQQBrowserHelperObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IQQBrowserHelperObjectVtbl;

    interface IQQBrowserHelperObject
    {
        CONST_VTBL struct IQQBrowserHelperObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQQBrowserHelperObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQQBrowserHelperObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQQBrowserHelperObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQQBrowserHelperObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IQQBrowserHelperObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IQQBrowserHelperObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IQQBrowserHelperObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQQBrowserHelperObject_INTERFACE_DEFINED__ */


#ifndef __IQQRightClick_INTERFACE_DEFINED__
#define __IQQRightClick_INTERFACE_DEFINED__

/* interface IQQRightClick */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IQQRightClick;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCE3B5F0-6682-4C85-AE1F-272B0762E7FD")
    IQQRightClick : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendUrl( 
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ BSTR lpStrCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask( 
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendMultiTask( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCmnInfo( 
            /* [in] */ BSTR lpStrCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [retval][out] */ BSTR *bstrVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendUrl2( 
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ BSTR lpStrCookie,
            /* [in] */ unsigned int unP2PRate,
            /* [in] */ unsigned int unCID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask2( 
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ unsigned int unP2PRate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendUrl3( 
            BSTR lpStrUrl,
            BSTR lpStrRef,
            BSTR lpStrRemark,
            BSTR lpStrCookie,
            unsigned int unP2PRate,
            unsigned int unCID,
            BSTR lpFileSize,
            BSTR lpFileHash) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask5( 
            BSTR lpStrUrl,
            BSTR lpUnkown1,
            BSTR lpUnkown2,
            BSTR lpStrRemark,
            BSTR lpStrRef,
            int iUnknown1,
            int iUnknown2,
            int iUnknown3,
            BSTR lpStrCookie,
            BSTR lpUnkown3,
            BSTR lpUnkown4,
            int iUnknown4,
            BSTR lpUnkownn5,
            int iUnknown5) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CommitTasks2( 
            int iUnknown1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendUrl4( 
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ BSTR lpStrCookie,
            /* [in] */ unsigned int unP2PRate,
            /* [in] */ unsigned int unCID,
            /* [in] */ BSTR lpFileSize,
            /* [in] */ BSTR lpFileHash,
            /* [in] */ BSTR lpStrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask3( 
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ unsigned int unP2PRate,
            /* [in] */ BSTR lpStrFileName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQQRightClickVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQQRightClick * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQQRightClick * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQQRightClick * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IQQRightClick * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IQQRightClick * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IQQRightClick * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IQQRightClick * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendUrl )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ BSTR lpStrCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendMultiTask )( 
            IQQRightClick * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddCmnInfo )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IQQRightClick * This,
            /* [retval][out] */ BSTR *bstrVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendUrl2 )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ BSTR lpStrCookie,
            /* [in] */ unsigned int unP2PRate,
            /* [in] */ unsigned int unCID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask2 )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ unsigned int unP2PRate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendUrl3 )( 
            IQQRightClick * This,
            BSTR lpStrUrl,
            BSTR lpStrRef,
            BSTR lpStrRemark,
            BSTR lpStrCookie,
            unsigned int unP2PRate,
            unsigned int unCID,
            BSTR lpFileSize,
            BSTR lpFileHash);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask5 )( 
            IQQRightClick * This,
            BSTR lpStrUrl,
            BSTR lpUnkown1,
            BSTR lpUnkown2,
            BSTR lpStrRemark,
            BSTR lpStrRef,
            int iUnknown1,
            int iUnknown2,
            int iUnknown3,
            BSTR lpStrCookie,
            BSTR lpUnkown3,
            BSTR lpUnkown4,
            int iUnknown4,
            BSTR lpUnkownn5,
            int iUnknown5);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks2 )( 
            IQQRightClick * This,
            int iUnknown1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendUrl4 )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ BSTR lpStrCookie,
            /* [in] */ unsigned int unP2PRate,
            /* [in] */ unsigned int unCID,
            /* [in] */ BSTR lpFileSize,
            /* [in] */ BSTR lpFileHash,
            /* [in] */ BSTR lpStrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask3 )( 
            IQQRightClick * This,
            /* [in] */ BSTR lpStrUrl,
            /* [in] */ BSTR lpStrRef,
            /* [in] */ BSTR lpStrRemark,
            /* [in] */ unsigned int unP2PRate,
            /* [in] */ BSTR lpStrFileName);
        
        END_INTERFACE
    } IQQRightClickVtbl;

    interface IQQRightClick
    {
        CONST_VTBL struct IQQRightClickVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQQRightClick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQQRightClick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQQRightClick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQQRightClick_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IQQRightClick_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IQQRightClick_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IQQRightClick_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IQQRightClick_SendUrl(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie)	\
    ( (This)->lpVtbl -> SendUrl(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie) ) 

#define IQQRightClick_AddTask(This,lpStrUrl,lpStrRef,lpStrRemark)	\
    ( (This)->lpVtbl -> AddTask(This,lpStrUrl,lpStrRef,lpStrRemark) ) 

#define IQQRightClick_SendMultiTask(This)	\
    ( (This)->lpVtbl -> SendMultiTask(This) ) 

#define IQQRightClick_AddCmnInfo(This,lpStrCookie)	\
    ( (This)->lpVtbl -> AddCmnInfo(This,lpStrCookie) ) 

#define IQQRightClick_GetVersion(This,bstrVersion)	\
    ( (This)->lpVtbl -> GetVersion(This,bstrVersion) ) 

#define IQQRightClick_SendUrl2(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie,unP2PRate,unCID)	\
    ( (This)->lpVtbl -> SendUrl2(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie,unP2PRate,unCID) ) 

#define IQQRightClick_AddTask2(This,lpStrUrl,lpStrRef,lpStrRemark,unP2PRate)	\
    ( (This)->lpVtbl -> AddTask2(This,lpStrUrl,lpStrRef,lpStrRemark,unP2PRate) ) 

#define IQQRightClick_SendUrl3(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie,unP2PRate,unCID,lpFileSize,lpFileHash)	\
    ( (This)->lpVtbl -> SendUrl3(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie,unP2PRate,unCID,lpFileSize,lpFileHash) ) 

#define IQQRightClick_AddTask5(This,lpStrUrl,lpUnkown1,lpUnkown2,lpStrRemark,lpStrRef,iUnknown1,iUnknown2,iUnknown3,lpStrCookie,lpUnkown3,lpUnkown4,iUnknown4,lpUnkownn5,iUnknown5)	\
    ( (This)->lpVtbl -> AddTask5(This,lpStrUrl,lpUnkown1,lpUnkown2,lpStrRemark,lpStrRef,iUnknown1,iUnknown2,iUnknown3,lpStrCookie,lpUnkown3,lpUnkown4,iUnknown4,lpUnkownn5,iUnknown5) ) 

#define IQQRightClick_CommitTasks2(This,iUnknown1)	\
    ( (This)->lpVtbl -> CommitTasks2(This,iUnknown1) ) 

#define IQQRightClick_SendUrl4(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie,unP2PRate,unCID,lpFileSize,lpFileHash,lpStrFileName)	\
    ( (This)->lpVtbl -> SendUrl4(This,lpStrUrl,lpStrRef,lpStrRemark,lpStrCookie,unP2PRate,unCID,lpFileSize,lpFileHash,lpStrFileName) ) 

#define IQQRightClick_AddTask3(This,lpStrUrl,lpStrRef,lpStrRemark,unP2PRate,lpStrFileName)	\
    ( (This)->lpVtbl -> AddTask3(This,lpStrUrl,lpStrRef,lpStrRemark,unP2PRate,lpStrFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQQRightClick_INTERFACE_DEFINED__ */


#ifndef __IQQDownload_INTERFACE_DEFINED__
#define __IQQDownload_INTERFACE_DEFINED__

/* interface IQQDownload */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IQQDownload;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B0D928DF-72EA-4EAD-A2EA-DD1B50891692")
    IQQDownload : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall SetLastUrl( 
            /* [in] */ BSTR lpStrUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQQDownloadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQQDownload * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQQDownload * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQQDownload * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetLastUrl )( 
            IQQDownload * This,
            /* [in] */ BSTR lpStrUrl);
        
        END_INTERFACE
    } IQQDownloadVtbl;

    interface IQQDownload
    {
        CONST_VTBL struct IQQDownloadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQQDownload_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQQDownload_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQQDownload_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQQDownload_SetLastUrl(This,lpStrUrl)	\
    ( (This)->lpVtbl -> SetLastUrl(This,lpStrUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQQDownload_INTERFACE_DEFINED__ */


#ifndef __IDownloadProxy_INTERFACE_DEFINED__
#define __IDownloadProxy_INTERFACE_DEFINED__

/* interface IDownloadProxy */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDownloadProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49D93A5F-434E-4F65-A7AC-9A09EA01CAA0")
    IDownloadProxy : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [retval][out] */ BSTR *lpStrUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDownloadProxy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDownloadProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDownloadProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDownloadProxy * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDownloadProxy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDownloadProxy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDownloadProxy * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IDownloadProxy * This,
            /* [retval][out] */ BSTR *lpStrUrl);
        
        END_INTERFACE
    } IDownloadProxyVtbl;

    interface IDownloadProxy
    {
        CONST_VTBL struct IDownloadProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDownloadProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDownloadProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDownloadProxy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDownloadProxy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDownloadProxy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDownloadProxy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDownloadProxy_GetVersion(This,lpStrUrl)	\
    ( (This)->lpVtbl -> GetVersion(This,lpStrUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDownloadProxy_INTERFACE_DEFINED__ */


#ifndef __IMimeFilter_INTERFACE_DEFINED__
#define __IMimeFilter_INTERFACE_DEFINED__

/* interface IMimeFilter */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMimeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2AC5B8B9-BDEE-46F3-A2FD-52FAF898D0D0")
    IMimeFilter : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IMimeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMimeFilter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMimeFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMimeFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMimeFilter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMimeFilter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMimeFilter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMimeFilter * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IMimeFilterVtbl;

    interface IMimeFilter
    {
        CONST_VTBL struct IMimeFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMimeFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMimeFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMimeFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMimeFilter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMimeFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMimeFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMimeFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMimeFilter_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CycloneHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("00000000-12C9-4305-82F9-43058F20E8D2")
CycloneHelper;
#endif

EXTERN_C const CLSID CLSID_QQRightClick;

#ifdef __cplusplus

class DECLSPEC_UUID("4836C333-208E-4BCE-B30B-00B9545B0F6E")
QQRightClick;
#endif

EXTERN_C const CLSID CLSID_QQDownload;

#ifdef __cplusplus

class DECLSPEC_UUID("8AC3BC28-E145-4385-A694-8AAC128ACB16")
QQDownload;
#endif

EXTERN_C const CLSID CLSID_DownloadProxy;

#ifdef __cplusplus

class DECLSPEC_UUID("64BA5C81-E498-432A-9A34-0A60009C4E8A")
DownloadProxy;
#endif

EXTERN_C const CLSID CLSID_MimeFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("00000000-912B-41C8-89AB-896B2CD0D6E6")
MimeFilter;
#endif
#endif /* __QQIEHELPERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


