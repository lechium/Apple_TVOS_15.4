//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 completionHandler:(void (^)(void))arg3;
- (void)performStartAnimationWithCompletionHandler:(void (^)(void))arg1;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(void (^)(void))arg3;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;

@optional
- (void)notePictureInPictureViewControllerPrefersHiddenFromClonedDisplayDidChange;
- (void)notePictureInPictureViewControllerTetheringDidUpdate;
- (void)updateMenuItems;
- (_Bool)handleDoubleTapGesture;
- (_Bool)handleTapWhileStashedGesture;
- (void)relinquishInterfaceOrientationLock;
- (void)acquireInterfaceOrientationLock;
- (void)playbackSourceDidUpdateIsRoutingVideoToHostedWindow:(_Bool)arg1;
- (void)prepareStopAnimationWithCompletionHandler:(void (^)(void))arg1;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)performStopInIsolationWithCompletionHandler:(void (^)(void))arg1;
- (void)performStartInIsolationWithCompletionHandler:(void (^)(void))arg1;
@end

