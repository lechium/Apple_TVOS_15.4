//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXStoryTimeline;

@interface _PXStoryScrollPositionReference : NSObject
{
    id <PXStoryTimeline> _timeline;	// 8 = 0x8
    CDStruct_982265da _scrollPosition;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006c1d58
@property(readonly, nonatomic) CDStruct_982265da scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(readonly, nonatomic) id <PXStoryTimeline> timeline; // @synthesize timeline=_timeline;
- (id)initWithScrollPosition:(CDStruct_982265da)arg1;	// IMP=0x00000000006c1cef
- (id)init;	// IMP=0x00000000006c1cc4

@end

