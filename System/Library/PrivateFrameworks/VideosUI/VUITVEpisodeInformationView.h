//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VUIEpisodeLockupFloatingContentView, VUILabel, VUIMediaTagsView, _TVAnimatedLabel;

__attribute__((visibility("hidden")))
@interface VUITVEpisodeInformationView : UIView
{
    _Bool _focusable;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    VUILabel *_episodeLabel;	// 24 = 0x18
    VUILabel *_titleLabel;	// 32 = 0x20
    VUILabel *_descriptionLabel;	// 40 = 0x28
    VUIMediaTagsView *_metadataView;	// 48 = 0x30
    UIView *_separatorView;	// 56 = 0x38
    _TVAnimatedLabel *_animatedTitleLabel;	// 64 = 0x40
    VUIEpisodeLockupFloatingContentView *_floatingContentView;	// 72 = 0x48
    UIView *_dataContentView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000008e9b3
@property(nonatomic) _Bool focusable; // @synthesize focusable=_focusable;
@property(retain, nonatomic) UIView *dataContentView; // @synthesize dataContentView=_dataContentView;
@property(retain, nonatomic) VUIEpisodeLockupFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) _TVAnimatedLabel *animatedTitleLabel; // @synthesize animatedTitleLabel=_animatedTitleLabel;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUIMediaTagsView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) VUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUILabel *episodeLabel; // @synthesize episodeLabel=_episodeLabel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)toggleFocusable:(_Bool)arg1;	// IMP=0x000000000008e8d4
- (void)prepareForCellReuse;	// IMP=0x000000000008e85d
- (_Bool)canBecomeFocused;	// IMP=0x000000000008e824
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000008e720
- (_Bool)_containsData;	// IMP=0x000000000008e5f0
- (void)_updateTextsAppearance;	// IMP=0x000000000008e379
- (void)_updateVisualsAppearance;	// IMP=0x000000000008e1d3
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x000000000008d545
- (void)layoutSubviews;	// IMP=0x000000000008d494
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000008d47d
- (id)init;	// IMP=0x000000000008cb5c

@end
