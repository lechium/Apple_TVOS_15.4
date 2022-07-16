//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface VUIImageScaleDecorator
{
    _Bool _centerGrowth;	// 8 = 0x8
    _Bool _cornerContinuous;	// 9 = 0x9
    _Bool _preservesAlpha;	// 10 = 0xa
    long long _scaleMode;	// 16 = 0x10
    double _focusedSizeIncrease;	// 24 = 0x18
    UIColor *_bgColor;	// 32 = 0x20
    struct CGSize _scaleToSize;	// 40 = 0x28
    struct UIEdgeInsets _padding;	// 56 = 0x38
    struct _VUICornerRadii _cornerRadii;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000027c9a
@property(nonatomic) _Bool preservesAlpha; // @synthesize preservesAlpha=_preservesAlpha;
@property(copy, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool cornerContinuous; // @synthesize cornerContinuous=_cornerContinuous;
@property(nonatomic) struct _VUICornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) _Bool centerGrowth; // @synthesize centerGrowth=_centerGrowth;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
- (void)_applyCornerMaskForRect:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;	// IMP=0x0000000000027a24
- (struct UIEdgeInsets)_paddingAdjustedForUpscaling;	// IMP=0x0000000000027959
- (struct CGSize)_scaleToSizeAdjustedForUpscaling;	// IMP=0x000000000002788a
- (id)_imageFixedForRotation:(id)arg1;	// IMP=0x000000000002749f
- (_Bool)needsAlphaForImage:(id)arg1;	// IMP=0x00000000000273f9
- (double)_focusedSizeIncreaseFactor;	// IMP=0x0000000000027394
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x000000000002684d
- (struct CGSize)expectedSize;	// IMP=0x000000000002683b
- (_Bool)loaderCropToFit;	// IMP=0x0000000000026826
- (struct CGSize)loaderScaleToSize;	// IMP=0x0000000000026814
- (id)decoratorIdentifier;	// IMP=0x0000000000026432
@property(nonatomic) double upscaleAdjustment;
@property(nonatomic) _Bool cropToFit;
- (unsigned long long)hash;	// IMP=0x0000000000026389
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026060
- (id)initWithScaleToSize:(struct CGSize)arg1 cropToFit:(_Bool)arg2;	// IMP=0x0000000000026045
- (id)initWithScaleToSize:(struct CGSize)arg1 scaleMode:(long long)arg2;	// IMP=0x0000000000025fb2
- (id)initWithScaleToSize:(struct CGSize)arg1;	// IMP=0x0000000000025f9b
- (id)init;	// IMP=0x0000000000025f74

@end
