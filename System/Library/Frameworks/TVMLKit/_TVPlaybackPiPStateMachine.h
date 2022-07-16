//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/AVPlayerViewControllerDelegate-Protocol.h>

@class NSHashTable, NSString, _TVPlaybackViewController;

__attribute__((visibility("hidden")))
@interface _TVPlaybackPiPStateMachine : NSObject <AVPlayerViewControllerDelegate>
{
    NSHashTable *_playbackViewControllers;	// 8 = 0x8
    _Bool _shouldAutomaticallyDismissAtPictureInPictureStart;	// 16 = 0x10
    _TVPlaybackViewController *_fullScreenPlaybackViewController;	// 24 = 0x18
    _TVPlaybackViewController *_activePiPPlaybackViewController;	// 32 = 0x20
    _TVPlaybackViewController *_startingPiPPlaybackViewController;	// 40 = 0x28
    _TVPlaybackViewController *_stoppingPiPPlaybackViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014bec9
@property(readonly, nonatomic) _TVPlaybackViewController *stoppingPiPPlaybackViewController; // @synthesize stoppingPiPPlaybackViewController=_stoppingPiPPlaybackViewController;
@property(readonly, nonatomic) _TVPlaybackViewController *startingPiPPlaybackViewController; // @synthesize startingPiPPlaybackViewController=_startingPiPPlaybackViewController;
@property(readonly, nonatomic) _TVPlaybackViewController *activePiPPlaybackViewController; // @synthesize activePiPPlaybackViewController=_activePiPPlaybackViewController;
@property(nonatomic) __weak _TVPlaybackViewController *fullScreenPlaybackViewController; // @synthesize fullScreenPlaybackViewController=_fullScreenPlaybackViewController;
@property(readonly, nonatomic) NSHashTable *playbackViewControllers; // @synthesize playbackViewControllers=_playbackViewControllers;
@property(nonatomic) _Bool shouldAutomaticallyDismissAtPictureInPictureStart; // @synthesize shouldAutomaticallyDismissAtPictureInPictureStart=_shouldAutomaticallyDismissAtPictureInPictureStart;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;	// IMP=0x000000000014be73
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x000000000014be6d
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x000000000014be67
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;	// IMP=0x000000000014be61
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;	// IMP=0x000000000014bde0
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014bd3b
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;	// IMP=0x000000000014bd33
- (void)pipDidStop:(id)arg1;	// IMP=0x000000000014bc8d
- (void)pipWillStop:(id)arg1;	// IMP=0x000000000014bbe7
- (void)pipDidStart:(id)arg1;	// IMP=0x000000000014bb41
- (void)pipWillStart:(id)arg1;	// IMP=0x000000000014ba9b
- (void)pictureInPictureDidStopForPlaybackViewController:(id)arg1;	// IMP=0x000000000014ba8a
- (void)pictureInPictureWillStopForPlaybackViewController:(id)arg1;	// IMP=0x000000000014ba1e
- (void)pictureInPictureDidStartForPlaybackViewController:(id)arg1;	// IMP=0x000000000014b927
- (void)pictureInPictureWillStartForPlaybackViewController:(id)arg1;	// IMP=0x000000000014b916
- (_Bool)isPiPEnabledForPlayer:(id)arg1;	// IMP=0x000000000014b863
- (id)playbackViewControllerForPictureInPictureSource:(id)arg1;	// IMP=0x000000000014b63b
- (id)playbackViewControllerPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000014b4d6
- (void)dealloc;	// IMP=0x000000000014b3fa
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000014b146

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

