//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, NSMutableArray, NSString, SDAutoUnlockWiFiRequest;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockWiFiManager : NSObject
{
    _Bool _awdlStartFailed;	// 8 = 0x8
    _Bool _awdlStarting;	// 9 = 0x9
    _Bool _awdlTimerFired;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_awdlTimer;	// 24 = 0x18
    id _awdlNetwork;	// 32 = 0x20
    SDAutoUnlockWiFiRequest *_currentRequest;	// 40 = 0x28
    CLLocationManager *_locationManager;	// 48 = 0x30
    NSMutableArray *_wifiRequestQueue;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x0020000000125f7c
- (void).cxx_destruct;	// IMP=0x00200000001288f0
@property(retain, nonatomic) NSMutableArray *wifiRequestQueue; // @synthesize wifiRequestQueue=_wifiRequestQueue;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) SDAutoUnlockWiFiRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool awdlTimerFired; // @synthesize awdlTimerFired=_awdlTimerFired;
@property(nonatomic) _Bool awdlStarting; // @synthesize awdlStarting=_awdlStarting;
@property(nonatomic) _Bool awdlStartFailed; // @synthesize awdlStartFailed=_awdlStartFailed;
@property(retain) id awdlNetwork; // @synthesize awdlNetwork=_awdlNetwork;
@property(retain) NSObject<OS_dispatch_source> *awdlTimer; // @synthesize awdlTimer=_awdlTimer;
- (void)setQueue:(id)arg1;	// IMP=0x001000000012880a
- (id)queue;	// IMP=0x0010000000128800
- (void)_handleAWDLTimerFired;	// IMP=0x001000000012867a
- (void)_invalidateAWDLTimer;	// IMP=0x0010000000128550
- (void)_restartAWDLTimer;	// IMP=0x00100000001282f1
- (void)__handleAWDLDisabledIfNeededForRequest:(id)arg1;	// IMP=0x001000000012813b
- (void)_stopAWDL;	// IMP=0x00100000001280e8
- (void)_startAWDLWithInfo:(id)arg1;	// IMP=0x0010000000127fa3
- (void)locationManager:(id)arg1 rangingDidFailForPeer:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000127e24
- (void)locationManager:(id)arg1 didRangePeers:(id)arg2;	// IMP=0x0010000000127ca5
- (void)_disableRangeable;	// IMP=0x0010000000127a80
- (void)_enableRangeableIfNeeded;	// IMP=0x001000000012781d
- (void)_startRanging;	// IMP=0x0010000000127622
- (void)_invalidateCurrentRequest;	// IMP=0x0010000000127475
- (void)_resetManagerState;	// IMP=0x0010000000127386
- (void)_cancelWiFiRequest:(id)arg1;	// IMP=0x0010000000127221
- (void)_processRequestQueue;	// IMP=0x0010000000126cb3
- (void)updateWiFiRequest:(id)arg1 setRangingPeer:(id)arg2;	// IMP=0x0010000000126bc3
- (void)cancelWiFiRequest:(id)arg1;	// IMP=0x0010000000126af5
- (void)scheduleWiFiRequest:(id)arg1;	// IMP=0x0010000000126847
- (void)_invalidateWiFiRequest:(id)arg1;	// IMP=0x001000000012649e
- (_Bool)_addWiFiRequest:(id)arg1;	// IMP=0x00100000001262fc
- (void)_addObservers;	// IMP=0x00100000001262f6
- (void)_createWiFiObserver;	// IMP=0x00100000001262f0
- (void)_createLocationManager;	// IMP=0x0010000000126101
- (void)start;	// IMP=0x0010000000126048
- (id)init;	// IMP=0x0010000000125fd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
