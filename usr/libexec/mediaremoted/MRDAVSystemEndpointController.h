//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDHostedRoutingController, MRDNowPlayingServer, MROrigin, MSVPersistentTimer, NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol MRDAVSystemEndpointControllerDelegate, OS_dispatch_queue;

@interface MRDAVSystemEndpointController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    MRDHostedRoutingController *_routingController;	// 24 = 0x18
    NSMutableDictionary *_systemEndpointEntries;	// 32 = 0x20
    _Bool _cachedHasPersonalDevices;	// 40 = 0x28
    NSUserDefaults *_userDefaults;	// 48 = 0x30
    MSVPersistentTimer *_userSelectedTimer;	// 56 = 0x38
    MSVPersistentTimer *_playbackTimer;	// 64 = 0x40
    MROrigin *_activeOrigin;	// 72 = 0x48
    id <MRDAVSystemEndpointControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000007118
@property(nonatomic) __weak id <MRDAVSystemEndpointControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_deviceInfoDidChange:(id)arg1;	// IMP=0x0010000000006b01
- (void)_initializeSystemEndpointInfo;	// IMP=0x00100000000066c5
- (void)_writeSystemEndpointInfo:(id)arg1;	// IMP=0x0010000000006644
- (_Bool)_hasPersonalDeviceForContext:(id)arg1;	// IMP=0x00100000000064b0
- (void)_onSerialQueue_maybeSetupPlaybackTimerForEvent:(long long)arg1;	// IMP=0x0010000000005fdc
- (void)_onSerialQueue_maybeSetupUserSelectedTimerForEvent:(long long)arg1;	// IMP=0x0010000000005acc
- (void)_onSerialQueue_reconnectToOutputDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000055a2
- (void)_onSerialQueue_updateSystemEndpoint:(id)arg1 type:(long long)arg2 event:(long long)arg3 eventReason:(id)arg4;	// IMP=0x0010000000004552
- (id)_onSerialQueue_calculateProactiveEndpoint:(id *)arg1;	// IMP=0x0010000000004352
- (id)_onSerialQueue_calculateUserSelectedEndpointForEvent:(long long)arg1 reason:(id *)arg2;	// IMP=0x0010000000003edd
- (id)_onSerialQueue_calculateActiveEndpoint:(long long)arg1 event:(long long)arg2 reason:(id *)arg3;	// IMP=0x0010000000003e63
- (void)_onSerialQueue_reevaluateActiveEndpoint:(long long)arg1 event:(long long)arg2 changeType:(long long)arg3 eventReason:(id)arg4 clientBundleIdentifier:(id)arg5;	// IMP=0x0010000000003cf4
- (void)_onSerialQueue_reevaluateActiveEndpoint:(long long)arg1 event:(long long)arg2 eventReason:(id)arg3 clientBundleIdentifier:(id)arg4;	// IMP=0x0010000000003cc9
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x0010000000003b06
- (void)_handleOutputContextDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000039f4
- (void)_handleOriginDidUnregisterNotification:(id)arg1;	// IMP=0x0010000000003873
- (void)_handleOriginDidRegisterNotification:(id)arg1;	// IMP=0x0010000000003657
- (id)originClientForDeviceUID:(id)arg1;	// IMP=0x00100000000032fa
- (void)clearUserSelectedOutputDeviceUID:(id)arg1 event:(long long)arg2 reason:(id)arg3 clientBundleIdentifier:(id)arg4;	// IMP=0x0010000000002f1b
- (void)updateUserSelectedSystemEndpoint:(id)arg1;	// IMP=0x0010000000002eaa
- (void)updateUserSelectedSystemEndpoint:(id)arg1 event:(long long)arg2 eventReason:(id)arg3;	// IMP=0x0010000000002dbf
- (id)activeOutputDeviceUID:(long long)arg1;	// IMP=0x0010000000002bce
@property(readonly, nonatomic) NSDictionary *systemEndpointInfo;
- (void)dealloc;	// IMP=0x00100000000024bc
- (id)initWithRoutingController:(id)arg1;	// IMP=0x0010000000002204

@end

