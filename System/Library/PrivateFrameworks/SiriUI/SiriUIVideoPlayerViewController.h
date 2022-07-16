//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVPlayerViewController.h>

@class NSString;
@protocol SiriUIVideoPlayerViewControllerDelegate;

@interface SiriUIVideoPlayerViewController : AVPlayerViewController
{
    _Bool _observingPlayerStatus;	// 8 = 0x8
    _Bool _observingItemStatus;	// 9 = 0x9
    _Bool _observingPlayback;	// 10 = 0xa
    _Bool _observingViewController;	// 11 = 0xb
    void *_playerStatusObserverContext;	// 16 = 0x10
    void *_itemStatusObserverContext;	// 24 = 0x18
    NSString *_savedAudioSessionCategory;	// 32 = 0x20
    unsigned long long _savedAudioSessionCategoryOptions;	// 40 = 0x28
    id <SiriUIVideoPlayerViewControllerDelegate> _videoPlayerControllerDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000fdf5
@property(nonatomic) __weak id <SiriUIVideoPlayerViewControllerDelegate> videoPlayerControllerDelegate; // @synthesize videoPlayerControllerDelegate=_videoPlayerControllerDelegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000fdbe
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000fbd8
- (void)_restoreAudioPlaybackCategoryAndOptions;	// IMP=0x000000000000fa68
- (void)_updateAudioSessionCategory;	// IMP=0x000000000000f96b
- (void)_removeObservers;	// IMP=0x000000000000f69d
- (void)_registerObservers;	// IMP=0x000000000000f442
- (void)_playbackDidFinish:(id)arg1;	// IMP=0x000000000000f35f
@property(readonly, nonatomic) _Bool shouldPlayHighResolutionContent;
- (void)doneButtonTapped:(id)arg1;	// IMP=0x000000000000f1f1
- (void)dealloc;	// IMP=0x000000000000f1b3
- (void)setPlayer:(id)arg1;	// IMP=0x000000000000f0de
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000f017

@end
