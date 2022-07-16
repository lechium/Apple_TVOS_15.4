//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel;

@interface _UIDragBadge
{
    UILabel *_label;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    long long _itemCount;	// 32 = 0x20
}

@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView;
@property(readonly, nonatomic) UILabel *_label; // @synthesize _label;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000579957
@property(readonly, nonatomic) struct CGPoint anchorPointForAlignment;
- (void)layoutSubviews;	// IMP=0x00000000005795e5
- (void)_updateForStyle;	// IMP=0x0000000000579412
- (void)_updateLabelTextFromItemCount;	// IMP=0x0000000000579220
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000057912a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000057908b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000578e53

@end

