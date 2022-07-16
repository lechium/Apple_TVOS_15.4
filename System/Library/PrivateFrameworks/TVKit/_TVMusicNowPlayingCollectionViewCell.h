//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, TVImageStackView, UIImage, UILabel, UIMotionEffectGroup, UIView;

@interface _TVMusicNowPlayingCollectionViewCell : UICollectionViewCell
{
    TVImageStackView *_imageStackView;	// 8 = 0x8
    UIImage *_placeholderImage;	// 16 = 0x10
    UILabel *_songTitleLabel;	// 24 = 0x18
    UILabel *_artistNameLabel;	// 32 = 0x20
    _Bool _focused;	// 40 = 0x28
    UIView *_topAccessoryView;	// 48 = 0x30
    UIView *_bottomAccessoryView;	// 56 = 0x38
    _Bool _subheadingsVisible;	// 64 = 0x40
    UIMotionEffectGroup *_motionEffectGroup;	// 72 = 0x48
    _Bool _animatesAccessoryViews;	// 80 = 0x50
    NSString *_songTitle;	// 88 = 0x58
    NSString *_artistName;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000037aa2
@property(nonatomic) _Bool animatesAccessoryViews; // @synthesize animatesAccessoryViews=_animatesAccessoryViews;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
- (void)_detachMotionEffects;	// IMP=0x0000000000037a43
- (void)_attachMotionEffects;	// IMP=0x00000000000378a8
- (_Bool)_unapplyMotionEffect:(id)arg1;	// IMP=0x0000000000037878
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x00000000000377a2
- (id)_addSubheadLabelWithFont:(id)arg1 textColor:(id)arg2;	// IMP=0x000000000003761a
- (void)_setBottomAccessoryViewPositionWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003739b
- (void)_setTopAccessoryViewPositionWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000037110
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000036f0f
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000036e69
- (_Bool)canBecomeFocused;	// IMP=0x0000000000036e61
@property(retain, nonatomic) UIView *bottomAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView;
- (void)layoutSubviews;	// IMP=0x0000000000036915
- (void)prepareForReuse;	// IMP=0x0000000000036836
@property(nonatomic, getter=areSubheadingsVisible) _Bool subheadingsVisible;
- (void)setImageProxy:(id)arg1;	// IMP=0x000000000003649b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003624e

@end
