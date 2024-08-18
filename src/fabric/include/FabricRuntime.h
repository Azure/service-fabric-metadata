

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __FabricRuntime_h__
#define __FabricRuntime_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IFabricRuntime_FWD_DEFINED__
#define __IFabricRuntime_FWD_DEFINED__
typedef interface IFabricRuntime IFabricRuntime;

#endif 	/* __IFabricRuntime_FWD_DEFINED__ */


#ifndef __IFabricProcessExitHandler_FWD_DEFINED__
#define __IFabricProcessExitHandler_FWD_DEFINED__
typedef interface IFabricProcessExitHandler IFabricProcessExitHandler;

#endif 	/* __IFabricProcessExitHandler_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceFactory_FWD_DEFINED__
#define __IFabricStatelessServiceFactory_FWD_DEFINED__
typedef interface IFabricStatelessServiceFactory IFabricStatelessServiceFactory;

#endif 	/* __IFabricStatelessServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceInstance_FWD_DEFINED__
#define __IFabricStatelessServiceInstance_FWD_DEFINED__
typedef interface IFabricStatelessServiceInstance IFabricStatelessServiceInstance;

#endif 	/* __IFabricStatelessServiceInstance_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition_FWD_DEFINED__
#define __IFabricStatelessServicePartition_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition IFabricStatelessServicePartition;

#endif 	/* __IFabricStatelessServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition1_FWD_DEFINED__
#define __IFabricStatelessServicePartition1_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition1 IFabricStatelessServicePartition1;

#endif 	/* __IFabricStatelessServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition2_FWD_DEFINED__
#define __IFabricStatelessServicePartition2_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition2 IFabricStatelessServicePartition2;

#endif 	/* __IFabricStatelessServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition3_FWD_DEFINED__
#define __IFabricStatelessServicePartition3_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition3 IFabricStatelessServicePartition3;

#endif 	/* __IFabricStatelessServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceFactory_FWD_DEFINED__
#define __IFabricStatefulServiceFactory_FWD_DEFINED__
typedef interface IFabricStatefulServiceFactory IFabricStatefulServiceFactory;

#endif 	/* __IFabricStatefulServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceReplica_FWD_DEFINED__
#define __IFabricStatefulServiceReplica_FWD_DEFINED__
typedef interface IFabricStatefulServiceReplica IFabricStatefulServiceReplica;

#endif 	/* __IFabricStatefulServiceReplica_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition_FWD_DEFINED__
#define __IFabricStatefulServicePartition_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition IFabricStatefulServicePartition;

#endif 	/* __IFabricStatefulServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition1_FWD_DEFINED__
#define __IFabricStatefulServicePartition1_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition1 IFabricStatefulServicePartition1;

#endif 	/* __IFabricStatefulServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition2_FWD_DEFINED__
#define __IFabricStatefulServicePartition2_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition2 IFabricStatefulServicePartition2;

#endif 	/* __IFabricStatefulServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition3_FWD_DEFINED__
#define __IFabricStatefulServicePartition3_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition3 IFabricStatefulServicePartition3;

#endif 	/* __IFabricStatefulServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStateProvider_FWD_DEFINED__
#define __IFabricStateProvider_FWD_DEFINED__
typedef interface IFabricStateProvider IFabricStateProvider;

#endif 	/* __IFabricStateProvider_FWD_DEFINED__ */


#ifndef __IFabricStateReplicator_FWD_DEFINED__
#define __IFabricStateReplicator_FWD_DEFINED__
typedef interface IFabricStateReplicator IFabricStateReplicator;

#endif 	/* __IFabricStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricReplicator_FWD_DEFINED__
#define __IFabricReplicator_FWD_DEFINED__
typedef interface IFabricReplicator IFabricReplicator;

#endif 	/* __IFabricReplicator_FWD_DEFINED__ */


#ifndef __IFabricPrimaryReplicator_FWD_DEFINED__
#define __IFabricPrimaryReplicator_FWD_DEFINED__
typedef interface IFabricPrimaryReplicator IFabricPrimaryReplicator;

#endif 	/* __IFabricPrimaryReplicator_FWD_DEFINED__ */


#ifndef __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
#define __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
typedef interface IFabricReplicatorCatchupSpecificQuorum IFabricReplicatorCatchupSpecificQuorum;

#endif 	/* __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__ */


#ifndef __IFabricOperation_FWD_DEFINED__
#define __IFabricOperation_FWD_DEFINED__
typedef interface IFabricOperation IFabricOperation;

#endif 	/* __IFabricOperation_FWD_DEFINED__ */


#ifndef __IFabricOperationData_FWD_DEFINED__
#define __IFabricOperationData_FWD_DEFINED__
typedef interface IFabricOperationData IFabricOperationData;

#endif 	/* __IFabricOperationData_FWD_DEFINED__ */


#ifndef __IFabricOperationStream_FWD_DEFINED__
#define __IFabricOperationStream_FWD_DEFINED__
typedef interface IFabricOperationStream IFabricOperationStream;

#endif 	/* __IFabricOperationStream_FWD_DEFINED__ */


#ifndef __IFabricOperationStream2_FWD_DEFINED__
#define __IFabricOperationStream2_FWD_DEFINED__
typedef interface IFabricOperationStream2 IFabricOperationStream2;

#endif 	/* __IFabricOperationStream2_FWD_DEFINED__ */


#ifndef __IFabricOperationDataStream_FWD_DEFINED__
#define __IFabricOperationDataStream_FWD_DEFINED__
typedef interface IFabricOperationDataStream IFabricOperationDataStream;

#endif 	/* __IFabricOperationDataStream_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateProvider_FWD_DEFINED__
#define __IFabricAtomicGroupStateProvider_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateProvider IFabricAtomicGroupStateProvider;

#endif 	/* __IFabricAtomicGroupStateProvider_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
#define __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateReplicator IFabricAtomicGroupStateReplicator;

#endif 	/* __IFabricAtomicGroupStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactory_FWD_DEFINED__
#define __IFabricServiceGroupFactory_FWD_DEFINED__
typedef interface IFabricServiceGroupFactory IFabricServiceGroupFactory;

#endif 	/* __IFabricServiceGroupFactory_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
#define __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
typedef interface IFabricServiceGroupFactoryBuilder IFabricServiceGroupFactoryBuilder;

#endif 	/* __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupPartition_FWD_DEFINED__
#define __IFabricServiceGroupPartition_FWD_DEFINED__
typedef interface IFabricServiceGroupPartition IFabricServiceGroupPartition;

#endif 	/* __IFabricServiceGroupPartition_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext_FWD_DEFINED__
#define __IFabricCodePackageActivationContext_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext IFabricCodePackageActivationContext;

#endif 	/* __IFabricCodePackageActivationContext_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext2_FWD_DEFINED__
#define __IFabricCodePackageActivationContext2_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext2 IFabricCodePackageActivationContext2;

#endif 	/* __IFabricCodePackageActivationContext2_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext3_FWD_DEFINED__
#define __IFabricCodePackageActivationContext3_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext3 IFabricCodePackageActivationContext3;

#endif 	/* __IFabricCodePackageActivationContext3_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext4_FWD_DEFINED__
#define __IFabricCodePackageActivationContext4_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext4 IFabricCodePackageActivationContext4;

#endif 	/* __IFabricCodePackageActivationContext4_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext5_FWD_DEFINED__
#define __IFabricCodePackageActivationContext5_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext5 IFabricCodePackageActivationContext5;

#endif 	/* __IFabricCodePackageActivationContext5_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext6_FWD_DEFINED__
#define __IFabricCodePackageActivationContext6_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext6 IFabricCodePackageActivationContext6;

#endif 	/* __IFabricCodePackageActivationContext6_FWD_DEFINED__ */


#ifndef __IFabricCodePackage_FWD_DEFINED__
#define __IFabricCodePackage_FWD_DEFINED__
typedef interface IFabricCodePackage IFabricCodePackage;

#endif 	/* __IFabricCodePackage_FWD_DEFINED__ */


#ifndef __IFabricCodePackage2_FWD_DEFINED__
#define __IFabricCodePackage2_FWD_DEFINED__
typedef interface IFabricCodePackage2 IFabricCodePackage2;

#endif 	/* __IFabricCodePackage2_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage_FWD_DEFINED__
#define __IFabricConfigurationPackage_FWD_DEFINED__
typedef interface IFabricConfigurationPackage IFabricConfigurationPackage;

#endif 	/* __IFabricConfigurationPackage_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage2_FWD_DEFINED__
#define __IFabricConfigurationPackage2_FWD_DEFINED__
typedef interface IFabricConfigurationPackage2 IFabricConfigurationPackage2;

#endif 	/* __IFabricConfigurationPackage2_FWD_DEFINED__ */


#ifndef __IFabricDataPackage_FWD_DEFINED__
#define __IFabricDataPackage_FWD_DEFINED__
typedef interface IFabricDataPackage IFabricDataPackage;

#endif 	/* __IFabricDataPackage_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
#define __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricConfigurationPackageChangeHandler IFabricConfigurationPackageChangeHandler;

#endif 	/* __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricDataPackageChangeHandler_FWD_DEFINED__
#define __IFabricDataPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricDataPackageChangeHandler IFabricDataPackageChangeHandler;

#endif 	/* __IFabricDataPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricTransactionBase_FWD_DEFINED__
#define __IFabricTransactionBase_FWD_DEFINED__
typedef interface IFabricTransactionBase IFabricTransactionBase;

#endif 	/* __IFabricTransactionBase_FWD_DEFINED__ */


#ifndef __IFabricTransaction_FWD_DEFINED__
#define __IFabricTransaction_FWD_DEFINED__
typedef interface IFabricTransaction IFabricTransaction;

#endif 	/* __IFabricTransaction_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica IFabricKeyValueStoreReplica;

#endif 	/* __IFabricKeyValueStoreReplica_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica2_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica2 IFabricKeyValueStoreReplica2;

#endif 	/* __IFabricKeyValueStoreReplica2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica3_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica3_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica3 IFabricKeyValueStoreReplica3;

#endif 	/* __IFabricKeyValueStoreReplica3_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemEnumerator IFabricKeyValueStoreItemEnumerator;

#endif 	/* __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataEnumerator IFabricKeyValueStoreItemMetadataEnumerator;

#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemResult IFabricKeyValueStoreItemResult;

#endif 	/* __IFabricKeyValueStoreItemResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataResult IFabricKeyValueStoreItemMetadataResult;

#endif 	/* __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotification_FWD_DEFINED__
#define __IFabricKeyValueStoreNotification_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotification IFabricKeyValueStoreNotification;

#endif 	/* __IFabricKeyValueStoreNotification_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotificationEnumerator IFabricKeyValueStoreNotificationEnumerator;

#endif 	/* __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult_FWD_DEFINED__
#define __IFabricNodeContextResult_FWD_DEFINED__
typedef interface IFabricNodeContextResult IFabricNodeContextResult;

#endif 	/* __IFabricNodeContextResult_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult2_FWD_DEFINED__
#define __IFabricNodeContextResult2_FWD_DEFINED__
typedef interface IFabricNodeContextResult2 IFabricNodeContextResult2;

#endif 	/* __IFabricNodeContextResult2_FWD_DEFINED__ */


#ifndef __IFabricReplicatorSettingsResult_FWD_DEFINED__
#define __IFabricReplicatorSettingsResult_FWD_DEFINED__
typedef interface IFabricReplicatorSettingsResult IFabricReplicatorSettingsResult;

#endif 	/* __IFabricReplicatorSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
#define __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
typedef interface IFabricEseLocalStoreSettingsResult IFabricEseLocalStoreSettingsResult;

#endif 	/* __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricSecurityCredentialsResult_FWD_DEFINED__
#define __IFabricSecurityCredentialsResult_FWD_DEFINED__
typedef interface IFabricSecurityCredentialsResult IFabricSecurityCredentialsResult;

#endif 	/* __IFabricSecurityCredentialsResult_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivator_FWD_DEFINED__
#define __IFabricCodePackageActivator_FWD_DEFINED__
typedef interface IFabricCodePackageActivator IFabricCodePackageActivator;

#endif 	/* __IFabricCodePackageActivator_FWD_DEFINED__ */


#ifndef __IFabricCodePackageEventHandler_FWD_DEFINED__
#define __IFabricCodePackageEventHandler_FWD_DEFINED__
typedef interface IFabricCodePackageEventHandler IFabricCodePackageEventHandler;

#endif 	/* __IFabricCodePackageEventHandler_FWD_DEFINED__ */


#ifndef __FabricRuntime_FWD_DEFINED__
#define __FabricRuntime_FWD_DEFINED__

#ifdef __cplusplus
typedef class FabricRuntime FabricRuntime;
#else
typedef struct FabricRuntime FabricRuntime;
#endif /* __cplusplus */

#endif 	/* __FabricRuntime_FWD_DEFINED__ */


#ifndef __IFabricRuntime_FWD_DEFINED__
#define __IFabricRuntime_FWD_DEFINED__
typedef interface IFabricRuntime IFabricRuntime;

#endif 	/* __IFabricRuntime_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceFactory_FWD_DEFINED__
#define __IFabricStatelessServiceFactory_FWD_DEFINED__
typedef interface IFabricStatelessServiceFactory IFabricStatelessServiceFactory;

#endif 	/* __IFabricStatelessServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceInstance_FWD_DEFINED__
#define __IFabricStatelessServiceInstance_FWD_DEFINED__
typedef interface IFabricStatelessServiceInstance IFabricStatelessServiceInstance;

#endif 	/* __IFabricStatelessServiceInstance_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition_FWD_DEFINED__
#define __IFabricStatelessServicePartition_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition IFabricStatelessServicePartition;

#endif 	/* __IFabricStatelessServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition1_FWD_DEFINED__
#define __IFabricStatelessServicePartition1_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition1 IFabricStatelessServicePartition1;

#endif 	/* __IFabricStatelessServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition2_FWD_DEFINED__
#define __IFabricStatelessServicePartition2_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition2 IFabricStatelessServicePartition2;

#endif 	/* __IFabricStatelessServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition3_FWD_DEFINED__
#define __IFabricStatelessServicePartition3_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition3 IFabricStatelessServicePartition3;

#endif 	/* __IFabricStatelessServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceFactory_FWD_DEFINED__
#define __IFabricStatefulServiceFactory_FWD_DEFINED__
typedef interface IFabricStatefulServiceFactory IFabricStatefulServiceFactory;

#endif 	/* __IFabricStatefulServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceReplica_FWD_DEFINED__
#define __IFabricStatefulServiceReplica_FWD_DEFINED__
typedef interface IFabricStatefulServiceReplica IFabricStatefulServiceReplica;

#endif 	/* __IFabricStatefulServiceReplica_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition_FWD_DEFINED__
#define __IFabricStatefulServicePartition_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition IFabricStatefulServicePartition;

#endif 	/* __IFabricStatefulServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition1_FWD_DEFINED__
#define __IFabricStatefulServicePartition1_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition1 IFabricStatefulServicePartition1;

#endif 	/* __IFabricStatefulServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition2_FWD_DEFINED__
#define __IFabricStatefulServicePartition2_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition2 IFabricStatefulServicePartition2;

#endif 	/* __IFabricStatefulServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition3_FWD_DEFINED__
#define __IFabricStatefulServicePartition3_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition3 IFabricStatefulServicePartition3;

#endif 	/* __IFabricStatefulServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStateReplicator_FWD_DEFINED__
#define __IFabricStateReplicator_FWD_DEFINED__
typedef interface IFabricStateReplicator IFabricStateReplicator;

#endif 	/* __IFabricStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricStateReplicator2_FWD_DEFINED__
#define __IFabricStateReplicator2_FWD_DEFINED__
typedef interface IFabricStateReplicator2 IFabricStateReplicator2;

#endif 	/* __IFabricStateReplicator2_FWD_DEFINED__ */


#ifndef __IFabricStateProvider_FWD_DEFINED__
#define __IFabricStateProvider_FWD_DEFINED__
typedef interface IFabricStateProvider IFabricStateProvider;

#endif 	/* __IFabricStateProvider_FWD_DEFINED__ */


#ifndef __IFabricOperation_FWD_DEFINED__
#define __IFabricOperation_FWD_DEFINED__
typedef interface IFabricOperation IFabricOperation;

#endif 	/* __IFabricOperation_FWD_DEFINED__ */


#ifndef __IFabricOperationData_FWD_DEFINED__
#define __IFabricOperationData_FWD_DEFINED__
typedef interface IFabricOperationData IFabricOperationData;

#endif 	/* __IFabricOperationData_FWD_DEFINED__ */


#ifndef __IFabricOperationStream_FWD_DEFINED__
#define __IFabricOperationStream_FWD_DEFINED__
typedef interface IFabricOperationStream IFabricOperationStream;

#endif 	/* __IFabricOperationStream_FWD_DEFINED__ */


#ifndef __IFabricOperationStream2_FWD_DEFINED__
#define __IFabricOperationStream2_FWD_DEFINED__
typedef interface IFabricOperationStream2 IFabricOperationStream2;

#endif 	/* __IFabricOperationStream2_FWD_DEFINED__ */


#ifndef __IFabricOperationDataStream_FWD_DEFINED__
#define __IFabricOperationDataStream_FWD_DEFINED__
typedef interface IFabricOperationDataStream IFabricOperationDataStream;

#endif 	/* __IFabricOperationDataStream_FWD_DEFINED__ */


#ifndef __IFabricReplicator_FWD_DEFINED__
#define __IFabricReplicator_FWD_DEFINED__
typedef interface IFabricReplicator IFabricReplicator;

#endif 	/* __IFabricReplicator_FWD_DEFINED__ */


#ifndef __IFabricPrimaryReplicator_FWD_DEFINED__
#define __IFabricPrimaryReplicator_FWD_DEFINED__
typedef interface IFabricPrimaryReplicator IFabricPrimaryReplicator;

#endif 	/* __IFabricPrimaryReplicator_FWD_DEFINED__ */


#ifndef __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
#define __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
typedef interface IFabricReplicatorCatchupSpecificQuorum IFabricReplicatorCatchupSpecificQuorum;

#endif 	/* __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
#define __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateReplicator IFabricAtomicGroupStateReplicator;

#endif 	/* __IFabricAtomicGroupStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateProvider_FWD_DEFINED__
#define __IFabricAtomicGroupStateProvider_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateProvider IFabricAtomicGroupStateProvider;

#endif 	/* __IFabricAtomicGroupStateProvider_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactory_FWD_DEFINED__
#define __IFabricServiceGroupFactory_FWD_DEFINED__
typedef interface IFabricServiceGroupFactory IFabricServiceGroupFactory;

#endif 	/* __IFabricServiceGroupFactory_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
#define __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
typedef interface IFabricServiceGroupFactoryBuilder IFabricServiceGroupFactoryBuilder;

#endif 	/* __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupPartition_FWD_DEFINED__
#define __IFabricServiceGroupPartition_FWD_DEFINED__
typedef interface IFabricServiceGroupPartition IFabricServiceGroupPartition;

#endif 	/* __IFabricServiceGroupPartition_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext_FWD_DEFINED__
#define __IFabricCodePackageActivationContext_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext IFabricCodePackageActivationContext;

#endif 	/* __IFabricCodePackageActivationContext_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext2_FWD_DEFINED__
#define __IFabricCodePackageActivationContext2_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext2 IFabricCodePackageActivationContext2;

#endif 	/* __IFabricCodePackageActivationContext2_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext3_FWD_DEFINED__
#define __IFabricCodePackageActivationContext3_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext3 IFabricCodePackageActivationContext3;

#endif 	/* __IFabricCodePackageActivationContext3_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext4_FWD_DEFINED__
#define __IFabricCodePackageActivationContext4_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext4 IFabricCodePackageActivationContext4;

#endif 	/* __IFabricCodePackageActivationContext4_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext5_FWD_DEFINED__
#define __IFabricCodePackageActivationContext5_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext5 IFabricCodePackageActivationContext5;

#endif 	/* __IFabricCodePackageActivationContext5_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext6_FWD_DEFINED__
#define __IFabricCodePackageActivationContext6_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext6 IFabricCodePackageActivationContext6;

#endif 	/* __IFabricCodePackageActivationContext6_FWD_DEFINED__ */


#ifndef __IFabricCodePackage_FWD_DEFINED__
#define __IFabricCodePackage_FWD_DEFINED__
typedef interface IFabricCodePackage IFabricCodePackage;

#endif 	/* __IFabricCodePackage_FWD_DEFINED__ */


#ifndef __IFabricCodePackage2_FWD_DEFINED__
#define __IFabricCodePackage2_FWD_DEFINED__
typedef interface IFabricCodePackage2 IFabricCodePackage2;

#endif 	/* __IFabricCodePackage2_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage_FWD_DEFINED__
#define __IFabricConfigurationPackage_FWD_DEFINED__
typedef interface IFabricConfigurationPackage IFabricConfigurationPackage;

#endif 	/* __IFabricConfigurationPackage_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage2_FWD_DEFINED__
#define __IFabricConfigurationPackage2_FWD_DEFINED__
typedef interface IFabricConfigurationPackage2 IFabricConfigurationPackage2;

#endif 	/* __IFabricConfigurationPackage2_FWD_DEFINED__ */


#ifndef __IFabricDataPackage_FWD_DEFINED__
#define __IFabricDataPackage_FWD_DEFINED__
typedef interface IFabricDataPackage IFabricDataPackage;

#endif 	/* __IFabricDataPackage_FWD_DEFINED__ */


#ifndef __IFabricCodePackageChangeHandler_FWD_DEFINED__
#define __IFabricCodePackageChangeHandler_FWD_DEFINED__
typedef interface IFabricCodePackageChangeHandler IFabricCodePackageChangeHandler;

#endif 	/* __IFabricCodePackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
#define __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricConfigurationPackageChangeHandler IFabricConfigurationPackageChangeHandler;

#endif 	/* __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricDataPackageChangeHandler_FWD_DEFINED__
#define __IFabricDataPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricDataPackageChangeHandler IFabricDataPackageChangeHandler;

#endif 	/* __IFabricDataPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricProcessExitHandler_FWD_DEFINED__
#define __IFabricProcessExitHandler_FWD_DEFINED__
typedef interface IFabricProcessExitHandler IFabricProcessExitHandler;

#endif 	/* __IFabricProcessExitHandler_FWD_DEFINED__ */


#ifndef __IFabricTransactionBase_FWD_DEFINED__
#define __IFabricTransactionBase_FWD_DEFINED__
typedef interface IFabricTransactionBase IFabricTransactionBase;

#endif 	/* __IFabricTransactionBase_FWD_DEFINED__ */


#ifndef __IFabricTransaction_FWD_DEFINED__
#define __IFabricTransaction_FWD_DEFINED__
typedef interface IFabricTransaction IFabricTransaction;

#endif 	/* __IFabricTransaction_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica IFabricKeyValueStoreReplica;

#endif 	/* __IFabricKeyValueStoreReplica_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica2_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica2 IFabricKeyValueStoreReplica2;

#endif 	/* __IFabricKeyValueStoreReplica2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica3_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica3_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica3 IFabricKeyValueStoreReplica3;

#endif 	/* __IFabricKeyValueStoreReplica3_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica4_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica4_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica4 IFabricKeyValueStoreReplica4;

#endif 	/* __IFabricKeyValueStoreReplica4_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica5_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica5_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica5 IFabricKeyValueStoreReplica5;

#endif 	/* __IFabricKeyValueStoreReplica5_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica6_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica6_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica6 IFabricKeyValueStoreReplica6;

#endif 	/* __IFabricKeyValueStoreReplica6_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreEnumerator IFabricKeyValueStoreEnumerator;

#endif 	/* __IFabricKeyValueStoreEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreEnumerator2 IFabricKeyValueStoreEnumerator2;

#endif 	/* __IFabricKeyValueStoreEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemEnumerator IFabricKeyValueStoreItemEnumerator;

#endif 	/* __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataEnumerator IFabricKeyValueStoreItemMetadataEnumerator;

#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotificationEnumerator IFabricKeyValueStoreNotificationEnumerator;

#endif 	/* __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemEnumerator2 IFabricKeyValueStoreItemEnumerator2;

#endif 	/* __IFabricKeyValueStoreItemEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataEnumerator2 IFabricKeyValueStoreItemMetadataEnumerator2;

#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotificationEnumerator2 IFabricKeyValueStoreNotificationEnumerator2;

#endif 	/* __IFabricKeyValueStoreNotificationEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemResult IFabricKeyValueStoreItemResult;

#endif 	/* __IFabricKeyValueStoreItemResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataResult IFabricKeyValueStoreItemMetadataResult;

#endif 	/* __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotification_FWD_DEFINED__
#define __IFabricKeyValueStoreNotification_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotification IFabricKeyValueStoreNotification;

#endif 	/* __IFabricKeyValueStoreNotification_FWD_DEFINED__ */


#ifndef __IFabricStoreEventHandler_FWD_DEFINED__
#define __IFabricStoreEventHandler_FWD_DEFINED__
typedef interface IFabricStoreEventHandler IFabricStoreEventHandler;

#endif 	/* __IFabricStoreEventHandler_FWD_DEFINED__ */


#ifndef __IFabricStoreEventHandler2_FWD_DEFINED__
#define __IFabricStoreEventHandler2_FWD_DEFINED__
typedef interface IFabricStoreEventHandler2 IFabricStoreEventHandler2;

#endif 	/* __IFabricStoreEventHandler2_FWD_DEFINED__ */


#ifndef __IFabricStorePostBackupHandler_FWD_DEFINED__
#define __IFabricStorePostBackupHandler_FWD_DEFINED__
typedef interface IFabricStorePostBackupHandler IFabricStorePostBackupHandler;

#endif 	/* __IFabricStorePostBackupHandler_FWD_DEFINED__ */


#ifndef __IFabricSecondaryEventHandler_FWD_DEFINED__
#define __IFabricSecondaryEventHandler_FWD_DEFINED__
typedef interface IFabricSecondaryEventHandler IFabricSecondaryEventHandler;

#endif 	/* __IFabricSecondaryEventHandler_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult_FWD_DEFINED__
#define __IFabricNodeContextResult_FWD_DEFINED__
typedef interface IFabricNodeContextResult IFabricNodeContextResult;

#endif 	/* __IFabricNodeContextResult_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult2_FWD_DEFINED__
#define __IFabricNodeContextResult2_FWD_DEFINED__
typedef interface IFabricNodeContextResult2 IFabricNodeContextResult2;

#endif 	/* __IFabricNodeContextResult2_FWD_DEFINED__ */


#ifndef __IFabricReplicatorSettingsResult_FWD_DEFINED__
#define __IFabricReplicatorSettingsResult_FWD_DEFINED__
typedef interface IFabricReplicatorSettingsResult IFabricReplicatorSettingsResult;

#endif 	/* __IFabricReplicatorSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
#define __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
typedef interface IFabricEseLocalStoreSettingsResult IFabricEseLocalStoreSettingsResult;

#endif 	/* __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricSecurityCredentialsResult_FWD_DEFINED__
#define __IFabricSecurityCredentialsResult_FWD_DEFINED__
typedef interface IFabricSecurityCredentialsResult IFabricSecurityCredentialsResult;

#endif 	/* __IFabricSecurityCredentialsResult_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivator_FWD_DEFINED__
#define __IFabricCodePackageActivator_FWD_DEFINED__
typedef interface IFabricCodePackageActivator IFabricCodePackageActivator;

