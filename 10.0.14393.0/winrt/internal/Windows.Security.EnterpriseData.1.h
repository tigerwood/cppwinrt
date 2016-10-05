// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Security.EnterpriseData.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::EnterpriseData {

struct __declspec(uuid("47995edc-6cec-4e3a-b251-9e7485d79e7a")) __declspec(novtable) IBufferProtectUnprotectResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Buffer(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_ProtectionInfo(Windows::Security::EnterpriseData::IDataProtectionInfo ** value) = 0;
};

struct __declspec(uuid("8420b0c1-5e31-4405-9540-3f943af0cb26")) __declspec(novtable) IDataProtectionInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::EnterpriseData::DataProtectionStatus * value) = 0;
    virtual HRESULT __stdcall get_Identity(hstring * value) = 0;
};

struct __declspec(uuid("b6149b74-9144-4ee4-8a8a-30b5f361430e")) __declspec(novtable) IDataProtectionManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ProtectAsync(Windows::Storage::Streams::IBuffer * data, hstring identity, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> ** result) = 0;
    virtual HRESULT __stdcall abi_UnprotectAsync(Windows::Storage::Streams::IBuffer * data, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> ** result) = 0;
    virtual HRESULT __stdcall abi_ProtectStreamAsync(Windows::Storage::Streams::IInputStream * unprotectedStream, hstring identity, Windows::Storage::Streams::IOutputStream * protectedStream, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ** result) = 0;
    virtual HRESULT __stdcall abi_UnprotectStreamAsync(Windows::Storage::Streams::IInputStream * protectedStream, Windows::Storage::Streams::IOutputStream * unprotectedStream, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ** result) = 0;
    virtual HRESULT __stdcall abi_GetProtectionInfoAsync(Windows::Storage::Streams::IBuffer * protectedData, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ** result) = 0;
    virtual HRESULT __stdcall abi_GetStreamProtectionInfoAsync(Windows::Storage::Streams::IInputStream * protectedStream, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> ** result) = 0;
};

struct __declspec(uuid("4ee96486-147e-4dd0-8faf-5253ed91ad0c")) __declspec(novtable) IFileProtectionInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::EnterpriseData::FileProtectionStatus * value) = 0;
    virtual HRESULT __stdcall get_IsRoamable(bool * value) = 0;
    virtual HRESULT __stdcall get_Identity(hstring * value) = 0;
};

struct __declspec(uuid("5846fc9b-e613-426b-bb38-88cba1dc9adb")) __declspec(novtable) IFileProtectionManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ProtectAsync(Windows::Storage::IStorageItem * target, hstring identity, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> ** result) = 0;
    virtual HRESULT __stdcall abi_CopyProtectionAsync(Windows::Storage::IStorageItem * source, Windows::Storage::IStorageItem * target, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_GetProtectionInfoAsync(Windows::Storage::IStorageItem * source, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> ** result) = 0;
    virtual HRESULT __stdcall abi_SaveFileAsContainerAsync(Windows::Storage::IStorageFile * protectedFile, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> ** result) = 0;
    virtual HRESULT __stdcall abi_LoadFileFromContainerAsync(Windows::Storage::IStorageFile * containerFile, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> ** result) = 0;
    virtual HRESULT __stdcall abi_LoadFileFromContainerWithTargetAsync(Windows::Storage::IStorageFile * containerFile, Windows::Storage::IStorageItem * target, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateProtectedAndOpenAsync(Windows::Storage::IStorageFolder * parentFolder, hstring desiredName, hstring identity, winrt::Windows::Storage::CreationCollisionOption collisionOption, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> ** result) = 0;
};

struct __declspec(uuid("83d2a745-0483-41ab-b2d5-bc7f23d74ebb")) __declspec(novtable) IFileProtectionManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsContainerAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(Windows::Storage::IStorageFile * containerFile, Windows::Storage::IStorageItem * target, winrt::Windows::Storage::NameCollisionOption collisionOption, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> ** result) = 0;
    virtual HRESULT __stdcall abi_SaveFileAsContainerWithSharingAsync(Windows::Storage::IStorageFile * protectedFile, Windows::Foundation::Collections::IIterable<hstring> * sharedWithIdentities, Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> ** result) = 0;
};

