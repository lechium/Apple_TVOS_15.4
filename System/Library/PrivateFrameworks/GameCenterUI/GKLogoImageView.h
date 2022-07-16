//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImage, UIImageView, UILabel;

@interface GKLogoImageView : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

+ (void)updateLogoImageHeight:(double)arg1;	// IMP=0x00000000000a1d66
+ (double)defaultHeight;	// IMP=0x00000000000a1822
- (void).cxx_destruct;	// IMP=0x00000000000a1ef8
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000a1e34
@property(retain, nonatomic) UIImage *image;
- (void)_addAndConstraintSubview:(id)arg1;	// IMP=0x00000000000a1ae2
- (void)_coreInit;	// IMP=0x00000000000a18f7
- (void)awakeFromNib;	// IMP=0x00000000000a18b6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a1859

@end

