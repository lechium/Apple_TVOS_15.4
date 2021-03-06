//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, PKSharingIDSManagerDataSource;

@interface PKSharingIDSManager : NSObject <IDSServiceDelegate>
{
    NSHashTable *_delegates;	// 8 = 0x8
    struct os_unfair_lock_s _delegatesLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSMutableDictionary *_completionHandlers;	// 40 = 0x28
    NSMutableDictionary *_sharingDestinations;	// 48 = 0x30
    IDSService *_service;	// 56 = 0x38
    id <PKSharingIDSManagerDataSource> _dataSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000d9d1c
@property(nonatomic) __weak id <PKSharingIDSManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_sharingDestinationForHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d90a9
- (id)_primaryAppleIDSharingDestination:(id)arg1;	// IMP=0x00000000000d9009
- (id)_idsIDForHandle:(id)arg1;	// IMP=0x00000000000d8f9b
- (id)_sanitizedHande:(id)arg1;	// IMP=0x00000000000d8ed7
- (id)_sanitizedHandleWithFromID:(id)arg1;	// IMP=0x00000000000d8e8f
- (void)_registerListeners;	// IMP=0x00000000000d8db1
- (void)_sendMessageWithProtobuf:(id)arg1 destination:(id)arg2 handleUserDetails:(id)arg3 currentUserDetails:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d85d1
- (_Bool)_canPerformIDSMessageForSharingGroup:(unsigned long long)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000d8316
- (id)_handlerConfigurationForInvitation:(id)arg1 forHandle:(id)arg2;	// IMP=0x00000000000d819c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000d7f25
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d7e41
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00000000000d7ca4
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000d7c50
- (void)addDelegate:(id)arg1;	// IMP=0x00000000000d7bc9
@property(readonly, nonatomic) NSArray *delegates;
- (void)_deviceSharingCapabilitiesRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d7528
- (void)_deviceSharingCapabiltiesRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d6ee9
- (void)_remoteRegistrationRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d692c
- (void)_remoteRegistrationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d6326
- (void)_cloudStoreZoneShareInvitationRequestInvitationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d5d14
- (void)_cloudStoreZoneShareInvitationResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d569f
- (void)_cloudStoreZoneShareInvitationRequestRemoved:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d508d
- (void)_cloudStoreZoneShareInvitationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d49e5
- (void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d3e5c
- (void)sendRemoteRegistrationRequestResult:(unsigned long long)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d3766
- (void)sendRemoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d2ea0
- (void)_sendCloudStoreInvitationRequest:(id)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 type:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d2d58
- (void)requestCloudStoreZoneInvitationData:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d24ed
- (void)sendCloudStoreZoneInvitationResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d2084
- (void)removeCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d1771
- (void)sendCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 invitationError:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d0d81
- (void)dealloc;	// IMP=0x00000000000d0d3c
- (id)initWithIDSService:(id)arg1;	// IMP=0x00000000000d0c32
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x00000000000d0bdb
- (id)init;	// IMP=0x00000000000d0b21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

