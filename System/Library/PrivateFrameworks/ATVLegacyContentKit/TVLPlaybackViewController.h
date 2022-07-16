//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPPlaybackViewController.h>

#import <ATVLegacyContentKit/TVPPlaybackViewControllerDelegate-Protocol.h>

@class NSString, TVLRelatedContentLoadOperation, TVLVideoPlayerElement, UIView;

@interface TVLPlaybackViewController : TVPPlaybackViewController <TVPPlaybackViewControllerDelegate>
{
    TVLVideoPlayerElement *_videoPlayerElement;	// 8 = 0x8
    UIView *_javascriptOverlayContainer;	// 16 = 0x10
    UIView *_javascriptOverlay;	// 24 = 0x18
    TVLRelatedContentLoadOperation *_relatedContentLoadOperation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b5d97
@property(retain, nonatomic) TVLRelatedContentLoadOperation *relatedContentLoadOperation; // @synthesize relatedContentLoadOperation=_relatedContentLoadOperation;
@property(retain, nonatomic) UIView *javascriptOverlay; // @synthesize javascriptOverlay=_javascriptOverlay;
- (void)_currentMediaItemDidChangeNotification:(id)arg1;	// IMP=0x00000000000b5d42
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000000b5b45
- (void)loadView;	// IMP=0x00000000000b5a1e
- (void)playbackViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b574b
- (id)_mediaItemFromFeedElement:(id)arg1;	// IMP=0x00000000000b568e
- (id)currentFeedElement;	// IMP=0x00000000000b5679
- (void)dealloc;	// IMP=0x00000000000b551a
- (id)initWithVideoPlayerElement:(id)arg1;	// IMP=0x00000000000b53b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

