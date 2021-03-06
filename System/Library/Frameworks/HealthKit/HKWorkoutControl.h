//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKWorkoutControlClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKWorkoutControl : NSObject <_HKXPCExportable, HKWorkoutControlClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x00000000000a08b9
- (void).cxx_destruct;	// IMP=0x00000000000a0e29
- (id)remoteInterface;	// IMP=0x00000000000a0e1f
- (id)exportedInterface;	// IMP=0x00000000000a0e15
- (void)connectionInvalidated;	// IMP=0x00000000000a0e0f
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a0ccc
- (void)generatePauseOrResumeRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a09f3
- (void)generateWorkoutMarkerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a09e1
- (void)finishAllWorkoutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a08cb
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000000a07c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

