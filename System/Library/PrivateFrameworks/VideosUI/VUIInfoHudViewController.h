//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIFocusGuide, UIVisualEffectView, VUIImageView, VUINowPlayingHudButtonsLayout, VUINowPlayingHudKeys, VUINowPlayingHudMetaDataView, VUINowPlayingHudMetaDataViewLayout, VUINowPlayingImageViewLayout;

__attribute__((visibility("hidden")))
@interface VUIInfoHudViewController : UIViewController
{
    VUINowPlayingHudKeys *_hudModel;	// 8 = 0x8
    VUIImageView *_imageView;	// 16 = 0x10
    VUINowPlayingHudMetaDataView *_metaDataView;	// 24 = 0x18
    NSArray *_buttonViews;	// 32 = 0x20
    CDUnknownBlockType _buttonHandler;	// 40 = 0x28
    UIVisualEffectView *_visualEffectView;	// 48 = 0x30
    CDUnknownBlockType _userInteractionEventHandler;	// 56 = 0x38
    UIFocusGuide *_focusGuide;	// 64 = 0x40
    double _cornerRadius;	// 72 = 0x48
    VUINowPlayingImageViewLayout *_imageLayout;	// 80 = 0x50
    VUINowPlayingHudMetaDataViewLayout *_metaDataViewLayout;	// 88 = 0x58
    VUINowPlayingHudButtonsLayout *_buttonsLayout;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000efe45
@property(readonly, nonatomic) VUINowPlayingHudButtonsLayout *buttonsLayout; // @synthesize buttonsLayout=_buttonsLayout;
@property(readonly, nonatomic) VUINowPlayingHudMetaDataViewLayout *metaDataViewLayout; // @synthesize metaDataViewLayout=_metaDataViewLayout;
@property(readonly, nonatomic) VUINowPlayingImageViewLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIFocusGuide *focusGuide; // @synthesize focusGuide=_focusGuide;
@property(copy, nonatomic) CDUnknownBlockType userInteractionEventHandler; // @synthesize userInteractionEventHandler=_userInteractionEventHandler;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(copy, nonatomic) CDUnknownBlockType buttonHandler; // @synthesize buttonHandler=_buttonHandler;
@property(retain, nonatomic) NSArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(retain, nonatomic) VUINowPlayingHudMetaDataView *metaDataView; // @synthesize metaDataView=_metaDataView;
@property(retain, nonatomic) VUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUINowPlayingHudKeys *hudModel; // @synthesize hudModel=_hudModel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000efc29
- (void)_updateAppearance;	// IMP=0x00000000000efaab
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ef9b6
- (id)_imageLayout;	// IMP=0x00000000000ef831
- (id)_titleLayoutWithStyle:(unsigned long long)arg1;	// IMP=0x00000000000ef6be
- (id)_nowPlayingButtonImageViewWithImage:(id)arg1 imageLayout:(id)arg2;	// IMP=0x00000000000ef5d1
- (void)setDescriptionTextSelectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef51b
- (void)setButtonSelectHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef4db
- (void)updateWithMetadata:(id)arg1;	// IMP=0x00000000000ee79c
- (void)_configureSubviews;	// IMP=0x00000000000ee4d8
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000000ee0cd
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000ed708
- (id)preferredFocusEnvironments;	// IMP=0x00000000000ed6f6
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000ed6e5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ed676
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ed607
- (id)init;	// IMP=0x00000000000ed34c

@end
