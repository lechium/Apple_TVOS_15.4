//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMTrigger.h>

#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFTriggerProtocol-Protocol.h>

@class NSSet, NSString, NSUUID;

@interface HMTrigger (HFDebugging) <HFStateDumpBuildable, HFHomeKitObject, HFTriggerProtocol>
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;	// IMP=0x00000000001b3e85
+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;	// IMP=0x00000000001b3a52
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000075cfe
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;	// IMP=0x00000000000a4121
- (id)hf_naturalLangugeDetailsWithOptions:(id)arg1;	// IMP=0x00000000000a3fe4
- (_Bool)hf_affectsProfiles:(id)arg1;	// IMP=0x00000000001b448a
- (_Bool)hf_affectsCharacteristics:(id)arg1;	// IMP=0x00000000001b436f
- (_Bool)hf_affectsHomeKitObject:(id)arg1;	// IMP=0x00000000001b3fa2
- (id)hf_forceDisableReasons;	// IMP=0x00000000001b388c
- (_Bool)hf_shouldDisplayTrigger;	// IMP=0x00000000001b3643
@property(readonly, nonatomic) NSSet *hf_anonymousActions;
@property(readonly, nonatomic) _Bool hf_isShortcutOwned;
@property(readonly, nonatomic) _Bool hf_requiresConfirmationToRun;
- (unsigned long long)hf_triggerType;	// IMP=0x00000000001b3432
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x00000000001b3420
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000001b3390

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