#endif 	/* __IFabricCodePackageActivator_FWD_DEFINED__ */


#ifndef __IFabricCodePackageEventHandler_FWD_DEFINED__
#define __IFabricCodePackageEventHandler_FWD_DEFINED__
typedef interface IFabricCodePackageEventHandler IFabricCodePackageEventHandler;

#endif 	/* __IFabricCodePackageEventHandler_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "FabricTypes.h"
#include "FabricCommon.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_FabricRuntime_0000_0000 */
/* [local] */ 

// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif











































































extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0000_v0_0_s_ifspec;


#ifndef __FabricRuntimeLib_LIBRARY_DEFINED__
#define __FabricRuntimeLib_LIBRARY_DEFINED__

/* library FabricRuntimeLib */
/* [version][helpstring][uuid] */ 


#pragma pack(push, 8)






























































#pragma pack(pop)

EXTERN_C const IID LIBID_FabricRuntimeLib;

#ifndef __IFabricRuntime_INTERFACE_DEFINED__
#define __IFabricRuntime_INTERFACE_DEFINED__

/* interface IFabricRuntime */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricRuntime;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cc53af8e-74cd-11df-ac3e-0024811e3892")
    IFabricRuntime : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterStatelessServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatelessServiceFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterStatelessServiceFactory( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterStatelessServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatelessServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterStatefulServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatefulServiceFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterStatefulServiceFactory( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterStatefulServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatefulServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateServiceGroupFactoryBuilder( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricServiceGroupFactoryBuilder **builder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterServiceGroupFactory( 
            /* [in] */ __RPC__in LPCWSTR groupServiceType,
            /* [in] */ __RPC__in_opt IFabricServiceGroupFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterServiceGroupFactory( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterServiceGroupFactory( 
            /* [in] */ __RPC__in LPCWSTR groupServiceType,
            /* [in] */ __RPC__in_opt IFabricServiceGroupFactory *factory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricRuntimeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricRuntime * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricRuntime * This);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, BeginRegisterStatelessServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *BeginRegisterStatelessServiceFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatelessServiceFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, EndRegisterStatelessServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *EndRegisterStatelessServiceFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, RegisterStatelessServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *RegisterStatelessServiceFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatelessServiceFactory *factory);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, BeginRegisterStatefulServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *BeginRegisterStatefulServiceFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatefulServiceFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, EndRegisterStatefulServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *EndRegisterStatefulServiceFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, RegisterStatefulServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *RegisterStatefulServiceFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in_opt IFabricStatefulServiceFactory *factory);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, CreateServiceGroupFactoryBuilder)
        HRESULT ( STDMETHODCALLTYPE *CreateServiceGroupFactoryBuilder )( 
            __RPC__in IFabricRuntime * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricServiceGroupFactoryBuilder **builder);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, BeginRegisterServiceGroupFactory)
        HRESULT ( STDMETHODCALLTYPE *BeginRegisterServiceGroupFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in LPCWSTR groupServiceType,
            /* [in] */ __RPC__in_opt IFabricServiceGroupFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, EndRegisterServiceGroupFactory)
        HRESULT ( STDMETHODCALLTYPE *EndRegisterServiceGroupFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricRuntime, RegisterServiceGroupFactory)
        HRESULT ( STDMETHODCALLTYPE *RegisterServiceGroupFactory )( 
            __RPC__in IFabricRuntime * This,
            /* [in] */ __RPC__in LPCWSTR groupServiceType,
            /* [in] */ __RPC__in_opt IFabricServiceGroupFactory *factory);
        
        END_INTERFACE
    } IFabricRuntimeVtbl;

    interface IFabricRuntime
    {
        CONST_VTBL struct IFabricRuntimeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricRuntime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricRuntime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricRuntime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricRuntime_BeginRegisterStatelessServiceFactory(This,serviceTypeName,factory,timeoutMilliseconds,callback,context)	\
    ( (This)->lpVtbl -> BeginRegisterStatelessServiceFactory(This,serviceTypeName,factory,timeoutMilliseconds,callback,context) ) 

#define IFabricRuntime_EndRegisterStatelessServiceFactory(This,context)	\
    ( (This)->lpVtbl -> EndRegisterStatelessServiceFactory(This,context) ) 

#define IFabricRuntime_RegisterStatelessServiceFactory(This,serviceTypeName,factory)	\
    ( (This)->lpVtbl -> RegisterStatelessServiceFactory(This,serviceTypeName,factory) ) 

#define IFabricRuntime_BeginRegisterStatefulServiceFactory(This,serviceTypeName,factory,timeoutMilliseconds,callback,context)	\
    ( (This)->lpVtbl -> BeginRegisterStatefulServiceFactory(This,serviceTypeName,factory,timeoutMilliseconds,callback,context) ) 

#define IFabricRuntime_EndRegisterStatefulServiceFactory(This,context)	\
    ( (This)->lpVtbl -> EndRegisterStatefulServiceFactory(This,context) ) 

#define IFabricRuntime_RegisterStatefulServiceFactory(This,serviceTypeName,factory)	\
    ( (This)->lpVtbl -> RegisterStatefulServiceFactory(This,serviceTypeName,factory) ) 

#define IFabricRuntime_CreateServiceGroupFactoryBuilder(This,builder)	\
    ( (This)->lpVtbl -> CreateServiceGroupFactoryBuilder(This,builder) ) 

#define IFabricRuntime_BeginRegisterServiceGroupFactory(This,groupServiceType,factory,timeoutMilliseconds,callback,context)	\
    ( (This)->lpVtbl -> BeginRegisterServiceGroupFactory(This,groupServiceType,factory,timeoutMilliseconds,callback,context) ) 

#define IFabricRuntime_EndRegisterServiceGroupFactory(This,context)	\
    ( (This)->lpVtbl -> EndRegisterServiceGroupFactory(This,context) ) 

#define IFabricRuntime_RegisterServiceGroupFactory(This,groupServiceType,factory)	\
    ( (This)->lpVtbl -> RegisterServiceGroupFactory(This,groupServiceType,factory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricRuntime_INTERFACE_DEFINED__ */


#ifndef __IFabricProcessExitHandler_INTERFACE_DEFINED__
#define __IFabricProcessExitHandler_INTERFACE_DEFINED__

/* interface IFabricProcessExitHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricProcessExitHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c58d50a2-01f0-4267-bbe7-223b565c1346")
    IFabricProcessExitHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE FabricProcessExited( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricProcessExitHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricProcessExitHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricProcessExitHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricProcessExitHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricProcessExitHandler, FabricProcessExited)
        void ( STDMETHODCALLTYPE *FabricProcessExited )( 
            __RPC__in IFabricProcessExitHandler * This);
        
        END_INTERFACE
    } IFabricProcessExitHandlerVtbl;

    interface IFabricProcessExitHandler
    {
        CONST_VTBL struct IFabricProcessExitHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricProcessExitHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricProcessExitHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricProcessExitHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricProcessExitHandler_FabricProcessExited(This)	\
    ( (This)->lpVtbl -> FabricProcessExited(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricProcessExitHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServiceFactory_INTERFACE_DEFINED__
#define __IFabricStatelessServiceFactory_INTERFACE_DEFINED__

/* interface IFabricStatelessServiceFactory */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServiceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cc53af8f-74cd-11df-ac3e-0024811e3892")
    IFabricStatelessServiceFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in FABRIC_URI serviceName,
            /* [in] */ ULONG initializationDataLength,
            /* [size_is][in] */ __RPC__in_ecount_full(initializationDataLength) const byte *initializationData,
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_INSTANCE_ID instanceId,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStatelessServiceInstance **serviceInstance) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatelessServiceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatelessServiceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatelessServiceFactory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatelessServiceFactory * This);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServiceFactory, CreateInstance)
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            __RPC__in IFabricStatelessServiceFactory * This,
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in FABRIC_URI serviceName,
            /* [in] */ ULONG initializationDataLength,
            /* [size_is][in] */ __RPC__in_ecount_full(initializationDataLength) const byte *initializationData,
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_INSTANCE_ID instanceId,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStatelessServiceInstance **serviceInstance);
        
        END_INTERFACE
    } IFabricStatelessServiceFactoryVtbl;

    interface IFabricStatelessServiceFactory
    {
        CONST_VTBL struct IFabricStatelessServiceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatelessServiceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatelessServiceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatelessServiceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatelessServiceFactory_CreateInstance(This,serviceTypeName,serviceName,initializationDataLength,initializationData,partitionId,instanceId,serviceInstance)	\
    ( (This)->lpVtbl -> CreateInstance(This,serviceTypeName,serviceName,initializationDataLength,initializationData,partitionId,instanceId,serviceInstance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatelessServiceFactory_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServiceInstance_INTERFACE_DEFINED__
#define __IFabricStatelessServiceInstance_INTERFACE_DEFINED__

/* interface IFabricStatelessServiceInstance */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServiceInstance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cc53af90-74cd-11df-ac3e-0024811e3892")
    IFabricStatelessServiceInstance : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ __RPC__in_opt IFabricStatelessServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatelessServiceInstanceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatelessServiceInstance * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatelessServiceInstance * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatelessServiceInstance * This);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServiceInstance, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricStatelessServiceInstance * This,
            /* [in] */ __RPC__in_opt IFabricStatelessServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServiceInstance, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricStatelessServiceInstance * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServiceInstance, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricStatelessServiceInstance * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServiceInstance, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricStatelessServiceInstance * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServiceInstance, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricStatelessServiceInstance * This);
        
        END_INTERFACE
    } IFabricStatelessServiceInstanceVtbl;

    interface IFabricStatelessServiceInstance
    {
        CONST_VTBL struct IFabricStatelessServiceInstanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatelessServiceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatelessServiceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatelessServiceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatelessServiceInstance_BeginOpen(This,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,partition,callback,context) ) 

#define IFabricStatelessServiceInstance_EndOpen(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndOpen(This,context,serviceAddress) ) 

#define IFabricStatelessServiceInstance_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricStatelessServiceInstance_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricStatelessServiceInstance_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatelessServiceInstance_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cc53af91-74cd-11df-ac3e-0024811e3892")
    IFabricStatelessServicePartition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPartitionInfo( 
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportLoad( 
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportFault( 
            /* [in] */ FABRIC_FAULT_TYPE faultType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatelessServicePartitionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatelessServicePartition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatelessServicePartition * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatelessServicePartition * This);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatelessServicePartition * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatelessServicePartition * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatelessServicePartition * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        END_INTERFACE
    } IFabricStatelessServicePartitionVtbl;

    interface IFabricStatelessServicePartition
    {
        CONST_VTBL struct IFabricStatelessServicePartitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatelessServicePartition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatelessServicePartition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatelessServicePartition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatelessServicePartition_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatelessServicePartition_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatelessServicePartition_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatelessServicePartition_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition1_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition1_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition1 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bf6bb505-7bd0-4371-b6c0-cba319a5e50b")
    IFabricStatelessServicePartition1 : public IFabricStatelessServicePartition
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportMoveCost( 
            /* [in] */ FABRIC_MOVE_COST moveCost) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatelessServicePartition1Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatelessServicePartition1 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatelessServicePartition1 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatelessServicePartition1 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatelessServicePartition1 * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatelessServicePartition1 * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatelessServicePartition1 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition1, ReportMoveCost)
        HRESULT ( STDMETHODCALLTYPE *ReportMoveCost )( 
            __RPC__in IFabricStatelessServicePartition1 * This,
            /* [in] */ FABRIC_MOVE_COST moveCost);
        
        END_INTERFACE
    } IFabricStatelessServicePartition1Vtbl;

    interface IFabricStatelessServicePartition1
    {
        CONST_VTBL struct IFabricStatelessServicePartition1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatelessServicePartition1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatelessServicePartition1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatelessServicePartition1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatelessServicePartition1_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatelessServicePartition1_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatelessServicePartition1_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 


#define IFabricStatelessServicePartition1_ReportMoveCost(This,moveCost)	\
    ( (This)->lpVtbl -> ReportMoveCost(This,moveCost) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatelessServicePartition1_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition2_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition2_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ff35b6c-9d97-4312-93ad-7f34cbdb4ca4")
    IFabricStatelessServicePartition2 : public IFabricStatelessServicePartition1
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportInstanceHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatelessServicePartition2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatelessServicePartition2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatelessServicePartition2 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition1, ReportMoveCost)
        HRESULT ( STDMETHODCALLTYPE *ReportMoveCost )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [in] */ FABRIC_MOVE_COST moveCost);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition2, ReportInstanceHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportInstanceHealth )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition2, ReportPartitionHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportPartitionHealth )( 
            __RPC__in IFabricStatelessServicePartition2 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        END_INTERFACE
    } IFabricStatelessServicePartition2Vtbl;

    interface IFabricStatelessServicePartition2
    {
        CONST_VTBL struct IFabricStatelessServicePartition2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatelessServicePartition2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatelessServicePartition2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatelessServicePartition2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatelessServicePartition2_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatelessServicePartition2_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatelessServicePartition2_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 


#define IFabricStatelessServicePartition2_ReportMoveCost(This,moveCost)	\
    ( (This)->lpVtbl -> ReportMoveCost(This,moveCost) ) 


#define IFabricStatelessServicePartition2_ReportInstanceHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportInstanceHealth(This,healthInfo) ) 

#define IFabricStatelessServicePartition2_ReportPartitionHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportPartitionHealth(This,healthInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatelessServicePartition2_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition3_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition3_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f2fa2000-70a7-4ed5-9d3e-0b7deca2433f")
    IFabricStatelessServicePartition3 : public IFabricStatelessServicePartition2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportInstanceHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatelessServicePartition3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatelessServicePartition3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatelessServicePartition3 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition1, ReportMoveCost)
        HRESULT ( STDMETHODCALLTYPE *ReportMoveCost )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ FABRIC_MOVE_COST moveCost);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition2, ReportInstanceHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportInstanceHealth )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition2, ReportPartitionHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportPartitionHealth )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition3, ReportInstanceHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportInstanceHealth2 )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricStatelessServicePartition3, ReportPartitionHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportPartitionHealth2 )( 
            __RPC__in IFabricStatelessServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        END_INTERFACE
    } IFabricStatelessServicePartition3Vtbl;

    interface IFabricStatelessServicePartition3
    {
        CONST_VTBL struct IFabricStatelessServicePartition3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatelessServicePartition3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatelessServicePartition3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatelessServicePartition3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatelessServicePartition3_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatelessServicePartition3_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatelessServicePartition3_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 


#define IFabricStatelessServicePartition3_ReportMoveCost(This,moveCost)	\
    ( (This)->lpVtbl -> ReportMoveCost(This,moveCost) ) 


#define IFabricStatelessServicePartition3_ReportInstanceHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportInstanceHealth(This,healthInfo) ) 

#define IFabricStatelessServicePartition3_ReportPartitionHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportPartitionHealth(This,healthInfo) ) 


#define IFabricStatelessServicePartition3_ReportInstanceHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportInstanceHealth2(This,healthInfo,sendOptions) ) 

#define IFabricStatelessServicePartition3_ReportPartitionHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportPartitionHealth2(This,healthInfo,sendOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatelessServicePartition3_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServiceFactory_INTERFACE_DEFINED__
#define __IFabricStatefulServiceFactory_INTERFACE_DEFINED__

/* interface IFabricStatefulServiceFactory */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServiceFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77ff0c6b-6780-48ec-b4b0-61989327b0f2")
    IFabricStatefulServiceFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateReplica( 
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in FABRIC_URI serviceName,
            /* [in] */ ULONG initializationDataLength,
            /* [size_is][in] */ __RPC__in_ecount_full(initializationDataLength) const byte *initializationData,
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_REPLICA_ID replicaId,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStatefulServiceReplica **serviceReplica) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatefulServiceFactoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatefulServiceFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatefulServiceFactory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatefulServiceFactory * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceFactory, CreateReplica)
        HRESULT ( STDMETHODCALLTYPE *CreateReplica )( 
            __RPC__in IFabricStatefulServiceFactory * This,
            /* [in] */ __RPC__in LPCWSTR serviceTypeName,
            /* [in] */ __RPC__in FABRIC_URI serviceName,
            /* [in] */ ULONG initializationDataLength,
            /* [size_is][in] */ __RPC__in_ecount_full(initializationDataLength) const byte *initializationData,
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_REPLICA_ID replicaId,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStatefulServiceReplica **serviceReplica);
        
        END_INTERFACE
    } IFabricStatefulServiceFactoryVtbl;

    interface IFabricStatefulServiceFactory
    {
        CONST_VTBL struct IFabricStatefulServiceFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatefulServiceFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatefulServiceFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatefulServiceFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatefulServiceFactory_CreateReplica(This,serviceTypeName,serviceName,initializationDataLength,initializationData,partitionId,replicaId,serviceReplica)	\
    ( (This)->lpVtbl -> CreateReplica(This,serviceTypeName,serviceName,initializationDataLength,initializationData,partitionId,replicaId,serviceReplica) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatefulServiceFactory_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServiceReplica_INTERFACE_DEFINED__
#define __IFabricStatefulServiceReplica_INTERFACE_DEFINED__

/* interface IFabricStatefulServiceReplica */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServiceReplica;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8ae3be0e-505d-4dc1-ad8f-0cb0f9576b8a")
    IFabricStatefulServiceReplica : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginChangeRole( 
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndChangeRole( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatefulServiceReplicaVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatefulServiceReplica * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatefulServiceReplica * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricStatefulServiceReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricStatefulServiceReplica * This);
        
        END_INTERFACE
    } IFabricStatefulServiceReplicaVtbl;

    interface IFabricStatefulServiceReplica
    {
        CONST_VTBL struct IFabricStatefulServiceReplicaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatefulServiceReplica_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatefulServiceReplica_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatefulServiceReplica_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatefulServiceReplica_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricStatefulServiceReplica_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricStatefulServiceReplica_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricStatefulServiceReplica_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricStatefulServiceReplica_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricStatefulServiceReplica_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricStatefulServiceReplica_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatefulServiceReplica_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5beccc37-8655-4f20-bd43-f50691d7cd16")
    IFabricStatefulServicePartition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPartitionInfo( 
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReadStatus( 
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *readStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWriteStatus( 
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *writeStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReplicator( 
            /* [in] */ __RPC__in_opt IFabricStateProvider *stateProvider,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
            /* [out] */ __RPC__deref_out_opt IFabricReplicator **replicator,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStateReplicator **stateReplicator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportLoad( 
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportFault( 
            /* [in] */ FABRIC_FAULT_TYPE faultType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatefulServicePartitionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatefulServicePartition * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatefulServicePartition * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetReadStatus)
        HRESULT ( STDMETHODCALLTYPE *GetReadStatus )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *readStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetWriteStatus)
        HRESULT ( STDMETHODCALLTYPE *GetWriteStatus )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *writeStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, CreateReplicator)
        HRESULT ( STDMETHODCALLTYPE *CreateReplicator )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [in] */ __RPC__in_opt IFabricStateProvider *stateProvider,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
            /* [out] */ __RPC__deref_out_opt IFabricReplicator **replicator,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStateReplicator **stateReplicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatefulServicePartition * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        END_INTERFACE
    } IFabricStatefulServicePartitionVtbl;

    interface IFabricStatefulServicePartition
    {
        CONST_VTBL struct IFabricStatefulServicePartitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatefulServicePartition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatefulServicePartition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatefulServicePartition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatefulServicePartition_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatefulServicePartition_GetReadStatus(This,readStatus)	\
    ( (This)->lpVtbl -> GetReadStatus(This,readStatus) ) 

#define IFabricStatefulServicePartition_GetWriteStatus(This,writeStatus)	\
    ( (This)->lpVtbl -> GetWriteStatus(This,writeStatus) ) 

#define IFabricStatefulServicePartition_CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator)	\
    ( (This)->lpVtbl -> CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator) ) 

#define IFabricStatefulServicePartition_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatefulServicePartition_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatefulServicePartition_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition1_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition1_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition1 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9c66f2f-9dff-4c87-bbe4-a08b4c4074cf")
    IFabricStatefulServicePartition1 : public IFabricStatefulServicePartition
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportMoveCost( 
            /* [in] */ FABRIC_MOVE_COST moveCost) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatefulServicePartition1Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatefulServicePartition1 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatefulServicePartition1 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetReadStatus)
        HRESULT ( STDMETHODCALLTYPE *GetReadStatus )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *readStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetWriteStatus)
        HRESULT ( STDMETHODCALLTYPE *GetWriteStatus )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *writeStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, CreateReplicator)
        HRESULT ( STDMETHODCALLTYPE *CreateReplicator )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [in] */ __RPC__in_opt IFabricStateProvider *stateProvider,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
            /* [out] */ __RPC__deref_out_opt IFabricReplicator **replicator,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStateReplicator **stateReplicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition1, ReportMoveCost)
        HRESULT ( STDMETHODCALLTYPE *ReportMoveCost )( 
            __RPC__in IFabricStatefulServicePartition1 * This,
            /* [in] */ FABRIC_MOVE_COST moveCost);
        
        END_INTERFACE
    } IFabricStatefulServicePartition1Vtbl;

    interface IFabricStatefulServicePartition1
    {
        CONST_VTBL struct IFabricStatefulServicePartition1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatefulServicePartition1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatefulServicePartition1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatefulServicePartition1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatefulServicePartition1_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatefulServicePartition1_GetReadStatus(This,readStatus)	\
    ( (This)->lpVtbl -> GetReadStatus(This,readStatus) ) 

#define IFabricStatefulServicePartition1_GetWriteStatus(This,writeStatus)	\
    ( (This)->lpVtbl -> GetWriteStatus(This,writeStatus) ) 

#define IFabricStatefulServicePartition1_CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator)	\
    ( (This)->lpVtbl -> CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator) ) 

#define IFabricStatefulServicePartition1_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatefulServicePartition1_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 


#define IFabricStatefulServicePartition1_ReportMoveCost(This,moveCost)	\
    ( (This)->lpVtbl -> ReportMoveCost(This,moveCost) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatefulServicePartition1_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition2_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition2_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("df27b476-fa25-459f-a7d3-87d3eec9c73c")
    IFabricStatefulServicePartition2 : public IFabricStatefulServicePartition1
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportReplicaHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatefulServicePartition2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatefulServicePartition2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatefulServicePartition2 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetReadStatus)
        HRESULT ( STDMETHODCALLTYPE *GetReadStatus )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *readStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetWriteStatus)
        HRESULT ( STDMETHODCALLTYPE *GetWriteStatus )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *writeStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, CreateReplicator)
        HRESULT ( STDMETHODCALLTYPE *CreateReplicator )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ __RPC__in_opt IFabricStateProvider *stateProvider,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
            /* [out] */ __RPC__deref_out_opt IFabricReplicator **replicator,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStateReplicator **stateReplicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition1, ReportMoveCost)
        HRESULT ( STDMETHODCALLTYPE *ReportMoveCost )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ FABRIC_MOVE_COST moveCost);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition2, ReportReplicaHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportReplicaHealth )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition2, ReportPartitionHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportPartitionHealth )( 
            __RPC__in IFabricStatefulServicePartition2 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        END_INTERFACE
    } IFabricStatefulServicePartition2Vtbl;

    interface IFabricStatefulServicePartition2
    {
        CONST_VTBL struct IFabricStatefulServicePartition2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatefulServicePartition2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatefulServicePartition2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatefulServicePartition2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatefulServicePartition2_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatefulServicePartition2_GetReadStatus(This,readStatus)	\
    ( (This)->lpVtbl -> GetReadStatus(This,readStatus) ) 

#define IFabricStatefulServicePartition2_GetWriteStatus(This,writeStatus)	\
    ( (This)->lpVtbl -> GetWriteStatus(This,writeStatus) ) 

#define IFabricStatefulServicePartition2_CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator)	\
    ( (This)->lpVtbl -> CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator) ) 

#define IFabricStatefulServicePartition2_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatefulServicePartition2_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 


#define IFabricStatefulServicePartition2_ReportMoveCost(This,moveCost)	\
    ( (This)->lpVtbl -> ReportMoveCost(This,moveCost) ) 


#define IFabricStatefulServicePartition2_ReportReplicaHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportReplicaHealth(This,healthInfo) ) 

