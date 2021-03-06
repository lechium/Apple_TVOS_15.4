//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CIImageAccumulator : NSObject
{
    void *_state;	// 8 = 0x8
}

+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;	// IMP=0x00000000000c3f79
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2;	// IMP=0x00000000000c3f38
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;	// IMP=0x00000000000c3eed
- (id)description;	// IMP=0x00000000000c4a22
- (void)commitUpdates:(id)arg1;	// IMP=0x00000000000c4a06
- (void)clear;	// IMP=0x00000000000c49b7
- (void)setImage:(id)arg1 dirtyRect:(struct CGRect)arg2;	// IMP=0x00000000000c46a6
- (void)setImage:(id)arg1;	// IMP=0x00000000000c4674
- (id)image;	// IMP=0x00000000000c4664
- (struct CGColorSpace *)colorSpace;	// IMP=0x00000000000c4656
@property(readonly) int format;
@property(readonly) struct CGRect extent;
- (void)dealloc;	// IMP=0x00000000000c45e0
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;	// IMP=0x00000000000c4080
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;	// IMP=0x00000000000c3fd8
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2;	// IMP=0x00000000000c3fc4
- (id)init;	// IMP=0x00000000000c3eb0

@end

