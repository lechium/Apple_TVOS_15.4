//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIImage, UIImageView, UILabel;

@interface TVSBVideoBulletinChinView : UIView
{
    long long _style;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSAttributedString *_subtitle;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    UIImageView *_faceImageView;	// 40 = 0x28
    UIImageView *_symbolImageView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_subtitleLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000001de40
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(readonly, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)_updateCompositingEffects;	// IMP=0x001000000001da00
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001d920
- (void)setupConstraintsForRegularStyle;	// IMP=0x001000000001cde0
- (void)setupConstraints;	// IMP=0x001000000001cdb0
- (void)setupSubtitleLabel;	// IMP=0x001000000001cd10
- (void)setupTitleLabel;	// IMP=0x001000000001cba0
- (void)setupSymbolImageView;	// IMP=0x001000000001ca60
- (void)setupFaceImageView;	// IMP=0x001000000001c940
- (void)setupViews;	// IMP=0x001000000001c8e0
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000001c790
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000001c690

@end
