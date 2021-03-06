//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSAbsoluteMachTimer, NSObject, RBSProcessHandle;
@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision
{
    CDStruct_4e83c7bf _allowance;	// 24 = 0x18
    unsigned long long _baselineValue;	// 48 = 0x30
    unsigned long long _consumedValue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    BSAbsoluteMachTimer *_timer;	// 72 = 0x48
    RBSProcessHandle *_processHandle;	// 80 = 0x50
    double _timerFireInterval;	// 88 = 0x58
    unsigned long long _timerFireCount;	// 96 = 0x60
}

+ (id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2;	// IMP=0x0000000000051695
+ (id)provisionWithAllowance:(CDStruct_4e83c7bf)arg1;	// IMP=0x000000000005163a
- (void).cxx_destruct;	// IMP=0x000000000005313c
@property(nonatomic) CDStruct_4e83c7bf allowance; // @synthesize allowance=_allowance;
- (_Bool)isResourceProvision;	// IMP=0x00000000000530f6
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000053029
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000052f58
- (_Bool)_queue_calculateValueConsumed:(out unsigned long long *)arg1;	// IMP=0x0000000000052e4d
- (_Bool)_queue_updateConsumption;	// IMP=0x0000000000052c1f
- (void)_queue_evaluateConsumptionFromTimer:(_Bool)arg1;	// IMP=0x0000000000052a82
- (void)_queue_noteAllowanceExhausted;	// IMP=0x00000000000527e3
- (void)_queue_stopMonitoring;	// IMP=0x00000000000526a4
- (void)_prepareForReuse;	// IMP=0x0000000000052539
- (void)_stopMonitoring;	// IMP=0x00000000000524a5
- (void)_updateProgress;	// IMP=0x000000000005243b
- (void)_beginMonitoring;	// IMP=0x0000000000051c7c
- (_Bool)allowanceRemaining:(out CDStruct_4e83c7bf *)arg1;	// IMP=0x0000000000051a1c
@property(nonatomic) long long type; // @dynamic type;
- (void)dealloc;	// IMP=0x0000000000051748
- (id)initWithAllowance:(CDStruct_4e83c7bf)arg1;	// IMP=0x00000000000516ea

@end

