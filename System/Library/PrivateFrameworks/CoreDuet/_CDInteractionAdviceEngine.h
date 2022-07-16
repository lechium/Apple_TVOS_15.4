//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionAdvising-Protocol.h>

@class _CDInteractionStore, _CDQueryInteractionAdvisor, _CDSocialInteractionAdvisor, _CDTemporalInteractionAdvisor;

@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising>
{
    _CDInteractionStore *_store;	// 8 = 0x8
    _CDTemporalInteractionAdvisor *_temporalAdvisor;	// 16 = 0x10
    _CDSocialInteractionAdvisor *_socialAdvisor;	// 24 = 0x18
    _CDQueryInteractionAdvisor *_queryAdvisor;	// 32 = 0x20
}

+ (id)interactionAdviceEngineWithStore:(id)arg1;	// IMP=0x0000000000092658
- (void).cxx_destruct;	// IMP=0x000000000009363c
@property(readonly, nonatomic) _CDTemporalInteractionAdvisor *temporalAdvisor;
@property(readonly, nonatomic) _CDSocialInteractionAdvisor *socialAdvisor;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;	// IMP=0x00000000000934ba
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;	// IMP=0x0000000000093408
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;	// IMP=0x000000000009335d
- (id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2;	// IMP=0x0000000000093254
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;	// IMP=0x00000000000931bd
- (id)adviseInteractionsUsingSettings:(id)arg1;	// IMP=0x0000000000092d4a
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;	// IMP=0x0000000000092734
- (id)initWithStore:(id)arg1;	// IMP=0x00000000000926a5

@end
