//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface VUIAppCell : UICollectionViewCell
{
    UIImage *_image;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    _Bool _didLayout;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000227d5
- (void)updateConstraints;	// IMP=0x00000000000221a8
- (void)layoutSubviews;	// IMP=0x0000000000021dd3
- (void)setTitle:(id)arg1;	// IMP=0x0000000000021d05
- (void)setImage:(id)arg1;	// IMP=0x0000000000021c5a

@end