struct __declspec(uuid("256bbc3d-1c5d-4260-8c75-9144cfb78ba9")) __declspec(novtable) IFileRevocationManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ProtectAsync(Windows::Storage::IStorageItem * storageItem, hstring enterpriseIdentity, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> ** result) = 0;
    virtual HRESULT __stdcall abi_CopyProtectionAsync(Windows::Storage::IStorageItem * sourceStorageItem, Windows::Storage::IStorageItem * targetStorageItem, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_Revoke(hstring enterpriseIdentity) = 0;
    virtual HRESULT __stdcall abi_GetStatusAsync(Windows::Storage::IStorageItem * storageItem, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> ** result) = 0;
};

struct __declspec(uuid("ac4dca59-5d80-4e95-8c5f-8539450eebe0")) __declspec(novtable) IProtectedAccessResumedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Identities(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("75a193e0-a344-429f-b975-04fc1f88c185")) __declspec(novtable) IProtectedAccessSuspendingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Identities(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("3948ef95-f7fb-4b42-afb0-df70b41543c1")) __declspec(novtable) IProtectedContainerExportResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus * value) = 0;
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
};

struct __declspec(uuid("cdb780d1-e7bb-4d1a-9339-34dc41149f9b")) __declspec(novtable) IProtectedContainerImportResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus * value) = 0;
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
};

struct __declspec(uuid("63686821-58b9-47ee-93d9-f0f741cf43f0")) __declspec(novtable) IProtectedContentRevokedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Identities(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("28e3ed6a-e9e7-4a03-9f53-bdb16172699b")) __declspec(novtable) IProtectedFileCreateResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall get_Stream(Windows::Storage::Streams::IRandomAccessStream ** value) = 0;
    virtual HRESULT __stdcall get_ProtectionInfo(Windows::Security::EnterpriseData::IFileProtectionInfo ** value) = 0;
};

struct __declspec(uuid("425ab7e4-feb7-44fc-b3bb-c3c4d7ecbebb")) __declspec(novtable) IProtectionPolicyAuditInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Action(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value) = 0;
    virtual HRESULT __stdcall get_Action(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction * value) = 0;
    virtual HRESULT __stdcall put_DataDescription(hstring value) = 0;
    virtual HRESULT __stdcall get_DataDescription(hstring * value) = 0;
    virtual HRESULT __stdcall put_SourceDescription(hstring value) = 0;
    virtual HRESULT __stdcall get_SourceDescription(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetDescription(hstring value) = 0;
    virtual HRESULT __stdcall get_TargetDescription(hstring * value) = 0;
};

struct __declspec(uuid("7ed4180b-92e8-42d5-83d4-25440b423549")) __declspec(novtable) IProtectionPolicyAuditInfoFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring dataDescription, hstring sourceDescription, hstring targetDescription, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithActionAndDataDescription(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring dataDescription, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo ** result) = 0;
};

struct __declspec(uuid("d5703e18-a08d-47e6-a240-9934d7165eb5")) __declspec(novtable) IProtectionPolicyManager : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Identity(hstring value) = 0;
    virtual HRESULT __stdcall get_Identity(hstring * value) = 0;
};

struct __declspec(uuid("abf7527a-8435-417f-99b6-51beaf365888")) __declspec(novtable) IProtectionPolicyManager2 : Windows::IInspectable
{
    virtual HRESULT __stdcall put_ShowEnterpriseIndicator(bool value) = 0;
    virtual HRESULT __stdcall get_ShowEnterpriseIndicator(bool * value) = 0;
};