#define IFabricStatefulServicePartition2_ReportPartitionHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportPartitionHealth(This,healthInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatefulServicePartition2_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition3_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition3_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51f1269d-b061-4c1c-96cf-6508cece813b")
    IFabricStatefulServicePartition3 : public IFabricStatefulServicePartition2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportReplicaHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStatefulServicePartition3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStatefulServicePartition3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStatefulServicePartition3 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetPartitionInfo)
        HRESULT ( STDMETHODCALLTYPE *GetPartitionInfo )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetReadStatus)
        HRESULT ( STDMETHODCALLTYPE *GetReadStatus )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *readStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, GetWriteStatus)
        HRESULT ( STDMETHODCALLTYPE *GetWriteStatus )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [retval][out] */ __RPC__out FABRIC_SERVICE_PARTITION_ACCESS_STATUS *writeStatus);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, CreateReplicator)
        HRESULT ( STDMETHODCALLTYPE *CreateReplicator )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ __RPC__in_opt IFabricStateProvider *stateProvider,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
            /* [out] */ __RPC__deref_out_opt IFabricReplicator **replicator,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStateReplicator **stateReplicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportLoad)
        HRESULT ( STDMETHODCALLTYPE *ReportLoad )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ __RPC__in_ecount_full(metricCount) const FABRIC_LOAD_METRIC *metrics);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition1, ReportMoveCost)
        HRESULT ( STDMETHODCALLTYPE *ReportMoveCost )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ FABRIC_MOVE_COST moveCost);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition2, ReportReplicaHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportReplicaHealth )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition2, ReportPartitionHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportPartitionHealth )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition3, ReportReplicaHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportReplicaHealth2 )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServicePartition3, ReportPartitionHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportPartitionHealth2 )( 
            __RPC__in IFabricStatefulServicePartition3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        END_INTERFACE
    } IFabricStatefulServicePartition3Vtbl;

    interface IFabricStatefulServicePartition3
    {
        CONST_VTBL struct IFabricStatefulServicePartition3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStatefulServicePartition3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStatefulServicePartition3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStatefulServicePartition3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStatefulServicePartition3_GetPartitionInfo(This,bufferedValue)	\
    ( (This)->lpVtbl -> GetPartitionInfo(This,bufferedValue) ) 

#define IFabricStatefulServicePartition3_GetReadStatus(This,readStatus)	\
    ( (This)->lpVtbl -> GetReadStatus(This,readStatus) ) 

#define IFabricStatefulServicePartition3_GetWriteStatus(This,writeStatus)	\
    ( (This)->lpVtbl -> GetWriteStatus(This,writeStatus) ) 

#define IFabricStatefulServicePartition3_CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator)	\
    ( (This)->lpVtbl -> CreateReplicator(This,stateProvider,replicatorSettings,replicator,stateReplicator) ) 

#define IFabricStatefulServicePartition3_ReportLoad(This,metricCount,metrics)	\
    ( (This)->lpVtbl -> ReportLoad(This,metricCount,metrics) ) 

#define IFabricStatefulServicePartition3_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 


#define IFabricStatefulServicePartition3_ReportMoveCost(This,moveCost)	\
    ( (This)->lpVtbl -> ReportMoveCost(This,moveCost) ) 


#define IFabricStatefulServicePartition3_ReportReplicaHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportReplicaHealth(This,healthInfo) ) 

#define IFabricStatefulServicePartition3_ReportPartitionHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportPartitionHealth(This,healthInfo) ) 


#define IFabricStatefulServicePartition3_ReportReplicaHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportReplicaHealth2(This,healthInfo,sendOptions) ) 

#define IFabricStatefulServicePartition3_ReportPartitionHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportPartitionHealth2(This,healthInfo,sendOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStatefulServicePartition3_INTERFACE_DEFINED__ */


#ifndef __IFabricStateProvider_INTERFACE_DEFINED__
#define __IFabricStateProvider_INTERFACE_DEFINED__

/* interface IFabricStateProvider */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStateProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3ebfec79-bd27-43f3-8be8-da38ee723951")
    IFabricStateProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateEpoch( 
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_SEQUENCE_NUMBER previousEpochLastSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateEpoch( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastCommittedSequenceNumber( 
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginOnDataLoss( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOnDataLoss( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *isStateChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCopyContext( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationDataStream **copyContextStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCopyState( 
            /* [in] */ FABRIC_SEQUENCE_NUMBER uptoSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricOperationDataStream *copyContextStream,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationDataStream **copyStateStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStateProviderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStateProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStateProvider * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStateProvider * This);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, BeginUpdateEpoch)
        HRESULT ( STDMETHODCALLTYPE *BeginUpdateEpoch )( 
            __RPC__in IFabricStateProvider * This,
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_SEQUENCE_NUMBER previousEpochLastSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, EndUpdateEpoch)
        HRESULT ( STDMETHODCALLTYPE *EndUpdateEpoch )( 
            __RPC__in IFabricStateProvider * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, GetLastCommittedSequenceNumber)
        HRESULT ( STDMETHODCALLTYPE *GetLastCommittedSequenceNumber )( 
            __RPC__in IFabricStateProvider * This,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, BeginOnDataLoss)
        HRESULT ( STDMETHODCALLTYPE *BeginOnDataLoss )( 
            __RPC__in IFabricStateProvider * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, EndOnDataLoss)
        HRESULT ( STDMETHODCALLTYPE *EndOnDataLoss )( 
            __RPC__in IFabricStateProvider * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *isStateChanged);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, GetCopyContext)
        HRESULT ( STDMETHODCALLTYPE *GetCopyContext )( 
            __RPC__in IFabricStateProvider * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationDataStream **copyContextStream);
        
        DECLSPEC_XFGVIRT(IFabricStateProvider, GetCopyState)
        HRESULT ( STDMETHODCALLTYPE *GetCopyState )( 
            __RPC__in IFabricStateProvider * This,
            /* [in] */ FABRIC_SEQUENCE_NUMBER uptoSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricOperationDataStream *copyContextStream,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationDataStream **copyStateStream);
        
        END_INTERFACE
    } IFabricStateProviderVtbl;

    interface IFabricStateProvider
    {
        CONST_VTBL struct IFabricStateProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStateProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStateProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStateProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStateProvider_BeginUpdateEpoch(This,epoch,previousEpochLastSequenceNumber,callback,context)	\
    ( (This)->lpVtbl -> BeginUpdateEpoch(This,epoch,previousEpochLastSequenceNumber,callback,context) ) 

#define IFabricStateProvider_EndUpdateEpoch(This,context)	\
    ( (This)->lpVtbl -> EndUpdateEpoch(This,context) ) 

#define IFabricStateProvider_GetLastCommittedSequenceNumber(This,sequenceNumber)	\
    ( (This)->lpVtbl -> GetLastCommittedSequenceNumber(This,sequenceNumber) ) 

#define IFabricStateProvider_BeginOnDataLoss(This,callback,context)	\
    ( (This)->lpVtbl -> BeginOnDataLoss(This,callback,context) ) 

#define IFabricStateProvider_EndOnDataLoss(This,context,isStateChanged)	\
    ( (This)->lpVtbl -> EndOnDataLoss(This,context,isStateChanged) ) 

#define IFabricStateProvider_GetCopyContext(This,copyContextStream)	\
    ( (This)->lpVtbl -> GetCopyContext(This,copyContextStream) ) 

#define IFabricStateProvider_GetCopyState(This,uptoSequenceNumber,copyContextStream,copyStateStream)	\
    ( (This)->lpVtbl -> GetCopyState(This,uptoSequenceNumber,copyContextStream,copyStateStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStateProvider_INTERFACE_DEFINED__ */


#ifndef __IFabricStateReplicator_INTERFACE_DEFINED__
#define __IFabricStateReplicator_INTERFACE_DEFINED__

/* interface IFabricStateReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStateReplicator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("89e9a978-c771-44f2-92e8-3bf271cabe9c")
    IFabricStateReplicator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginReplicate( 
            /* [in] */ __RPC__in_opt IFabricOperationData *operationData,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicate( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReplicationStream( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationStream **stream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCopyStream( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationStream **stream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateReplicatorSettings( 
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStateReplicatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStateReplicator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStateReplicator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStateReplicator * This);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, BeginReplicate)
        HRESULT ( STDMETHODCALLTYPE *BeginReplicate )( 
            __RPC__in IFabricStateReplicator * This,
            /* [in] */ __RPC__in_opt IFabricOperationData *operationData,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, EndReplicate)
        HRESULT ( STDMETHODCALLTYPE *EndReplicate )( 
            __RPC__in IFabricStateReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, GetReplicationStream)
        HRESULT ( STDMETHODCALLTYPE *GetReplicationStream )( 
            __RPC__in IFabricStateReplicator * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationStream **stream);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, GetCopyStream)
        HRESULT ( STDMETHODCALLTYPE *GetCopyStream )( 
            __RPC__in IFabricStateReplicator * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationStream **stream);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricStateReplicator * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        END_INTERFACE
    } IFabricStateReplicatorVtbl;

    interface IFabricStateReplicator
    {
        CONST_VTBL struct IFabricStateReplicatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStateReplicator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStateReplicator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStateReplicator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStateReplicator_BeginReplicate(This,operationData,callback,sequenceNumber,context)	\
    ( (This)->lpVtbl -> BeginReplicate(This,operationData,callback,sequenceNumber,context) ) 

#define IFabricStateReplicator_EndReplicate(This,context,sequenceNumber)	\
    ( (This)->lpVtbl -> EndReplicate(This,context,sequenceNumber) ) 

#define IFabricStateReplicator_GetReplicationStream(This,stream)	\
    ( (This)->lpVtbl -> GetReplicationStream(This,stream) ) 

#define IFabricStateReplicator_GetCopyStream(This,stream)	\
    ( (This)->lpVtbl -> GetCopyStream(This,stream) ) 

#define IFabricStateReplicator_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStateReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicator_INTERFACE_DEFINED__
#define __IFabricReplicator_INTERFACE_DEFINED__

/* interface IFabricReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("067f144a-e5be-4f5e-a181-8b5593e20242")
    IFabricReplicator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **replicationAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginChangeRole( 
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_REPLICA_ROLE role,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndChangeRole( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateEpoch( 
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateEpoch( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentProgress( 
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *lastSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCatchUpCapability( 
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *fromSequenceNumber) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricReplicatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricReplicator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricReplicator * This);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **replicationAddress);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_REPLICA_ROLE role,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginUpdateEpoch)
        HRESULT ( STDMETHODCALLTYPE *BeginUpdateEpoch )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndUpdateEpoch)
        HRESULT ( STDMETHODCALLTYPE *EndUpdateEpoch )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricReplicator * This);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, GetCurrentProgress)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProgress )( 
            __RPC__in IFabricReplicator * This,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *lastSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, GetCatchUpCapability)
        HRESULT ( STDMETHODCALLTYPE *GetCatchUpCapability )( 
            __RPC__in IFabricReplicator * This,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *fromSequenceNumber);
        
        END_INTERFACE
    } IFabricReplicatorVtbl;

    interface IFabricReplicator
    {
        CONST_VTBL struct IFabricReplicatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricReplicator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricReplicator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricReplicator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricReplicator_BeginOpen(This,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,callback,context) ) 

#define IFabricReplicator_EndOpen(This,context,replicationAddress)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicationAddress) ) 

#define IFabricReplicator_BeginChangeRole(This,epoch,role,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,epoch,role,callback,context) ) 

#define IFabricReplicator_EndChangeRole(This,context)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context) ) 

#define IFabricReplicator_BeginUpdateEpoch(This,epoch,callback,context)	\
    ( (This)->lpVtbl -> BeginUpdateEpoch(This,epoch,callback,context) ) 

#define IFabricReplicator_EndUpdateEpoch(This,context)	\
    ( (This)->lpVtbl -> EndUpdateEpoch(This,context) ) 

#define IFabricReplicator_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricReplicator_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricReplicator_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IFabricReplicator_GetCurrentProgress(This,lastSequenceNumber)	\
    ( (This)->lpVtbl -> GetCurrentProgress(This,lastSequenceNumber) ) 

#define IFabricReplicator_GetCatchUpCapability(This,fromSequenceNumber)	\
    ( (This)->lpVtbl -> GetCatchUpCapability(This,fromSequenceNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricPrimaryReplicator_INTERFACE_DEFINED__
#define __IFabricPrimaryReplicator_INTERFACE_DEFINED__

/* interface IFabricPrimaryReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPrimaryReplicator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("564e50dd-c3a4-4600-a60e-6658874307ae")
    IFabricPrimaryReplicator : public IFabricReplicator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOnDataLoss( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOnDataLoss( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *isStateChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateCatchUpReplicaSetConfiguration( 
            /* [in] */ __RPC__in const FABRIC_REPLICA_SET_CONFIGURATION *currentConfiguration,
            /* [in] */ __RPC__in const FABRIC_REPLICA_SET_CONFIGURATION *previousConfiguration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginWaitForCatchUpQuorum( 
            /* [in] */ FABRIC_REPLICA_SET_QUORUM_MODE catchUpMode,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndWaitForCatchUpQuorum( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateCurrentReplicaSetConfiguration( 
            /* [in] */ __RPC__in const FABRIC_REPLICA_SET_CONFIGURATION *currentConfiguration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginBuildReplica( 
            /* [in] */ __RPC__in const FABRIC_REPLICA_INFORMATION *replica,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndBuildReplica( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveReplica( 
            /* [in] */ FABRIC_REPLICA_ID replicaId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricPrimaryReplicatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricPrimaryReplicator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricPrimaryReplicator * This);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **replicationAddress);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_REPLICA_ROLE role,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginUpdateEpoch)
        HRESULT ( STDMETHODCALLTYPE *BeginUpdateEpoch )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in const FABRIC_EPOCH *epoch,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndUpdateEpoch)
        HRESULT ( STDMETHODCALLTYPE *EndUpdateEpoch )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricPrimaryReplicator * This);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, GetCurrentProgress)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProgress )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *lastSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricReplicator, GetCatchUpCapability)
        HRESULT ( STDMETHODCALLTYPE *GetCatchUpCapability )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *fromSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, BeginOnDataLoss)
        HRESULT ( STDMETHODCALLTYPE *BeginOnDataLoss )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, EndOnDataLoss)
        HRESULT ( STDMETHODCALLTYPE *EndOnDataLoss )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *isStateChanged);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, UpdateCatchUpReplicaSetConfiguration)
        HRESULT ( STDMETHODCALLTYPE *UpdateCatchUpReplicaSetConfiguration )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in const FABRIC_REPLICA_SET_CONFIGURATION *currentConfiguration,
            /* [in] */ __RPC__in const FABRIC_REPLICA_SET_CONFIGURATION *previousConfiguration);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, BeginWaitForCatchUpQuorum)
        HRESULT ( STDMETHODCALLTYPE *BeginWaitForCatchUpQuorum )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ FABRIC_REPLICA_SET_QUORUM_MODE catchUpMode,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, EndWaitForCatchUpQuorum)
        HRESULT ( STDMETHODCALLTYPE *EndWaitForCatchUpQuorum )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, UpdateCurrentReplicaSetConfiguration)
        HRESULT ( STDMETHODCALLTYPE *UpdateCurrentReplicaSetConfiguration )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in const FABRIC_REPLICA_SET_CONFIGURATION *currentConfiguration);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, BeginBuildReplica)
        HRESULT ( STDMETHODCALLTYPE *BeginBuildReplica )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in const FABRIC_REPLICA_INFORMATION *replica,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, EndBuildReplica)
        HRESULT ( STDMETHODCALLTYPE *EndBuildReplica )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricPrimaryReplicator, RemoveReplica)
        HRESULT ( STDMETHODCALLTYPE *RemoveReplica )( 
            __RPC__in IFabricPrimaryReplicator * This,
            /* [in] */ FABRIC_REPLICA_ID replicaId);
        
        END_INTERFACE
    } IFabricPrimaryReplicatorVtbl;

    interface IFabricPrimaryReplicator
    {
        CONST_VTBL struct IFabricPrimaryReplicatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricPrimaryReplicator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricPrimaryReplicator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricPrimaryReplicator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricPrimaryReplicator_BeginOpen(This,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,callback,context) ) 

#define IFabricPrimaryReplicator_EndOpen(This,context,replicationAddress)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicationAddress) ) 

#define IFabricPrimaryReplicator_BeginChangeRole(This,epoch,role,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,epoch,role,callback,context) ) 

#define IFabricPrimaryReplicator_EndChangeRole(This,context)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context) ) 

#define IFabricPrimaryReplicator_BeginUpdateEpoch(This,epoch,callback,context)	\
    ( (This)->lpVtbl -> BeginUpdateEpoch(This,epoch,callback,context) ) 

#define IFabricPrimaryReplicator_EndUpdateEpoch(This,context)	\
    ( (This)->lpVtbl -> EndUpdateEpoch(This,context) ) 

#define IFabricPrimaryReplicator_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricPrimaryReplicator_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricPrimaryReplicator_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IFabricPrimaryReplicator_GetCurrentProgress(This,lastSequenceNumber)	\
    ( (This)->lpVtbl -> GetCurrentProgress(This,lastSequenceNumber) ) 

#define IFabricPrimaryReplicator_GetCatchUpCapability(This,fromSequenceNumber)	\
    ( (This)->lpVtbl -> GetCatchUpCapability(This,fromSequenceNumber) ) 


#define IFabricPrimaryReplicator_BeginOnDataLoss(This,callback,context)	\
    ( (This)->lpVtbl -> BeginOnDataLoss(This,callback,context) ) 

#define IFabricPrimaryReplicator_EndOnDataLoss(This,context,isStateChanged)	\
    ( (This)->lpVtbl -> EndOnDataLoss(This,context,isStateChanged) ) 

#define IFabricPrimaryReplicator_UpdateCatchUpReplicaSetConfiguration(This,currentConfiguration,previousConfiguration)	\
    ( (This)->lpVtbl -> UpdateCatchUpReplicaSetConfiguration(This,currentConfiguration,previousConfiguration) ) 

#define IFabricPrimaryReplicator_BeginWaitForCatchUpQuorum(This,catchUpMode,callback,context)	\
    ( (This)->lpVtbl -> BeginWaitForCatchUpQuorum(This,catchUpMode,callback,context) ) 

#define IFabricPrimaryReplicator_EndWaitForCatchUpQuorum(This,context)	\
    ( (This)->lpVtbl -> EndWaitForCatchUpQuorum(This,context) ) 

#define IFabricPrimaryReplicator_UpdateCurrentReplicaSetConfiguration(This,currentConfiguration)	\
    ( (This)->lpVtbl -> UpdateCurrentReplicaSetConfiguration(This,currentConfiguration) ) 

#define IFabricPrimaryReplicator_BeginBuildReplica(This,replica,callback,context)	\
    ( (This)->lpVtbl -> BeginBuildReplica(This,replica,callback,context) ) 

#define IFabricPrimaryReplicator_EndBuildReplica(This,context)	\
    ( (This)->lpVtbl -> EndBuildReplica(This,context) ) 

