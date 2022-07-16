//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, PXGDisplayAssetVideoPresentationController, PXMessagesStackPlaybackControlUserData, PXMessagesStackPlaybackControlViewModel, _PXMessagesStackPlayButton;

@interface PXMessagesStackPlaybackControlView : UIView <PXChangeObserver, PXGReusableView>
{
    _PXMessagesStackPlayButton *_button;	// 8 = 0x8
    long long _itemIndex;	// 16 = 0x10
    PXMessagesStackPlaybackControlUserData *_userData;	// 24 = 0x18
    PXMessagesStackPlaybackControlViewModel *_viewModel;	// 32 = 0x20
    PXGDisplayAssetVideoPresentationController *_videoController;	// 40 = 0x28
    struct CGRect clippingRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000073e812
@property(retain, nonatomic) PXGDisplayAssetVideoPresentationController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) PXMessagesStackPlaybackControlViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) PXMessagesStackPlaybackControlUserData *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000073e549
- (void)prepareForReuse;	// IMP=0x000000000073e543
- (void)becomeReusable;	// IMP=0x000000000073e4ab
- (void)layoutSubviews;	// IMP=0x000000000073e2aa
- (void)_handleButton:(id)arg1;	// IMP=0x000000000073e122
- (void)_updateButtonVisibility;	// IMP=0x000000000073df8b
- (_Bool)_wantsButton;	// IMP=0x000000000073dea7
- (_Bool)handleTapAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073dc83
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000073dbbb
- (_Bool)_shouldPauseOnTap;	// IMP=0x000000000073db50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000073da2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
@property(readonly) Class superclass;

@end