struct __declspec(uuid("c0bffc66-8c3d-4d56-8804-c68f0ad32ec5")) __declspec(novtable) IProtectionPolicyManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsIdentityManaged(hstring identity, bool * result) = 0;
    virtual HRESULT __stdcall abi_TryApplyProcessUIPolicy(hstring identity, bool * result) = 0;
    virtual HRESULT __stdcall abi_ClearProcessUIPolicy() = 0;
    virtual HRESULT __stdcall abi_CreateCurrentThreadNetworkContext(hstring identity, Windows::Security::EnterpriseData::IThreadNetworkContext ** result) = 0;
    virtual HRESULT __stdcall abi_GetPrimaryManagedIdentityForNetworkEndpointAsync(Windows::Networking::IHostName * endpointHost, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_RevokeContent(hstring identity) = 0;
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Security::EnterpriseData::IProtectionPolicyManager ** result) = 0;
    virtual HRESULT __stdcall add_ProtectedAccessSuspending(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ProtectedAccessSuspending(event_token token) = 0;
    virtual HRESULT __stdcall add_ProtectedAccessResumed(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ProtectedAccessResumed(event_token token) = 0;
    virtual HRESULT __stdcall add_ProtectedContentRevoked(Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ProtectedContentRevoked(event_token token) = 0;
    virtual HRESULT __stdcall abi_CheckAccess(hstring sourceIdentity, hstring targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessAsync(hstring sourceIdentity, hstring targetIdentity, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ** result) = 0;
};

struct __declspec(uuid("b68f9a8c-39e0-4649-b2e4-070ab8a579b3")) __declspec(novtable) IProtectionPolicyManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_HasContentBeenRevokedSince(hstring identity, Windows::Foundation::DateTime since, bool * result) = 0;
    virtual HRESULT __stdcall abi_CheckAccessForApp(hstring sourceIdentity, hstring appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessForAppAsync(hstring sourceIdentity, hstring appPackageFamilyName, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_GetEnforcementLevel(hstring identity, winrt::Windows::Security::EnterpriseData::EnforcementLevel * value) = 0;
    virtual HRESULT __stdcall abi_IsUserDecryptionAllowed(hstring identity, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsProtectionUnderLockRequired(hstring identity, bool * value) = 0;
    virtual HRESULT __stdcall add_PolicyChanged(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PolicyChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_IsProtectionEnabled(bool * value) = 0;
};

struct __declspec(uuid("48ff9e8c-6a6f-4d9f-bced-18ab537aa015")) __declspec(novtable) IProtectionPolicyManagerStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestAccessWithAuditingInfoAsync(hstring sourceIdentity, hstring targetIdentity, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessWithMessageAsync(hstring sourceIdentity, hstring targetIdentity, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo, hstring messageFromApp, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessForAppWithAuditingInfoAsync(hstring sourceIdentity, hstring appPackageFamilyName, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessForAppWithMessageAsync(hstring sourceIdentity, hstring appPackageFamilyName, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo, hstring messageFromApp, Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_LogAuditEvent(hstring sourceIdentity, hstring targetIdentity, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo) = 0;
};

struct __declspec(uuid("fa4ea8e9-ef13-405a-b12c-d7348c6f41fc")) __declspec(novtable) IThreadNetworkContext : Windows::IInspectable
{
};

}

namespace ABI {

template <> struct traits<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> { using default_interface = Windows::Security::EnterpriseData::IBufferProtectUnprotectResult; };
template <> struct traits<Windows::Security::EnterpriseData::DataProtectionInfo> { using default_interface = Windows::Security::EnterpriseData::IDataProtectionInfo; };
template <> struct traits<Windows::Security::EnterpriseData::FileProtectionInfo> { using default_interface = Windows::Security::EnterpriseData::IFileProtectionInfo; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> { using default_interface = Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> { using default_interface = Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectedContainerExportResult> { using default_interface = Windows::Security::EnterpriseData::IProtectedContainerExportResult; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectedContainerImportResult> { using default_interface = Windows::Security::EnterpriseData::IProtectedContainerImportResult; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> { using default_interface = Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectedFileCreateResult> { using default_interface = Windows::Security::EnterpriseData::IProtectedFileCreateResult; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo> { using default_interface = Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo; };
template <> struct traits<Windows::Security::EnterpriseData::ProtectionPolicyManager> { using default_interface = Windows::Security::EnterpriseData::IProtectionPolicyManager; };
template <> struct traits<Windows::Security::EnterpriseData::ThreadNetworkContext> { using default_interface = Windows::Security::EnterpriseData::IThreadNetworkContext; };

}

namespace Windows::Security::EnterpriseData {

template <typename T> struct impl_IBufferProtectUnprotectResult;
template <typename T> struct impl_IDataProtectionInfo;
template <typename T> struct impl_IDataProtectionManagerStatics;
template <typename T> struct impl_IFileProtectionInfo;
template <typename T> struct impl_IFileProtectionManagerStatics;
template <typename T> struct impl_IFileProtectionManagerStatics2;
template <typename T> struct impl_IFileRevocationManagerStatics;
template <typename T> struct impl_IProtectedAccessResumedEventArgs;
template <typename T> struct impl_IProtectedAccessSuspendingEventArgs;
template <typename T> struct impl_IProtectedContainerExportResult;
template <typename T> struct impl_IProtectedContainerImportResult;
template <typename T> struct impl_IProtectedContentRevokedEventArgs;
template <typename T> struct impl_IProtectedFileCreateResult;
template <typename T> struct impl_IProtectionPolicyAuditInfo;
template <typename T> struct impl_IProtectionPolicyAuditInfoFactory;
template <typename T> struct impl_IProtectionPolicyManager;
template <typename T> struct impl_IProtectionPolicyManager2;
template <typename T> struct impl_IProtectionPolicyManagerStatics;
template <typename T> struct impl_IProtectionPolicyManagerStatics2;
template <typename T> struct impl_IProtectionPolicyManagerStatics3;
template <typename T> struct impl_IThreadNetworkContext;

}

namespace impl {

template <> struct traits<Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IBufferProtectUnprotectResult<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IDataProtectionInfo>
{
    using abi = ABI::Windows::Security::EnterpriseData::IDataProtectionInfo;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IDataProtectionInfo<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
{
    using abi = ABI::Windows::Security::EnterpriseData::IDataProtectionManagerStatics;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IDataProtectionManagerStatics<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IFileProtectionInfo>
{
    using abi = ABI::Windows::Security::EnterpriseData::IFileProtectionInfo;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IFileProtectionInfo<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
{
    using abi = ABI::Windows::Security::EnterpriseData::IFileProtectionManagerStatics;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IFileProtectionManagerStatics<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
{
    using abi = ABI::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IFileProtectionManagerStatics2<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
{
    using abi = ABI::Windows::Security::EnterpriseData::IFileRevocationManagerStatics;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IFileRevocationManagerStatics<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectedAccessResumedEventArgs<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectedAccessSuspendingEventArgs<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectedContainerExportResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectedContainerExportResult<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectedContainerImportResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectedContainerImportResult<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectedContentRevokedEventArgs<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectedFileCreateResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectedFileCreateResult<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyAuditInfo<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyAuditInfoFactory<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyManager>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyManager;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyManager<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyManager2>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyManager2;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyManager2<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyManagerStatics<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyManagerStatics2<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
{
    using abi = ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IProtectionPolicyManagerStatics3<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::IThreadNetworkContext>
{
    using abi = ABI::Windows::Security::EnterpriseData::IThreadNetworkContext;
    template <typename D> using consume = Windows::Security::EnterpriseData::impl_IThreadNetworkContext<D>;
};

template <> struct traits<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.BufferProtectUnprotectResult"; }
};

template <> struct traits<Windows::Security::EnterpriseData::DataProtectionInfo>
{
    using abi = ABI::Windows::Security::EnterpriseData::DataProtectionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.DataProtectionInfo"; }
};

template <> struct traits<Windows::Security::EnterpriseData::DataProtectionManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.DataProtectionManager"; }
};

template <> struct traits<Windows::Security::EnterpriseData::FileProtectionInfo>
{
    using abi = ABI::Windows::Security::EnterpriseData::FileProtectionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.FileProtectionInfo"; }
};

template <> struct traits<Windows::Security::EnterpriseData::FileProtectionManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.FileProtectionManager"; }
};

template <> struct traits<Windows::Security::EnterpriseData::FileRevocationManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.FileRevocationManager"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectedContainerExportResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectedContainerExportResult"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectedContainerImportResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectedContainerImportResult"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectedFileCreateResult>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectedFileCreateResult"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ProtectionPolicyManager>
{
    using abi = ABI::Windows::Security::EnterpriseData::ProtectionPolicyManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ProtectionPolicyManager"; }
};

template <> struct traits<Windows::Security::EnterpriseData::ThreadNetworkContext>
{
    using abi = ABI::Windows::Security::EnterpriseData::ThreadNetworkContext;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.EnterpriseData.ThreadNetworkContext"; }
};

}

}
