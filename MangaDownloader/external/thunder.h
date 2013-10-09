

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __thunder_h__
#define __thunder_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAgent_FWD_DEFINED__
#define __IAgent_FWD_DEFINED__
typedef interface IAgent IAgent;
#endif 	/* __IAgent_FWD_DEFINED__ */


#ifndef __IAgent2_FWD_DEFINED__
#define __IAgent2_FWD_DEFINED__
typedef interface IAgent2 IAgent2;
#endif 	/* __IAgent2_FWD_DEFINED__ */


#ifndef __IAgent3_FWD_DEFINED__
#define __IAgent3_FWD_DEFINED__
typedef interface IAgent3 IAgent3;
#endif 	/* __IAgent3_FWD_DEFINED__ */


#ifndef __IAgent4_FWD_DEFINED__
#define __IAgent4_FWD_DEFINED__
typedef interface IAgent4 IAgent4;
#endif 	/* __IAgent4_FWD_DEFINED__ */


#ifndef __IAgent5_FWD_DEFINED__
#define __IAgent5_FWD_DEFINED__
typedef interface IAgent5 IAgent5;
#endif 	/* __IAgent5_FWD_DEFINED__ */


#ifndef __IAgent6_FWD_DEFINED__
#define __IAgent6_FWD_DEFINED__
typedef interface IAgent6 IAgent6;
#endif 	/* __IAgent6_FWD_DEFINED__ */


#ifndef __IXunLeiAgent_FWD_DEFINED__
#define __IXunLeiAgent_FWD_DEFINED__
typedef interface IXunLeiAgent IXunLeiAgent;
#endif 	/* __IXunLeiAgent_FWD_DEFINED__ */


#ifndef __Agent_FWD_DEFINED__
#define __Agent_FWD_DEFINED__

#ifdef __cplusplus
typedef class Agent Agent;
#else
typedef struct Agent Agent;
#endif /* __cplusplus */

#endif 	/* __Agent_FWD_DEFINED__ */


#ifndef __XunLeiAgent_FWD_DEFINED__
#define __XunLeiAgent_FWD_DEFINED__

#ifdef __cplusplus
typedef class XunLeiAgent XunLeiAgent;
#else
typedef struct XunLeiAgent XunLeiAgent;
#endif /* __cplusplus */

#endif 	/* __XunLeiAgent_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __THUNDERAGENTLib_LIBRARY_DEFINED__
#define __THUNDERAGENTLib_LIBRARY_DEFINED__

/* library THUNDERAGENTLib */
/* [custom][custom][custom][helpstring][version][uuid] */ 









EXTERN_C const IID LIBID_THUNDERAGENTLib;

#ifndef __IAgent_INTERFACE_DEFINED__
#define __IAgent_INTERFACE_DEFINED__

