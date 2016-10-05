// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Contacts.DataProvider.0.h"
#include "Windows.ApplicationModel.Contacts.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Contacts::DataProvider {

struct __declspec(uuid("1a398a52-8c9d-4d6f-a4e0-111e9a125a30")) __declspec(novtable) IContactDataProviderConnection : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SyncRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ServerSearchReadBatchRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ServerSearchReadBatchRequested(event_token token) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
};

struct __declspec(uuid("527104be-3c62-43c8-9ae7-db531685cd99")) __declspec(novtable) IContactDataProviderTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Connection(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection ** value) = 0;
};

struct __declspec(uuid("ba776a97-4030-4925-9fb4-143b295e653b")) __declspec(novtable) IContactListServerSearchReadBatchRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SessionId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ContactListId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Options(Windows::ApplicationModel::Contacts::IContactQueryOptions ** value) = 0;
    virtual HRESULT __stdcall get_SuggestedBatchSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_SaveContactAsync(Windows::ApplicationModel::Contacts::IContact * contact, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(winrt::Windows::ApplicationModel::Contacts::ContactBatchStatus batchStatus, Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("1a27e87b-69d7-4e4e-8042-861cba61471e")) __declspec(novtable) IContactListServerSearchReadBatchRequestEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("3c0e57a4-c4e7-4970-9a8f-9a66a2bb6c1a")) __declspec(novtable) IContactListSyncManagerSyncRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContactListId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("158e4dac-446d-4f10-afc2-02683ec533a6")) __declspec(novtable) IContactListSyncManagerSyncRequestEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection> { using default_interface = Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection; };
template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails> { using default_interface = Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails; };
template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest> { using default_interface = Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest; };
template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> { using default_interface = Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs; };
template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest> { using default_interface = Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest; };
template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> { using default_interface = Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs; };

}

namespace Windows::ApplicationModel::Contacts::DataProvider {

template <typename T> struct impl_IContactDataProviderConnection;
template <typename T> struct impl_IContactDataProviderTriggerDetails;
template <typename T> struct impl_IContactListServerSearchReadBatchRequest;
template <typename T> struct impl_IContactListServerSearchReadBatchRequestEventArgs;
template <typename T> struct impl_IContactListSyncManagerSyncRequest;
template <typename T> struct impl_IContactListSyncManagerSyncRequestEventArgs;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection;
    template <typename D> using consume = Windows::ApplicationModel::Contacts::DataProvider::impl_IContactDataProviderConnection<D>;
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails;
    template <typename D> using consume = Windows::ApplicationModel::Contacts::DataProvider::impl_IContactDataProviderTriggerDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest;
    template <typename D> using consume = Windows::ApplicationModel::Contacts::DataProvider::impl_IContactListServerSearchReadBatchRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Contacts::DataProvider::impl_IContactListServerSearchReadBatchRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest;
    template <typename D> using consume = Windows::ApplicationModel::Contacts::DataProvider::impl_IContactListSyncManagerSyncRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Contacts::DataProvider::impl_IContactListSyncManagerSyncRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderConnection"; }
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Contacts.DataProvider.ContactDataProviderTriggerDetails"; }
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequest"; }
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Contacts.DataProvider.ContactListServerSearchReadBatchRequestEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequest"; }
};

template <> struct traits<Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Contacts.DataProvider.ContactListSyncManagerSyncRequestEventArgs"; }
};

}

}
