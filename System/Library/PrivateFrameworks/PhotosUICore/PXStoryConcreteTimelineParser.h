//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXStoryConcreteSubtimelineScanner, PXStoryMutableConcreteTimeline, PXStoryResourcesDataSource;

@interface PXStoryConcreteTimelineParser : NSObject
{
    PXStoryMutableConcreteTimeline *_accumulatedBestTimeline;	// 8 = 0x8
    PXStoryMutableConcreteTimeline *_nextBestTimeline;	// 16 = 0x10
    PXStoryMutableConcreteTimeline *_candidateAccumulatedTimelineWithNextBestTimeline;	// 24 = 0x18
    long long _preferredInitialDisplayAssetResourceIndex;	// 32 = 0x20
    double _parseTimeLimit;	// 40 = 0x28
    long long _parseCountLimit;	// 48 = 0x30
    PXStoryConcreteSubtimelineScanner *_scanner;	// 56 = 0x38
    PXStoryResourcesDataSource *_resourcesDataSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000051cfeb
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
@property(readonly, nonatomic) PXStoryConcreteSubtimelineScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) long long parseCountLimit; // @synthesize parseCountLimit=_parseCountLimit;
@property(nonatomic) double parseTimeLimit; // @synthesize parseTimeLimit=_parseTimeLimit;
@property(nonatomic) long long preferredInitialDisplayAssetResourceIndex; // @synthesize preferredInitialDisplayAssetResourceIndex=_preferredInitialDisplayAssetResourceIndex;
- (void)_adjustTimeline:(id)arg1 andAppendTimeline:(id)arg2;	// IMP=0x000000000051cd92
@property(readonly, nonatomic) _Bool isAtEnd;
- (id)parseNextBestTimeline;	// IMP=0x000000000051c770
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000051c5f9
- (id)init;	// IMP=0x000000000051c57f

@end

