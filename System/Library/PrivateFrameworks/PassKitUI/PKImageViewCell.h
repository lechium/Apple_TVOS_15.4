//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImage, UIImageView;

@interface PKImageViewCell : UITableViewCell
{
    _Bool _matchCellBackgroundToImage;	// 8 = 0x8
    long long _imageViewContentMode;	// 16 = 0x10
}

@property(nonatomic) _Bool matchCellBackgroundToImage; // @synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage;
@property(nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
- (void)setContentMode:(long long)arg1;	// IMP=0x00000000002cb4de
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;	// IMP=0x00000000002cb108
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000002cb008

// Remaining properties
@property(readonly, nonatomic) UIImageView *imageView; // @dynamic imageView;

@end

