//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class NSIndexPath, TVPMusicNowPlayingView, UIImage;

@protocol TVPMusicNowPlayingViewDelegate <NSObject>
- (NSIndexPath *)focusIndexPathForNowPlayingView:(TVPMusicNowPlayingView *)arg1;
- (UIImage *)nothingPlayingArtworkForNowPlayingView:(TVPMusicNowPlayingView *)arg1;
- (void)nowPlayingViewDidPressPlayPause:(TVPMusicNowPlayingView *)arg1;
- (_Bool)nowPlayingViewShouldHandlePressPlayPause:(TVPMusicNowPlayingView *)arg1;
- (void)nowPlayingViewDidSelectShuffle:(TVPMusicNowPlayingView *)arg1;
- (void)nowPlayingViewDidSelectRepeat:(TVPMusicNowPlayingView *)arg1;
- (void)nowPlayingViewPlaylistDidBecomeHidden:(TVPMusicNowPlayingView *)arg1;
- (void)nowPlayingView:(TVPMusicNowPlayingView *)arg1 playlistWillBecomeHiddenWithExecutionBlock:(void (^)(void))arg2;
- (void)nowPlayingView:(TVPMusicNowPlayingView *)arg1 playlistWillBecomeVisibleWithExecutionBlock:(void (^)(_Bool))arg2;
@end
