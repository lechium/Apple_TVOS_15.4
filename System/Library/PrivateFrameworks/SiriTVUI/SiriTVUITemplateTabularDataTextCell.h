//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSAttributedString, SiriTVUITemplateLabel, UIImage, UIImageView;

@interface SiriTVUITemplateTabularDataTextCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    SiriTVUITemplateLabel *_textLabel;	// 16 = 0x10
    struct CGSize _imageSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001375b
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) UIImage *image;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000013421
- (void)layoutSubviews;	// IMP=0x000000000001320e
- (_Bool)canBecomeFocused;	// IMP=0x0000000000013206
- (void)prepareForReuse;	// IMP=0x00000000000131bb

@end

