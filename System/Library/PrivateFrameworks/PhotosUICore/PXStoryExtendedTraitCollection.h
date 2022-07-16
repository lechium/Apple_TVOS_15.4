//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSShadow;

@interface PXStoryExtendedTraitCollection
{
    double _displayScale;	// 8 = 0x8
    double _viewportCornerRadius;	// 16 = 0x10
    NSShadow *_viewportShadow;	// 24 = 0x18
    struct CGSize _layoutReferenceSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000091cc95
@property(readonly, nonatomic) NSShadow *viewportShadow; // @synthesize viewportShadow=_viewportShadow;
@property(readonly, nonatomic) double viewportCornerRadius; // @synthesize viewportCornerRadius=_viewportCornerRadius;
- (double)displayScale;	// IMP=0x000000000091cc60
- (struct CGSize)layoutReferenceSize;	// IMP=0x000000000091cc48
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000091cc19
- (void)setDisplayScale:(double)arg1;	// IMP=0x000000000091cbde
- (void)setLayoutReferenceSize:(struct CGSize)arg1;	// IMP=0x000000000091cb9d
- (long long)layoutOrientation;	// IMP=0x000000000091cb7d
- (id)initWithLayoutReferenceSize:(struct CGSize)arg1 displayScale:(double)arg2;	// IMP=0x000000000091cb0b
- (id)initWithLayoutReferenceSize:(struct CGSize)arg1;	// IMP=0x000000000091caf1

@end
