//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphMemoryNodeCollection;

@interface PGMemoryTriggerUpcomingPersonCentricHoliday
{
    PGGraphMemoryNodeCollection *_allSingleMomentMemoryNodes;	// 8 = 0x8
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithPartner;	// 16 = 0x10
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithMother;	// 24 = 0x18
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithFather;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000039aee7
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;	// IMP=0x000000000039a91d
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;	// IMP=0x000000000039a908
- (unsigned long long)triggerType;	// IMP=0x000000000039a8fd
- (id)singleMomentMemoryNodesWithRelevantPersonNodes:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000039a815
- (id)allSingleMomentMemoryNodesInGraph:(id)arg1;	// IMP=0x000000000039a7bc

@end
