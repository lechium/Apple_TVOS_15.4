//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosPlayer/ISChangeObserver-Protocol.h>
#import <PhotosPlayer/UIGestureRecognizerDelegate-Protocol.h>

@class CAMeshTransform, ISLivePhotoPlayer, ISTouchLivePhotoPlaybackFilter, NSString, UIGestureRecognizer, UILabel;
@protocol ISLivePhotoUIViewDelegate;

@interface ISLivePhotoUIView <UIGestureRecognizerDelegate, ISChangeObserver>
{
    struct {
        _Bool canBeginInteractivePlayback;
    } _delegateRespondsTo;	// 8 = 0x8
    _Bool __playingVitality;	// 9 = 0x9
    UIGestureRecognizer *_playbackGestureRecognizer;	// 16 = 0x10
    CAMeshTransform *_vitalityTransform;	// 24 = 0x18
    id <ISLivePhotoUIViewDelegate> _delegate;	// 32 = 0x20
    ISTouchLivePhotoPlaybackFilter *__playbackFilter;	// 40 = 0x28
    UILabel *__overlayLabel;	// 48 = 0x30
    long long __overlayDismissalID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001221d
@property(nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID; // @synthesize _overlayDismissalID=__overlayDismissalID;
@property(readonly, nonatomic) UILabel *_overlayLabel; // @synthesize _overlayLabel=__overlayLabel;
@property(nonatomic, setter=_setPlayingVitality:) _Bool _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property(retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter; // @synthesize _playbackFilter=__playbackFilter;
@property(nonatomic) __weak id <ISLivePhotoUIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CAMeshTransform *vitalityTransform; // @synthesize vitalityTransform=_vitalityTransform;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000120de
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000001207c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000012074
- (void)_updateGestureRecognizerParameters;	// IMP=0x0000000000011fcb
- (void)_playerDidChangeHinting;	// IMP=0x0000000000011fc5
- (void)_playerDidChangePlaybackStyle;	// IMP=0x0000000000011fb3
- (void)_dismissOverlayLabel:(long long)arg1;	// IMP=0x0000000000011f3a
- (void)_showOverlayLabel;	// IMP=0x0000000000011b1a
- (void)_updatePlaybackFilter;	// IMP=0x0000000000011a40
- (void)contentDidChange;	// IMP=0x0000000000011a11
- (void)audioSessionDidChange;	// IMP=0x00000000000119d0
- (void)_updateVideoTransform;	// IMP=0x000000000001189b
- (void)_updatePlaybackFilterInput;	// IMP=0x0000000000011733
- (void)_handlePlaybackRecognizer:(id)arg1;	// IMP=0x0000000000011721
- (void)_ISLivePhotoUIViewCommonInitialization;	// IMP=0x00000000000115ff
- (id)livePhotoPlayer;	// IMP=0x000000000001157d
@property(retain, nonatomic) ISLivePhotoPlayer *player; // @dynamic player;
- (void)dealloc;	// IMP=0x0000000000011349
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000112fd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000112a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

