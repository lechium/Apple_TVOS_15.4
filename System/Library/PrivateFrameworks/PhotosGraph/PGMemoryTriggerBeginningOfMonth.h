//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGMemoryMomentNodesWithBlockedFeatureCache;

@interface PGMemoryTriggerBeginningOfMonth
{
    PGMemoryMomentNodesWithBlockedFeatureCache *_momentNodesWithBlockedFeatureCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000033fecd
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;	// IMP=0x000000000033f5c7
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;	// IMP=0x000000000033f5ba
- (unsigned long long)triggerType;	// IMP=0x000000000033f5af
- (id)initWithLoggingConnection:(id)arg1 momentNodesWithBlockedFeatureCache:(id)arg2;	// IMP=0x000000000033f537

@end
