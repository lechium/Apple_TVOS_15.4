//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class TVPPlaybackProgressAnimator;

@protocol TVPPlaybackProgressAnimatorDelegate <NSObject>
- (void)playbackProgressAnimator:(TVPPlaybackProgressAnimator *)arg1 updateTitlesForElapsedTime:(double)arg2 withPlaybackDuration:(double)arg3;

@optional
- (double)currentElapsedTimeForPlaybackProgressAnimator:(TVPPlaybackProgressAnimator *)arg1;
- (void)playbackProgressAnimator:(TVPPlaybackProgressAnimator *)arg1 didFinishAnimatingToElapsedTime:(double)arg2;
- (void)playbackProgressAnimator:(TVPPlaybackProgressAnimator *)arg1 didPresentElapsedTime:(double)arg2;
@end