/* interface IAgent */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAgent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1622F56A-0C55-464C-B472-377845DEF21D")
    IAgent : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask( 
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName = L"",
            /* [defaultvalue][optional][in] */ BSTR pPath = L"",
            /* [defaultvalue][optional][in] */ BSTR pComments = L"",
            /* [defaultvalue][optional][in] */ BSTR pReferURL = L"",
            /* [defaultvalue][optional][in] */ int nStartMode = -1,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin = 0,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount = -1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CommitTasks( 
            /* [retval][out] */ int *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CancelTasks( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTaskInfo( 
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfoStruct( 
            /* [in] */ int pInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTaskInfoStruct( 
            /* [in] */ int pTaskInfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgent * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAgent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAgent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAgent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAgent * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IAgent * This,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IAgent * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks )( 
            IAgent * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelTasks )( 
            IAgent * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfo )( 
            IAgent * This,
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoStruct )( 
            IAgent * This,
            /* [in] */ int pInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfoStruct )( 
            IAgent * This,
            /* [in] */ int pTaskInfo);
        
        END_INTERFACE
    } IAgentVtbl;

    interface IAgent
    {
        CONST_VTBL struct IAgentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAgent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAgent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAgent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAgent_GetInfo(This,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfoName,ppResult) ) 

#define IAgent_AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount)	\
    ( (This)->lpVtbl -> AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount) ) 

#define IAgent_CommitTasks(This,pResult)	\
    ( (This)->lpVtbl -> CommitTasks(This,pResult) ) 

#define IAgent_CancelTasks(This)	\
    ( (This)->lpVtbl -> CancelTasks(This) ) 

#define IAgent_GetTaskInfo(This,pURL,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetTaskInfo(This,pURL,pInfoName,ppResult) ) 

#define IAgent_GetInfoStruct(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfoStruct(This,pInfo) ) 

#define IAgent_GetTaskInfoStruct(This,pTaskInfo)	\
    ( (This)->lpVtbl -> GetTaskInfoStruct(This,pTaskInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgent_INTERFACE_DEFINED__ */


#ifndef __IAgent2_INTERFACE_DEFINED__
#define __IAgent2_INTERFACE_DEFINED__

/* interface IAgent2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAgent2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ADEFB0D-0FFA-4470-8AB0-B921080F0642")
    IAgent2 : public IAgent
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask2( 
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName = L"",
            /* [defaultvalue][optional][in] */ BSTR pPath = L"",
            /* [defaultvalue][optional][in] */ BSTR pComments = L"",
            /* [defaultvalue][optional][in] */ BSTR pReferURL = L"",
            /* [defaultvalue][optional][in] */ int nStartMode = -1,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin = 0,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount = -1,
            /* [defaultvalue][optional][in] */ BSTR pCookie = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CommitTasks2( 
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgent2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgent2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgent2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgent2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAgent2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAgent2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAgent2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAgent2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IAgent2 * This,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IAgent2 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks )( 
            IAgent2 * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelTasks )( 
            IAgent2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfo )( 
            IAgent2 * This,
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoStruct )( 
            IAgent2 * This,
            /* [in] */ int pInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfoStruct )( 
            IAgent2 * This,
            /* [in] */ int pTaskInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask2 )( 
            IAgent2 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks2 )( 
            IAgent2 * This,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        END_INTERFACE
    } IAgent2Vtbl;

    interface IAgent2
    {
        CONST_VTBL struct IAgent2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgent2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgent2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgent2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgent2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAgent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAgent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAgent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAgent2_GetInfo(This,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfoName,ppResult) ) 

#define IAgent2_AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount)	\
    ( (This)->lpVtbl -> AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount) ) 

#define IAgent2_CommitTasks(This,pResult)	\
    ( (This)->lpVtbl -> CommitTasks(This,pResult) ) 

#define IAgent2_CancelTasks(This)	\
    ( (This)->lpVtbl -> CancelTasks(This) ) 

#define IAgent2_GetTaskInfo(This,pURL,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetTaskInfo(This,pURL,pInfoName,ppResult) ) 

#define IAgent2_GetInfoStruct(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfoStruct(This,pInfo) ) 

#define IAgent2_GetTaskInfoStruct(This,pTaskInfo)	\
    ( (This)->lpVtbl -> GetTaskInfoStruct(This,pTaskInfo) ) 


#define IAgent2_AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie)	\
    ( (This)->lpVtbl -> AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie) ) 

#define IAgent2_CommitTasks2(This,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks2(This,nIsAsync,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgent2_INTERFACE_DEFINED__ */


#ifndef __IAgent3_INTERFACE_DEFINED__
#define __IAgent3_INTERFACE_DEFINED__

/* interface IAgent3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAgent3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18243D84-9FE5-4977-9247-1AE41355C5C3")
    IAgent3 : public IAgent2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask3( 
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName = L"",
            /* [defaultvalue][optional][in] */ BSTR pPath = L"",
            /* [defaultvalue][optional][in] */ BSTR pComments = L"",
            /* [defaultvalue][optional][in] */ BSTR pReferURL = L"",
            /* [defaultvalue][optional][in] */ int nStartMode = -1,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin = 0,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount = -1,
            /* [defaultvalue][optional][in] */ BSTR pCookie = L"",
            /* [defaultvalue][optional][in] */ BSTR pCID = L"") = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgent3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgent3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgent3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgent3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAgent3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAgent3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAgent3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAgent3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IAgent3 * This,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IAgent3 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks )( 
            IAgent3 * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelTasks )( 
            IAgent3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfo )( 
            IAgent3 * This,
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoStruct )( 
            IAgent3 * This,
            /* [in] */ int pInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfoStruct )( 
            IAgent3 * This,
            /* [in] */ int pTaskInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask2 )( 
            IAgent3 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks2 )( 
            IAgent3 * This,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask3 )( 
            IAgent3 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID);
        
        END_INTERFACE
    } IAgent3Vtbl;

    interface IAgent3
    {
        CONST_VTBL struct IAgent3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgent3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgent3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgent3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgent3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAgent3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAgent3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAgent3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAgent3_GetInfo(This,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfoName,ppResult) ) 

