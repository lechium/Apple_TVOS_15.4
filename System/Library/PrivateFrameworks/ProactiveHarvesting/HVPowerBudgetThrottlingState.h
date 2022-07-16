//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface HVPowerBudgetThrottlingState : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 72 = 0x48
    struct {
        unsigned int magic;
        int opsLeft;
        long long nsecLeft;
        int extraOpsLeft;
        int budgetState;
        long long timeOfLastChange;
    } _state;	// 80 = 0x50
    unsigned long long _absTimeAtOpStart;	// 112 = 0x70
    unsigned long long _timeSinceOpStart;	// 120 = 0x78
    int _fd;	// 128 = 0x80
    _Bool _opInProgress;	// 132 = 0x84
    _Bool _dirty;	// 133 = 0x85
    _Bool _wasOnBattery;	// 134 = 0x86
    _Bool _wasEnabled;	// 135 = 0x87
}

- (void).cxx_destruct;	// IMP=0x0000000000005404
- (void)updateState:(unsigned int)arg1;	// IMP=0x00000000000051a3
- (void)didConsumeAnExtraBudgetedOperation;	// IMP=0x000000000000510f
- (void)endWork;	// IMP=0x0000000000004f7f
- (void)startWork;	// IMP=0x0000000000004e47
- (void)refillState;	// IMP=0x0000000000004e14
- (void)checkBatteryStateForRefill;	// IMP=0x0000000000004d78
- (id)state;	// IMP=0x0000000000004b73
- (_Bool)canDoExtraDiscretionaryWork;	// IMP=0x0000000000004ad6
- (_Bool)canDoDiscretionaryWork:(unsigned int *)arg1;	// IMP=0x00000000000048fc
- (_Bool)canDoDiscretionaryWork;	// IMP=0x00000000000048e8
- (void)dealloc;	// IMP=0x0000000000004897
- (id)initWithPath:(id)arg1 log:(id)arg2;	// IMP=0x000000000000465c

@end

