//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETrainingSimulationCoordinator-Protocol.h>

@class REConcurrentDictionary, RERelevanceEngine, RERemoteTrainingContext;

@interface RETrainingContext : NSObject <RETrainingSimulationCoordinator>
{
    RERelevanceEngine *_relevanceEngine;	// 8 = 0x8
    REConcurrentDictionary *_attributes;	// 16 = 0x10
    RERemoteTrainingContext *_remoteContext;	// 24 = 0x18
    RETrainingContext *_cachedAttributeContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000652ed
@property(retain) RETrainingContext *cachedAttributeContext; // @synthesize cachedAttributeContext=_cachedAttributeContext;
- (_Bool)performSimulationCommand:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000000652c2
- (id)attributeForKey:(id)arg1;	// IMP=0x00000000000652ac
- (void)setAttribute:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000065214
- (void)becomeCurrent;	// IMP=0x00000000000651ae
@property(readonly, nonatomic) _Bool isCurrent;
@property(readonly, nonatomic) RERelevanceEngine *relevanceEngine;
- (void)_trainElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;	// IMP=0x0000000000065015
- (void)_trainElementWithIdentifier:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;	// IMP=0x0000000000064f0c
- (void)trainWithUnmanagedElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;	// IMP=0x0000000000064efa
- (void)trainWithElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;	// IMP=0x0000000000064ee8
- (void)dealloc;	// IMP=0x0000000000064e8b
- (id)init;	// IMP=0x0000000000064e35
- (void)_didResignCurrent;	// IMP=0x0000000000065449
- (void)_willResignCurrent;	// IMP=0x0000000000065443
- (void)_didBecomeCurrent;	// IMP=0x000000000006543d
- (void)_willBecomeCurrent;	// IMP=0x0000000000065437
@property(readonly, nonatomic) _Bool _wantsAutomaticRemoteContextForwarding;
- (void)_configureForRelevanceEngine:(id)arg1;	// IMP=0x00000000000653c8
@property(readonly, nonatomic) RETrainingContext *attributeContext;
@property(retain, nonatomic) RERemoteTrainingContext *remoteContext;
- (void)flushTraining;	// IMP=0x000000000006545d

@end

