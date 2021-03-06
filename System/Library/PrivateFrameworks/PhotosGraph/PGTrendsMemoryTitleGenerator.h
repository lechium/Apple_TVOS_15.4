//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, PGGraphLocationCityNode, PGGraphPersonNode, PGTimeTitleOptions;

@interface PGTrendsMemoryTitleGenerator
{
    long long _type;	// 8 = 0x8
    NSString *_sceneFeatureLabel;	// 16 = 0x10
    PGGraphLocationCityNode *_cityNode;	// 24 = 0x18
    PGGraphPersonNode *_personNode;	// 32 = 0x20
    NSSet *_momentNodes;	// 40 = 0x28
    PGTimeTitleOptions *_timeTitleOptions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000147314
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000146e49
- (id)initWithMomentNodes:(id)arg1 sceneFeatureLabel:(id)arg2 cityNode:(id)arg3 titleGenerationContext:(id)arg4 timeTitleOptions:(id)arg5;	// IMP=0x0000000000146dbd
- (id)initWithMomentNodes:(id)arg1 sceneFeatureLabel:(id)arg2 personNode:(id)arg3 titleGenerationContext:(id)arg4 timeTitleOptions:(id)arg5;	// IMP=0x0000000000146d31
- (id)initWithMomentNodes:(id)arg1 sceneFeatureLabel:(id)arg2 titleGenerationContext:(id)arg3 timeTitleOptions:(id)arg4;	// IMP=0x0000000000146c43

@end

