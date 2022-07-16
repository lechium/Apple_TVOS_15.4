//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VUILabel, VUIVideoAdvisoryViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductPlacementView : UIView
{
    VUIVideoAdvisoryViewLayout *_layout;	// 8 = 0x8
    _TVImageView *_logoImageView;	// 16 = 0x10
    UIView *_dividerView;	// 24 = 0x18
    VUILabel *_blockDescriptionLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013de20
@property(retain, nonatomic) VUILabel *blockDescriptionLabel; // @synthesize blockDescriptionLabel=_blockDescriptionLabel;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) _TVImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
- (void)_hideWithAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013d947
- (void)_hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013d7d6
- (void)_showWithAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013d286
- (void)_showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013d101
- (void)layoutSubviews;	// IMP=0x000000000013ccc7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000013cbe1
- (void)_configureSubviewsWithDictionary:(id)arg1;	// IMP=0x000000000013c91d
- (struct CGSize)_descriptionSize;	// IMP=0x000000000013c84d
- (struct UIEdgeInsets)_descriptionMargin;	// IMP=0x000000000013c7ef
- (struct UIEdgeInsets)_dividerMargin;	// IMP=0x000000000013c791
- (struct UIEdgeInsets)_logoMargin;	// IMP=0x000000000013c733
- (struct CGSize)_dividerSize;	// IMP=0x000000000013c6b7
- (struct CGSize)_logoSize;	// IMP=0x000000000013c65d
- (struct UIEdgeInsets)_margin;	// IMP=0x000000000013c5ff
- (_Bool)_isPortrait;	// IMP=0x000000000013c5f7
- (void)show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000013c5d0
- (id)initWithAdvisoryInfoDictionary:(id)arg1;	// IMP=0x000000000013c530

@end

