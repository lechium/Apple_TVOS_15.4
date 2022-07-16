//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVAsset, AVPlayerItem, AVVideoComposition, NSArray, NSLayoutConstraint, NSString, PXCapsuleButton, PXContextualNotification, PXContextualNotificationChevronView, PXImageRequester, PXVideoPlayerView, UIImage, UIImageView, UILabel;

@interface PXContextualNotificationView : UIView <PXChangeObserver>
{
    _Bool _useRegularHitTesting;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    PXContextualNotification *_contextualNotification;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIImage *_titleIcon;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    AVAsset *_loopingVideoAsset;	// 56 = 0x38
    AVVideoComposition *_loopingVideoComposition;	// 64 = 0x40
    UIView *_contentView;	// 72 = 0x48
    UIImage *_placeholderImage;	// 80 = 0x50
    PXImageRequester *_imageRequester;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    UIImageView *_titleIconView;	// 104 = 0x68
    UILabel *_messageLabel;	// 112 = 0x70
    UIImageView *_dismissIconView;	// 120 = 0x78
    PXVideoPlayerView *_mediaView;	// 128 = 0x80
    NSLayoutConstraint *_mediaViewHeightConstraint;	// 136 = 0x88
    double __mediaAspectRatio;	// 144 = 0x90
    AVPlayerItem *__loopingPlayerItem;	// 152 = 0x98
    PXCapsuleButton *_actionButton;	// 160 = 0xa0
    PXContextualNotificationChevronView *_chevronView;	// 168 = 0xa8
    NSArray *_constraints;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000069e998
@property(copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) PXContextualNotificationChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) PXCapsuleButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem; // @synthesize _loopingPlayerItem=__loopingPlayerItem;
@property(nonatomic, setter=_setMediaAspectRatio:) double _mediaAspectRatio; // @synthesize _mediaAspectRatio=__mediaAspectRatio;
@property(readonly, nonatomic) NSLayoutConstraint *mediaViewHeightConstraint; // @synthesize mediaViewHeightConstraint=_mediaViewHeightConstraint;
@property(readonly, nonatomic) PXVideoPlayerView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) UIImageView *dismissIconView; // @synthesize dismissIconView=_dismissIconView;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIImageView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool useRegularHitTesting; // @synthesize useRegularHitTesting=_useRegularHitTesting;
@property(copy, nonatomic) AVVideoComposition *loopingVideoComposition; // @synthesize loopingVideoComposition=_loopingVideoComposition;
@property(copy, nonatomic) AVAsset *loopingVideoAsset; // @synthesize loopingVideoAsset=_loopingVideoAsset;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak PXContextualNotification *contextualNotification; // @synthesize contextualNotification=_contextualNotification;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000069e648
- (void)_handleActionButton:(id)arg1;	// IMP=0x000000000069e609
- (_Bool)isPointInsidePassthroughArea:(struct CGPoint)arg1;	// IMP=0x000000000069e43c
- (_Bool)isPointInsideDismissArea:(struct CGPoint)arg1;	// IMP=0x000000000069e333
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000069e264
- (void)_startLoopingWithItem:(id)arg1;	// IMP=0x000000000069e1ba
- (void)_handleDidSetVideoAudioSession;	// IMP=0x000000000069e16e
- (void)_updateLoopingPlayerItem;	// IMP=0x000000000069dd24
- (void)setPlaceholderImage:(id)arg1 imageRequester:(id)arg2;	// IMP=0x000000000069d9c9
- (void)_updateMessageLabelForCMMCard;	// IMP=0x000000000069d163
- (void)_preferredContentSizeChanged:(id)arg1;	// IMP=0x000000000069cefc
- (void)updateConstraints;	// IMP=0x000000000069aae8
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000000699a6a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006999e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006999d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