#define IFabricPrimaryReplicator_RemoveReplica(This,replicaId)	\
    ( (This)->lpVtbl -> RemoveReplica(This,replicaId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricPrimaryReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicatorCatchupSpecificQuorum_INTERFACE_DEFINED__
#define __IFabricReplicatorCatchupSpecificQuorum_INTERFACE_DEFINED__

/* interface IFabricReplicatorCatchupSpecificQuorum */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicatorCatchupSpecificQuorum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa3116fe-277d-482d-bd16-5366fa405757")
    IFabricReplicatorCatchupSpecificQuorum : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricReplicatorCatchupSpecificQuorumVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricReplicatorCatchupSpecificQuorum * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricReplicatorCatchupSpecificQuorum * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricReplicatorCatchupSpecificQuorum * This);
        
        END_INTERFACE
    } IFabricReplicatorCatchupSpecificQuorumVtbl;

    interface IFabricReplicatorCatchupSpecificQuorum
    {
        CONST_VTBL struct IFabricReplicatorCatchupSpecificQuorumVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricReplicatorCatchupSpecificQuorum_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricReplicatorCatchupSpecificQuorum_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricReplicatorCatchupSpecificQuorum_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricReplicatorCatchupSpecificQuorum_INTERFACE_DEFINED__ */


#ifndef __IFabricOperation_INTERFACE_DEFINED__
#define __IFabricOperation_INTERFACE_DEFINED__

/* interface IFabricOperation */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f4ad6bfa-e23c-4a48-9617-c099cd59a23a")
    IFabricOperation : public IUnknown
    {
    public:
        virtual const FABRIC_OPERATION_METADATA *STDMETHODCALLTYPE get_Metadata( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ __RPC__out ULONG *count,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_OPERATION_DATA_BUFFER **buffers) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Acknowledge( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricOperationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricOperation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricOperation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricOperation * This);
        
        DECLSPEC_XFGVIRT(IFabricOperation, get_Metadata)
        const FABRIC_OPERATION_METADATA *( STDMETHODCALLTYPE *get_Metadata )( 
            __RPC__in IFabricOperation * This);
        
        DECLSPEC_XFGVIRT(IFabricOperation, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            __RPC__in IFabricOperation * This,
            /* [out] */ __RPC__out ULONG *count,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_OPERATION_DATA_BUFFER **buffers);
        
        DECLSPEC_XFGVIRT(IFabricOperation, Acknowledge)
        HRESULT ( STDMETHODCALLTYPE *Acknowledge )( 
            __RPC__in IFabricOperation * This);
        
        END_INTERFACE
    } IFabricOperationVtbl;

    interface IFabricOperation
    {
        CONST_VTBL struct IFabricOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricOperation_get_Metadata(This)	\
    ( (This)->lpVtbl -> get_Metadata(This) ) 

#define IFabricOperation_GetData(This,count,buffers)	\
    ( (This)->lpVtbl -> GetData(This,count,buffers) ) 

#define IFabricOperation_Acknowledge(This)	\
    ( (This)->lpVtbl -> Acknowledge(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricOperation_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationData_INTERFACE_DEFINED__
#define __IFabricOperationData_INTERFACE_DEFINED__

/* interface IFabricOperationData */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bab8ad87-37b7-482a-985d-baf38a785dcd")
    IFabricOperationData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ __RPC__out ULONG *count,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_OPERATION_DATA_BUFFER **buffers) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricOperationDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricOperationData * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricOperationData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricOperationData * This);
        
        DECLSPEC_XFGVIRT(IFabricOperationData, GetData)
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            __RPC__in IFabricOperationData * This,
            /* [out] */ __RPC__out ULONG *count,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_OPERATION_DATA_BUFFER **buffers);
        
        END_INTERFACE
    } IFabricOperationDataVtbl;

    interface IFabricOperationData
    {
        CONST_VTBL struct IFabricOperationDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricOperationData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricOperationData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricOperationData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricOperationData_GetData(This,count,buffers)	\
    ( (This)->lpVtbl -> GetData(This,count,buffers) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricOperationData_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationStream_INTERFACE_DEFINED__
#define __IFabricOperationStream_INTERFACE_DEFINED__

/* interface IFabricOperationStream */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A98FB97A-D6B0-408A-A878-A9EDB09C2587")
    IFabricOperationStream : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetOperation( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetOperation( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperation **operation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricOperationStreamVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricOperationStream * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricOperationStream * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricOperationStream * This);
        
        DECLSPEC_XFGVIRT(IFabricOperationStream, BeginGetOperation)
        HRESULT ( STDMETHODCALLTYPE *BeginGetOperation )( 
            __RPC__in IFabricOperationStream * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricOperationStream, EndGetOperation)
        HRESULT ( STDMETHODCALLTYPE *EndGetOperation )( 
            __RPC__in IFabricOperationStream * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperation **operation);
        
        END_INTERFACE
    } IFabricOperationStreamVtbl;

    interface IFabricOperationStream
    {
        CONST_VTBL struct IFabricOperationStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricOperationStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricOperationStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricOperationStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricOperationStream_BeginGetOperation(This,callback,context)	\
    ( (This)->lpVtbl -> BeginGetOperation(This,callback,context) ) 

#define IFabricOperationStream_EndGetOperation(This,context,operation)	\
    ( (This)->lpVtbl -> EndGetOperation(This,context,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricOperationStream_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationStream2_INTERFACE_DEFINED__
#define __IFabricOperationStream2_INTERFACE_DEFINED__

/* interface IFabricOperationStream2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationStream2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0930199B-590A-4065-BEC9-5F93B6AAE086")
    IFabricOperationStream2 : public IFabricOperationStream
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportFault( 
            /* [in] */ FABRIC_FAULT_TYPE faultType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricOperationStream2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricOperationStream2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricOperationStream2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricOperationStream2 * This);
        
        DECLSPEC_XFGVIRT(IFabricOperationStream, BeginGetOperation)
        HRESULT ( STDMETHODCALLTYPE *BeginGetOperation )( 
            __RPC__in IFabricOperationStream2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricOperationStream, EndGetOperation)
        HRESULT ( STDMETHODCALLTYPE *EndGetOperation )( 
            __RPC__in IFabricOperationStream2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperation **operation);
        
        DECLSPEC_XFGVIRT(IFabricOperationStream2, ReportFault)
        HRESULT ( STDMETHODCALLTYPE *ReportFault )( 
            __RPC__in IFabricOperationStream2 * This,
            /* [in] */ FABRIC_FAULT_TYPE faultType);
        
        END_INTERFACE
    } IFabricOperationStream2Vtbl;

    interface IFabricOperationStream2
    {
        CONST_VTBL struct IFabricOperationStream2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricOperationStream2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricOperationStream2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricOperationStream2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricOperationStream2_BeginGetOperation(This,callback,context)	\
    ( (This)->lpVtbl -> BeginGetOperation(This,callback,context) ) 

#define IFabricOperationStream2_EndGetOperation(This,context,operation)	\
    ( (This)->lpVtbl -> EndGetOperation(This,context,operation) ) 


#define IFabricOperationStream2_ReportFault(This,faultType)	\
    ( (This)->lpVtbl -> ReportFault(This,faultType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricOperationStream2_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationDataStream_INTERFACE_DEFINED__
#define __IFabricOperationDataStream_INTERFACE_DEFINED__

/* interface IFabricOperationDataStream */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationDataStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c4e9084c-be92-49c9-8c18-d44d088c2e32")
    IFabricOperationDataStream : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetNext( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNext( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationData **operationData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricOperationDataStreamVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricOperationDataStream * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricOperationDataStream * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricOperationDataStream * This);
        
        DECLSPEC_XFGVIRT(IFabricOperationDataStream, BeginGetNext)
        HRESULT ( STDMETHODCALLTYPE *BeginGetNext )( 
            __RPC__in IFabricOperationDataStream * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricOperationDataStream, EndGetNext)
        HRESULT ( STDMETHODCALLTYPE *EndGetNext )( 
            __RPC__in IFabricOperationDataStream * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationData **operationData);
        
        END_INTERFACE
    } IFabricOperationDataStreamVtbl;

    interface IFabricOperationDataStream
    {
        CONST_VTBL struct IFabricOperationDataStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricOperationDataStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricOperationDataStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricOperationDataStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricOperationDataStream_BeginGetNext(This,callback,context)	\
    ( (This)->lpVtbl -> BeginGetNext(This,callback,context) ) 

#define IFabricOperationDataStream_EndGetNext(This,context,operationData)	\
    ( (This)->lpVtbl -> EndGetNext(This,context,operationData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricOperationDataStream_INTERFACE_DEFINED__ */


#ifndef __IFabricAtomicGroupStateProvider_INTERFACE_DEFINED__
#define __IFabricAtomicGroupStateProvider_INTERFACE_DEFINED__

/* interface IFabricAtomicGroupStateProvider */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricAtomicGroupStateProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2b670953-6148-4f7d-a920-b390de43d913")
    IFabricAtomicGroupStateProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginAtomicGroupCommit( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ FABRIC_SEQUENCE_NUMBER commitSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndAtomicGroupCommit( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginAtomicGroupRollback( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ FABRIC_SEQUENCE_NUMBER rollbackequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndAtomicGroupRollback( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUndoProgress( 
            /* [in] */ FABRIC_SEQUENCE_NUMBER fromCommitSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUndoProgress( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricAtomicGroupStateProviderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricAtomicGroupStateProvider * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricAtomicGroupStateProvider * This);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateProvider, BeginAtomicGroupCommit)
        HRESULT ( STDMETHODCALLTYPE *BeginAtomicGroupCommit )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ FABRIC_SEQUENCE_NUMBER commitSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateProvider, EndAtomicGroupCommit)
        HRESULT ( STDMETHODCALLTYPE *EndAtomicGroupCommit )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateProvider, BeginAtomicGroupRollback)
        HRESULT ( STDMETHODCALLTYPE *BeginAtomicGroupRollback )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ FABRIC_SEQUENCE_NUMBER rollbackequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateProvider, EndAtomicGroupRollback)
        HRESULT ( STDMETHODCALLTYPE *EndAtomicGroupRollback )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateProvider, BeginUndoProgress)
        HRESULT ( STDMETHODCALLTYPE *BeginUndoProgress )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ FABRIC_SEQUENCE_NUMBER fromCommitSequenceNumber,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateProvider, EndUndoProgress)
        HRESULT ( STDMETHODCALLTYPE *EndUndoProgress )( 
            __RPC__in IFabricAtomicGroupStateProvider * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        END_INTERFACE
    } IFabricAtomicGroupStateProviderVtbl;

    interface IFabricAtomicGroupStateProvider
    {
        CONST_VTBL struct IFabricAtomicGroupStateProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricAtomicGroupStateProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricAtomicGroupStateProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricAtomicGroupStateProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricAtomicGroupStateProvider_BeginAtomicGroupCommit(This,atomicGroupId,commitSequenceNumber,callback,context)	\
    ( (This)->lpVtbl -> BeginAtomicGroupCommit(This,atomicGroupId,commitSequenceNumber,callback,context) ) 

#define IFabricAtomicGroupStateProvider_EndAtomicGroupCommit(This,context)	\
    ( (This)->lpVtbl -> EndAtomicGroupCommit(This,context) ) 

#define IFabricAtomicGroupStateProvider_BeginAtomicGroupRollback(This,atomicGroupId,rollbackequenceNumber,callback,context)	\
    ( (This)->lpVtbl -> BeginAtomicGroupRollback(This,atomicGroupId,rollbackequenceNumber,callback,context) ) 

#define IFabricAtomicGroupStateProvider_EndAtomicGroupRollback(This,context)	\
    ( (This)->lpVtbl -> EndAtomicGroupRollback(This,context) ) 

#define IFabricAtomicGroupStateProvider_BeginUndoProgress(This,fromCommitSequenceNumber,callback,context)	\
    ( (This)->lpVtbl -> BeginUndoProgress(This,fromCommitSequenceNumber,callback,context) ) 

#define IFabricAtomicGroupStateProvider_EndUndoProgress(This,context)	\
    ( (This)->lpVtbl -> EndUndoProgress(This,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricAtomicGroupStateProvider_INTERFACE_DEFINED__ */


#ifndef __IFabricAtomicGroupStateReplicator_INTERFACE_DEFINED__
#define __IFabricAtomicGroupStateReplicator_INTERFACE_DEFINED__

/* interface IFabricAtomicGroupStateReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricAtomicGroupStateReplicator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80d2155c-4fc2-4fde-9696-c2f39b471c3d")
    IFabricAtomicGroupStateReplicator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateAtomicGroup( 
            /* [retval][out] */ __RPC__out FABRIC_ATOMIC_GROUP_ID *AtomicGroupId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginReplicateAtomicGroupOperation( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ __RPC__in_opt IFabricOperationData *operationData,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *operationSequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicateAtomicGroupOperation( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *operationSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginReplicateAtomicGroupCommit( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *commitSequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicateAtomicGroupCommit( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *commitSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginReplicateAtomicGroupRollback( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *rollbackSequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicateAtomicGroupRollback( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *rollbackSequenceNumber) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricAtomicGroupStateReplicatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, CreateAtomicGroup)
        HRESULT ( STDMETHODCALLTYPE *CreateAtomicGroup )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [retval][out] */ __RPC__out FABRIC_ATOMIC_GROUP_ID *AtomicGroupId);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, BeginReplicateAtomicGroupOperation)
        HRESULT ( STDMETHODCALLTYPE *BeginReplicateAtomicGroupOperation )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ __RPC__in_opt IFabricOperationData *operationData,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *operationSequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, EndReplicateAtomicGroupOperation)
        HRESULT ( STDMETHODCALLTYPE *EndReplicateAtomicGroupOperation )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *operationSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, BeginReplicateAtomicGroupCommit)
        HRESULT ( STDMETHODCALLTYPE *BeginReplicateAtomicGroupCommit )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *commitSequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, EndReplicateAtomicGroupCommit)
        HRESULT ( STDMETHODCALLTYPE *EndReplicateAtomicGroupCommit )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *commitSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, BeginReplicateAtomicGroupRollback)
        HRESULT ( STDMETHODCALLTYPE *BeginReplicateAtomicGroupRollback )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *rollbackSequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricAtomicGroupStateReplicator, EndReplicateAtomicGroupRollback)
        HRESULT ( STDMETHODCALLTYPE *EndReplicateAtomicGroupRollback )( 
            __RPC__in IFabricAtomicGroupStateReplicator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *rollbackSequenceNumber);
        
        END_INTERFACE
    } IFabricAtomicGroupStateReplicatorVtbl;

    interface IFabricAtomicGroupStateReplicator
    {
        CONST_VTBL struct IFabricAtomicGroupStateReplicatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricAtomicGroupStateReplicator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricAtomicGroupStateReplicator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricAtomicGroupStateReplicator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricAtomicGroupStateReplicator_CreateAtomicGroup(This,AtomicGroupId)	\
    ( (This)->lpVtbl -> CreateAtomicGroup(This,AtomicGroupId) ) 

#define IFabricAtomicGroupStateReplicator_BeginReplicateAtomicGroupOperation(This,atomicGroupId,operationData,callback,operationSequenceNumber,context)	\
    ( (This)->lpVtbl -> BeginReplicateAtomicGroupOperation(This,atomicGroupId,operationData,callback,operationSequenceNumber,context) ) 

#define IFabricAtomicGroupStateReplicator_EndReplicateAtomicGroupOperation(This,context,operationSequenceNumber)	\
    ( (This)->lpVtbl -> EndReplicateAtomicGroupOperation(This,context,operationSequenceNumber) ) 

#define IFabricAtomicGroupStateReplicator_BeginReplicateAtomicGroupCommit(This,atomicGroupId,callback,commitSequenceNumber,context)	\
    ( (This)->lpVtbl -> BeginReplicateAtomicGroupCommit(This,atomicGroupId,callback,commitSequenceNumber,context) ) 

#define IFabricAtomicGroupStateReplicator_EndReplicateAtomicGroupCommit(This,context,commitSequenceNumber)	\
    ( (This)->lpVtbl -> EndReplicateAtomicGroupCommit(This,context,commitSequenceNumber) ) 

#define IFabricAtomicGroupStateReplicator_BeginReplicateAtomicGroupRollback(This,atomicGroupId,callback,rollbackSequenceNumber,context)	\
    ( (This)->lpVtbl -> BeginReplicateAtomicGroupRollback(This,atomicGroupId,callback,rollbackSequenceNumber,context) ) 

#define IFabricAtomicGroupStateReplicator_EndReplicateAtomicGroupRollback(This,context,rollbackSequenceNumber)	\
    ( (This)->lpVtbl -> EndReplicateAtomicGroupRollback(This,context,rollbackSequenceNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricAtomicGroupStateReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupFactory_INTERFACE_DEFINED__
#define __IFabricServiceGroupFactory_INTERFACE_DEFINED__

/* interface IFabricServiceGroupFactory */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3860d61d-1e51-4a65-b109-d93c11311657")
    IFabricServiceGroupFactory : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricServiceGroupFactoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricServiceGroupFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricServiceGroupFactory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricServiceGroupFactory * This);
        
        END_INTERFACE
    } IFabricServiceGroupFactoryVtbl;

    interface IFabricServiceGroupFactory
    {
        CONST_VTBL struct IFabricServiceGroupFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricServiceGroupFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricServiceGroupFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricServiceGroupFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricServiceGroupFactory_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupFactoryBuilder_INTERFACE_DEFINED__
#define __IFabricServiceGroupFactoryBuilder_INTERFACE_DEFINED__

/* interface IFabricServiceGroupFactoryBuilder */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupFactoryBuilder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a9fe8b06-19b1-49e6-8911-41d9d9219e1c")
    IFabricServiceGroupFactoryBuilder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddStatelessServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR memberServiceType,
            /* [in] */ __RPC__in_opt IFabricStatelessServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddStatefulServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR memberServiceType,
            /* [in] */ __RPC__in_opt IFabricStatefulServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveServiceFactory( 
            /* [in] */ __RPC__in LPCWSTR memberServiceType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ToServiceGroupFactory( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricServiceGroupFactory **factory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricServiceGroupFactoryBuilderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This);
        
        DECLSPEC_XFGVIRT(IFabricServiceGroupFactoryBuilder, AddStatelessServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *AddStatelessServiceFactory )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This,
            /* [in] */ __RPC__in LPCWSTR memberServiceType,
            /* [in] */ __RPC__in_opt IFabricStatelessServiceFactory *factory);
        
        DECLSPEC_XFGVIRT(IFabricServiceGroupFactoryBuilder, AddStatefulServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *AddStatefulServiceFactory )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This,
            /* [in] */ __RPC__in LPCWSTR memberServiceType,
            /* [in] */ __RPC__in_opt IFabricStatefulServiceFactory *factory);
        
        DECLSPEC_XFGVIRT(IFabricServiceGroupFactoryBuilder, RemoveServiceFactory)
        HRESULT ( STDMETHODCALLTYPE *RemoveServiceFactory )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This,
            /* [in] */ __RPC__in LPCWSTR memberServiceType);
        
        DECLSPEC_XFGVIRT(IFabricServiceGroupFactoryBuilder, ToServiceGroupFactory)
        HRESULT ( STDMETHODCALLTYPE *ToServiceGroupFactory )( 
            __RPC__in IFabricServiceGroupFactoryBuilder * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricServiceGroupFactory **factory);
        
        END_INTERFACE
    } IFabricServiceGroupFactoryBuilderVtbl;

    interface IFabricServiceGroupFactoryBuilder
    {
        CONST_VTBL struct IFabricServiceGroupFactoryBuilderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricServiceGroupFactoryBuilder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricServiceGroupFactoryBuilder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricServiceGroupFactoryBuilder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricServiceGroupFactoryBuilder_AddStatelessServiceFactory(This,memberServiceType,factory)	\
    ( (This)->lpVtbl -> AddStatelessServiceFactory(This,memberServiceType,factory) ) 

#define IFabricServiceGroupFactoryBuilder_AddStatefulServiceFactory(This,memberServiceType,factory)	\
    ( (This)->lpVtbl -> AddStatefulServiceFactory(This,memberServiceType,factory) ) 

#define IFabricServiceGroupFactoryBuilder_RemoveServiceFactory(This,memberServiceType)	\
    ( (This)->lpVtbl -> RemoveServiceFactory(This,memberServiceType) ) 

#define IFabricServiceGroupFactoryBuilder_ToServiceGroupFactory(This,factory)	\
    ( (This)->lpVtbl -> ToServiceGroupFactory(This,factory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricServiceGroupFactoryBuilder_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupPartition_INTERFACE_DEFINED__
#define __IFabricServiceGroupPartition_INTERFACE_DEFINED__

/* interface IFabricServiceGroupPartition */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupPartition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2b24299a-7489-467f-8e7f-4507bff73b86")
    IFabricServiceGroupPartition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResolveMember( 
            /* [in] */ __RPC__in FABRIC_URI name,
            /* [in] */ __RPC__in REFIID riid,
            /* [retval][out] */ __RPC__deref_out_opt void **member) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricServiceGroupPartitionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricServiceGroupPartition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricServiceGroupPartition * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricServiceGroupPartition * This);
        
        DECLSPEC_XFGVIRT(IFabricServiceGroupPartition, ResolveMember)
        HRESULT ( STDMETHODCALLTYPE *ResolveMember )( 
            __RPC__in IFabricServiceGroupPartition * This,
            /* [in] */ __RPC__in FABRIC_URI name,
            /* [in] */ __RPC__in REFIID riid,
            /* [retval][out] */ __RPC__deref_out_opt void **member);
        
        END_INTERFACE
    } IFabricServiceGroupPartitionVtbl;

    interface IFabricServiceGroupPartition
    {
        CONST_VTBL struct IFabricServiceGroupPartitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricServiceGroupPartition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricServiceGroupPartition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricServiceGroupPartition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricServiceGroupPartition_ResolveMember(This,name,riid,member)	\
    ( (This)->lpVtbl -> ResolveMember(This,name,riid,member) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricServiceGroupPartition_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68a971e2-f15f-4d95-a79c-8a257909659e")
    IFabricCodePackageActivationContext : public IUnknown
    {
    public:
        virtual LPCWSTR STDMETHODCALLTYPE get_ContextId( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_CodePackageName( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_CodePackageVersion( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_WorkDirectory( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_LogDirectory( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_TempDirectory( void) = 0;
        
        virtual const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *STDMETHODCALLTYPE get_ServiceTypes( void) = 0;
        
        virtual const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *STDMETHODCALLTYPE get_ServiceGroupTypes( void) = 0;
        
        virtual const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *STDMETHODCALLTYPE get_ApplicationPrincipals( void) = 0;
        
        virtual const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *STDMETHODCALLTYPE get_ServiceEndpointResources( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceEndpointResource( 
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePackageNames( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConfigurationPackageNames( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataPackageNames( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePackage( 
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConfigurationPackage( 
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataPackage( 
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterCodePackageChangeHandler( 
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterCodePackageChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterConfigurationPackageChangeHandler( 
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterConfigurationPackageChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterDataPackageChangeHandler( 
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterDataPackageChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivationContextVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ContextId)
        LPCWSTR ( STDMETHODCALLTYPE *get_ContextId )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageName)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageName )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageVersion)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageVersion )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_WorkDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_WorkDirectory )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_LogDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_LogDirectory )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_TempDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_TempDirectory )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceTypes)
        const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceTypes )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceGroupTypes)
        const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceGroupTypes )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ApplicationPrincipals)
        const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *( STDMETHODCALLTYPE *get_ApplicationPrincipals )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceEndpointResources)
        const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceEndpointResources )( 
            __RPC__in IFabricCodePackageActivationContext * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetServiceEndpointResource)
        HRESULT ( STDMETHODCALLTYPE *GetServiceEndpointResource )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackageNames )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackage)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackage )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackage)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackage )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackage)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackage )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext * This,
            /* [in] */ LONGLONG callbackHandle);
        
        END_INTERFACE
    } IFabricCodePackageActivationContextVtbl;

    interface IFabricCodePackageActivationContext
    {
        CONST_VTBL struct IFabricCodePackageActivationContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivationContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivationContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivationContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivationContext_get_ContextId(This)	\
    ( (This)->lpVtbl -> get_ContextId(This) ) 

#define IFabricCodePackageActivationContext_get_CodePackageName(This)	\
    ( (This)->lpVtbl -> get_CodePackageName(This) ) 

#define IFabricCodePackageActivationContext_get_CodePackageVersion(This)	\
    ( (This)->lpVtbl -> get_CodePackageVersion(This) ) 

#define IFabricCodePackageActivationContext_get_WorkDirectory(This)	\
    ( (This)->lpVtbl -> get_WorkDirectory(This) ) 

#define IFabricCodePackageActivationContext_get_LogDirectory(This)	\
    ( (This)->lpVtbl -> get_LogDirectory(This) ) 

#define IFabricCodePackageActivationContext_get_TempDirectory(This)	\
    ( (This)->lpVtbl -> get_TempDirectory(This) ) 

#define IFabricCodePackageActivationContext_get_ServiceTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceTypes(This) ) 

#define IFabricCodePackageActivationContext_get_ServiceGroupTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceGroupTypes(This) ) 

#define IFabricCodePackageActivationContext_get_ApplicationPrincipals(This)	\
    ( (This)->lpVtbl -> get_ApplicationPrincipals(This) ) 

#define IFabricCodePackageActivationContext_get_ServiceEndpointResources(This)	\
    ( (This)->lpVtbl -> get_ServiceEndpointResources(This) ) 

#define IFabricCodePackageActivationContext_GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue)	\
    ( (This)->lpVtbl -> GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue) ) 

#define IFabricCodePackageActivationContext_GetCodePackageNames(This,names)	\
    ( (This)->lpVtbl -> GetCodePackageNames(This,names) ) 

#define IFabricCodePackageActivationContext_GetConfigurationPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetConfigurationPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext_GetDataPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetDataPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext_GetCodePackage(This,codePackageName,codePackage)	\
    ( (This)->lpVtbl -> GetCodePackage(This,codePackageName,codePackage) ) 

#define IFabricCodePackageActivationContext_GetConfigurationPackage(This,configPackageName,configPackage)	\
    ( (This)->lpVtbl -> GetConfigurationPackage(This,configPackageName,configPackage) ) 

#define IFabricCodePackageActivationContext_GetDataPackage(This,dataPackageName,dataPackage)	\
    ( (This)->lpVtbl -> GetDataPackage(This,dataPackageName,dataPackage) ) 

#define IFabricCodePackageActivationContext_RegisterCodePackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext_UnregisterCodePackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext_RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext_UnregisterConfigurationPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterConfigurationPackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext_RegisterDataPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterDataPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext_UnregisterDataPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterDataPackageChangeHandler(This,callbackHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivationContext_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext2_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext2_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6c83d5c1-1954-4b80-9175-0d0e7c8715c9")
    IFabricCodePackageActivationContext2 : public IFabricCodePackageActivationContext
    {
    public:
        virtual FABRIC_URI STDMETHODCALLTYPE get_ApplicationName( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_ApplicationTypeName( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceManifestName( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceManifestVersion( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivationContext2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ContextId)
        LPCWSTR ( STDMETHODCALLTYPE *get_ContextId )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageName)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageName )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageVersion)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageVersion )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_WorkDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_WorkDirectory )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_LogDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_LogDirectory )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_TempDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_TempDirectory )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceTypes)
        const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceTypes )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceGroupTypes)
        const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceGroupTypes )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ApplicationPrincipals)
        const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *( STDMETHODCALLTYPE *get_ApplicationPrincipals )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceEndpointResources)
        const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceEndpointResources )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetServiceEndpointResource)
        HRESULT ( STDMETHODCALLTYPE *GetServiceEndpointResource )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackageNames )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackage)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackage )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackage)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackage )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackage)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackage )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationName)
        FABRIC_URI ( STDMETHODCALLTYPE *get_ApplicationName )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationTypeName)
        LPCWSTR ( STDMETHODCALLTYPE *get_ApplicationTypeName )( 
            __RPC__in IFabricCodePackageActivationContext2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestName)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestName )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestName);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestVersion)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestVersion )( 
            __RPC__in IFabricCodePackageActivationContext2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestVersion);
        
        END_INTERFACE
    } IFabricCodePackageActivationContext2Vtbl;

    interface IFabricCodePackageActivationContext2
    {
        CONST_VTBL struct IFabricCodePackageActivationContext2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivationContext2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivationContext2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivationContext2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivationContext2_get_ContextId(This)	\
    ( (This)->lpVtbl -> get_ContextId(This) ) 

#define IFabricCodePackageActivationContext2_get_CodePackageName(This)	\
    ( (This)->lpVtbl -> get_CodePackageName(This) ) 

#define IFabricCodePackageActivationContext2_get_CodePackageVersion(This)	\
    ( (This)->lpVtbl -> get_CodePackageVersion(This) ) 

#define IFabricCodePackageActivationContext2_get_WorkDirectory(This)	\
    ( (This)->lpVtbl -> get_WorkDirectory(This) ) 

#define IFabricCodePackageActivationContext2_get_LogDirectory(This)	\
    ( (This)->lpVtbl -> get_LogDirectory(This) ) 

#define IFabricCodePackageActivationContext2_get_TempDirectory(This)	\
    ( (This)->lpVtbl -> get_TempDirectory(This) ) 

#define IFabricCodePackageActivationContext2_get_ServiceTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceTypes(This) ) 

#define IFabricCodePackageActivationContext2_get_ServiceGroupTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceGroupTypes(This) ) 

#define IFabricCodePackageActivationContext2_get_ApplicationPrincipals(This)	\
    ( (This)->lpVtbl -> get_ApplicationPrincipals(This) ) 

#define IFabricCodePackageActivationContext2_get_ServiceEndpointResources(This)	\
    ( (This)->lpVtbl -> get_ServiceEndpointResources(This) ) 

#define IFabricCodePackageActivationContext2_GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue)	\
    ( (This)->lpVtbl -> GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue) ) 

#define IFabricCodePackageActivationContext2_GetCodePackageNames(This,names)	\
    ( (This)->lpVtbl -> GetCodePackageNames(This,names) ) 

#define IFabricCodePackageActivationContext2_GetConfigurationPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetConfigurationPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext2_GetDataPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetDataPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext2_GetCodePackage(This,codePackageName,codePackage)	\
    ( (This)->lpVtbl -> GetCodePackage(This,codePackageName,codePackage) ) 

#define IFabricCodePackageActivationContext2_GetConfigurationPackage(This,configPackageName,configPackage)	\
    ( (This)->lpVtbl -> GetConfigurationPackage(This,configPackageName,configPackage) ) 

#define IFabricCodePackageActivationContext2_GetDataPackage(This,dataPackageName,dataPackage)	\
    ( (This)->lpVtbl -> GetDataPackage(This,dataPackageName,dataPackage) ) 

#define IFabricCodePackageActivationContext2_RegisterCodePackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext2_UnregisterCodePackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext2_RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext2_UnregisterConfigurationPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterConfigurationPackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext2_RegisterDataPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterDataPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext2_UnregisterDataPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterDataPackageChangeHandler(This,callbackHandle) ) 


#define IFabricCodePackageActivationContext2_get_ApplicationName(This)	\
    ( (This)->lpVtbl -> get_ApplicationName(This) ) 

#define IFabricCodePackageActivationContext2_get_ApplicationTypeName(This)	\
    ( (This)->lpVtbl -> get_ApplicationTypeName(This) ) 

#define IFabricCodePackageActivationContext2_GetServiceManifestName(This,serviceManifestName)	\
    ( (This)->lpVtbl -> GetServiceManifestName(This,serviceManifestName) ) 

#define IFabricCodePackageActivationContext2_GetServiceManifestVersion(This,serviceManifestVersion)	\
    ( (This)->lpVtbl -> GetServiceManifestVersion(This,serviceManifestVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivationContext2_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext3_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext3_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6efee900-f491-4b03-bc5b-3a70de103593")
    IFabricCodePackageActivationContext3 : public IFabricCodePackageActivationContext2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportApplicationHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedApplicationHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedServicePackageHealth( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivationContext3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ContextId)
        LPCWSTR ( STDMETHODCALLTYPE *get_ContextId )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageName)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageName )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageVersion)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageVersion )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_WorkDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_WorkDirectory )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_LogDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_LogDirectory )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_TempDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_TempDirectory )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceTypes)
        const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceTypes )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceGroupTypes)
        const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceGroupTypes )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ApplicationPrincipals)
        const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *( STDMETHODCALLTYPE *get_ApplicationPrincipals )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceEndpointResources)
        const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceEndpointResources )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetServiceEndpointResource)
        HRESULT ( STDMETHODCALLTYPE *GetServiceEndpointResource )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackageNames )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackage)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackage )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackage)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackage )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackage)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackage )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationName)
        FABRIC_URI ( STDMETHODCALLTYPE *get_ApplicationName )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationTypeName)
        LPCWSTR ( STDMETHODCALLTYPE *get_ApplicationTypeName )( 
            __RPC__in IFabricCodePackageActivationContext3 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestName)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestName )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestName);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestVersion)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestVersion )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestVersion);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedServicePackageHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth )( 
            __RPC__in IFabricCodePackageActivationContext3 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        END_INTERFACE
    } IFabricCodePackageActivationContext3Vtbl;

    interface IFabricCodePackageActivationContext3
    {
        CONST_VTBL struct IFabricCodePackageActivationContext3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivationContext3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivationContext3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivationContext3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivationContext3_get_ContextId(This)	\
    ( (This)->lpVtbl -> get_ContextId(This) ) 

#define IFabricCodePackageActivationContext3_get_CodePackageName(This)	\
    ( (This)->lpVtbl -> get_CodePackageName(This) ) 

#define IFabricCodePackageActivationContext3_get_CodePackageVersion(This)	\
    ( (This)->lpVtbl -> get_CodePackageVersion(This) ) 

#define IFabricCodePackageActivationContext3_get_WorkDirectory(This)	\
    ( (This)->lpVtbl -> get_WorkDirectory(This) ) 

#define IFabricCodePackageActivationContext3_get_LogDirectory(This)	\
    ( (This)->lpVtbl -> get_LogDirectory(This) ) 

#define IFabricCodePackageActivationContext3_get_TempDirectory(This)	\
    ( (This)->lpVtbl -> get_TempDirectory(This) ) 

#define IFabricCodePackageActivationContext3_get_ServiceTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceTypes(This) ) 

#define IFabricCodePackageActivationContext3_get_ServiceGroupTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceGroupTypes(This) ) 

#define IFabricCodePackageActivationContext3_get_ApplicationPrincipals(This)	\
    ( (This)->lpVtbl -> get_ApplicationPrincipals(This) ) 

#define IFabricCodePackageActivationContext3_get_ServiceEndpointResources(This)	\
    ( (This)->lpVtbl -> get_ServiceEndpointResources(This) ) 

#define IFabricCodePackageActivationContext3_GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue)	\
    ( (This)->lpVtbl -> GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue) ) 

#define IFabricCodePackageActivationContext3_GetCodePackageNames(This,names)	\
    ( (This)->lpVtbl -> GetCodePackageNames(This,names) ) 

#define IFabricCodePackageActivationContext3_GetConfigurationPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetConfigurationPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext3_GetDataPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetDataPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext3_GetCodePackage(This,codePackageName,codePackage)	\
    ( (This)->lpVtbl -> GetCodePackage(This,codePackageName,codePackage) ) 

#define IFabricCodePackageActivationContext3_GetConfigurationPackage(This,configPackageName,configPackage)	\
    ( (This)->lpVtbl -> GetConfigurationPackage(This,configPackageName,configPackage) ) 

#define IFabricCodePackageActivationContext3_GetDataPackage(This,dataPackageName,dataPackage)	\
    ( (This)->lpVtbl -> GetDataPackage(This,dataPackageName,dataPackage) ) 

#define IFabricCodePackageActivationContext3_RegisterCodePackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext3_UnregisterCodePackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext3_RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext3_UnregisterConfigurationPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterConfigurationPackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext3_RegisterDataPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterDataPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext3_UnregisterDataPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterDataPackageChangeHandler(This,callbackHandle) ) 


#define IFabricCodePackageActivationContext3_get_ApplicationName(This)	\
    ( (This)->lpVtbl -> get_ApplicationName(This) ) 

#define IFabricCodePackageActivationContext3_get_ApplicationTypeName(This)	\
    ( (This)->lpVtbl -> get_ApplicationTypeName(This) ) 

#define IFabricCodePackageActivationContext3_GetServiceManifestName(This,serviceManifestName)	\
    ( (This)->lpVtbl -> GetServiceManifestName(This,serviceManifestName) ) 

#define IFabricCodePackageActivationContext3_GetServiceManifestVersion(This,serviceManifestVersion)	\
    ( (This)->lpVtbl -> GetServiceManifestVersion(This,serviceManifestVersion) ) 


#define IFabricCodePackageActivationContext3_ReportApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext3_ReportDeployedApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext3_ReportDeployedServicePackageHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth(This,healthInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivationContext3_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext4_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext4_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99efebb6-a7b4-4d45-b45e-f191a66eef03")
    IFabricCodePackageActivationContext4 : public IFabricCodePackageActivationContext3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportApplicationHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedApplicationHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedServicePackageHealth2( 
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivationContext4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ContextId)
        LPCWSTR ( STDMETHODCALLTYPE *get_ContextId )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageName)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageName )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageVersion)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageVersion )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_WorkDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_WorkDirectory )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_LogDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_LogDirectory )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_TempDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_TempDirectory )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceTypes)
        const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceTypes )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceGroupTypes)
        const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceGroupTypes )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ApplicationPrincipals)
        const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *( STDMETHODCALLTYPE *get_ApplicationPrincipals )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceEndpointResources)
        const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceEndpointResources )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetServiceEndpointResource)
        HRESULT ( STDMETHODCALLTYPE *GetServiceEndpointResource )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackageNames )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackage)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackage )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackage)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackage )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackage)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackage )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationName)
        FABRIC_URI ( STDMETHODCALLTYPE *get_ApplicationName )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationTypeName)
        LPCWSTR ( STDMETHODCALLTYPE *get_ApplicationTypeName )( 
            __RPC__in IFabricCodePackageActivationContext4 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestName)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestName )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestName);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestVersion)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestVersion )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestVersion);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedServicePackageHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportApplicationHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportDeployedApplicationHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportDeployedServicePackageHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext4 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        END_INTERFACE
    } IFabricCodePackageActivationContext4Vtbl;

    interface IFabricCodePackageActivationContext4
    {
        CONST_VTBL struct IFabricCodePackageActivationContext4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivationContext4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivationContext4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivationContext4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivationContext4_get_ContextId(This)	\
    ( (This)->lpVtbl -> get_ContextId(This) ) 

#define IFabricCodePackageActivationContext4_get_CodePackageName(This)	\
    ( (This)->lpVtbl -> get_CodePackageName(This) ) 

#define IFabricCodePackageActivationContext4_get_CodePackageVersion(This)	\
    ( (This)->lpVtbl -> get_CodePackageVersion(This) ) 

#define IFabricCodePackageActivationContext4_get_WorkDirectory(This)	\
    ( (This)->lpVtbl -> get_WorkDirectory(This) ) 

#define IFabricCodePackageActivationContext4_get_LogDirectory(This)	\
    ( (This)->lpVtbl -> get_LogDirectory(This) ) 

#define IFabricCodePackageActivationContext4_get_TempDirectory(This)	\
    ( (This)->lpVtbl -> get_TempDirectory(This) ) 

#define IFabricCodePackageActivationContext4_get_ServiceTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceTypes(This) ) 

#define IFabricCodePackageActivationContext4_get_ServiceGroupTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceGroupTypes(This) ) 

#define IFabricCodePackageActivationContext4_get_ApplicationPrincipals(This)	\
    ( (This)->lpVtbl -> get_ApplicationPrincipals(This) ) 

#define IFabricCodePackageActivationContext4_get_ServiceEndpointResources(This)	\
    ( (This)->lpVtbl -> get_ServiceEndpointResources(This) ) 

#define IFabricCodePackageActivationContext4_GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue)	\
    ( (This)->lpVtbl -> GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue) ) 