#define IAgent3_AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount)	\
    ( (This)->lpVtbl -> AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount) ) 

#define IAgent3_CommitTasks(This,pResult)	\
    ( (This)->lpVtbl -> CommitTasks(This,pResult) ) 

#define IAgent3_CancelTasks(This)	\
    ( (This)->lpVtbl -> CancelTasks(This) ) 

#define IAgent3_GetTaskInfo(This,pURL,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetTaskInfo(This,pURL,pInfoName,ppResult) ) 

#define IAgent3_GetInfoStruct(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfoStruct(This,pInfo) ) 

#define IAgent3_GetTaskInfoStruct(This,pTaskInfo)	\
    ( (This)->lpVtbl -> GetTaskInfoStruct(This,pTaskInfo) ) 


#define IAgent3_AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie)	\
    ( (This)->lpVtbl -> AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie) ) 

#define IAgent3_CommitTasks2(This,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks2(This,nIsAsync,pResult) ) 


#define IAgent3_AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID)	\
    ( (This)->lpVtbl -> AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgent3_INTERFACE_DEFINED__ */


#ifndef __IAgent4_INTERFACE_DEFINED__
#define __IAgent4_INTERFACE_DEFINED__

/* interface IAgent4 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAgent4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3830C5B-62EA-48EF-A7CB-5B3944CAE12F")
    IAgent4 : public IAgent3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask4( 
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName = L"",
            /* [defaultvalue][optional][in] */ BSTR pPath = L"",
            /* [defaultvalue][optional][in] */ BSTR pComments = L"",
            /* [defaultvalue][optional][in] */ BSTR pReferURL = L"",
            /* [defaultvalue][optional][in] */ int nStartMode = -1,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin = 0,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount = -1,
            /* [defaultvalue][optional][in] */ BSTR pCookie = L"",
            /* [defaultvalue][optional][in] */ BSTR pCID = L"",
            /* [defaultvalue][optional][in] */ BSTR pStatURL = L"") = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgent4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgent4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgent4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgent4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAgent4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAgent4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAgent4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAgent4 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IAgent4 * This,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IAgent4 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks )( 
            IAgent4 * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelTasks )( 
            IAgent4 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfo )( 
            IAgent4 * This,
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoStruct )( 
            IAgent4 * This,
            /* [in] */ int pInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfoStruct )( 
            IAgent4 * This,
            /* [in] */ int pTaskInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask2 )( 
            IAgent4 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks2 )( 
            IAgent4 * This,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask3 )( 
            IAgent4 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask4 )( 
            IAgent4 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID,
            /* [defaultvalue][optional][in] */ BSTR pStatURL);
        
        END_INTERFACE
    } IAgent4Vtbl;

    interface IAgent4
    {
        CONST_VTBL struct IAgent4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgent4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgent4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgent4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgent4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAgent4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAgent4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAgent4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAgent4_GetInfo(This,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfoName,ppResult) ) 

