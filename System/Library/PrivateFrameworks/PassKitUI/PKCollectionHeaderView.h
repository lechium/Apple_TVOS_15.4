//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKCollectionHeaderView : UICollectionViewListCell
{
    UILabel *_primaryLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    UILabel *_tertiaryLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    NSString *_primaryText;	// 48 = 0x30
    NSString *_secondaryText;	// 56 = 0x38
    NSString *_tertiaryText;	// 64 = 0x40
    double _topPadding;	// 72 = 0x48
    double _bottomPadding;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002484f
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(copy, nonatomic) NSString *tertiaryText; // @synthesize tertiaryText=_tertiaryText;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)prepareForReuse;	// IMP=0x00000000000246bb
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x0000000000023b01
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000023ab8
- (void)layoutSubviews;	// IMP=0x0000000000023a17

@end