#define IFabricCodePackageActivationContext4_GetCodePackageNames(This,names)	\
    ( (This)->lpVtbl -> GetCodePackageNames(This,names) ) 

#define IFabricCodePackageActivationContext4_GetConfigurationPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetConfigurationPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext4_GetDataPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetDataPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext4_GetCodePackage(This,codePackageName,codePackage)	\
    ( (This)->lpVtbl -> GetCodePackage(This,codePackageName,codePackage) ) 

#define IFabricCodePackageActivationContext4_GetConfigurationPackage(This,configPackageName,configPackage)	\
    ( (This)->lpVtbl -> GetConfigurationPackage(This,configPackageName,configPackage) ) 

#define IFabricCodePackageActivationContext4_GetDataPackage(This,dataPackageName,dataPackage)	\
    ( (This)->lpVtbl -> GetDataPackage(This,dataPackageName,dataPackage) ) 

#define IFabricCodePackageActivationContext4_RegisterCodePackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext4_UnregisterCodePackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext4_RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext4_UnregisterConfigurationPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterConfigurationPackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext4_RegisterDataPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterDataPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext4_UnregisterDataPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterDataPackageChangeHandler(This,callbackHandle) ) 


#define IFabricCodePackageActivationContext4_get_ApplicationName(This)	\
    ( (This)->lpVtbl -> get_ApplicationName(This) ) 

#define IFabricCodePackageActivationContext4_get_ApplicationTypeName(This)	\
    ( (This)->lpVtbl -> get_ApplicationTypeName(This) ) 

#define IFabricCodePackageActivationContext4_GetServiceManifestName(This,serviceManifestName)	\
    ( (This)->lpVtbl -> GetServiceManifestName(This,serviceManifestName) ) 

#define IFabricCodePackageActivationContext4_GetServiceManifestVersion(This,serviceManifestVersion)	\
    ( (This)->lpVtbl -> GetServiceManifestVersion(This,serviceManifestVersion) ) 


#define IFabricCodePackageActivationContext4_ReportApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext4_ReportDeployedApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext4_ReportDeployedServicePackageHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth(This,healthInfo) ) 


#define IFabricCodePackageActivationContext4_ReportApplicationHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportApplicationHealth2(This,healthInfo,sendOptions) ) 

#define IFabricCodePackageActivationContext4_ReportDeployedApplicationHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth2(This,healthInfo,sendOptions) ) 

#define IFabricCodePackageActivationContext4_ReportDeployedServicePackageHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth2(This,healthInfo,sendOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivationContext4_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext5_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext5_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe45387e-8711-4949-ac36-31dc95035513")
    IFabricCodePackageActivationContext5 : public IFabricCodePackageActivationContext4
    {
    public:
        virtual LPCWSTR STDMETHODCALLTYPE get_ServiceListenAddress( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_ServicePublishAddress( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivationContext5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ContextId)
        LPCWSTR ( STDMETHODCALLTYPE *get_ContextId )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageName)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageName )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageVersion)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageVersion )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_WorkDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_WorkDirectory )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_LogDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_LogDirectory )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_TempDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_TempDirectory )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceTypes)
        const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceTypes )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceGroupTypes)
        const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceGroupTypes )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ApplicationPrincipals)
        const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *( STDMETHODCALLTYPE *get_ApplicationPrincipals )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceEndpointResources)
        const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceEndpointResources )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetServiceEndpointResource)
        HRESULT ( STDMETHODCALLTYPE *GetServiceEndpointResource )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackageNames )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackage)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackage )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackage)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackage )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackage)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackage )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationName)
        FABRIC_URI ( STDMETHODCALLTYPE *get_ApplicationName )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationTypeName)
        LPCWSTR ( STDMETHODCALLTYPE *get_ApplicationTypeName )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestName)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestName )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestName);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestVersion)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestVersion )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestVersion);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedServicePackageHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportApplicationHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportDeployedApplicationHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportDeployedServicePackageHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext5 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext5, get_ServiceListenAddress)
        LPCWSTR ( STDMETHODCALLTYPE *get_ServiceListenAddress )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext5, get_ServicePublishAddress)
        LPCWSTR ( STDMETHODCALLTYPE *get_ServicePublishAddress )( 
            __RPC__in IFabricCodePackageActivationContext5 * This);
        
        END_INTERFACE
    } IFabricCodePackageActivationContext5Vtbl;

    interface IFabricCodePackageActivationContext5
    {
        CONST_VTBL struct IFabricCodePackageActivationContext5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivationContext5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivationContext5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivationContext5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivationContext5_get_ContextId(This)	\
    ( (This)->lpVtbl -> get_ContextId(This) ) 

#define IFabricCodePackageActivationContext5_get_CodePackageName(This)	\
    ( (This)->lpVtbl -> get_CodePackageName(This) ) 

#define IFabricCodePackageActivationContext5_get_CodePackageVersion(This)	\
    ( (This)->lpVtbl -> get_CodePackageVersion(This) ) 

#define IFabricCodePackageActivationContext5_get_WorkDirectory(This)	\
    ( (This)->lpVtbl -> get_WorkDirectory(This) ) 

#define IFabricCodePackageActivationContext5_get_LogDirectory(This)	\
    ( (This)->lpVtbl -> get_LogDirectory(This) ) 

#define IFabricCodePackageActivationContext5_get_TempDirectory(This)	\
    ( (This)->lpVtbl -> get_TempDirectory(This) ) 

#define IFabricCodePackageActivationContext5_get_ServiceTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceTypes(This) ) 

#define IFabricCodePackageActivationContext5_get_ServiceGroupTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceGroupTypes(This) ) 

#define IFabricCodePackageActivationContext5_get_ApplicationPrincipals(This)	\
    ( (This)->lpVtbl -> get_ApplicationPrincipals(This) ) 

#define IFabricCodePackageActivationContext5_get_ServiceEndpointResources(This)	\
    ( (This)->lpVtbl -> get_ServiceEndpointResources(This) ) 

#define IFabricCodePackageActivationContext5_GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue)	\
    ( (This)->lpVtbl -> GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue) ) 

#define IFabricCodePackageActivationContext5_GetCodePackageNames(This,names)	\
    ( (This)->lpVtbl -> GetCodePackageNames(This,names) ) 

#define IFabricCodePackageActivationContext5_GetConfigurationPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetConfigurationPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext5_GetDataPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetDataPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext5_GetCodePackage(This,codePackageName,codePackage)	\
    ( (This)->lpVtbl -> GetCodePackage(This,codePackageName,codePackage) ) 

#define IFabricCodePackageActivationContext5_GetConfigurationPackage(This,configPackageName,configPackage)	\
    ( (This)->lpVtbl -> GetConfigurationPackage(This,configPackageName,configPackage) ) 

#define IFabricCodePackageActivationContext5_GetDataPackage(This,dataPackageName,dataPackage)	\
    ( (This)->lpVtbl -> GetDataPackage(This,dataPackageName,dataPackage) ) 

#define IFabricCodePackageActivationContext5_RegisterCodePackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext5_UnregisterCodePackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext5_RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext5_UnregisterConfigurationPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterConfigurationPackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext5_RegisterDataPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterDataPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext5_UnregisterDataPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterDataPackageChangeHandler(This,callbackHandle) ) 


#define IFabricCodePackageActivationContext5_get_ApplicationName(This)	\
    ( (This)->lpVtbl -> get_ApplicationName(This) ) 

#define IFabricCodePackageActivationContext5_get_ApplicationTypeName(This)	\
    ( (This)->lpVtbl -> get_ApplicationTypeName(This) ) 

#define IFabricCodePackageActivationContext5_GetServiceManifestName(This,serviceManifestName)	\
    ( (This)->lpVtbl -> GetServiceManifestName(This,serviceManifestName) ) 

#define IFabricCodePackageActivationContext5_GetServiceManifestVersion(This,serviceManifestVersion)	\
    ( (This)->lpVtbl -> GetServiceManifestVersion(This,serviceManifestVersion) ) 


#define IFabricCodePackageActivationContext5_ReportApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext5_ReportDeployedApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext5_ReportDeployedServicePackageHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth(This,healthInfo) ) 


#define IFabricCodePackageActivationContext5_ReportApplicationHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportApplicationHealth2(This,healthInfo,sendOptions) ) 

#define IFabricCodePackageActivationContext5_ReportDeployedApplicationHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth2(This,healthInfo,sendOptions) ) 

#define IFabricCodePackageActivationContext5_ReportDeployedServicePackageHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth2(This,healthInfo,sendOptions) ) 


#define IFabricCodePackageActivationContext5_get_ServiceListenAddress(This)	\
    ( (This)->lpVtbl -> get_ServiceListenAddress(This) ) 

