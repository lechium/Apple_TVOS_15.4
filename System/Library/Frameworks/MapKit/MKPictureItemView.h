//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, UIVisualEffectView;
@protocol GEOPictureItem;

__attribute__((visibility("hidden")))
@interface MKPictureItemView : UIView
{
    _Bool _didDownloadImage;	// 8 = 0x8
    id <GEOPictureItem> _pictureItem;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    NSString *_providerName;	// 32 = 0x20
    UIVisualEffectView *_effectView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    struct CGSize _imageSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000b4181
@property(nonatomic) _Bool didDownloadImage; // @synthesize didDownloadImage=_didDownloadImage;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id <GEOPictureItem> pictureItem; // @synthesize pictureItem=_pictureItem;
- (void)updateUIForTheme:(id)arg1;	// IMP=0x00000000000b3e82
- (void)fetchImageIfNecessary;	// IMP=0x00000000000b3c18
- (void)setupSubviews;	// IMP=0x00000000000b22ab
- (void)setTitleLabelProviderName;	// IMP=0x00000000000b1e92
- (void)updateLabelsSettings;	// IMP=0x00000000000b1b6c
- (void)addShadowToLabel:(id)arg1;	// IMP=0x00000000000b1a27
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000b1a15
- (id)initWithPictureItem:(id)arg1 providerName:(id)arg2;	// IMP=0x00000000000b1553

@end

