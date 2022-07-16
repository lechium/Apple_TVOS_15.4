//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, RPCompanionLinkClient;
@protocol HMDRapportMessagingClientFactory, OS_dispatch_queue;

@interface HMDRapportMessaging : HMFObject <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HMDRapportMessagingClientFactory> _clientFactory;	// 24 = 0x18
    RPCompanionLinkClient *_discoveryClient;	// 32 = 0x20
    CDUnknownBlockType _requestHandler;	// 40 = 0x28
    NSMutableArray *_requestQueue;	// 48 = 0x30
    NSMutableDictionary *_deviceClients;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000039fc08
+ (id)sharedInstance;	// IMP=0x000000000039fbd8
- (void).cxx_destruct;	// IMP=0x000000000039ecd8
- (void)_invalidateDestinationDevice:(id)arg1;	// IMP=0x000000000039eac3
- (id)_createRapportClientForDevice:(id)arg1;	// IMP=0x000000000039e767
- (id)_activeDeviceForIDSIdentifier:(id)arg1;	// IMP=0x000000000039e56a
- (id)_clientForIDSIdentifier:(id)arg1;	// IMP=0x000000000039e371
- (void)_completeQueuedRequests;	// IMP=0x000000000039e1b6
- (void)_queueRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000039e031
- (void)_handleRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000039df5c
- (void)_configureDiscoveryClient;	// IMP=0x000000000039d8f5
- (void)sendRequest:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000039d7bf
- (_Bool)canSendRequestToDestinationID:(id)arg1;	// IMP=0x000000000039d78c
- (void)registerRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000039d6f5
- (void)configureDiscoveryClient;	// IMP=0x000000000039d69a
- (id)initWithClientFactory:(id)arg1;	// IMP=0x000000000039d562

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