#define IFabricCodePackageActivationContext5_get_ServicePublishAddress(This)	\
    ( (This)->lpVtbl -> get_ServicePublishAddress(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivationContext5_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext6_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext6_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa5fda9b-472c-45a0-9b60-a374691227a4")
    IFabricCodePackageActivationContext6 : public IFabricCodePackageActivationContext5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDirectory( 
            /* [in] */ __RPC__in LPCWSTR logicalDirectoryName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **directoryPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivationContext6Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ContextId)
        LPCWSTR ( STDMETHODCALLTYPE *get_ContextId )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageName)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageName )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_CodePackageVersion)
        LPCWSTR ( STDMETHODCALLTYPE *get_CodePackageVersion )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_WorkDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_WorkDirectory )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_LogDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_LogDirectory )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_TempDirectory)
        LPCWSTR ( STDMETHODCALLTYPE *get_TempDirectory )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceTypes)
        const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceTypes )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceGroupTypes)
        const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceGroupTypes )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ApplicationPrincipals)
        const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *( STDMETHODCALLTYPE *get_ApplicationPrincipals )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, get_ServiceEndpointResources)
        const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *( STDMETHODCALLTYPE *get_ServiceEndpointResources )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetServiceEndpointResource)
        HRESULT ( STDMETHODCALLTYPE *GetServiceEndpointResource )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackageNames )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackageNames)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackageNames )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringListResult **names);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetCodePackage)
        HRESULT ( STDMETHODCALLTYPE *GetCodePackage )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in LPCWSTR codePackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricCodePackage **codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetConfigurationPackage)
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationPackage )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in LPCWSTR configPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricConfigurationPackage **configPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, GetDataPackage)
        HRESULT ( STDMETHODCALLTYPE *GetDataPackage )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in LPCWSTR dataPackageName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricDataPackage **dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterCodePackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterConfigurationPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterConfigurationPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, RegisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in_opt IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ __RPC__out LONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext, UnregisterDataPackageChangeHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterDataPackageChangeHandler )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ LONGLONG callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationName)
        FABRIC_URI ( STDMETHODCALLTYPE *get_ApplicationName )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, get_ApplicationTypeName)
        LPCWSTR ( STDMETHODCALLTYPE *get_ApplicationTypeName )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestName)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestName )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestName);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext2, GetServiceManifestVersion)
        HRESULT ( STDMETHODCALLTYPE *GetServiceManifestVersion )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceManifestVersion);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedApplicationHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext3, ReportDeployedServicePackageHealth)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportApplicationHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportApplicationHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportDeployedApplicationHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedApplicationHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext4, ReportDeployedServicePackageHealth2)
        HRESULT ( STDMETHODCALLTYPE *ReportDeployedServicePackageHealth2 )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ __RPC__in const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext5, get_ServiceListenAddress)
        LPCWSTR ( STDMETHODCALLTYPE *get_ServiceListenAddress )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext5, get_ServicePublishAddress)
        LPCWSTR ( STDMETHODCALLTYPE *get_ServicePublishAddress )( 
            __RPC__in IFabricCodePackageActivationContext6 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivationContext6, GetDirectory)
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )( 
            __RPC__in IFabricCodePackageActivationContext6 * This,
            /* [in] */ __RPC__in LPCWSTR logicalDirectoryName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **directoryPath);
        
        END_INTERFACE
    } IFabricCodePackageActivationContext6Vtbl;

    interface IFabricCodePackageActivationContext6
    {
        CONST_VTBL struct IFabricCodePackageActivationContext6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivationContext6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivationContext6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivationContext6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivationContext6_get_ContextId(This)	\
    ( (This)->lpVtbl -> get_ContextId(This) ) 

#define IFabricCodePackageActivationContext6_get_CodePackageName(This)	\
    ( (This)->lpVtbl -> get_CodePackageName(This) ) 

#define IFabricCodePackageActivationContext6_get_CodePackageVersion(This)	\
    ( (This)->lpVtbl -> get_CodePackageVersion(This) ) 

#define IFabricCodePackageActivationContext6_get_WorkDirectory(This)	\
    ( (This)->lpVtbl -> get_WorkDirectory(This) ) 

#define IFabricCodePackageActivationContext6_get_LogDirectory(This)	\
    ( (This)->lpVtbl -> get_LogDirectory(This) ) 

#define IFabricCodePackageActivationContext6_get_TempDirectory(This)	\
    ( (This)->lpVtbl -> get_TempDirectory(This) ) 

#define IFabricCodePackageActivationContext6_get_ServiceTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceTypes(This) ) 

#define IFabricCodePackageActivationContext6_get_ServiceGroupTypes(This)	\
    ( (This)->lpVtbl -> get_ServiceGroupTypes(This) ) 

#define IFabricCodePackageActivationContext6_get_ApplicationPrincipals(This)	\
    ( (This)->lpVtbl -> get_ApplicationPrincipals(This) ) 

#define IFabricCodePackageActivationContext6_get_ServiceEndpointResources(This)	\
    ( (This)->lpVtbl -> get_ServiceEndpointResources(This) ) 

#define IFabricCodePackageActivationContext6_GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue)	\
    ( (This)->lpVtbl -> GetServiceEndpointResource(This,serviceEndpointResourceName,bufferedValue) ) 

#define IFabricCodePackageActivationContext6_GetCodePackageNames(This,names)	\
    ( (This)->lpVtbl -> GetCodePackageNames(This,names) ) 

#define IFabricCodePackageActivationContext6_GetConfigurationPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetConfigurationPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext6_GetDataPackageNames(This,names)	\
    ( (This)->lpVtbl -> GetDataPackageNames(This,names) ) 

#define IFabricCodePackageActivationContext6_GetCodePackage(This,codePackageName,codePackage)	\
    ( (This)->lpVtbl -> GetCodePackage(This,codePackageName,codePackage) ) 

#define IFabricCodePackageActivationContext6_GetConfigurationPackage(This,configPackageName,configPackage)	\
    ( (This)->lpVtbl -> GetConfigurationPackage(This,configPackageName,configPackage) ) 

#define IFabricCodePackageActivationContext6_GetDataPackage(This,dataPackageName,dataPackage)	\
    ( (This)->lpVtbl -> GetDataPackage(This,dataPackageName,dataPackage) ) 

#define IFabricCodePackageActivationContext6_RegisterCodePackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext6_UnregisterCodePackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext6_RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterConfigurationPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext6_UnregisterConfigurationPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterConfigurationPackageChangeHandler(This,callbackHandle) ) 

#define IFabricCodePackageActivationContext6_RegisterDataPackageChangeHandler(This,callback,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterDataPackageChangeHandler(This,callback,callbackHandle) ) 

#define IFabricCodePackageActivationContext6_UnregisterDataPackageChangeHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterDataPackageChangeHandler(This,callbackHandle) ) 


#define IFabricCodePackageActivationContext6_get_ApplicationName(This)	\
    ( (This)->lpVtbl -> get_ApplicationName(This) ) 

#define IFabricCodePackageActivationContext6_get_ApplicationTypeName(This)	\
    ( (This)->lpVtbl -> get_ApplicationTypeName(This) ) 

#define IFabricCodePackageActivationContext6_GetServiceManifestName(This,serviceManifestName)	\
    ( (This)->lpVtbl -> GetServiceManifestName(This,serviceManifestName) ) 

#define IFabricCodePackageActivationContext6_GetServiceManifestVersion(This,serviceManifestVersion)	\
    ( (This)->lpVtbl -> GetServiceManifestVersion(This,serviceManifestVersion) ) 


#define IFabricCodePackageActivationContext6_ReportApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext6_ReportDeployedApplicationHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth(This,healthInfo) ) 

#define IFabricCodePackageActivationContext6_ReportDeployedServicePackageHealth(This,healthInfo)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth(This,healthInfo) ) 


#define IFabricCodePackageActivationContext6_ReportApplicationHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportApplicationHealth2(This,healthInfo,sendOptions) ) 

#define IFabricCodePackageActivationContext6_ReportDeployedApplicationHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportDeployedApplicationHealth2(This,healthInfo,sendOptions) ) 

#define IFabricCodePackageActivationContext6_ReportDeployedServicePackageHealth2(This,healthInfo,sendOptions)	\
    ( (This)->lpVtbl -> ReportDeployedServicePackageHealth2(This,healthInfo,sendOptions) ) 


#define IFabricCodePackageActivationContext6_get_ServiceListenAddress(This)	\
    ( (This)->lpVtbl -> get_ServiceListenAddress(This) ) 

#define IFabricCodePackageActivationContext6_get_ServicePublishAddress(This)	\
    ( (This)->lpVtbl -> get_ServicePublishAddress(This) ) 


#define IFabricCodePackageActivationContext6_GetDirectory(This,logicalDirectoryName,directoryPath)	\
    ( (This)->lpVtbl -> GetDirectory(This,logicalDirectoryName,directoryPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivationContext6_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackage_INTERFACE_DEFINED__
#define __IFabricCodePackage_INTERFACE_DEFINED__

/* interface IFabricCodePackage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20792b45-4d13-41a4-af13-346e529f00c5")
    IFabricCodePackage : public IUnknown
    {
    public:
        virtual const FABRIC_CODE_PACKAGE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_Path( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackage * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackage, get_Description)
        const FABRIC_CODE_PACKAGE_DESCRIPTION *( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IFabricCodePackage * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackage, get_Path)
        LPCWSTR ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in IFabricCodePackage * This);
        
        END_INTERFACE
    } IFabricCodePackageVtbl;

    interface IFabricCodePackage
    {
        CONST_VTBL struct IFabricCodePackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackage_get_Description(This)	\
    ( (This)->lpVtbl -> get_Description(This) ) 

#define IFabricCodePackage_get_Path(This)	\
    ( (This)->lpVtbl -> get_Path(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackage_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackage2_INTERFACE_DEFINED__
#define __IFabricCodePackage2_INTERFACE_DEFINED__

/* interface IFabricCodePackage2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cdf0a4e6-ad80-4cd6-b67e-e4c002428600")
    IFabricCodePackage2 : public IFabricCodePackage
    {
    public:
        virtual const FABRIC_RUNAS_POLICY_DESCRIPTION *STDMETHODCALLTYPE get_SetupEntryPointRunAsPolicy( void) = 0;
        
        virtual const FABRIC_RUNAS_POLICY_DESCRIPTION *STDMETHODCALLTYPE get_EntryPointRunAsPolicy( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackage2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackage2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackage2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackage, get_Description)
        const FABRIC_CODE_PACKAGE_DESCRIPTION *( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IFabricCodePackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackage, get_Path)
        LPCWSTR ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in IFabricCodePackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackage2, get_SetupEntryPointRunAsPolicy)
        const FABRIC_RUNAS_POLICY_DESCRIPTION *( STDMETHODCALLTYPE *get_SetupEntryPointRunAsPolicy )( 
            __RPC__in IFabricCodePackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackage2, get_EntryPointRunAsPolicy)
        const FABRIC_RUNAS_POLICY_DESCRIPTION *( STDMETHODCALLTYPE *get_EntryPointRunAsPolicy )( 
            __RPC__in IFabricCodePackage2 * This);
        
        END_INTERFACE
    } IFabricCodePackage2Vtbl;

    interface IFabricCodePackage2
    {
        CONST_VTBL struct IFabricCodePackage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackage2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackage2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackage2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackage2_get_Description(This)	\
    ( (This)->lpVtbl -> get_Description(This) ) 

#define IFabricCodePackage2_get_Path(This)	\
    ( (This)->lpVtbl -> get_Path(This) ) 


#define IFabricCodePackage2_get_SetupEntryPointRunAsPolicy(This)	\
    ( (This)->lpVtbl -> get_SetupEntryPointRunAsPolicy(This) ) 

#define IFabricCodePackage2_get_EntryPointRunAsPolicy(This)	\
    ( (This)->lpVtbl -> get_EntryPointRunAsPolicy(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackage2_INTERFACE_DEFINED__ */


#ifndef __IFabricConfigurationPackage_INTERFACE_DEFINED__
#define __IFabricConfigurationPackage_INTERFACE_DEFINED__

/* interface IFabricConfigurationPackage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricConfigurationPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ac4c3bfa-2563-46b7-a71d-2dca7b0a8f4d")
    IFabricConfigurationPackage : public IUnknown
    {
    public:
        virtual const FABRIC_CONFIGURATION_PACKAGE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_Path( void) = 0;
        
        virtual const FABRIC_CONFIGURATION_SETTINGS *STDMETHODCALLTYPE get_Settings( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSection( 
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_CONFIGURATION_SECTION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [in] */ __RPC__in LPCWSTR parameterName,
            /* [out] */ __RPC__out BOOLEAN *isEncrypted,
            /* [retval][out] */ __RPC__deref_out_opt LPCWSTR *bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DecryptValue( 
            /* [in] */ __RPC__in LPCWSTR encryptedValue,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **decryptedValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricConfigurationPackageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricConfigurationPackage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricConfigurationPackage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricConfigurationPackage * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, get_Description)
        const FABRIC_CONFIGURATION_PACKAGE_DESCRIPTION *( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IFabricConfigurationPackage * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, get_Path)
        LPCWSTR ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in IFabricConfigurationPackage * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, get_Settings)
        const FABRIC_CONFIGURATION_SETTINGS *( STDMETHODCALLTYPE *get_Settings )( 
            __RPC__in IFabricConfigurationPackage * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, GetSection)
        HRESULT ( STDMETHODCALLTYPE *GetSection )( 
            __RPC__in IFabricConfigurationPackage * This,
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_CONFIGURATION_SECTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, GetValue)
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in IFabricConfigurationPackage * This,
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [in] */ __RPC__in LPCWSTR parameterName,
            /* [out] */ __RPC__out BOOLEAN *isEncrypted,
            /* [retval][out] */ __RPC__deref_out_opt LPCWSTR *bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, DecryptValue)
        HRESULT ( STDMETHODCALLTYPE *DecryptValue )( 
            __RPC__in IFabricConfigurationPackage * This,
            /* [in] */ __RPC__in LPCWSTR encryptedValue,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **decryptedValue);
        
        END_INTERFACE
    } IFabricConfigurationPackageVtbl;

    interface IFabricConfigurationPackage
    {
        CONST_VTBL struct IFabricConfigurationPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricConfigurationPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricConfigurationPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricConfigurationPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricConfigurationPackage_get_Description(This)	\
    ( (This)->lpVtbl -> get_Description(This) ) 

#define IFabricConfigurationPackage_get_Path(This)	\
    ( (This)->lpVtbl -> get_Path(This) ) 

#define IFabricConfigurationPackage_get_Settings(This)	\
    ( (This)->lpVtbl -> get_Settings(This) ) 

#define IFabricConfigurationPackage_GetSection(This,sectionName,bufferedValue)	\
    ( (This)->lpVtbl -> GetSection(This,sectionName,bufferedValue) ) 

#define IFabricConfigurationPackage_GetValue(This,sectionName,parameterName,isEncrypted,bufferedValue)	\
    ( (This)->lpVtbl -> GetValue(This,sectionName,parameterName,isEncrypted,bufferedValue) ) 

#define IFabricConfigurationPackage_DecryptValue(This,encryptedValue,decryptedValue)	\
    ( (This)->lpVtbl -> DecryptValue(This,encryptedValue,decryptedValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricConfigurationPackage_INTERFACE_DEFINED__ */


#ifndef __IFabricConfigurationPackage2_INTERFACE_DEFINED__
#define __IFabricConfigurationPackage2_INTERFACE_DEFINED__

/* interface IFabricConfigurationPackage2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricConfigurationPackage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d3161f31-708a-4f83-91ff-f2af15f74a2f")
    IFabricConfigurationPackage2 : public IFabricConfigurationPackage
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetValues( 
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [in] */ __RPC__in LPCWSTR parameterPrefix,
            /* [retval][out] */ __RPC__deref_out_opt FABRIC_CONFIGURATION_PARAMETER_LIST **bufferedValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricConfigurationPackage2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricConfigurationPackage2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricConfigurationPackage2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricConfigurationPackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, get_Description)
        const FABRIC_CONFIGURATION_PACKAGE_DESCRIPTION *( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IFabricConfigurationPackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, get_Path)
        LPCWSTR ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in IFabricConfigurationPackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, get_Settings)
        const FABRIC_CONFIGURATION_SETTINGS *( STDMETHODCALLTYPE *get_Settings )( 
            __RPC__in IFabricConfigurationPackage2 * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, GetSection)
        HRESULT ( STDMETHODCALLTYPE *GetSection )( 
            __RPC__in IFabricConfigurationPackage2 * This,
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [retval][out] */ __RPC__deref_out_opt const FABRIC_CONFIGURATION_SECTION **bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, GetValue)
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in IFabricConfigurationPackage2 * This,
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [in] */ __RPC__in LPCWSTR parameterName,
            /* [out] */ __RPC__out BOOLEAN *isEncrypted,
            /* [retval][out] */ __RPC__deref_out_opt LPCWSTR *bufferedValue);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage, DecryptValue)
        HRESULT ( STDMETHODCALLTYPE *DecryptValue )( 
            __RPC__in IFabricConfigurationPackage2 * This,
            /* [in] */ __RPC__in LPCWSTR encryptedValue,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **decryptedValue);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackage2, GetValues)
        HRESULT ( STDMETHODCALLTYPE *GetValues )( 
            __RPC__in IFabricConfigurationPackage2 * This,
            /* [in] */ __RPC__in LPCWSTR sectionName,
            /* [in] */ __RPC__in LPCWSTR parameterPrefix,
            /* [retval][out] */ __RPC__deref_out_opt FABRIC_CONFIGURATION_PARAMETER_LIST **bufferedValue);
        
        END_INTERFACE
    } IFabricConfigurationPackage2Vtbl;

    interface IFabricConfigurationPackage2
    {
        CONST_VTBL struct IFabricConfigurationPackage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricConfigurationPackage2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricConfigurationPackage2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricConfigurationPackage2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricConfigurationPackage2_get_Description(This)	\
    ( (This)->lpVtbl -> get_Description(This) ) 

#define IFabricConfigurationPackage2_get_Path(This)	\
    ( (This)->lpVtbl -> get_Path(This) ) 

#define IFabricConfigurationPackage2_get_Settings(This)	\
    ( (This)->lpVtbl -> get_Settings(This) ) 

#define IFabricConfigurationPackage2_GetSection(This,sectionName,bufferedValue)	\
    ( (This)->lpVtbl -> GetSection(This,sectionName,bufferedValue) ) 

#define IFabricConfigurationPackage2_GetValue(This,sectionName,parameterName,isEncrypted,bufferedValue)	\
    ( (This)->lpVtbl -> GetValue(This,sectionName,parameterName,isEncrypted,bufferedValue) ) 

#define IFabricConfigurationPackage2_DecryptValue(This,encryptedValue,decryptedValue)	\
    ( (This)->lpVtbl -> DecryptValue(This,encryptedValue,decryptedValue) ) 


#define IFabricConfigurationPackage2_GetValues(This,sectionName,parameterPrefix,bufferedValue)	\
    ( (This)->lpVtbl -> GetValues(This,sectionName,parameterPrefix,bufferedValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricConfigurationPackage2_INTERFACE_DEFINED__ */


#ifndef __IFabricDataPackage_INTERFACE_DEFINED__
#define __IFabricDataPackage_INTERFACE_DEFINED__

/* interface IFabricDataPackage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricDataPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa67de09-3657-435f-a2f6-b3a17a0a4371")
    IFabricDataPackage : public IUnknown
    {
    public:
        virtual const FABRIC_DATA_PACKAGE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_Path( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricDataPackageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricDataPackage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricDataPackage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricDataPackage * This);
        
        DECLSPEC_XFGVIRT(IFabricDataPackage, get_Description)
        const FABRIC_DATA_PACKAGE_DESCRIPTION *( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IFabricDataPackage * This);
        
        DECLSPEC_XFGVIRT(IFabricDataPackage, get_Path)
        LPCWSTR ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in IFabricDataPackage * This);
        
        END_INTERFACE
    } IFabricDataPackageVtbl;

    interface IFabricDataPackage
    {
        CONST_VTBL struct IFabricDataPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricDataPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricDataPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricDataPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricDataPackage_get_Description(This)	\
    ( (This)->lpVtbl -> get_Description(This) ) 

#define IFabricDataPackage_get_Path(This)	\
    ( (This)->lpVtbl -> get_Path(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricDataPackage_INTERFACE_DEFINED__ */


#ifndef __IFabricConfigurationPackageChangeHandler_INTERFACE_DEFINED__
#define __IFabricConfigurationPackageChangeHandler_INTERFACE_DEFINED__

/* interface IFabricConfigurationPackageChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricConfigurationPackageChangeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c3954d48-b5ee-4ff4-9bc0-c30f6d0d3a85")
    IFabricConfigurationPackageChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnPackageAdded( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *configPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageRemoved( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *configPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageModified( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *previousConfigPackage,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *configPackage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricConfigurationPackageChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricConfigurationPackageChangeHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricConfigurationPackageChangeHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricConfigurationPackageChangeHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackageChangeHandler, OnPackageAdded)
        void ( STDMETHODCALLTYPE *OnPackageAdded )( 
            __RPC__in IFabricConfigurationPackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *configPackage);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackageChangeHandler, OnPackageRemoved)
        void ( STDMETHODCALLTYPE *OnPackageRemoved )( 
            __RPC__in IFabricConfigurationPackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *configPackage);
        
        DECLSPEC_XFGVIRT(IFabricConfigurationPackageChangeHandler, OnPackageModified)
        void ( STDMETHODCALLTYPE *OnPackageModified )( 
            __RPC__in IFabricConfigurationPackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *previousConfigPackage,
            /* [in] */ __RPC__in_opt IFabricConfigurationPackage *configPackage);
        
        END_INTERFACE
    } IFabricConfigurationPackageChangeHandlerVtbl;

    interface IFabricConfigurationPackageChangeHandler
    {
        CONST_VTBL struct IFabricConfigurationPackageChangeHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricConfigurationPackageChangeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricConfigurationPackageChangeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricConfigurationPackageChangeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricConfigurationPackageChangeHandler_OnPackageAdded(This,source,configPackage)	\
    ( (This)->lpVtbl -> OnPackageAdded(This,source,configPackage) ) 

#define IFabricConfigurationPackageChangeHandler_OnPackageRemoved(This,source,configPackage)	\
    ( (This)->lpVtbl -> OnPackageRemoved(This,source,configPackage) ) 

#define IFabricConfigurationPackageChangeHandler_OnPackageModified(This,source,previousConfigPackage,configPackage)	\
    ( (This)->lpVtbl -> OnPackageModified(This,source,previousConfigPackage,configPackage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricConfigurationPackageChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricDataPackageChangeHandler_INTERFACE_DEFINED__
#define __IFabricDataPackageChangeHandler_INTERFACE_DEFINED__

/* interface IFabricDataPackageChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricDataPackageChangeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8d0a726f-bd17-4b32-807b-be2a8024b2e0")
    IFabricDataPackageChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnPackageAdded( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricDataPackage *dataPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageRemoved( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricDataPackage *dataPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageModified( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricDataPackage *previousDataPackage,
            /* [in] */ __RPC__in_opt IFabricDataPackage *dataPackage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricDataPackageChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricDataPackageChangeHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricDataPackageChangeHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricDataPackageChangeHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricDataPackageChangeHandler, OnPackageAdded)
        void ( STDMETHODCALLTYPE *OnPackageAdded )( 
            __RPC__in IFabricDataPackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricDataPackage *dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricDataPackageChangeHandler, OnPackageRemoved)
        void ( STDMETHODCALLTYPE *OnPackageRemoved )( 
            __RPC__in IFabricDataPackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricDataPackage *dataPackage);
        
        DECLSPEC_XFGVIRT(IFabricDataPackageChangeHandler, OnPackageModified)
        void ( STDMETHODCALLTYPE *OnPackageModified )( 
            __RPC__in IFabricDataPackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricDataPackage *previousDataPackage,
            /* [in] */ __RPC__in_opt IFabricDataPackage *dataPackage);
        
        END_INTERFACE
    } IFabricDataPackageChangeHandlerVtbl;

    interface IFabricDataPackageChangeHandler
    {
        CONST_VTBL struct IFabricDataPackageChangeHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricDataPackageChangeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricDataPackageChangeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricDataPackageChangeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricDataPackageChangeHandler_OnPackageAdded(This,source,dataPackage)	\
    ( (This)->lpVtbl -> OnPackageAdded(This,source,dataPackage) ) 

#define IFabricDataPackageChangeHandler_OnPackageRemoved(This,source,dataPackage)	\
    ( (This)->lpVtbl -> OnPackageRemoved(This,source,dataPackage) ) 

#define IFabricDataPackageChangeHandler_OnPackageModified(This,source,previousDataPackage,dataPackage)	\
    ( (This)->lpVtbl -> OnPackageModified(This,source,previousDataPackage,dataPackage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricDataPackageChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricTransactionBase_INTERFACE_DEFINED__
#define __IFabricTransactionBase_INTERFACE_DEFINED__

/* interface IFabricTransactionBase */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransactionBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32d656a1-7ad5-47b8-bd66-a2e302626b7e")
    IFabricTransactionBase : public IUnknown
    {
    public:
        virtual const FABRIC_TRANSACTION_ID *STDMETHODCALLTYPE get_Id( void) = 0;
        
        virtual FABRIC_TRANSACTION_ISOLATION_LEVEL STDMETHODCALLTYPE get_IsolationLevel( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricTransactionBaseVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricTransactionBase * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricTransactionBase * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricTransactionBase * This);
        
        DECLSPEC_XFGVIRT(IFabricTransactionBase, get_Id)
        const FABRIC_TRANSACTION_ID *( STDMETHODCALLTYPE *get_Id )( 
            __RPC__in IFabricTransactionBase * This);
        
        DECLSPEC_XFGVIRT(IFabricTransactionBase, get_IsolationLevel)
        FABRIC_TRANSACTION_ISOLATION_LEVEL ( STDMETHODCALLTYPE *get_IsolationLevel )( 
            __RPC__in IFabricTransactionBase * This);
        
        END_INTERFACE
    } IFabricTransactionBaseVtbl;

    interface IFabricTransactionBase
    {
        CONST_VTBL struct IFabricTransactionBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricTransactionBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricTransactionBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricTransactionBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricTransactionBase_get_Id(This)	\
    ( (This)->lpVtbl -> get_Id(This) ) 

#define IFabricTransactionBase_get_IsolationLevel(This)	\
    ( (This)->lpVtbl -> get_IsolationLevel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricTransactionBase_INTERFACE_DEFINED__ */


#ifndef __IFabricTransaction_INTERFACE_DEFINED__
#define __IFabricTransaction_INTERFACE_DEFINED__

/* interface IFabricTransaction */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransaction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19ee48b4-6d4d-470b-ac1e-2d3996a173c8")
    IFabricTransaction : public IFabricTransactionBase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCommit( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCommit( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *commitSequenceNumber) = 0;
        
        virtual void STDMETHODCALLTYPE Rollback( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricTransactionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricTransaction * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricTransaction * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricTransaction * This);
        
        DECLSPEC_XFGVIRT(IFabricTransactionBase, get_Id)
        const FABRIC_TRANSACTION_ID *( STDMETHODCALLTYPE *get_Id )( 
            __RPC__in IFabricTransaction * This);
        
        DECLSPEC_XFGVIRT(IFabricTransactionBase, get_IsolationLevel)
        FABRIC_TRANSACTION_ISOLATION_LEVEL ( STDMETHODCALLTYPE *get_IsolationLevel )( 
            __RPC__in IFabricTransaction * This);
        
        DECLSPEC_XFGVIRT(IFabricTransaction, BeginCommit)
        HRESULT ( STDMETHODCALLTYPE *BeginCommit )( 
            __RPC__in IFabricTransaction * This,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricTransaction, EndCommit)
        HRESULT ( STDMETHODCALLTYPE *EndCommit )( 
            __RPC__in IFabricTransaction * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *commitSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricTransaction, Rollback)
        void ( STDMETHODCALLTYPE *Rollback )( 
            __RPC__in IFabricTransaction * This);
        
        END_INTERFACE
    } IFabricTransactionVtbl;

    interface IFabricTransaction
    {
        CONST_VTBL struct IFabricTransactionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricTransaction_get_Id(This)	\
    ( (This)->lpVtbl -> get_Id(This) ) 

#define IFabricTransaction_get_IsolationLevel(This)	\
    ( (This)->lpVtbl -> get_IsolationLevel(This) ) 


#define IFabricTransaction_BeginCommit(This,timeoutMilliseconds,callback,context)	\
    ( (This)->lpVtbl -> BeginCommit(This,timeoutMilliseconds,callback,context) ) 

#define IFabricTransaction_EndCommit(This,context,commitSequenceNumber)	\
    ( (This)->lpVtbl -> EndCommit(This,context,commitSequenceNumber) ) 

#define IFabricTransaction_Rollback(This)	\
    ( (This)->lpVtbl -> Rollback(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricTransaction_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97da35c4-38ed-4a2a-8f37-fbeb56382235")
    IFabricKeyValueStoreReplica : public IFabricStatefulServiceReplica
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentEpoch( 
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateReplicatorSettings( 
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTransaction( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enumerate( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadata( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreReplicaVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreReplica * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreReplica * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricKeyValueStoreReplica * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetCurrentEpoch)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentEpoch )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, CreateTransaction)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Add)
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Update)
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Get)
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Contains)
        HRESULT ( STDMETHODCALLTYPE *Contains )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Enumerate)
        HRESULT ( STDMETHODCALLTYPE *Enumerate )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadata)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreReplica * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        END_INTERFACE
    } IFabricKeyValueStoreReplicaVtbl;

    interface IFabricKeyValueStoreReplica
    {
        CONST_VTBL struct IFabricKeyValueStoreReplicaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreReplica_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreReplica_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreReplica_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreReplica_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricKeyValueStoreReplica_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricKeyValueStoreReplica_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricKeyValueStoreReplica_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricKeyValueStoreReplica_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricKeyValueStoreReplica_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricKeyValueStoreReplica_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 


#define IFabricKeyValueStoreReplica_GetCurrentEpoch(This,currentEpoch)	\
    ( (This)->lpVtbl -> GetCurrentEpoch(This,currentEpoch) ) 

#define IFabricKeyValueStoreReplica_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#define IFabricKeyValueStoreReplica_CreateTransaction(This,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction(This,transaction) ) 

#define IFabricKeyValueStoreReplica_Add(This,transaction,key,valueSizeInBytes,value)	\
    ( (This)->lpVtbl -> Add(This,transaction,key,valueSizeInBytes,value) ) 

#define IFabricKeyValueStoreReplica_Remove(This,transaction,key,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Remove(This,transaction,key,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica_Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica_Get(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Get(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica_GetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> GetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica_Contains(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Contains(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica_Enumerate(This,transaction,result)	\
    ( (This)->lpVtbl -> Enumerate(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica_EnumerateByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,transaction,keyPrefix,result) ) 

#define IFabricKeyValueStoreReplica_EnumerateMetadata(This,transaction,result)	\
    ( (This)->lpVtbl -> EnumerateMetadata(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica_EnumerateMetadataByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,transaction,keyPrefix,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreReplica_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fef805b2-5aca-4caa-9c51-fb3bd577a792")
    IFabricKeyValueStoreReplica2 : public IFabricKeyValueStoreReplica
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Backup( 
            /* [in] */ __RPC__in LPCWSTR backupDirectory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restore( 
            /* [in] */ __RPC__in LPCWSTR backupDirectory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTransaction2( 
            /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreReplica2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetCurrentEpoch)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentEpoch )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, CreateTransaction)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Add)
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Update)
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Get)
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Contains)
        HRESULT ( STDMETHODCALLTYPE *Contains )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Enumerate)
        HRESULT ( STDMETHODCALLTYPE *Enumerate )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadata)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Backup)
        HRESULT ( STDMETHODCALLTYPE *Backup )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Restore)
        HRESULT ( STDMETHODCALLTYPE *Restore )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, CreateTransaction2)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction2 )( 
            __RPC__in IFabricKeyValueStoreReplica2 * This,
            /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        END_INTERFACE
    } IFabricKeyValueStoreReplica2Vtbl;

    interface IFabricKeyValueStoreReplica2
    {
        CONST_VTBL struct IFabricKeyValueStoreReplica2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreReplica2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreReplica2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreReplica2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreReplica2_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricKeyValueStoreReplica2_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricKeyValueStoreReplica2_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricKeyValueStoreReplica2_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricKeyValueStoreReplica2_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricKeyValueStoreReplica2_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricKeyValueStoreReplica2_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 


#define IFabricKeyValueStoreReplica2_GetCurrentEpoch(This,currentEpoch)	\
    ( (This)->lpVtbl -> GetCurrentEpoch(This,currentEpoch) ) 

#define IFabricKeyValueStoreReplica2_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#define IFabricKeyValueStoreReplica2_CreateTransaction(This,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction(This,transaction) ) 

#define IFabricKeyValueStoreReplica2_Add(This,transaction,key,valueSizeInBytes,value)	\
    ( (This)->lpVtbl -> Add(This,transaction,key,valueSizeInBytes,value) ) 

#define IFabricKeyValueStoreReplica2_Remove(This,transaction,key,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Remove(This,transaction,key,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica2_Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica2_Get(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Get(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica2_GetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> GetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica2_Contains(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Contains(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica2_Enumerate(This,transaction,result)	\
    ( (This)->lpVtbl -> Enumerate(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica2_EnumerateByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,transaction,keyPrefix,result) ) 

#define IFabricKeyValueStoreReplica2_EnumerateMetadata(This,transaction,result)	\
    ( (This)->lpVtbl -> EnumerateMetadata(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica2_EnumerateMetadataByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,transaction,keyPrefix,result) ) 


#define IFabricKeyValueStoreReplica2_Backup(This,backupDirectory)	\
    ( (This)->lpVtbl -> Backup(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica2_Restore(This,backupDirectory)	\
    ( (This)->lpVtbl -> Restore(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica2_CreateTransaction2(This,settings,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction2(This,settings,transaction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreReplica2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica3_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica3_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1297172-a8aa-4096-bdcc-1ece0c5d8c8f")
    IFabricKeyValueStoreReplica3 : public IFabricKeyValueStoreReplica2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginBackup( 
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ FABRIC_STORE_BACKUP_OPTION backupOption,
            /* [in] */ __RPC__in_opt IFabricStorePostBackupHandler *postBackupHandler,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndBackup( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreReplica3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetCurrentEpoch)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentEpoch )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, CreateTransaction)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Add)
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Update)
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Get)
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Contains)
        HRESULT ( STDMETHODCALLTYPE *Contains )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Enumerate)
        HRESULT ( STDMETHODCALLTYPE *Enumerate )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadata)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Backup)
        HRESULT ( STDMETHODCALLTYPE *Backup )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Restore)
        HRESULT ( STDMETHODCALLTYPE *Restore )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, CreateTransaction2)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction2 )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, BeginBackup)
        HRESULT ( STDMETHODCALLTYPE *BeginBackup )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ FABRIC_STORE_BACKUP_OPTION backupOption,
            /* [in] */ __RPC__in_opt IFabricStorePostBackupHandler *postBackupHandler,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, EndBackup)
        HRESULT ( STDMETHODCALLTYPE *EndBackup )( 
            __RPC__in IFabricKeyValueStoreReplica3 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        END_INTERFACE
    } IFabricKeyValueStoreReplica3Vtbl;

    interface IFabricKeyValueStoreReplica3
    {
        CONST_VTBL struct IFabricKeyValueStoreReplica3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreReplica3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreReplica3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreReplica3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreReplica3_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricKeyValueStoreReplica3_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricKeyValueStoreReplica3_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricKeyValueStoreReplica3_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricKeyValueStoreReplica3_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricKeyValueStoreReplica3_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricKeyValueStoreReplica3_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 


#define IFabricKeyValueStoreReplica3_GetCurrentEpoch(This,currentEpoch)	\
    ( (This)->lpVtbl -> GetCurrentEpoch(This,currentEpoch) ) 

#define IFabricKeyValueStoreReplica3_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#define IFabricKeyValueStoreReplica3_CreateTransaction(This,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction(This,transaction) ) 

#define IFabricKeyValueStoreReplica3_Add(This,transaction,key,valueSizeInBytes,value)	\
    ( (This)->lpVtbl -> Add(This,transaction,key,valueSizeInBytes,value) ) 

#define IFabricKeyValueStoreReplica3_Remove(This,transaction,key,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Remove(This,transaction,key,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica3_Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica3_Get(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Get(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica3_GetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> GetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica3_Contains(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Contains(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica3_Enumerate(This,transaction,result)	\
    ( (This)->lpVtbl -> Enumerate(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica3_EnumerateByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,transaction,keyPrefix,result) ) 

#define IFabricKeyValueStoreReplica3_EnumerateMetadata(This,transaction,result)	\
    ( (This)->lpVtbl -> EnumerateMetadata(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica3_EnumerateMetadataByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,transaction,keyPrefix,result) ) 


#define IFabricKeyValueStoreReplica3_Backup(This,backupDirectory)	\
    ( (This)->lpVtbl -> Backup(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica3_Restore(This,backupDirectory)	\
    ( (This)->lpVtbl -> Restore(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica3_CreateTransaction2(This,settings,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction2(This,settings,transaction) ) 


#define IFabricKeyValueStoreReplica3_BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context)	\
    ( (This)->lpVtbl -> BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context) ) 

#define IFabricKeyValueStoreReplica3_EndBackup(This,context)	\
    ( (This)->lpVtbl -> EndBackup(This,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreReplica3_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c202788f-54d3-44a6-8f3c-b4bbfcdb95d2")
    IFabricKeyValueStoreItemEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveNext( void) = 0;
        
        virtual IFabricKeyValueStoreItemResult *STDMETHODCALLTYPE get_Current( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreItemEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemEnumerator, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemEnumerator, get_Current)
        IFabricKeyValueStoreItemResult *( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator * This);
        
        END_INTERFACE
    } IFabricKeyValueStoreItemEnumeratorVtbl;

    interface IFabricKeyValueStoreItemEnumerator
    {
        CONST_VTBL struct IFabricKeyValueStoreItemEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreItemEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreItemEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreItemEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreItemEnumerator_MoveNext(This)	\
    ( (This)->lpVtbl -> MoveNext(This) ) 

#define IFabricKeyValueStoreItemEnumerator_get_Current(This)	\
    ( (This)->lpVtbl -> get_Current(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreItemEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemMetadataEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemMetadataEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0bc06aee-fffa-4450-9099-116a5f0e0b53")
    IFabricKeyValueStoreItemMetadataEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveNext( void) = 0;
        
        virtual IFabricKeyValueStoreItemMetadataResult *STDMETHODCALLTYPE get_Current( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreItemMetadataEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemMetadataEnumerator, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemMetadataEnumerator, get_Current)
        IFabricKeyValueStoreItemMetadataResult *( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator * This);
        
        END_INTERFACE
    } IFabricKeyValueStoreItemMetadataEnumeratorVtbl;

    interface IFabricKeyValueStoreItemMetadataEnumerator
    {
        CONST_VTBL struct IFabricKeyValueStoreItemMetadataEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreItemMetadataEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreItemMetadataEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreItemMetadataEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreItemMetadataEnumerator_MoveNext(This)	\
    ( (This)->lpVtbl -> MoveNext(This) ) 

#define IFabricKeyValueStoreItemMetadataEnumerator_get_Current(This)	\
    ( (This)->lpVtbl -> get_Current(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemResult_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemResult_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1f1c89d-b0b8-44dc-bc97-6c074c1a805e")
    IFabricKeyValueStoreItemResult : public IUnknown
    {
    public:
        virtual const FABRIC_KEY_VALUE_STORE_ITEM *STDMETHODCALLTYPE get_Item( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreItemResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreItemResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreItemResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreItemResult * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemResult, get_Item)
        const FABRIC_KEY_VALUE_STORE_ITEM *( STDMETHODCALLTYPE *get_Item )( 
            __RPC__in IFabricKeyValueStoreItemResult * This);
        
        END_INTERFACE
    } IFabricKeyValueStoreItemResultVtbl;

    interface IFabricKeyValueStoreItemResult
    {
        CONST_VTBL struct IFabricKeyValueStoreItemResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreItemResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreItemResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreItemResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreItemResult_get_Item(This)	\
    ( (This)->lpVtbl -> get_Item(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreItemResult_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataResult_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemMetadataResult_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemMetadataResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemMetadataResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17c483a1-69e6-4bdc-a058-54fd4a1839fd")
    IFabricKeyValueStoreItemMetadataResult : public IUnknown
    {
    public:
        virtual const FABRIC_KEY_VALUE_STORE_ITEM_METADATA *STDMETHODCALLTYPE get_Metadata( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreItemMetadataResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreItemMetadataResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreItemMetadataResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreItemMetadataResult * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemMetadataResult, get_Metadata)
        const FABRIC_KEY_VALUE_STORE_ITEM_METADATA *( STDMETHODCALLTYPE *get_Metadata )( 
            __RPC__in IFabricKeyValueStoreItemMetadataResult * This);
        
        END_INTERFACE
    } IFabricKeyValueStoreItemMetadataResultVtbl;

    interface IFabricKeyValueStoreItemMetadataResult
    {
        CONST_VTBL struct IFabricKeyValueStoreItemMetadataResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreItemMetadataResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreItemMetadataResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreItemMetadataResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreItemMetadataResult_get_Metadata(This)	\
    ( (This)->lpVtbl -> get_Metadata(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreItemMetadataResult_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotification_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreNotification_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreNotification */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb660aa6-c51e-4f05-9526-93982b550e8f")
    IFabricKeyValueStoreNotification : public IFabricKeyValueStoreItemResult
    {
    public:
        virtual BOOLEAN STDMETHODCALLTYPE IsDelete( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreNotificationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreNotification * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreNotification * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreNotification * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemResult, get_Item)
        const FABRIC_KEY_VALUE_STORE_ITEM *( STDMETHODCALLTYPE *get_Item )( 
            __RPC__in IFabricKeyValueStoreNotification * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotification, IsDelete)
        BOOLEAN ( STDMETHODCALLTYPE *IsDelete )( 
            __RPC__in IFabricKeyValueStoreNotification * This);
        
        END_INTERFACE
    } IFabricKeyValueStoreNotificationVtbl;

    interface IFabricKeyValueStoreNotification
    {
        CONST_VTBL struct IFabricKeyValueStoreNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreNotification_get_Item(This)	\
    ( (This)->lpVtbl -> get_Item(This) ) 


#define IFabricKeyValueStoreNotification_IsDelete(This)	\
    ( (This)->lpVtbl -> IsDelete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreNotification_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreNotificationEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreNotificationEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ef25bc08-be76-43c7-adad-20f01fba3399")
    IFabricKeyValueStoreNotificationEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveNext( void) = 0;
        
        virtual IFabricKeyValueStoreNotification *STDMETHODCALLTYPE get_Current( void) = 0;
        
        virtual void STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreNotificationEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator, get_Current)
        IFabricKeyValueStoreNotification *( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator, Reset)
        void ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator * This);
        
        END_INTERFACE
    } IFabricKeyValueStoreNotificationEnumeratorVtbl;

    interface IFabricKeyValueStoreNotificationEnumerator
    {
        CONST_VTBL struct IFabricKeyValueStoreNotificationEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreNotificationEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreNotificationEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreNotificationEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreNotificationEnumerator_MoveNext(This)	\
    ( (This)->lpVtbl -> MoveNext(This) ) 

#define IFabricKeyValueStoreNotificationEnumerator_get_Current(This)	\
    ( (This)->lpVtbl -> get_Current(This) ) 

#define IFabricKeyValueStoreNotificationEnumerator_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreNotificationEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricNodeContextResult_INTERFACE_DEFINED__
#define __IFabricNodeContextResult_INTERFACE_DEFINED__

/* interface IFabricNodeContextResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNodeContextResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0952f885-6f5a-4ed3-abe4-90c403d1e3ce")
    IFabricNodeContextResult : public IUnknown
    {
    public:
        virtual const FABRIC_NODE_CONTEXT *STDMETHODCALLTYPE get_NodeContext( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricNodeContextResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricNodeContextResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricNodeContextResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricNodeContextResult * This);
        
        DECLSPEC_XFGVIRT(IFabricNodeContextResult, get_NodeContext)
        const FABRIC_NODE_CONTEXT *( STDMETHODCALLTYPE *get_NodeContext )( 
            __RPC__in IFabricNodeContextResult * This);
        
        END_INTERFACE
    } IFabricNodeContextResultVtbl;

    interface IFabricNodeContextResult
    {
        CONST_VTBL struct IFabricNodeContextResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricNodeContextResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricNodeContextResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricNodeContextResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricNodeContextResult_get_NodeContext(This)	\
    ( (This)->lpVtbl -> get_NodeContext(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricNodeContextResult_INTERFACE_DEFINED__ */


#ifndef __IFabricNodeContextResult2_INTERFACE_DEFINED__
#define __IFabricNodeContextResult2_INTERFACE_DEFINED__

/* interface IFabricNodeContextResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNodeContextResult2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("472bf2e1-d617-4b5c-a91d-fabed9ff3550")
    IFabricNodeContextResult2 : public IFabricNodeContextResult
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDirectory( 
            /* [in] */ __RPC__in LPCWSTR logicalDirectoryName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **directoryPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricNodeContextResult2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricNodeContextResult2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricNodeContextResult2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricNodeContextResult2 * This);
        
        DECLSPEC_XFGVIRT(IFabricNodeContextResult, get_NodeContext)
        const FABRIC_NODE_CONTEXT *( STDMETHODCALLTYPE *get_NodeContext )( 
            __RPC__in IFabricNodeContextResult2 * This);
        
        DECLSPEC_XFGVIRT(IFabricNodeContextResult2, GetDirectory)
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )( 
            __RPC__in IFabricNodeContextResult2 * This,
            /* [in] */ __RPC__in LPCWSTR logicalDirectoryName,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **directoryPath);
        
        END_INTERFACE
    } IFabricNodeContextResult2Vtbl;

    interface IFabricNodeContextResult2
    {
        CONST_VTBL struct IFabricNodeContextResult2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricNodeContextResult2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricNodeContextResult2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricNodeContextResult2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricNodeContextResult2_get_NodeContext(This)	\
    ( (This)->lpVtbl -> get_NodeContext(This) ) 


#define IFabricNodeContextResult2_GetDirectory(This,logicalDirectoryName,directoryPath)	\
    ( (This)->lpVtbl -> GetDirectory(This,logicalDirectoryName,directoryPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricNodeContextResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicatorSettingsResult_INTERFACE_DEFINED__
#define __IFabricReplicatorSettingsResult_INTERFACE_DEFINED__

/* interface IFabricReplicatorSettingsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicatorSettingsResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("718954F3-DC1E-4060-9806-0CBF36F71051")
    IFabricReplicatorSettingsResult : public IUnknown
    {
    public:
        virtual const FABRIC_REPLICATOR_SETTINGS *STDMETHODCALLTYPE get_ReplicatorSettings( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricReplicatorSettingsResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricReplicatorSettingsResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricReplicatorSettingsResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricReplicatorSettingsResult * This);
        
        DECLSPEC_XFGVIRT(IFabricReplicatorSettingsResult, get_ReplicatorSettings)
        const FABRIC_REPLICATOR_SETTINGS *( STDMETHODCALLTYPE *get_ReplicatorSettings )( 
            __RPC__in IFabricReplicatorSettingsResult * This);
        
        END_INTERFACE
    } IFabricReplicatorSettingsResultVtbl;

    interface IFabricReplicatorSettingsResult
    {
        CONST_VTBL struct IFabricReplicatorSettingsResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricReplicatorSettingsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricReplicatorSettingsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricReplicatorSettingsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricReplicatorSettingsResult_get_ReplicatorSettings(This)	\
    ( (This)->lpVtbl -> get_ReplicatorSettings(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricReplicatorSettingsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricEseLocalStoreSettingsResult_INTERFACE_DEFINED__
#define __IFabricEseLocalStoreSettingsResult_INTERFACE_DEFINED__

/* interface IFabricEseLocalStoreSettingsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricEseLocalStoreSettingsResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AACE77AE-D8E1-4144-B1EE-5AC74FD54F65")
    IFabricEseLocalStoreSettingsResult : public IUnknown
    {
    public:
        virtual const FABRIC_ESE_LOCAL_STORE_SETTINGS *STDMETHODCALLTYPE get_Settings( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricEseLocalStoreSettingsResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricEseLocalStoreSettingsResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricEseLocalStoreSettingsResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricEseLocalStoreSettingsResult * This);
        
        DECLSPEC_XFGVIRT(IFabricEseLocalStoreSettingsResult, get_Settings)
        const FABRIC_ESE_LOCAL_STORE_SETTINGS *( STDMETHODCALLTYPE *get_Settings )( 
            __RPC__in IFabricEseLocalStoreSettingsResult * This);
        
        END_INTERFACE
    } IFabricEseLocalStoreSettingsResultVtbl;

    interface IFabricEseLocalStoreSettingsResult
    {
        CONST_VTBL struct IFabricEseLocalStoreSettingsResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricEseLocalStoreSettingsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricEseLocalStoreSettingsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricEseLocalStoreSettingsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricEseLocalStoreSettingsResult_get_Settings(This)	\
    ( (This)->lpVtbl -> get_Settings(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricEseLocalStoreSettingsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricSecurityCredentialsResult_INTERFACE_DEFINED__
#define __IFabricSecurityCredentialsResult_INTERFACE_DEFINED__

/* interface IFabricSecurityCredentialsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecurityCredentialsResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("049A111D-6A30-48E9-8F69-470760D3EFB9")
    IFabricSecurityCredentialsResult : public IUnknown
    {
    public:
        virtual const FABRIC_SECURITY_CREDENTIALS *STDMETHODCALLTYPE get_SecurityCredentials( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricSecurityCredentialsResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricSecurityCredentialsResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricSecurityCredentialsResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricSecurityCredentialsResult * This);
        
        DECLSPEC_XFGVIRT(IFabricSecurityCredentialsResult, get_SecurityCredentials)
        const FABRIC_SECURITY_CREDENTIALS *( STDMETHODCALLTYPE *get_SecurityCredentials )( 
            __RPC__in IFabricSecurityCredentialsResult * This);
        
        END_INTERFACE
    } IFabricSecurityCredentialsResultVtbl;

    interface IFabricSecurityCredentialsResult
    {
        CONST_VTBL struct IFabricSecurityCredentialsResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricSecurityCredentialsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricSecurityCredentialsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricSecurityCredentialsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricSecurityCredentialsResult_get_SecurityCredentials(This)	\
    ( (This)->lpVtbl -> get_SecurityCredentials(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricSecurityCredentialsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivator_INTERFACE_DEFINED__
#define __IFabricCodePackageActivator_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70BE1B10-B259-46FC-B813-0B75720E7183")
    IFabricCodePackageActivator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginActivateCodePackage( 
            /* [in] */ __RPC__in FABRIC_STRING_LIST *codePackageNames,
            /* [in] */ __RPC__in FABRIC_STRING_MAP *environment,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndActivateCodePackage( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeactivateCodePackage( 
            /* [in] */ __RPC__in FABRIC_STRING_LIST *codePackageNames,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeactivateCodePackage( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortCodePackage( 
            /* [in] */ __RPC__in FABRIC_STRING_LIST *codePackageNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterCodePackageEventHandler( 
            /* [in] */ __RPC__in_opt IFabricCodePackageEventHandler *eventHandler,
            /* [retval][out] */ __RPC__out ULONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterCodePackageEventHandler( 
            /* [in] */ ULONGLONG callbackHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageActivatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageActivator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageActivator * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, BeginActivateCodePackage)
        HRESULT ( STDMETHODCALLTYPE *BeginActivateCodePackage )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in FABRIC_STRING_LIST *codePackageNames,
            /* [in] */ __RPC__in FABRIC_STRING_MAP *environment,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, EndActivateCodePackage)
        HRESULT ( STDMETHODCALLTYPE *EndActivateCodePackage )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, BeginDeactivateCodePackage)
        HRESULT ( STDMETHODCALLTYPE *BeginDeactivateCodePackage )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in FABRIC_STRING_LIST *codePackageNames,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, EndDeactivateCodePackage)
        HRESULT ( STDMETHODCALLTYPE *EndDeactivateCodePackage )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, AbortCodePackage)
        HRESULT ( STDMETHODCALLTYPE *AbortCodePackage )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in FABRIC_STRING_LIST *codePackageNames);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, RegisterCodePackageEventHandler)
        HRESULT ( STDMETHODCALLTYPE *RegisterCodePackageEventHandler )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageEventHandler *eventHandler,
            /* [retval][out] */ __RPC__out ULONGLONG *callbackHandle);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageActivator, UnregisterCodePackageEventHandler)
        HRESULT ( STDMETHODCALLTYPE *UnregisterCodePackageEventHandler )( 
            __RPC__in IFabricCodePackageActivator * This,
            /* [in] */ ULONGLONG callbackHandle);
        
        END_INTERFACE
    } IFabricCodePackageActivatorVtbl;

    interface IFabricCodePackageActivator
    {
        CONST_VTBL struct IFabricCodePackageActivatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageActivator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageActivator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageActivator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageActivator_BeginActivateCodePackage(This,codePackageNames,environment,timeoutMilliseconds,callback,context)	\
    ( (This)->lpVtbl -> BeginActivateCodePackage(This,codePackageNames,environment,timeoutMilliseconds,callback,context) ) 

#define IFabricCodePackageActivator_EndActivateCodePackage(This,context)	\
    ( (This)->lpVtbl -> EndActivateCodePackage(This,context) ) 

#define IFabricCodePackageActivator_BeginDeactivateCodePackage(This,codePackageNames,timeoutMilliseconds,callback,context)	\
    ( (This)->lpVtbl -> BeginDeactivateCodePackage(This,codePackageNames,timeoutMilliseconds,callback,context) ) 

#define IFabricCodePackageActivator_EndDeactivateCodePackage(This,context)	\
    ( (This)->lpVtbl -> EndDeactivateCodePackage(This,context) ) 

#define IFabricCodePackageActivator_AbortCodePackage(This,codePackageNames)	\
    ( (This)->lpVtbl -> AbortCodePackage(This,codePackageNames) ) 

#define IFabricCodePackageActivator_RegisterCodePackageEventHandler(This,eventHandler,callbackHandle)	\
    ( (This)->lpVtbl -> RegisterCodePackageEventHandler(This,eventHandler,callbackHandle) ) 

#define IFabricCodePackageActivator_UnregisterCodePackageEventHandler(This,callbackHandle)	\
    ( (This)->lpVtbl -> UnregisterCodePackageEventHandler(This,callbackHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageActivator_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageEventHandler_INTERFACE_DEFINED__
#define __IFabricCodePackageEventHandler_INTERFACE_DEFINED__

/* interface IFabricCodePackageEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("899E0CA8-16DF-458E-8915-D0307B4AB101")
    IFabricCodePackageEventHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCodePackageEvent( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivator *source,
            /* [in] */ __RPC__in const FABRIC_CODE_PACKAGE_EVENT_DESCRIPTION *eventDesc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageEventHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageEventHandler, OnCodePackageEvent)
        void ( STDMETHODCALLTYPE *OnCodePackageEvent )( 
            __RPC__in IFabricCodePackageEventHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivator *source,
            /* [in] */ __RPC__in const FABRIC_CODE_PACKAGE_EVENT_DESCRIPTION *eventDesc);
        
        END_INTERFACE
    } IFabricCodePackageEventHandlerVtbl;

    interface IFabricCodePackageEventHandler
    {
        CONST_VTBL struct IFabricCodePackageEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageEventHandler_OnCodePackageEvent(This,source,eventDesc)	\
    ( (This)->lpVtbl -> OnCodePackageEvent(This,source,eventDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageEventHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FabricRuntime;

#ifdef __cplusplus

class DECLSPEC_UUID("cc53af8c-74cd-11df-ac3e-0024811e3892")
FabricRuntime;
#endif


#ifndef __FabricRuntimeModule_MODULE_DEFINED__
#define __FabricRuntimeModule_MODULE_DEFINED__


/* module FabricRuntimeModule */
/* [dllname][uuid] */ 

/* [entry] */ HRESULT FabricBeginCreateRuntime( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ __RPC__in_opt IFabricProcessExitHandler *exitHandler,
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndCreateRuntime( 
    /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
    /* [retval][out] */ __RPC__deref_out_opt void **fabricRuntime);

/* [entry] */ HRESULT FabricCreateRuntime( 
    /* [in] */ __RPC__in REFIID riid,
    /* [retval][out] */ __RPC__deref_out_opt void **fabricRuntime);

/* [entry] */ HRESULT FabricBeginGetActivationContext( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndGetActivationContext( 
    /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
    /* [retval][out] */ __RPC__deref_out_opt void **activationContext);

/* [entry] */ HRESULT FabricGetActivationContext( 
    /* [in] */ __RPC__in REFIID riid,
    /* [retval][out] */ __RPC__deref_out_opt void **activationContext);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ __RPC__in LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ __RPC__in void *localStoreSettings,
    /* [in] */ __RPC__in_opt IFabricStoreEventHandler *storeEventHandler,
    /* [retval][out] */ __RPC__deref_out_opt void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica2( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ __RPC__in LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ __RPC__in void *localStoreSettings,
    /* [in] */ __RPC__in_opt IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ __RPC__in_opt IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [in] */ FABRIC_KEY_VALUE_STORE_NOTIFICATION_MODE notificationMode,
    /* [retval][out] */ __RPC__deref_out_opt void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica3( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ __RPC__in LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ __RPC__in void *localStoreSettings,
    /* [in] */ __RPC__in_opt IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ __RPC__in_opt IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [in] */ FABRIC_KEY_VALUE_STORE_NOTIFICATION_MODE notificationMode,
    /* [retval][out] */ __RPC__deref_out_opt void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica4( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ __RPC__in LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ __RPC__in FABRIC_URI serviceName,
    /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ __RPC__in void *localStoreSettings,
    /* [in] */ __RPC__in_opt IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ __RPC__in_opt IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [in] */ FABRIC_KEY_VALUE_STORE_NOTIFICATION_MODE notificationMode,
    /* [retval][out] */ __RPC__deref_out_opt void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica5( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ __RPC__in LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ __RPC__in FABRIC_URI serviceName,
    /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_REPLICA_SETTINGS *kvsSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ __RPC__in void *localStoreSettings,
    /* [in] */ __RPC__in_opt IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ __RPC__in_opt IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [retval][out] */ __RPC__deref_out_opt void **keyValueStore);

/* [entry] */ HRESULT FabricBeginGetNodeContext( 
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndGetNodeContext( 
    /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
    /* [retval][out] */ __RPC__deref_out_opt void **nodeContext);

/* [entry] */ HRESULT FabricGetNodeContext( 
    /* [retval][out] */ __RPC__deref_out_opt void **nodeContext);

/* [entry] */ HRESULT FabricLoadReplicatorSettings( 
    /* [in] */ __RPC__in_opt const IFabricCodePackageActivationContext *codePackageActivationContext,
    /* [in] */ __RPC__in LPCWSTR configurationPackageName,
    /* [in] */ __RPC__in LPCWSTR sectionName,
    /* [retval][out] */ __RPC__deref_out_opt IFabricReplicatorSettingsResult **replicatorSettings);

/* [entry] */ HRESULT FabricLoadSecurityCredentials( 
    /* [in] */ __RPC__in_opt const IFabricCodePackageActivationContext *codePackageActivationContext,
    /* [in] */ __RPC__in LPCWSTR configurationPackageName,
    /* [in] */ __RPC__in LPCWSTR sectionName,
    /* [retval][out] */ __RPC__deref_out_opt IFabricSecurityCredentialsResult **securityCredentials);

/* [entry] */ HRESULT FabricLoadEseLocalStoreSettings( 
    /* [in] */ __RPC__in_opt const IFabricCodePackageActivationContext *codePackageActivationContext,
    /* [in] */ __RPC__in LPCWSTR configurationPackageName,
    /* [in] */ __RPC__in LPCWSTR sectionName,
    /* [retval][out] */ __RPC__deref_out_opt IFabricEseLocalStoreSettingsResult **settings);

/* [entry] */ HRESULT FabricBeginGetCodePackageActivator( 
    /* [in] */ __RPC__in REFIID riid,
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndGetCodePackageActivator( 
    /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
    /* [retval][out] */ __RPC__deref_out_opt void **activator);

/* [entry] */ HRESULT FabricGetCodePackageActivator( 
    /* [in] */ __RPC__in REFIID riid,
    /* [retval][out] */ __RPC__deref_out_opt void **activator);

#endif /* __FabricRuntimeModule_MODULE_DEFINED__ */
#endif /* __FabricRuntimeLib_LIBRARY_DEFINED__ */

#ifndef __IFabricStateReplicator2_INTERFACE_DEFINED__
#define __IFabricStateReplicator2_INTERFACE_DEFINED__

/* interface IFabricStateReplicator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStateReplicator2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A28D542-658F-46F9-9BF4-79B7CAE25C5D")
    IFabricStateReplicator2 : public IFabricStateReplicator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetReplicatorSettings( 
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicatorSettingsResult **replicatorSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStateReplicator2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStateReplicator2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStateReplicator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, BeginReplicate)
        HRESULT ( STDMETHODCALLTYPE *BeginReplicate )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [in] */ __RPC__in_opt IFabricOperationData *operationData,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, EndReplicate)
        HRESULT ( STDMETHODCALLTYPE *EndReplicate )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out FABRIC_SEQUENCE_NUMBER *sequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, GetReplicationStream)
        HRESULT ( STDMETHODCALLTYPE *GetReplicationStream )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationStream **stream);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, GetCopyStream)
        HRESULT ( STDMETHODCALLTYPE *GetCopyStream )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricOperationStream **stream);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricStateReplicator2, GetReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *GetReplicatorSettings )( 
            __RPC__in IFabricStateReplicator2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicatorSettingsResult **replicatorSettings);
        
        END_INTERFACE
    } IFabricStateReplicator2Vtbl;

    interface IFabricStateReplicator2
    {
        CONST_VTBL struct IFabricStateReplicator2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStateReplicator2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStateReplicator2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStateReplicator2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStateReplicator2_BeginReplicate(This,operationData,callback,sequenceNumber,context)	\
    ( (This)->lpVtbl -> BeginReplicate(This,operationData,callback,sequenceNumber,context) ) 

#define IFabricStateReplicator2_EndReplicate(This,context,sequenceNumber)	\
    ( (This)->lpVtbl -> EndReplicate(This,context,sequenceNumber) ) 

#define IFabricStateReplicator2_GetReplicationStream(This,stream)	\
    ( (This)->lpVtbl -> GetReplicationStream(This,stream) ) 

#define IFabricStateReplicator2_GetCopyStream(This,stream)	\
    ( (This)->lpVtbl -> GetCopyStream(This,stream) ) 

#define IFabricStateReplicator2_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 


#define IFabricStateReplicator2_GetReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> GetReplicatorSettings(This,replicatorSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStateReplicator2_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageChangeHandler_INTERFACE_DEFINED__
#define __IFabricCodePackageChangeHandler_INTERFACE_DEFINED__

/* interface IFabricCodePackageChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageChangeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b90d36cd-acb5-427a-b318-3b045981d0cc")
    IFabricCodePackageChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnPackageAdded( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricCodePackage *codePackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageRemoved( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricCodePackage *codePackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageModified( 
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricCodePackage *previousCodePackage,
            /* [in] */ __RPC__in_opt IFabricCodePackage *codePackage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricCodePackageChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricCodePackageChangeHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricCodePackageChangeHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricCodePackageChangeHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageChangeHandler, OnPackageAdded)
        void ( STDMETHODCALLTYPE *OnPackageAdded )( 
            __RPC__in IFabricCodePackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricCodePackage *codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageChangeHandler, OnPackageRemoved)
        void ( STDMETHODCALLTYPE *OnPackageRemoved )( 
            __RPC__in IFabricCodePackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricCodePackage *codePackage);
        
        DECLSPEC_XFGVIRT(IFabricCodePackageChangeHandler, OnPackageModified)
        void ( STDMETHODCALLTYPE *OnPackageModified )( 
            __RPC__in IFabricCodePackageChangeHandler * This,
            /* [in] */ __RPC__in_opt IFabricCodePackageActivationContext *source,
            /* [in] */ __RPC__in_opt IFabricCodePackage *previousCodePackage,
            /* [in] */ __RPC__in_opt IFabricCodePackage *codePackage);
        
        END_INTERFACE
    } IFabricCodePackageChangeHandlerVtbl;

    interface IFabricCodePackageChangeHandler
    {
        CONST_VTBL struct IFabricCodePackageChangeHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricCodePackageChangeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricCodePackageChangeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricCodePackageChangeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricCodePackageChangeHandler_OnPackageAdded(This,source,codePackage)	\
    ( (This)->lpVtbl -> OnPackageAdded(This,source,codePackage) ) 

#define IFabricCodePackageChangeHandler_OnPackageRemoved(This,source,codePackage)	\
    ( (This)->lpVtbl -> OnPackageRemoved(This,source,codePackage) ) 

#define IFabricCodePackageChangeHandler_OnPackageModified(This,source,previousCodePackage,codePackage)	\
    ( (This)->lpVtbl -> OnPackageModified(This,source,previousCodePackage,codePackage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricCodePackageChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica4_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica4_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff16d2f1-41a9-4c64-804a-a20bf28c04f3")
    IFabricKeyValueStoreReplica4 : public IFabricKeyValueStoreReplica3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRestore( 
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestore( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreReplica4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetCurrentEpoch)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentEpoch )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, CreateTransaction)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Add)
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Update)
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Get)
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Contains)
        HRESULT ( STDMETHODCALLTYPE *Contains )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Enumerate)
        HRESULT ( STDMETHODCALLTYPE *Enumerate )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadata)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Backup)
        HRESULT ( STDMETHODCALLTYPE *Backup )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Restore)
        HRESULT ( STDMETHODCALLTYPE *Restore )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, CreateTransaction2)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction2 )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, BeginBackup)
        HRESULT ( STDMETHODCALLTYPE *BeginBackup )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ FABRIC_STORE_BACKUP_OPTION backupOption,
            /* [in] */ __RPC__in_opt IFabricStorePostBackupHandler *postBackupHandler,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, EndBackup)
        HRESULT ( STDMETHODCALLTYPE *EndBackup )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica4, BeginRestore)
        HRESULT ( STDMETHODCALLTYPE *BeginRestore )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica4, EndRestore)
        HRESULT ( STDMETHODCALLTYPE *EndRestore )( 
            __RPC__in IFabricKeyValueStoreReplica4 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        END_INTERFACE
    } IFabricKeyValueStoreReplica4Vtbl;

    interface IFabricKeyValueStoreReplica4
    {
        CONST_VTBL struct IFabricKeyValueStoreReplica4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreReplica4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreReplica4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreReplica4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreReplica4_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricKeyValueStoreReplica4_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricKeyValueStoreReplica4_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricKeyValueStoreReplica4_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricKeyValueStoreReplica4_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricKeyValueStoreReplica4_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricKeyValueStoreReplica4_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 


#define IFabricKeyValueStoreReplica4_GetCurrentEpoch(This,currentEpoch)	\
    ( (This)->lpVtbl -> GetCurrentEpoch(This,currentEpoch) ) 

#define IFabricKeyValueStoreReplica4_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#define IFabricKeyValueStoreReplica4_CreateTransaction(This,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction(This,transaction) ) 

#define IFabricKeyValueStoreReplica4_Add(This,transaction,key,valueSizeInBytes,value)	\
    ( (This)->lpVtbl -> Add(This,transaction,key,valueSizeInBytes,value) ) 

#define IFabricKeyValueStoreReplica4_Remove(This,transaction,key,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Remove(This,transaction,key,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica4_Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica4_Get(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Get(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica4_GetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> GetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica4_Contains(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Contains(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica4_Enumerate(This,transaction,result)	\
    ( (This)->lpVtbl -> Enumerate(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica4_EnumerateByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,transaction,keyPrefix,result) ) 

#define IFabricKeyValueStoreReplica4_EnumerateMetadata(This,transaction,result)	\
    ( (This)->lpVtbl -> EnumerateMetadata(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica4_EnumerateMetadataByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,transaction,keyPrefix,result) ) 


#define IFabricKeyValueStoreReplica4_Backup(This,backupDirectory)	\
    ( (This)->lpVtbl -> Backup(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica4_Restore(This,backupDirectory)	\
    ( (This)->lpVtbl -> Restore(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica4_CreateTransaction2(This,settings,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction2(This,settings,transaction) ) 


#define IFabricKeyValueStoreReplica4_BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context)	\
    ( (This)->lpVtbl -> BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context) ) 

#define IFabricKeyValueStoreReplica4_EndBackup(This,context)	\
    ( (This)->lpVtbl -> EndBackup(This,context) ) 


#define IFabricKeyValueStoreReplica4_BeginRestore(This,backupDirectory,callback,context)	\
    ( (This)->lpVtbl -> BeginRestore(This,backupDirectory,callback,context) ) 

#define IFabricKeyValueStoreReplica4_EndRestore(This,context)	\
    ( (This)->lpVtbl -> EndRestore(This,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreReplica4_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica5_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica5_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34f2da40-6227-448a-be72-c517b0d69432")
    IFabricKeyValueStoreReplica5 : public IFabricKeyValueStoreReplica4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryAdd( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [retval][out] */ __RPC__out BOOLEAN *added) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryRemove( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ __RPC__out BOOLEAN *exists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryUpdate( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ __RPC__out BOOLEAN *exists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGet( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGetMetadata( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey2( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey2( 
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreReplica5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetCurrentEpoch)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentEpoch )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, CreateTransaction)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Add)
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Update)
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Get)
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Contains)
        HRESULT ( STDMETHODCALLTYPE *Contains )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Enumerate)
        HRESULT ( STDMETHODCALLTYPE *Enumerate )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadata)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Backup)
        HRESULT ( STDMETHODCALLTYPE *Backup )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Restore)
        HRESULT ( STDMETHODCALLTYPE *Restore )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, CreateTransaction2)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction2 )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, BeginBackup)
        HRESULT ( STDMETHODCALLTYPE *BeginBackup )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ FABRIC_STORE_BACKUP_OPTION backupOption,
            /* [in] */ __RPC__in_opt IFabricStorePostBackupHandler *postBackupHandler,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, EndBackup)
        HRESULT ( STDMETHODCALLTYPE *EndBackup )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica4, BeginRestore)
        HRESULT ( STDMETHODCALLTYPE *BeginRestore )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica4, EndRestore)
        HRESULT ( STDMETHODCALLTYPE *EndRestore )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryAdd)
        HRESULT ( STDMETHODCALLTYPE *TryAdd )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [retval][out] */ __RPC__out BOOLEAN *added);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryRemove)
        HRESULT ( STDMETHODCALLTYPE *TryRemove )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ __RPC__out BOOLEAN *exists);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryUpdate)
        HRESULT ( STDMETHODCALLTYPE *TryUpdate )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ __RPC__out BOOLEAN *exists);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryGet)
        HRESULT ( STDMETHODCALLTYPE *TryGet )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryGetMetadata)
        HRESULT ( STDMETHODCALLTYPE *TryGetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, EnumerateByKey2)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey2 )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, EnumerateMetadataByKey2)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey2 )( 
            __RPC__in IFabricKeyValueStoreReplica5 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        END_INTERFACE
    } IFabricKeyValueStoreReplica5Vtbl;

    interface IFabricKeyValueStoreReplica5
    {
        CONST_VTBL struct IFabricKeyValueStoreReplica5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreReplica5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreReplica5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreReplica5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreReplica5_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricKeyValueStoreReplica5_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricKeyValueStoreReplica5_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricKeyValueStoreReplica5_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricKeyValueStoreReplica5_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricKeyValueStoreReplica5_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricKeyValueStoreReplica5_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 


#define IFabricKeyValueStoreReplica5_GetCurrentEpoch(This,currentEpoch)	\
    ( (This)->lpVtbl -> GetCurrentEpoch(This,currentEpoch) ) 

#define IFabricKeyValueStoreReplica5_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#define IFabricKeyValueStoreReplica5_CreateTransaction(This,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction(This,transaction) ) 

#define IFabricKeyValueStoreReplica5_Add(This,transaction,key,valueSizeInBytes,value)	\
    ( (This)->lpVtbl -> Add(This,transaction,key,valueSizeInBytes,value) ) 

#define IFabricKeyValueStoreReplica5_Remove(This,transaction,key,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Remove(This,transaction,key,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica5_Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica5_Get(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Get(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica5_GetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> GetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica5_Contains(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Contains(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica5_Enumerate(This,transaction,result)	\
    ( (This)->lpVtbl -> Enumerate(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica5_EnumerateByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,transaction,keyPrefix,result) ) 

#define IFabricKeyValueStoreReplica5_EnumerateMetadata(This,transaction,result)	\
    ( (This)->lpVtbl -> EnumerateMetadata(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica5_EnumerateMetadataByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,transaction,keyPrefix,result) ) 


#define IFabricKeyValueStoreReplica5_Backup(This,backupDirectory)	\
    ( (This)->lpVtbl -> Backup(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica5_Restore(This,backupDirectory)	\
    ( (This)->lpVtbl -> Restore(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica5_CreateTransaction2(This,settings,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction2(This,settings,transaction) ) 


#define IFabricKeyValueStoreReplica5_BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context)	\
    ( (This)->lpVtbl -> BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context) ) 

#define IFabricKeyValueStoreReplica5_EndBackup(This,context)	\
    ( (This)->lpVtbl -> EndBackup(This,context) ) 


#define IFabricKeyValueStoreReplica5_BeginRestore(This,backupDirectory,callback,context)	\
    ( (This)->lpVtbl -> BeginRestore(This,backupDirectory,callback,context) ) 

#define IFabricKeyValueStoreReplica5_EndRestore(This,context)	\
    ( (This)->lpVtbl -> EndRestore(This,context) ) 


#define IFabricKeyValueStoreReplica5_TryAdd(This,transaction,key,valueSizeInBytes,value,added)	\
    ( (This)->lpVtbl -> TryAdd(This,transaction,key,valueSizeInBytes,value,added) ) 

#define IFabricKeyValueStoreReplica5_TryRemove(This,transaction,key,checkSequenceNumber,exists)	\
    ( (This)->lpVtbl -> TryRemove(This,transaction,key,checkSequenceNumber,exists) ) 

#define IFabricKeyValueStoreReplica5_TryUpdate(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber,exists)	\
    ( (This)->lpVtbl -> TryUpdate(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber,exists) ) 

#define IFabricKeyValueStoreReplica5_TryGet(This,transaction,key,result)	\
    ( (This)->lpVtbl -> TryGet(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica5_TryGetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> TryGetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica5_EnumerateByKey2(This,transaction,keyPrefix,strictPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey2(This,transaction,keyPrefix,strictPrefix,result) ) 

#define IFabricKeyValueStoreReplica5_EnumerateMetadataByKey2(This,transaction,keyPrefix,strictPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey2(This,transaction,keyPrefix,strictPrefix,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreReplica5_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica6_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica6_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56e77be1-e81f-4e42-8522-162c2d608184")
    IFabricKeyValueStoreReplica6 : public IFabricKeyValueStoreReplica5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRestore2( 
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ __RPC__in FABRIC_KEY_VALUE_STORE_RESTORE_SETTINGS *settings,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreReplica6Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginOpen)
        HRESULT ( STDMETHODCALLTYPE *BeginOpen )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ __RPC__in_opt IFabricStatefulServicePartition *partition,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndOpen)
        HRESULT ( STDMETHODCALLTYPE *EndOpen )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricReplicator **replicator);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginChangeRole)
        HRESULT ( STDMETHODCALLTYPE *BeginChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndChangeRole)
        HRESULT ( STDMETHODCALLTYPE *EndChangeRole )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__deref_out_opt IFabricStringResult **serviceAddress);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, BeginClose)
        HRESULT ( STDMETHODCALLTYPE *BeginClose )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, EndClose)
        HRESULT ( STDMETHODCALLTYPE *EndClose )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricStatefulServiceReplica, Abort)
        void ( STDMETHODCALLTYPE *Abort )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetCurrentEpoch)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentEpoch )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [out] */ __RPC__out FABRIC_EPOCH *currentEpoch);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, UpdateReplicatorSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateReplicatorSettings )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in const FABRIC_REPLICATOR_SETTINGS *replicatorSettings);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, CreateTransaction)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Add)
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Remove)
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Update)
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Get)
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Contains)
        HRESULT ( STDMETHODCALLTYPE *Contains )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__out BOOLEAN *result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, Enumerate)
        HRESULT ( STDMETHODCALLTYPE *Enumerate )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadata)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Backup)
        HRESULT ( STDMETHODCALLTYPE *Backup )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, Restore)
        HRESULT ( STDMETHODCALLTYPE *Restore )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica2, CreateTransaction2)
        HRESULT ( STDMETHODCALLTYPE *CreateTransaction2 )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IFabricTransaction **transaction);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, BeginBackup)
        HRESULT ( STDMETHODCALLTYPE *BeginBackup )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ FABRIC_STORE_BACKUP_OPTION backupOption,
            /* [in] */ __RPC__in_opt IFabricStorePostBackupHandler *postBackupHandler,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica3, EndBackup)
        HRESULT ( STDMETHODCALLTYPE *EndBackup )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica4, BeginRestore)
        HRESULT ( STDMETHODCALLTYPE *BeginRestore )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica4, EndRestore)
        HRESULT ( STDMETHODCALLTYPE *EndRestore )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryAdd)
        HRESULT ( STDMETHODCALLTYPE *TryAdd )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [retval][out] */ __RPC__out BOOLEAN *added);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryRemove)
        HRESULT ( STDMETHODCALLTYPE *TryRemove )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ __RPC__out BOOLEAN *exists);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryUpdate)
        HRESULT ( STDMETHODCALLTYPE *TryUpdate )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ __RPC__in_ecount_full(valueSizeInBytes) const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ __RPC__out BOOLEAN *exists);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryGet)
        HRESULT ( STDMETHODCALLTYPE *TryGet )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, TryGetMetadata)
        HRESULT ( STDMETHODCALLTYPE *TryGetMetadata )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR key,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataResult **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, EnumerateByKey2)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey2 )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica5, EnumerateMetadataByKey2)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey2 )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in_opt IFabricTransactionBase *transaction,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreReplica6, BeginRestore2)
        HRESULT ( STDMETHODCALLTYPE *BeginRestore2 )( 
            __RPC__in IFabricKeyValueStoreReplica6 * This,
            /* [in] */ __RPC__in LPCWSTR backupDirectory,
            /* [in] */ __RPC__in FABRIC_KEY_VALUE_STORE_RESTORE_SETTINGS *settings,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        END_INTERFACE
    } IFabricKeyValueStoreReplica6Vtbl;

    interface IFabricKeyValueStoreReplica6
    {
        CONST_VTBL struct IFabricKeyValueStoreReplica6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreReplica6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreReplica6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreReplica6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreReplica6_BeginOpen(This,openMode,partition,callback,context)	\
    ( (This)->lpVtbl -> BeginOpen(This,openMode,partition,callback,context) ) 

#define IFabricKeyValueStoreReplica6_EndOpen(This,context,replicator)	\
    ( (This)->lpVtbl -> EndOpen(This,context,replicator) ) 

#define IFabricKeyValueStoreReplica6_BeginChangeRole(This,newRole,callback,context)	\
    ( (This)->lpVtbl -> BeginChangeRole(This,newRole,callback,context) ) 

#define IFabricKeyValueStoreReplica6_EndChangeRole(This,context,serviceAddress)	\
    ( (This)->lpVtbl -> EndChangeRole(This,context,serviceAddress) ) 

#define IFabricKeyValueStoreReplica6_BeginClose(This,callback,context)	\
    ( (This)->lpVtbl -> BeginClose(This,callback,context) ) 

#define IFabricKeyValueStoreReplica6_EndClose(This,context)	\
    ( (This)->lpVtbl -> EndClose(This,context) ) 

#define IFabricKeyValueStoreReplica6_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 


#define IFabricKeyValueStoreReplica6_GetCurrentEpoch(This,currentEpoch)	\
    ( (This)->lpVtbl -> GetCurrentEpoch(This,currentEpoch) ) 

#define IFabricKeyValueStoreReplica6_UpdateReplicatorSettings(This,replicatorSettings)	\
    ( (This)->lpVtbl -> UpdateReplicatorSettings(This,replicatorSettings) ) 

#define IFabricKeyValueStoreReplica6_CreateTransaction(This,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction(This,transaction) ) 

#define IFabricKeyValueStoreReplica6_Add(This,transaction,key,valueSizeInBytes,value)	\
    ( (This)->lpVtbl -> Add(This,transaction,key,valueSizeInBytes,value) ) 

#define IFabricKeyValueStoreReplica6_Remove(This,transaction,key,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Remove(This,transaction,key,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica6_Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber)	\
    ( (This)->lpVtbl -> Update(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber) ) 

#define IFabricKeyValueStoreReplica6_Get(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Get(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica6_GetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> GetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica6_Contains(This,transaction,key,result)	\
    ( (This)->lpVtbl -> Contains(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica6_Enumerate(This,transaction,result)	\
    ( (This)->lpVtbl -> Enumerate(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica6_EnumerateByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,transaction,keyPrefix,result) ) 

#define IFabricKeyValueStoreReplica6_EnumerateMetadata(This,transaction,result)	\
    ( (This)->lpVtbl -> EnumerateMetadata(This,transaction,result) ) 

#define IFabricKeyValueStoreReplica6_EnumerateMetadataByKey(This,transaction,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,transaction,keyPrefix,result) ) 


#define IFabricKeyValueStoreReplica6_Backup(This,backupDirectory)	\
    ( (This)->lpVtbl -> Backup(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica6_Restore(This,backupDirectory)	\
    ( (This)->lpVtbl -> Restore(This,backupDirectory) ) 

#define IFabricKeyValueStoreReplica6_CreateTransaction2(This,settings,transaction)	\
    ( (This)->lpVtbl -> CreateTransaction2(This,settings,transaction) ) 


#define IFabricKeyValueStoreReplica6_BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context)	\
    ( (This)->lpVtbl -> BeginBackup(This,backupDirectory,backupOption,postBackupHandler,callback,context) ) 

#define IFabricKeyValueStoreReplica6_EndBackup(This,context)	\
    ( (This)->lpVtbl -> EndBackup(This,context) ) 


#define IFabricKeyValueStoreReplica6_BeginRestore(This,backupDirectory,callback,context)	\
    ( (This)->lpVtbl -> BeginRestore(This,backupDirectory,callback,context) ) 

#define IFabricKeyValueStoreReplica6_EndRestore(This,context)	\
    ( (This)->lpVtbl -> EndRestore(This,context) ) 


#define IFabricKeyValueStoreReplica6_TryAdd(This,transaction,key,valueSizeInBytes,value,added)	\
    ( (This)->lpVtbl -> TryAdd(This,transaction,key,valueSizeInBytes,value,added) ) 

#define IFabricKeyValueStoreReplica6_TryRemove(This,transaction,key,checkSequenceNumber,exists)	\
    ( (This)->lpVtbl -> TryRemove(This,transaction,key,checkSequenceNumber,exists) ) 

#define IFabricKeyValueStoreReplica6_TryUpdate(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber,exists)	\
    ( (This)->lpVtbl -> TryUpdate(This,transaction,key,valueSizeInBytes,value,checkSequenceNumber,exists) ) 

#define IFabricKeyValueStoreReplica6_TryGet(This,transaction,key,result)	\
    ( (This)->lpVtbl -> TryGet(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica6_TryGetMetadata(This,transaction,key,result)	\
    ( (This)->lpVtbl -> TryGetMetadata(This,transaction,key,result) ) 

#define IFabricKeyValueStoreReplica6_EnumerateByKey2(This,transaction,keyPrefix,strictPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey2(This,transaction,keyPrefix,strictPrefix,result) ) 

#define IFabricKeyValueStoreReplica6_EnumerateMetadataByKey2(This,transaction,keyPrefix,strictPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey2(This,transaction,keyPrefix,strictPrefix,result) ) 


#define IFabricKeyValueStoreReplica6_BeginRestore2(This,backupDirectory,settings,callback,context)	\
    ( (This)->lpVtbl -> BeginRestore2(This,backupDirectory,settings,callback,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreReplica6_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6722b848-15bb-4528-bf54-c7bbe27b6f9a")
    IFabricKeyValueStoreEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey( 
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey( 
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreEnumerator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreEnumerator * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreEnumerator, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreEnumerator * This,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreEnumerator, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreEnumerator * This,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        END_INTERFACE
    } IFabricKeyValueStoreEnumeratorVtbl;

    interface IFabricKeyValueStoreEnumerator
    {
        CONST_VTBL struct IFabricKeyValueStoreEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreEnumerator_EnumerateByKey(This,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,keyPrefix,result) ) 

#define IFabricKeyValueStoreEnumerator_EnumerateMetadataByKey(This,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,keyPrefix,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreEnumerator2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63dfd264-4f2b-4be6-8234-1fa200165fe9")
    IFabricKeyValueStoreEnumerator2 : public IFabricKeyValueStoreEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey2( 
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey2( 
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreEnumerator2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreEnumerator, EnumerateByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreEnumerator, EnumerateMetadataByKey)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreEnumerator2, EnumerateByKey2)
        HRESULT ( STDMETHODCALLTYPE *EnumerateByKey2 )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemEnumerator **result);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreEnumerator2, EnumerateMetadataByKey2)
        HRESULT ( STDMETHODCALLTYPE *EnumerateMetadataByKey2 )( 
            __RPC__in IFabricKeyValueStoreEnumerator2 * This,
            /* [in] */ __RPC__in LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ __RPC__deref_out_opt IFabricKeyValueStoreItemMetadataEnumerator **result);
        
        END_INTERFACE
    } IFabricKeyValueStoreEnumerator2Vtbl;

    interface IFabricKeyValueStoreEnumerator2
    {
        CONST_VTBL struct IFabricKeyValueStoreEnumerator2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreEnumerator2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreEnumerator2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreEnumerator2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreEnumerator2_EnumerateByKey(This,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey(This,keyPrefix,result) ) 

#define IFabricKeyValueStoreEnumerator2_EnumerateMetadataByKey(This,keyPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey(This,keyPrefix,result) ) 


#define IFabricKeyValueStoreEnumerator2_EnumerateByKey2(This,keyPrefix,strictPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateByKey2(This,keyPrefix,strictPrefix,result) ) 

#define IFabricKeyValueStoreEnumerator2_EnumerateMetadataByKey2(This,keyPrefix,strictPrefix,result)	\
    ( (This)->lpVtbl -> EnumerateMetadataByKey2(This,keyPrefix,strictPrefix,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemEnumerator2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("da143bbc-81e1-48cd-afd7-b642bc5b9bfd")
    IFabricKeyValueStoreItemEnumerator2 : public IFabricKeyValueStoreItemEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryMoveNext( 
            /* [retval][out] */ __RPC__out BOOLEAN *success) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreItemEnumerator2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemEnumerator, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemEnumerator, get_Current)
        IFabricKeyValueStoreItemResult *( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemEnumerator2, TryMoveNext)
        HRESULT ( STDMETHODCALLTYPE *TryMoveNext )( 
            __RPC__in IFabricKeyValueStoreItemEnumerator2 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *success);
        
        END_INTERFACE
    } IFabricKeyValueStoreItemEnumerator2Vtbl;

    interface IFabricKeyValueStoreItemEnumerator2
    {
        CONST_VTBL struct IFabricKeyValueStoreItemEnumerator2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreItemEnumerator2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreItemEnumerator2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreItemEnumerator2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreItemEnumerator2_MoveNext(This)	\
    ( (This)->lpVtbl -> MoveNext(This) ) 

#define IFabricKeyValueStoreItemEnumerator2_get_Current(This)	\
    ( (This)->lpVtbl -> get_Current(This) ) 


#define IFabricKeyValueStoreItemEnumerator2_TryMoveNext(This,success)	\
    ( (This)->lpVtbl -> TryMoveNext(This,success) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreItemEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemMetadataEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemMetadataEnumerator2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8803d53e-dd73-40fc-a662-1bfe999419ea")
    IFabricKeyValueStoreItemMetadataEnumerator2 : public IFabricKeyValueStoreItemMetadataEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryMoveNext( 
            /* [retval][out] */ __RPC__out BOOLEAN *success) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreItemMetadataEnumerator2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemMetadataEnumerator, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemMetadataEnumerator, get_Current)
        IFabricKeyValueStoreItemMetadataResult *( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreItemMetadataEnumerator2, TryMoveNext)
        HRESULT ( STDMETHODCALLTYPE *TryMoveNext )( 
            __RPC__in IFabricKeyValueStoreItemMetadataEnumerator2 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *success);
        
        END_INTERFACE
    } IFabricKeyValueStoreItemMetadataEnumerator2Vtbl;

    interface IFabricKeyValueStoreItemMetadataEnumerator2
    {
        CONST_VTBL struct IFabricKeyValueStoreItemMetadataEnumerator2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreItemMetadataEnumerator2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreItemMetadataEnumerator2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreItemMetadataEnumerator2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreItemMetadataEnumerator2_MoveNext(This)	\
    ( (This)->lpVtbl -> MoveNext(This) ) 

#define IFabricKeyValueStoreItemMetadataEnumerator2_get_Current(This)	\
    ( (This)->lpVtbl -> get_Current(This) ) 


#define IFabricKeyValueStoreItemMetadataEnumerator2_TryMoveNext(This,success)	\
    ( (This)->lpVtbl -> TryMoveNext(This,success) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreNotificationEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreNotificationEnumerator2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55eec7c6-ae81-407a-b84c-22771d314ac7")
    IFabricKeyValueStoreNotificationEnumerator2 : public IFabricKeyValueStoreNotificationEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryMoveNext( 
            /* [retval][out] */ __RPC__out BOOLEAN *success) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricKeyValueStoreNotificationEnumerator2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator, MoveNext)
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator, get_Current)
        IFabricKeyValueStoreNotification *( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator, Reset)
        void ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This);
        
        DECLSPEC_XFGVIRT(IFabricKeyValueStoreNotificationEnumerator2, TryMoveNext)
        HRESULT ( STDMETHODCALLTYPE *TryMoveNext )( 
            __RPC__in IFabricKeyValueStoreNotificationEnumerator2 * This,
            /* [retval][out] */ __RPC__out BOOLEAN *success);
        
        END_INTERFACE
    } IFabricKeyValueStoreNotificationEnumerator2Vtbl;

    interface IFabricKeyValueStoreNotificationEnumerator2
    {
        CONST_VTBL struct IFabricKeyValueStoreNotificationEnumerator2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricKeyValueStoreNotificationEnumerator2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricKeyValueStoreNotificationEnumerator2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricKeyValueStoreNotificationEnumerator2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricKeyValueStoreNotificationEnumerator2_MoveNext(This)	\
    ( (This)->lpVtbl -> MoveNext(This) ) 

#define IFabricKeyValueStoreNotificationEnumerator2_get_Current(This)	\
    ( (This)->lpVtbl -> get_Current(This) ) 

#define IFabricKeyValueStoreNotificationEnumerator2_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 


#define IFabricKeyValueStoreNotificationEnumerator2_TryMoveNext(This,success)	\
    ( (This)->lpVtbl -> TryMoveNext(This,success) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricKeyValueStoreNotificationEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricStoreEventHandler_INTERFACE_DEFINED__
#define __IFabricStoreEventHandler_INTERFACE_DEFINED__

/* interface IFabricStoreEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStoreEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("220e6da4-985b-4dee-8fe9-77521b838795")
    IFabricStoreEventHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnDataLoss( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStoreEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStoreEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStoreEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStoreEventHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricStoreEventHandler, OnDataLoss)
        void ( STDMETHODCALLTYPE *OnDataLoss )( 
            __RPC__in IFabricStoreEventHandler * This);
        
        END_INTERFACE
    } IFabricStoreEventHandlerVtbl;

    interface IFabricStoreEventHandler
    {
        CONST_VTBL struct IFabricStoreEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStoreEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStoreEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStoreEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStoreEventHandler_OnDataLoss(This)	\
    ( (This)->lpVtbl -> OnDataLoss(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStoreEventHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricStoreEventHandler2_INTERFACE_DEFINED__
#define __IFabricStoreEventHandler2_INTERFACE_DEFINED__

/* interface IFabricStoreEventHandler2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStoreEventHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CCE4523F-614B-4D6A-98A3-1E197C0213EA")
    IFabricStoreEventHandler2 : public IFabricStoreEventHandler
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOnDataLoss( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOnDataLoss( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *isStateChanged) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStoreEventHandler2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStoreEventHandler2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStoreEventHandler2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStoreEventHandler2 * This);
        
        DECLSPEC_XFGVIRT(IFabricStoreEventHandler, OnDataLoss)
        void ( STDMETHODCALLTYPE *OnDataLoss )( 
            __RPC__in IFabricStoreEventHandler2 * This);
        
        DECLSPEC_XFGVIRT(IFabricStoreEventHandler2, BeginOnDataLoss)
        HRESULT ( STDMETHODCALLTYPE *BeginOnDataLoss )( 
            __RPC__in IFabricStoreEventHandler2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStoreEventHandler2, EndOnDataLoss)
        HRESULT ( STDMETHODCALLTYPE *EndOnDataLoss )( 
            __RPC__in IFabricStoreEventHandler2 * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *isStateChanged);
        
        END_INTERFACE
    } IFabricStoreEventHandler2Vtbl;

    interface IFabricStoreEventHandler2
    {
        CONST_VTBL struct IFabricStoreEventHandler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStoreEventHandler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStoreEventHandler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStoreEventHandler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStoreEventHandler2_OnDataLoss(This)	\
    ( (This)->lpVtbl -> OnDataLoss(This) ) 


#define IFabricStoreEventHandler2_BeginOnDataLoss(This,callback,context)	\
    ( (This)->lpVtbl -> BeginOnDataLoss(This,callback,context) ) 

#define IFabricStoreEventHandler2_EndOnDataLoss(This,context,isStateChanged)	\
    ( (This)->lpVtbl -> EndOnDataLoss(This,context,isStateChanged) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStoreEventHandler2_INTERFACE_DEFINED__ */


#ifndef __IFabricStorePostBackupHandler_INTERFACE_DEFINED__
#define __IFabricStorePostBackupHandler_INTERFACE_DEFINED__

/* interface IFabricStorePostBackupHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStorePostBackupHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2af2e8a6-41df-4e32-9d2a-d73a711e652a")
    IFabricStorePostBackupHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginPostBackup( 
            /* [in] */ __RPC__in FABRIC_STORE_BACKUP_INFO *info,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPostBackup( 
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricStorePostBackupHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricStorePostBackupHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricStorePostBackupHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricStorePostBackupHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricStorePostBackupHandler, BeginPostBackup)
        HRESULT ( STDMETHODCALLTYPE *BeginPostBackup )( 
            __RPC__in IFabricStorePostBackupHandler * This,
            /* [in] */ __RPC__in FABRIC_STORE_BACKUP_INFO *info,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ __RPC__deref_out_opt IFabricAsyncOperationContext **context);
        
        DECLSPEC_XFGVIRT(IFabricStorePostBackupHandler, EndPostBackup)
        HRESULT ( STDMETHODCALLTYPE *EndPostBackup )( 
            __RPC__in IFabricStorePostBackupHandler * This,
            /* [in] */ __RPC__in_opt IFabricAsyncOperationContext *context,
            /* [retval][out] */ __RPC__out BOOLEAN *status);
        
        END_INTERFACE
    } IFabricStorePostBackupHandlerVtbl;

    interface IFabricStorePostBackupHandler
    {
        CONST_VTBL struct IFabricStorePostBackupHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricStorePostBackupHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricStorePostBackupHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricStorePostBackupHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricStorePostBackupHandler_BeginPostBackup(This,info,callback,context)	\
    ( (This)->lpVtbl -> BeginPostBackup(This,info,callback,context) ) 

#define IFabricStorePostBackupHandler_EndPostBackup(This,context,status)	\
    ( (This)->lpVtbl -> EndPostBackup(This,context,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricStorePostBackupHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricSecondaryEventHandler_INTERFACE_DEFINED__
#define __IFabricSecondaryEventHandler_INTERFACE_DEFINED__

/* interface IFabricSecondaryEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecondaryEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7d124a7d-258e-49f2-a9b0-e800406103fb")
    IFabricSecondaryEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCopyComplete( 
            /* [in] */ __RPC__in_opt IFabricKeyValueStoreEnumerator *enumerator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReplicationOperation( 
            /* [in] */ __RPC__in_opt IFabricKeyValueStoreNotificationEnumerator *enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFabricSecondaryEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFabricSecondaryEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFabricSecondaryEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFabricSecondaryEventHandler * This);
        
        DECLSPEC_XFGVIRT(IFabricSecondaryEventHandler, OnCopyComplete)
        HRESULT ( STDMETHODCALLTYPE *OnCopyComplete )( 
            __RPC__in IFabricSecondaryEventHandler * This,
            /* [in] */ __RPC__in_opt IFabricKeyValueStoreEnumerator *enumerator);
        
        DECLSPEC_XFGVIRT(IFabricSecondaryEventHandler, OnReplicationOperation)
        HRESULT ( STDMETHODCALLTYPE *OnReplicationOperation )( 
            __RPC__in IFabricSecondaryEventHandler * This,
            /* [in] */ __RPC__in_opt IFabricKeyValueStoreNotificationEnumerator *enumerator);
        
        END_INTERFACE
    } IFabricSecondaryEventHandlerVtbl;

    interface IFabricSecondaryEventHandler
    {
        CONST_VTBL struct IFabricSecondaryEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFabricSecondaryEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFabricSecondaryEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFabricSecondaryEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFabricSecondaryEventHandler_OnCopyComplete(This,enumerator)	\
    ( (This)->lpVtbl -> OnCopyComplete(This,enumerator) ) 

#define IFabricSecondaryEventHandler_OnReplicationOperation(This,enumerator)	\
    ( (This)->lpVtbl -> OnReplicationOperation(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFabricSecondaryEventHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_FabricRuntime_0000_0075 */
/* [local] */ 

typedef HRESULT (*FnFabricMain)(IFabricRuntime * runtime, IFabricCodePackageActivationContext * activationContext);


extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0075_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


