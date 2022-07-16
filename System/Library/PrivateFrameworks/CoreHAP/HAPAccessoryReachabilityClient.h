//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPAccessoryReachabilityClient-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAP2PropertyLock, HAP2SerializedOperationQueue, HAPDeviceID, HMFTimer, NSString;
@protocol HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;

@interface HAPAccessoryReachabilityClient : HMFObject <HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient>
{
    id <HAPAccessoryReachabilityProfile> _profile;	// 8 = 0x8
    id <HAPAccessoryReachabilityDelegate> _delegate;	// 16 = 0x10
    HAP2SerializedOperationQueue *_operationQueue;	// 24 = 0x18
    HAP2PropertyLock *_propertyLock;	// 32 = 0x20
    HAPDeviceID *_identifier;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    HMFTimer *_activityTimer;	// 56 = 0x38
    double _confirmInterval;	// 64 = 0x40
}

+ (id)shortDescription;	// IMP=0x00000000000edce7
+ (id)logCategory;	// IMP=0x00000000000edcb7
+ (void)initialize;	// IMP=0x00000000000edc67
+ (id)new;	// IMP=0x00000000000edbbf
- (void).cxx_destruct;	// IMP=0x00000000000ed81c
@property(readonly, nonatomic) double confirmInterval; // @synthesize confirmInterval=_confirmInterval;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <HAPAccessoryReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) id <HAPAccessoryReachabilityProfile> profile; // @synthesize profile=_profile;
- (id)shortDescription;	// IMP=0x00000000000ed7a4
- (void)_timerDidFire:(id)arg1;	// IMP=0x00000000000ed61a
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000ed419
- (void)_stop;	// IMP=0x00000000000ed3b5
- (void)_poll;	// IMP=0x00000000000ed35a
- (void)_wait;	// IMP=0x00000000000ed1fa
- (void)_processProfile;	// IMP=0x00000000000ecf69
- (void)_enterState:(long long)arg1;	// IMP=0x00000000000ecf10
- (void)_runStateMachine;	// IMP=0x00000000000ecd6c
- (void)confirm;	// IMP=0x00000000000ecb8c
- (void)kick;	// IMP=0x00000000000ec9aa
- (_Bool)isRunning;	// IMP=0x00000000000ec98c
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec8dc
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec82c
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 profile:(id)arg2 operationQueue:(id)arg3;	// IMP=0x00000000000ec418
- (id)init;	// IMP=0x00000000000ec370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

