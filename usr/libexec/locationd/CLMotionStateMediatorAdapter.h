//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionStateMediatorAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000001f6043
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f602a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001f5fcd
+ (_Bool)isSupported;	// IMP=0x00100000001f6f11
- (CDUnknownBlockType)syncgetActivityOverride;	// IMP=0x00200000001f6d15
- (void)didTimeoutGeoFence;	// IMP=0x00100000001f6b3d
- (void)didExitGeoFence;	// IMP=0x00100000001f6938
- (void)lastKnownIndoorOutdoorStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f68fb
- (void)triggerWorkoutLocationEventForTesting:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f68b7
- (void)userDismissedWorkoutAlert;	// IMP=0x00100000001f67ca
- (void)setWorkoutSuggestedStopTimeout:(double)arg1;	// IMP=0x00100000001f668b
- (void)removeClient:(byref id)arg1 prepareSessionEndForSessionType:(long long)arg2;	// IMP=0x00100000001f6429
- (void)addClient:(byref id)arg1 prepareSessionEndForSessionType:(long long)arg2;	// IMP=0x00100000001f6256
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f622e
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f6201
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f61d9
- (void *)adaptee;	// IMP=0x00100000001f61a6
- (void)endService;	// IMP=0x00100000001f618b
- (void)beginService;	// IMP=0x00100000001f60dc
- (id)init;	// IMP=0x00100000001f609f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
