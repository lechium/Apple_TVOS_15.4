//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIContentView-Protocol.h>
#import <UIKitCore/_UIContentViewComponentDescribing-Protocol.h>

@class NSLayoutRect, NSString, UIImageView, UILabel, _UIValueCellContentViewConfiguration;

@interface _UIValueCellContentView <_UIContentViewComponentDescribing, _UIContentView>
{
    _UIValueCellContentViewConfiguration *_animatingFromConfiguration;	// 112 = 0x70
    _UIValueCellContentViewConfiguration *_animatingToConfiguration;	// 120 = 0x78
    double _preferredMaxLayoutWidth;	// 128 = 0x80
    _UIValueCellContentViewConfiguration *_configuration;	// 136 = 0x88
    UIImageView *_imageView;	// 144 = 0x90
    UILabel *_textLabel;	// 152 = 0x98
    UILabel *_valueLabel;	// 160 = 0xa0
    CDUnknownBlockType _primaryTextFrameDidChangeHandler;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000a5f667
@property(copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) CDUnknownBlockType _primaryTextFrameDidChangeHandler; // @synthesize _primaryTextFrameDidChangeHandler;
@property(readonly, nonatomic) struct CGRect _primaryTextLayoutFrame;
@property(readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
- (void)layoutSubviews;	// IMP=0x0000000000a5eba9
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000a5eb42
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000a5e894
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000a5dc9e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000a5dc4e
- (double)_preferredMaxLayoutWidth;	// IMP=0x0000000000a5dc2a
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;	// IMP=0x0000000000a5dbab
- (void)_prepareForFirstIntrinsicContentSizeCalculation;	// IMP=0x0000000000a5db67
- (_Bool)_needsDoubleUpdateConstraintsPass;	// IMP=0x0000000000a5da05
- (double)_multilineContextWidth;	// IMP=0x0000000000a5d9f7
- (void)_setMultilineContextWidth:(double)arg1;	// IMP=0x0000000000a5d9f1
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) _UIValueCellContentViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) NSString *description;
- (id)_encodableSubviews;	// IMP=0x0000000000a5cf9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a5cf20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a5cdcb
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000a5cc49

// Remaining properties
@property(readonly, nonatomic) _Bool _preventFocus;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

