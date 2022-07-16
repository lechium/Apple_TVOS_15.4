//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXStoryTimeline;

@interface PXStoryTimelineLayoutSnapshot : NSObject
{
    id <PXStoryTimeline> _timeline;	// 8 = 0x8
    CDStruct_2bd92d94 _clipCornerRadius;	// 16 = 0x10
    struct CGRect _timelineRect;	// 32 = 0x20
    CDStruct_e83c9415 _timeRange;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000007c206c
@property(readonly, nonatomic) CDStruct_2bd92d94 clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) struct CGRect timelineRect; // @synthesize timelineRect=_timelineRect;
@property(readonly, nonatomic) id <PXStoryTimeline> timeline; // @synthesize timeline=_timeline;
- (id)initWithTimeline:(id)arg1 timelineRect:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3 clipCornerRadius:(CDStruct_2bd92d94)arg4;	// IMP=0x00000000007c1f5b
- (id)init;	// IMP=0x00000000007c1ee1

@end
