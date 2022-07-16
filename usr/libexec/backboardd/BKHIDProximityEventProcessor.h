//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol BSInvalidatable;

@interface BKHIDProximityEventProcessor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldSuppressTouchesWhileObjectWithinProximity;	// 12 = 0xc
    _Bool _objectWithinProximity;	// 13 = 0xd
    _Bool _proximityDetectionActive;	// 14 = 0xe
    int _detectionMode;	// 16 = 0x10
    unsigned int _detectionMask;	// 20 = 0x14
    NSMutableSet *_eventClients;	// 24 = 0x18
    id <BSInvalidatable> _sensorModeChangeObserverToken;	// 32 = 0x20
    id <BSInvalidatable> _suppressTouchesAssertion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001dce2
- (void)_locked_setObjectWithinProximity:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x001000000001dc54
- (void)_locked_updateTouchSuppressionAssertion;	// IMP=0x001000000001db37
- (void)_locked_postEventWithDetectionMask:(unsigned int)arg1 toDestinations:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000001d8bc
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000001d2aa
@property(nonatomic) _Bool shouldSuppressTouchesWhileObjectWithinProximity;
@property(readonly, nonatomic, getter=isProximityDetectionActive) _Bool proximityDetectionActive;
@property(readonly, nonatomic, getter=isObjectWithinProximity) _Bool objectWithinProximity;
- (void)dealloc;	// IMP=0x001000000001d1ae
- (id)initWithContext:(id)arg1;	// IMP=0x001000000001d16f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

