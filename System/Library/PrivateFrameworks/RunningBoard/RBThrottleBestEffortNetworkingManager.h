//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBStateCapturing-Protocol.h>
#import <RunningBoard/RBThrottleBestEffortNetworkingManaging-Protocol.h>

@class NSString, RBProcessIndex, RBProcessMap;
@protocol OS_dispatch_queue;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    RBProcessIndex *_processIndex;	// 16 = 0x10
    RBProcessMap *_stateMap;	// 24 = 0x18
    _Bool _throttleBestEffortNetworking;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000001ab54
- (id)captureState;	// IMP=0x000000000001aa9b
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isThrottleBestEffortNetworkingEnabled;	// IMP=0x000000000001a991
- (void)removeProcess:(id)arg1;	// IMP=0x000000000001a969
- (void)addProcess:(id)arg1;	// IMP=0x000000000001a941
- (void)didUpdateProcessStates:(id)arg1;	// IMP=0x000000000001a480
- (id)init;	// IMP=0x000000000001a3da

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