#define IAgent4_AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount)	\
    ( (This)->lpVtbl -> AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount) ) 

#define IAgent4_CommitTasks(This,pResult)	\
    ( (This)->lpVtbl -> CommitTasks(This,pResult) ) 

#define IAgent4_CancelTasks(This)	\
    ( (This)->lpVtbl -> CancelTasks(This) ) 

#define IAgent4_GetTaskInfo(This,pURL,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetTaskInfo(This,pURL,pInfoName,ppResult) ) 

#define IAgent4_GetInfoStruct(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfoStruct(This,pInfo) ) 

#define IAgent4_GetTaskInfoStruct(This,pTaskInfo)	\
    ( (This)->lpVtbl -> GetTaskInfoStruct(This,pTaskInfo) ) 


#define IAgent4_AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie)	\
    ( (This)->lpVtbl -> AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie) ) 

#define IAgent4_CommitTasks2(This,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks2(This,nIsAsync,pResult) ) 


#define IAgent4_AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID)	\
    ( (This)->lpVtbl -> AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID) ) 


#define IAgent4_AddTask4(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL)	\
    ( (This)->lpVtbl -> AddTask4(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgent4_INTERFACE_DEFINED__ */


#ifndef __IAgent5_INTERFACE_DEFINED__
#define __IAgent5_INTERFACE_DEFINED__

/* interface IAgent5 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAgent5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80BB764D-348B-48EA-9F0F-D9458E0EE186")
    IAgent5 : public IAgent4
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTask5( 
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName = L"",
            /* [defaultvalue][optional][in] */ BSTR pPath = L"",
            /* [defaultvalue][optional][in] */ BSTR pComments = L"",
            /* [defaultvalue][optional][in] */ BSTR pReferURL = L"",
            /* [defaultvalue][optional][in] */ int nStartMode = -1,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin = 0,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount = -1,
            /* [defaultvalue][optional][in] */ BSTR pCookie = L"",
            /* [defaultvalue][optional][in] */ BSTR pCID = L"",
            /* [defaultvalue][optional][in] */ BSTR pStatURL = L"",
            /* [defaultvalue][optional][in] */ int nCallType = -1,
            /* [defaultvalue][optional][in] */ BSTR pGCID = L"",
            /* [defaultvalue][optional][in] */ int nFileSize = -1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CommitTasks3( 
            /* [in] */ int nThunderType,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgent5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgent5 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgent5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgent5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAgent5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAgent5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAgent5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAgent5 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IAgent5 * This,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IAgent5 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks )( 
            IAgent5 * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelTasks )( 
            IAgent5 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfo )( 
            IAgent5 * This,
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoStruct )( 
            IAgent5 * This,
            /* [in] */ int pInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfoStruct )( 
            IAgent5 * This,
            /* [in] */ int pTaskInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask2 )( 
            IAgent5 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks2 )( 
            IAgent5 * This,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask3 )( 
            IAgent5 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask4 )( 
            IAgent5 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID,
            /* [defaultvalue][optional][in] */ BSTR pStatURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask5 )( 
            IAgent5 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID,
            /* [defaultvalue][optional][in] */ BSTR pStatURL,
            /* [defaultvalue][optional][in] */ int nCallType,
            /* [defaultvalue][optional][in] */ BSTR pGCID,
            /* [defaultvalue][optional][in] */ int nFileSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks3 )( 
            IAgent5 * This,
            /* [in] */ int nThunderType,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        END_INTERFACE
    } IAgent5Vtbl;

    interface IAgent5
    {
        CONST_VTBL struct IAgent5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgent5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgent5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgent5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgent5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAgent5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAgent5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAgent5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAgent5_GetInfo(This,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfoName,ppResult) ) 

#define IAgent5_AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount)	\
    ( (This)->lpVtbl -> AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount) ) 

#define IAgent5_CommitTasks(This,pResult)	\
    ( (This)->lpVtbl -> CommitTasks(This,pResult) ) 

#define IAgent5_CancelTasks(This)	\
    ( (This)->lpVtbl -> CancelTasks(This) ) 

#define IAgent5_GetTaskInfo(This,pURL,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetTaskInfo(This,pURL,pInfoName,ppResult) ) 

#define IAgent5_GetInfoStruct(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfoStruct(This,pInfo) ) 

#define IAgent5_GetTaskInfoStruct(This,pTaskInfo)	\
    ( (This)->lpVtbl -> GetTaskInfoStruct(This,pTaskInfo) ) 


#define IAgent5_AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie)	\
    ( (This)->lpVtbl -> AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie) ) 

