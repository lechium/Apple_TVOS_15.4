//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/FBSServiceFacilityClientConfiguring-Protocol.h>
#import <FrontBoardServices/FBSServiceFacilityClientMessaging-Protocol.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, BSServiceInterface, BSServiceQuality, NSString;
@protocol OS_dispatch_queue;

@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable>
{
    BSServiceConnectionEndpoint *_endpoint;	// 8 = 0x8
    NSString *_facilityID;	// 16 = 0x10
    BSServiceQuality *_serviceQuality;	// 24 = 0x18
    BSServiceInterface *_interface;	// 32 = 0x20
    id _configOnly_interfaceTarget;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    _Bool _configured;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 60 = 0x3c
    BSServiceConnection *_lock_connection;	// 64 = 0x40
    _Bool _lock_connectionDenied;	// 72 = 0x48
    _Bool _lock_activated;	// 73 = 0x49
    _Bool _lock_invalidated;	// 74 = 0x4a
    _Bool _uisHack;	// 75 = 0x4b
}

+ (id)defaultShellEndpoint;	// IMP=0x0000000000061e8e
- (void).cxx_destruct;	// IMP=0x0000000000063214
@property(readonly, nonatomic, getter=isConfigured) _Bool configured; // @synthesize configured=_configured;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) BSServiceQuality *serviceQuality; // @synthesize serviceQuality=_serviceQuality;
- (void)_queue_handleMessage:(id)arg1;	// IMP=0x000000000006308e
- (void)_queue_handleError:(id)arg1;	// IMP=0x0000000000062dc6
- (void)_lock_activate;	// IMP=0x000000000006262b
- (void)_lock_invalidate;	// IMP=0x000000000006252f
- (_Bool)_isValid;	// IMP=0x0000000000062503
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4 timeout:(double)arg5;	// IMP=0x00000000000620ea
- (void)sendMessage:(id)arg1 withType:(long long)arg2;	// IMP=0x00000000000620cc
- (void)handleError:(id)arg1;	// IMP=0x00000000000620c6
- (void)handleMessage:(id)arg1 withType:(long long)arg2;	// IMP=0x00000000000620c0
- (void)configureConnectMessage:(id)arg1;	// IMP=0x00000000000620ba
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000062002
- (void)activate;	// IMP=0x0000000000061fd0
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)setCalloutQueue:(id)arg1;	// IMP=0x0000000000061beb
- (void)setInterfaceTarget:(id)arg1;	// IMP=0x0000000000061948
- (void)setInterface:(id)arg1;	// IMP=0x00000000000616a5
- (void)setServiceQuality:(id)arg1;	// IMP=0x0000000000061402
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000061136
- (void)setEndpoint:(id)arg1;	// IMP=0x0000000000060cf3
- (void)dealloc;	// IMP=0x0000000000060b6f
- (id)initWithConfigurator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000602f1
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;	// IMP=0x000000000006015f
- (id)init;	// IMP=0x0000000000060031

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

