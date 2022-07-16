//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class CALayer, UIImageView, UIView, _UIActivityGroupActivityCellTitleLabel, _UIHostActivityProxy;

@interface _UIActivityGroupActivityCell : UICollectionViewCell
{
    unsigned long long _sequence;	// 8 = 0x8
    _UIActivityGroupActivityCellTitleLabel *_titleLabel;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIView *_imageSlot;	// 32 = 0x20
    UIView *_titleSlot;	// 40 = 0x28
    _UIHostActivityProxy *_activityProxy;	// 48 = 0x30
    UIView *_shadowView;	// 56 = 0x38
    UIImageView *_highlightedImageView;	// 64 = 0x40
    CALayer *_highlightLayer;	// 72 = 0x48
}

+ (struct CGSize)preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4;	// IMP=0x000000000007375d
+ (void)invalidatePreferredSizes;	// IMP=0x0000000000073744
- (void).cxx_destruct;	// IMP=0x0000000000075640
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) _UIHostActivityProxy *activityProxy; // @synthesize activityProxy=_activityProxy;
@property(retain, nonatomic) UIView *titleSlot; // @synthesize titleSlot=_titleSlot;
@property(retain, nonatomic) UIView *imageSlot; // @synthesize imageSlot=_imageSlot;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) _UIActivityGroupActivityCellTitleLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (void)initHighlightedImageViewIfNeeded;	// IMP=0x00000000000751b3
- (void)updateHighlightedImageViewIfNeeded;	// IMP=0x0000000000075119
- (void)initHighlightLayerIfNeeded;	// IMP=0x0000000000074f3d
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000074d87
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000074b94
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000749e9
- (void)layoutSubviews;	// IMP=0x0000000000073feb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000073edb
- (void)prepareForReuse;	// IMP=0x0000000000073535
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007303b
- (id)draggingView;	// IMP=0x00000000000756d7

@end