#define IAgent5_CommitTasks2(This,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks2(This,nIsAsync,pResult) ) 


#define IAgent5_AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID)	\
    ( (This)->lpVtbl -> AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID) ) 


#define IAgent5_AddTask4(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL)	\
    ( (This)->lpVtbl -> AddTask4(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL) ) 


#define IAgent5_AddTask5(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL,nCallType,pGCID,nFileSize)	\
    ( (This)->lpVtbl -> AddTask5(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL,nCallType,pGCID,nFileSize) ) 

#define IAgent5_CommitTasks3(This,nThunderType,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks3(This,nThunderType,nIsAsync,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgent5_INTERFACE_DEFINED__ */


#ifndef __IAgent6_INTERFACE_DEFINED__
#define __IAgent6_INTERFACE_DEFINED__

/* interface IAgent6 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAgent6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6BEC8438-4AEB-4EE9-9385-3C9F0F11F47D")
    IAgent6 : public IAgent5
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConfirmRectMode( 
            /* [retval][out] */ int *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTaskInRect( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAgent6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgent6 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgent6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgent6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAgent6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAgent6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAgent6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAgent6 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IAgent6 * This,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IAgent6 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks )( 
            IAgent6 * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelTasks )( 
            IAgent6 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfo )( 
            IAgent6 * This,
            /* [in] */ BSTR pURL,
            /* [in] */ BSTR pInfoName,
            /* [retval][out] */ BSTR *ppResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfoStruct )( 
            IAgent6 * This,
            /* [in] */ int pInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTaskInfoStruct )( 
            IAgent6 * This,
            /* [in] */ int pTaskInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask2 )( 
            IAgent6 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks2 )( 
            IAgent6 * This,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask3 )( 
            IAgent6 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask4 )( 
            IAgent6 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID,
            /* [defaultvalue][optional][in] */ BSTR pStatURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTask5 )( 
            IAgent6 * This,
            /* [in] */ BSTR pURL,
            /* [defaultvalue][optional][in] */ BSTR pFileName,
            /* [defaultvalue][optional][in] */ BSTR pPath,
            /* [defaultvalue][optional][in] */ BSTR pComments,
            /* [defaultvalue][optional][in] */ BSTR pReferURL,
            /* [defaultvalue][optional][in] */ int nStartMode,
            /* [defaultvalue][optional][in] */ int nOnlyFromOrigin,
            /* [defaultvalue][optional][in] */ int nOriginThreadCount,
            /* [defaultvalue][optional][in] */ BSTR pCookie,
            /* [defaultvalue][optional][in] */ BSTR pCID,
            /* [defaultvalue][optional][in] */ BSTR pStatURL,
            /* [defaultvalue][optional][in] */ int nCallType,
            /* [defaultvalue][optional][in] */ BSTR pGCID,
            /* [defaultvalue][optional][in] */ int nFileSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitTasks3 )( 
            IAgent6 * This,
            /* [in] */ int nThunderType,
            /* [in] */ int nIsAsync,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConfirmRectMode )( 
            IAgent6 * This,
            /* [retval][out] */ int *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTaskInRect )( 
            IAgent6 * This);
        
        END_INTERFACE
    } IAgent6Vtbl;

    interface IAgent6
    {
        CONST_VTBL struct IAgent6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgent6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgent6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgent6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgent6_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAgent6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAgent6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAgent6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAgent6_GetInfo(This,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetInfo(This,pInfoName,ppResult) ) 

#define IAgent6_AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount)	\
    ( (This)->lpVtbl -> AddTask(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount) ) 

#define IAgent6_CommitTasks(This,pResult)	\
    ( (This)->lpVtbl -> CommitTasks(This,pResult) ) 

#define IAgent6_CancelTasks(This)	\
    ( (This)->lpVtbl -> CancelTasks(This) ) 

#define IAgent6_GetTaskInfo(This,pURL,pInfoName,ppResult)	\
    ( (This)->lpVtbl -> GetTaskInfo(This,pURL,pInfoName,ppResult) ) 

#define IAgent6_GetInfoStruct(This,pInfo)	\
    ( (This)->lpVtbl -> GetInfoStruct(This,pInfo) ) 

#define IAgent6_GetTaskInfoStruct(This,pTaskInfo)	\
    ( (This)->lpVtbl -> GetTaskInfoStruct(This,pTaskInfo) ) 


#define IAgent6_AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie)	\
    ( (This)->lpVtbl -> AddTask2(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie) ) 

#define IAgent6_CommitTasks2(This,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks2(This,nIsAsync,pResult) ) 


#define IAgent6_AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID)	\
    ( (This)->lpVtbl -> AddTask3(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID) ) 


#define IAgent6_AddTask4(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL)	\
    ( (This)->lpVtbl -> AddTask4(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL) ) 


#define IAgent6_AddTask5(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL,nCallType,pGCID,nFileSize)	\
    ( (This)->lpVtbl -> AddTask5(This,pURL,pFileName,pPath,pComments,pReferURL,nStartMode,nOnlyFromOrigin,nOriginThreadCount,pCookie,pCID,pStatURL,nCallType,pGCID,nFileSize) ) 

#define IAgent6_CommitTasks3(This,nThunderType,nIsAsync,pResult)	\
    ( (This)->lpVtbl -> CommitTasks3(This,nThunderType,nIsAsync,pResult) ) 


#define IAgent6_ConfirmRectMode(This,pResult)	\
    ( (This)->lpVtbl -> ConfirmRectMode(This,pResult) ) 

#define IAgent6_AddTaskInRect(This)	\
    ( (This)->lpVtbl -> AddTaskInRect(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgent6_INTERFACE_DEFINED__ */


#ifndef __IXunLeiAgent_INTERFACE_DEFINED__
#define __IXunLeiAgent_INTERFACE_DEFINED__

/* interface IXunLeiAgent */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXunLeiAgent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E9DE0FB-FFA0-4954-A514-1D7712559E35")
    IXunLeiAgent : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IXunLeiAgentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXunLeiAgent * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXunLeiAgent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXunLeiAgent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXunLeiAgent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXunLeiAgent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXunLeiAgent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXunLeiAgent * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IXunLeiAgentVtbl;

    interface IXunLeiAgent
    {
        CONST_VTBL struct IXunLeiAgentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXunLeiAgent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXunLeiAgent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXunLeiAgent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXunLeiAgent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXunLeiAgent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXunLeiAgent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXunLeiAgent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXunLeiAgent_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Agent;

#ifdef __cplusplus

class DECLSPEC_UUID("485463B7-8FB2-4B3B-B29B-8B919B0EACCE")
Agent;
#endif

EXTERN_C const CLSID CLSID_XunLeiAgent;

#ifdef __cplusplus

class DECLSPEC_UUID("E1A931EB-13B6-40B9-BEE9-3B98CC8A8DF8")
XunLeiAgent;
#endif
#endif /* __THUNDERAGENTLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


