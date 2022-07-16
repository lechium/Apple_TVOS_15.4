//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PKTransactionHistoryTransactionGroupHeaderCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    _Bool _isTemplateLayout;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UIView *_imageBackgroundView;	// 48 = 0x30
    _Bool _strokeImage;	// 56 = 0x38
    _Bool _useShadows;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x0000000000168855
@property(nonatomic) _Bool useShadows; // @synthesize useShadows=_useShadows;
- (void)setStrokeImage:(_Bool)arg1;	// IMP=0x00000000001687c0
- (void)_setupImageView;	// IMP=0x00000000001686e3
- (void)setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000168206
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000168075
- (void)_updateImageViewDynamicColors;	// IMP=0x0000000000167f6f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000167f08
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000167988
- (void)layoutSubviews;	// IMP=0x00000000001678e9
- (void)prepareForReuse;	// IMP=0x0000000000167874
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000167592

@end
