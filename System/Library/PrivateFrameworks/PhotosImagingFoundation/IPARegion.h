//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSMutableCopying-Protocol.h>

@interface IPARegion : NSObject <NSCopying, NSMutableCopying>
{
    void *_imp;	// 8 = 0x8
}

+ (id)regionWithRegion:(id)arg1;	// IMP=0x0000000000016e82
+ (id)regionWithRectArray:(id)arg1;	// IMP=0x0000000000016e25
+ (id)regionWithRect:(struct CGRect)arg1;	// IMP=0x0000000000016dea
+ (id)region;	// IMP=0x0000000000016dd8
- (double)area;	// IMP=0x0000000000013cb7
- (_Bool)includesRegion:(id)arg1;	// IMP=0x0000000000013c9d
- (_Bool)includesRect:(struct CGRect)arg1;	// IMP=0x0000000000013c3a
- (_Bool)intersectsRegion:(id)arg1;	// IMP=0x0000000000013c1c
- (_Bool)intersectsRect:(struct CGRect)arg1;	// IMP=0x0000000000013bb8
- (struct CGRect)bounds;	// IMP=0x0000000000013b2f
- (void)enumerateRects:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013ac0
- (_Bool)isEqualToRegion:(id)arg1;	// IMP=0x00000000000138d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013861
- (unsigned long long)hash;	// IMP=0x00000000000137ef
- (_Bool)isEmpty;	// IMP=0x00000000000137dd
- (unsigned long long)count;	// IMP=0x00000000000137cf
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013797
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001378c
- (id)description;	// IMP=0x0000000000013635
- (void)dealloc;	// IMP=0x00000000000135e7
- (id)initWithRectArray:(id)arg1;	// IMP=0x00000000000134a4
- (id)initWithRegion:(id)arg1;	// IMP=0x00000000000133c5
- (id)initWithRect:(struct CGRect)arg1;	// IMP=0x00000000000132b9
- (id)init;	// IMP=0x0000000000013240
- (id)regionByFlippingInRect:(struct CGRect)arg1;	// IMP=0x00000000000177a9
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000001773f
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00000000000176d1
- (id)regionByRoundingDown;	// IMP=0x0000000000017689
- (id)regionByRoundingUp;	// IMP=0x0000000000017641
- (id)regionByShrinkingBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00000000000175cc
- (id)regionByShrinkingBy:(struct CGPoint)arg1;	// IMP=0x0000000000017568
- (id)regionByGrowingBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00000000000174f3
- (id)regionByGrowingBy:(struct CGPoint)arg1;	// IMP=0x000000000001748f
- (id)regionByTranslatingBy:(struct CGPoint)arg1;	// IMP=0x000000000001742b
- (id)regionByScalingBy:(struct CGPoint)arg1;	// IMP=0x00000000000173c7
- (id)regionByExcludingRegion:(id)arg1;	// IMP=0x000000000001734b
- (id)regionByExcludingRect:(struct CGRect)arg1;	// IMP=0x00000000000172ea
- (id)regionByClippingToRectArray:(id)arg1;	// IMP=0x000000000001726e
- (id)regionByClippingToRegion:(id)arg1;	// IMP=0x00000000000171f2
- (id)regionByClippingToRect:(struct CGRect)arg1;	// IMP=0x0000000000017191
- (id)regionByRemovingRectArray:(id)arg1;	// IMP=0x0000000000017115
- (id)regionByRemovingRegion:(id)arg1;	// IMP=0x0000000000017099
- (id)regionByRemovingRect:(struct CGRect)arg1;	// IMP=0x0000000000017038
- (id)regionByAddingRectArray:(id)arg1;	// IMP=0x0000000000016fbc
- (id)regionByAddingRegion:(id)arg1;	// IMP=0x0000000000016f40
- (id)regionByAddingRect:(struct CGRect)arg1;	// IMP=0x0000000000016edf

@end
