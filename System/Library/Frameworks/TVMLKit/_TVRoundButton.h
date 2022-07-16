//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface _TVRoundButton
{
    CALayer *_imageMask;	// 8 = 0x8
    CDUnknownBlockType _updateFloatingViewFocusStateBlock;	// 16 = 0x10
    _Bool _shouldPunchThroughImage;	// 24 = 0x18
}

+ (id)_buttonContentWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;	// IMP=0x00000000000c2765
- (void).cxx_destruct;	// IMP=0x00000000000c360c
@property(nonatomic) _Bool shouldPunchThroughImage; // @synthesize shouldPunchThroughImage=_shouldPunchThroughImage;
- (void)_updateFocusStateWithCoordinator:(id)arg1;	// IMP=0x00000000000c3553
- (void)_updateFloaingViewFocusState:(_Bool)arg1 coordinator:(id)arg2;	// IMP=0x00000000000c3318
- (void)_updateFloatingViewFocusStateIfNeeded;	// IMP=0x00000000000c3236
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000c31e4
- (void)didMoveToWindow;	// IMP=0x00000000000c31a3
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;	// IMP=0x00000000000c3014
- (void)_updateImageMask;	// IMP=0x00000000000c2d6a
- (void)_imageViewDidLoadImage:(id)arg1;	// IMP=0x00000000000c2cee
- (void)setImageView:(id)arg1;	// IMP=0x00000000000c2c54
- (void)setCornerRadius:(double)arg1;	// IMP=0x00000000000c2bc4
- (void)setTextContentView:(id)arg1;	// IMP=0x00000000000c2bbe
- (void)setAccessoryView:(id)arg1;	// IMP=0x00000000000c2bb8
- (void)layoutSubviews;	// IMP=0x00000000000c297d
- (void)dealloc;	// IMP=0x00000000000c2908
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;	// IMP=0x00000000000c27b9

@end

