//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXStoryPanTransitionConfiguration : NSObject
{
    NSMutableArray *_clipLayouts;	// 8 = 0x8
    struct CGRect *_sourceRects;	// 16 = 0x10
    struct CGRect *_targetRects;	// 24 = 0x18
    long long _capacity;	// 32 = 0x20
    long long _count;	// 40 = 0x28
    CDStruct_1b6d18a9 _duration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000013f084
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void)enumerateLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ef9e
- (void)addClipLayout:(id)arg1 sourceRect:(struct CGRect)arg2 targetRect:(struct CGRect)arg3;	// IMP=0x000000000013ee92
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000013ee4b
- (id)init;	// IMP=0x000000000013edd1

@end

