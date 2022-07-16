//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFHomeObserver-Protocol.h>
#import <Home/HFSetupPairingController-Protocol.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSDate, NSHashTable, NSSet, NSString;

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController>
{
    _Bool _accessoryRequiresCode;	// 8 = 0x8
    HFSetupPairingContext *_context;	// 16 = 0x10
    HFSetupAccessoryResult *_setupResult;	// 24 = 0x18
    HMAccessorySetupCompletedInfo *_completedInfo;	// 32 = 0x20
    HFDiscoveredAccessory *_discoveredAccessoryToPair;	// 40 = 0x28
    unsigned long long _phase;	// 48 = 0x30
    NSString *_statusTitle;	// 56 = 0x38
    NSString *_statusDescription;	// 64 = 0x40
    HMHome *_home;	// 72 = 0x48
    NSSet *_pairedAccessories;	// 80 = 0x50
    NSHashTable *_pairingObservers;	// 88 = 0x58
    NAFuture *_pairingFuture;	// 96 = 0x60
    NSDate *_phaseStartDate;	// 104 = 0x68
}

+ (_Bool)supportsSetupPayloadRetry;	// IMP=0x000000000002185c
- (void).cxx_destruct;	// IMP=0x0000000000024946
@property(nonatomic) _Bool accessoryRequiresCode; // @synthesize accessoryRequiresCode=_accessoryRequiresCode;
@property(retain, nonatomic) NSDate *phaseStartDate; // @synthesize phaseStartDate=_phaseStartDate;
@property(retain, nonatomic) NAFuture *pairingFuture; // @synthesize pairingFuture=_pairingFuture;
@property(retain, nonatomic) NSHashTable *pairingObservers; // @synthesize pairingObservers=_pairingObservers;
@property(retain, nonatomic) NSSet *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(retain, nonatomic) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // @synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair;
@property(retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo; // @synthesize completedInfo=_completedInfo;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult; // @synthesize setupResult=_setupResult;
@property(readonly, nonatomic) HFSetupPairingContext *context; // @synthesize context=_context;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;	// IMP=0x000000000002469d
- (void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2;	// IMP=0x0000000000024544
- (void)_finishPairingWithAccessories:(id)arg1 completedInfo:(id)arg2;	// IMP=0x00000000000243d9
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0000000000023f5b
- (void)_updateStatusTextAndNotifyDelegate:(_Bool)arg1;	// IMP=0x0000000000023a08
- (void)_tryPairing;	// IMP=0x000000000002348b
- (id)cancel;	// IMP=0x0000000000022df3
- (void)startWithHome:(id)arg1;	// IMP=0x0000000000022269
- (void)removePairingObserver:(id)arg1;	// IMP=0x00000000000221f7
- (void)addPairingObserver:(id)arg1;	// IMP=0x0000000000022124
- (id)initWithContext:(id)arg1 discoveredAccessory:(id)arg2;	// IMP=0x0000000000021864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
