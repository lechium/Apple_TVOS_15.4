//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TVPlaybackPiPStateMachine, _TVPlayer;

__attribute__((visibility("hidden")))
@interface _TVPlaybackManager : NSObject
{
    _TVPlaybackPiPStateMachine *_pipStateMachine;	// 8 = 0x8
    _TVPlayer *_presentedPlayer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000014a5a5
- (void).cxx_destruct;	// IMP=0x000000000014b11e
@property(retain, nonatomic) _TVPlayer *presentedPlayer; // @synthesize presentedPlayer=_presentedPlayer;
- (id)_viewControllerForPlayer:(id)arg1 remove:(_Bool)arg2;	// IMP=0x000000000014ae48
- (void)_playbackStateDidChange:(id)arg1;	// IMP=0x000000000014ade9
- (id)viewControllerForPlayer:(id)arg1;	// IMP=0x000000000014add5
- (void)resetPresentedPlayer;	// IMP=0x000000000014ad42
- (void)stopPresentedPlayer;	// IMP=0x000000000014ad05
- (void)stopBackgroundedPlayer;	// IMP=0x000000000014ac51
- (void)presentWithPlayer:(id)arg1 animated:(_Bool)arg2 prepareBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000014a64a
- (void)presentWithPlayer:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000014a635
@property(readonly, nonatomic) _TVPlaybackPiPStateMachine *pipStateMachine; // @synthesize pipStateMachine=_pipStateMachine;

@end

