//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface REMetadataPredictor
{
    NSMutableDictionary *_interactionFeatureValueCache;	// 8 = 0x8
    NSMutableDictionary *_sectionFeatureValueCache;	// 16 = 0x10
}

+ (id)supportedFeatures;	// IMP=0x00000000000df851
- (void).cxx_destruct;	// IMP=0x00000000000dfbe8
- (void)update;	// IMP=0x00000000000dfbd6
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;	// IMP=0x00000000000df96f
- (id)_init;	// IMP=0x00000000000df7a6

@end

