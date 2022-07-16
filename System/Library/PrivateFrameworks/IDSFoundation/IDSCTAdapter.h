//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientPNRDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientSubscriberDelegate-Protocol.h>
#import <IDSFoundation/IMSystemMonitorListener-Protocol.h>

@class CoreTelephonyClient, IDSCTAdapterCache, IMSystemMonitor, NSHashTable, NSMutableDictionary, NSString;

@interface IDSCTAdapter : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, IMSystemMonitorListener>
{
    NSHashTable *_listeners;	// 8 = 0x8
    id _coreTelephonyClient;	// 16 = 0x10
    id _cache;	// 24 = 0x18
    NSMutableDictionary *_registrationStateByLabelID;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    IMSystemMonitor *_systemMonitor;	// 48 = 0x30
}

+ (_Bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;	// IMP=0x00000000000d9777
+ (id)sharedInstance;	// IMP=0x00000000000d66a2
- (void).cxx_destruct;	// IMP=0x00000000000dad61
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) NSMutableDictionary *registrationStateByLabelID; // @synthesize registrationStateByLabelID=_registrationStateByLabelID;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) IDSCTAdapterCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (void)systemApplicationDidBecomeActive;	// IMP=0x00000000000dacb6
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x00000000000dabbd
- (void)didDetectSimDeactivation:(id)arg1 info:(id)arg2;	// IMP=0x00000000000daa23
- (void)operatorBundleChange:(id)arg1;	// IMP=0x00000000000da947
- (void)carrierBundleChange:(id)arg1;	// IMP=0x00000000000da86b
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;	// IMP=0x00000000000da6f5
- (void)context:(id)arg1 pnrSupportChanged:(_Bool)arg2;	// IMP=0x00000000000da5ca
- (void)phoneNumberChanged:(id)arg1;	// IMP=0x00000000000da475
- (void)subscriptionInfoDidChange;	// IMP=0x00000000000da353
- (void)SIMStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x00000000000da25a
- (void)dualSimCapabilityDidChange;	// IMP=0x00000000000da14f
- (void)_locked_accessCache:(CDUnknownBlockType)arg1;	// IMP=0x00000000000da112
- (void)_checkRegistrationStateForContext:(id)arg1;	// IMP=0x00000000000d9d48
- (void)_iterateListenersForSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d9cf0
- (void)_unlocked_iterateListenersForSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d9b8a
- (void)removeListener:(id)arg1;	// IMP=0x00000000000d9b30
- (void)addListener:(id)arg1;	// IMP=0x00000000000d9ad6
- (id)CTPNRForSIM:(id)arg1;	// IMP=0x00000000000d9a4f
- (_Bool)isPhoneNumberEmergencyNumber:(id)arg1;	// IMP=0x00000000000d9a42
- (_Bool)isPNRNumber:(id)arg1 andPhoneBookNumber:(id)arg2 differentEnoughFromSIMIdentifier:(id)arg3 toReregisterWithNewNumber:(id *)arg4;	// IMP=0x00000000000d902d
- (id)contextForSim:(id)arg1;	// IMP=0x00000000000d8ded
- (id)SIMForIdentifier:(id)arg1;	// IMP=0x00000000000d8c15
- (id)currentSIMsWithError:(id *)arg1;	// IMP=0x00000000000d8a2d
- (id)_unlocked_currentSIMsWithError:(id *)arg1;	// IMP=0x00000000000d86ed
- (id)carrierBundleValueFromSIM:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 withFallback:(id)arg4;	// IMP=0x00000000000d86d7
- (id)carrierBundleValueFromAllSIMsForKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3;	// IMP=0x00000000000d84d6
- (_Bool)_legacy_supportsSMSIdentification;	// IMP=0x00000000000d84ce
@property(readonly, nonatomic) _Bool doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property(readonly, nonatomic) _Bool supportsIdentification;
@property(readonly, nonatomic) _Bool isAnySIMInserted;
@property(readonly, nonatomic) _Bool isAnySIMUsable;
@property(readonly, nonatomic) _Bool dualSIMCapabilityEnabled;
- (void)dealloc;	// IMP=0x00000000000d6904
- (id)initWithCoreTelephonyClient:(id)arg1 systemMonitor:(id)arg2;	// IMP=0x00000000000d67a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
