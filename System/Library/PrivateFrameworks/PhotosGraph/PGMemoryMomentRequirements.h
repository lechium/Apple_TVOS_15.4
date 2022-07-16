//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGMemoryMomentRequirements : NSObject
{
    _Bool _filterUninterestingWithAlternateJunking;	// 8 = 0x8
    _Bool _filterUninterestingForMemories;	// 9 = 0x9
    _Bool _filterMomentsWithNotEnoughScenesProcessed;	// 10 = 0xa
    unsigned long long _minimumNumberOfRelevantAssets;	// 16 = 0x10
    unsigned long long _minimumNumberOfAssetsInExtendedCuration;	// 24 = 0x18
    double _aboveContentScoreThreshold;	// 32 = 0x20
    unsigned long long _minimumNumberOfPersons;	// 40 = 0x28
}

@property(nonatomic) unsigned long long minimumNumberOfPersons; // @synthesize minimumNumberOfPersons=_minimumNumberOfPersons;
@property(nonatomic) double aboveContentScoreThreshold; // @synthesize aboveContentScoreThreshold=_aboveContentScoreThreshold;
@property(nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration; // @synthesize minimumNumberOfAssetsInExtendedCuration=_minimumNumberOfAssetsInExtendedCuration;
@property(nonatomic) unsigned long long minimumNumberOfRelevantAssets; // @synthesize minimumNumberOfRelevantAssets=_minimumNumberOfRelevantAssets;
@property(nonatomic) _Bool filterMomentsWithNotEnoughScenesProcessed; // @synthesize filterMomentsWithNotEnoughScenesProcessed=_filterMomentsWithNotEnoughScenesProcessed;
@property(nonatomic) _Bool filterUninterestingForMemories; // @synthesize filterUninterestingForMemories=_filterUninterestingForMemories;
@property(nonatomic) _Bool filterUninterestingWithAlternateJunking; // @synthesize filterUninterestingWithAlternateJunking=_filterUninterestingWithAlternateJunking;

@end
