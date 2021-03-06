//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGEntityManager, PXStoryTransitionModel;
@protocol PXStoryTimeline, PXStoryTimelineSpec, PXStoryTransitionSource;

@interface PXStoryTransitionConfiguration : NSObject
{
    id <PXStoryTimeline> _timeline;	// 8 = 0x8
    id <PXStoryTimelineSpec> _timelineSpec;	// 16 = 0x10
    PXStoryTransitionModel *_transitionModel;	// 24 = 0x18
    PXGEntityManager *_entityManager;	// 32 = 0x20
    id <PXStoryTransitionSource> _source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000258155
@property(retain, nonatomic) id <PXStoryTransitionSource> source; // @synthesize source=_source;
@property(retain, nonatomic) PXGEntityManager *entityManager; // @synthesize entityManager=_entityManager;
@property(retain, nonatomic) PXStoryTransitionModel *transitionModel; // @synthesize transitionModel=_transitionModel;
@property(retain, nonatomic) id <PXStoryTimelineSpec> timelineSpec; // @synthesize timelineSpec=_timelineSpec;
@property(retain, nonatomic) id <PXStoryTimeline> timeline; // @synthesize timeline=_timeline;

@end

