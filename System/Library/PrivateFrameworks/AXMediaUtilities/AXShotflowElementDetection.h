//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXShotflowElementDetection : NSObject
{
    float _area;	// 8 = 0x8
    _Bool _hasLabel;	// 12 = 0xc
    float _confidence;	// 16 = 0x10
    int _mergesCount;	// 20 = 0x14
    int _scale;	// 24 = 0x18
    int _label;	// 28 = 0x1c
    NSString *_labelName;	// 32 = 0x20
    struct CGRect _box;	// 40 = 0x28
    struct CGRect _defaultBox;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000fcb4
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) int label; // @synthesize label=_label;
@property(nonatomic) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int mergesCount; // @synthesize mergesCount=_mergesCount;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect defaultBox; // @synthesize defaultBox=_defaultBox;
@property(nonatomic) struct CGRect box; // @synthesize box=_box;
- (id)description;	// IMP=0x000000000000faea
- (_Bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;	// IMP=0x000000000000f9c1
- (_Bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;	// IMP=0x000000000000f8ae
- (float)iOa:(id)arg1;	// IMP=0x000000000000f7c1
- (float)overlap:(id)arg1;	// IMP=0x000000000000f6ca
@property(readonly, nonatomic) float smartDistance;
@property(readonly, nonatomic) float distanceToDefaultBox;
@property(readonly, nonatomic) struct CGPoint boxCenter;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 mergesCount:(int)arg5 hasLabel:(_Bool)arg6 label:(int)arg7 labelName:(id)arg8;	// IMP=0x000000000000f4ac
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 mergesCount:(int)arg5 hasLabel:(_Bool)arg6 label:(int)arg7;	// IMP=0x000000000000f462
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 hasLabel:(_Bool)arg5 label:(int)arg6 labelName:(id)arg7;	// IMP=0x000000000000f411
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 hasLabel:(_Bool)arg5 label:(int)arg6;	// IMP=0x000000000000f3c8
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 mergesCount:(int)arg5;	// IMP=0x000000000000f381
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4;	// IMP=0x000000000000f33e

@end

