//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HVPowerBudgetThrottlingState, NSDate;
@protocol NSObject, OS_os_log;

@interface HVPowerBudget : NSObject
{
    HVPowerBudgetThrottlingState *_throttlingState;	// 8 = 0x8
    NSDate *_lastPlugInTime;	// 16 = 0x10
    id <NSObject> _batteryObserver;	// 24 = 0x18
    _Atomic _Bool _discretionaryWorkInProgress;	// 32 = 0x20
    NSObject<OS_os_log> *_log;	// 40 = 0x28
}

+ (void)setCanDoWorkOverrideForTesting:(id)arg1;	// IMP=0x000000000000570c
+ (id)defaultBudget;	// IMP=0x00000000000056dc
- (void).cxx_destruct;	// IMP=0x00000000000044d5
- (id)throttlingState;	// IMP=0x0000000000004170
- (void)didConsumeAnExtraBudgetedOperation;	// IMP=0x0000000000004105
- (_Bool)canDoExtraDiscretionaryWork;	// IMP=0x00000000000040c8
- (void)doDiscretionaryWork:(CDUnknownBlockType)arg1 orElse:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003def
- (_Bool)canDoDiscretionaryWork;	// IMP=0x0000000000003de3
- (void)refillThrottleBudget;	// IMP=0x0000000000003dcd
- (void)dealloc;	// IMP=0x0000000000003d50
- (id)init;	// IMP=0x0000000000003cb7
- (id)initWithThrottleBudget:(id)arg1;	// IMP=0x0000000000003b72

@end

