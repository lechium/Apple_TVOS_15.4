//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIExclusiveTouchGestureRecognizerDelegate-Protocol.h>

@class BKSTouchStream, FBSDisplayIdentity, NSMutableSet, NSSet, NSString, UIGestureRecognizer, _UISystemGestureWindow;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface __UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate>
{
    FBSDisplayIdentity *_rootDisplayIdentity;	// 8 = 0x8
    _UISystemGestureWindow *_systemGestureWindow;	// 16 = 0x10
    NSMutableSet *_recognizingGestures;	// 24 = 0x18
    NSMutableSet *_externalEdgeSwipeGestures;	// 32 = 0x20
    NSMutableSet *_internalGestures;	// 40 = 0x28
    NSMutableSet *_externalGestures;	// 48 = 0x30
    id <BSInvalidatable> _stateCaptureToken;	// 56 = 0x38
    _Bool _achievedMaximumMovement;	// 64 = 0x40
    _Bool _didSeeExclusiveTouchBegan;	// 65 = 0x41
    _Bool _didProcessPendingSwipeBegan;	// 66 = 0x42
    UIGestureRecognizer *_exclusiveTouchGesture;	// 72 = 0x48
    UIGestureRecognizer *_pendingSwipeGesture;	// 80 = 0x50
    UIGestureRecognizer *_catchEdgeSwipeFailureGesture;	// 88 = 0x58
    UIGestureRecognizer *_directTouchGesture;	// 96 = 0x60
    BKSTouchStream *_touchStream;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006b9c7a
@property(retain, nonatomic) BKSTouchStream *touchStream; // @synthesize touchStream=_touchStream;
@property(nonatomic) _Bool didProcessPendingSwipeBegan; // @synthesize didProcessPendingSwipeBegan=_didProcessPendingSwipeBegan;
@property(nonatomic) _Bool didSeeExclusiveTouchBegan; // @synthesize didSeeExclusiveTouchBegan=_didSeeExclusiveTouchBegan;
@property(nonatomic) _Bool achievedMaximumMovement; // @synthesize achievedMaximumMovement=_achievedMaximumMovement;
@property(retain, nonatomic) UIGestureRecognizer *directTouchGesture; // @synthesize directTouchGesture=_directTouchGesture;
@property(retain, nonatomic) UIGestureRecognizer *catchEdgeSwipeFailureGesture; // @synthesize catchEdgeSwipeFailureGesture=_catchEdgeSwipeFailureGesture;
@property(retain, nonatomic) UIGestureRecognizer *pendingSwipeGesture; // @synthesize pendingSwipeGesture=_pendingSwipeGesture;
@property(retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture; // @synthesize exclusiveTouchGesture=_exclusiveTouchGesture;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;	// IMP=0x00000000006b9881
- (void)_externalGestureRecognizerChanged:(id)arg1;	// IMP=0x00000000006b90ed
- (void)_directTouchDown:(id)arg1;	// IMP=0x00000000006b8d60
- (void)_catchSwipeFailureGestureChanged:(id)arg1;	// IMP=0x00000000006b8d24
- (void)_pendingSwipeGestureChanged:(id)arg1;	// IMP=0x00000000006b8b20
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;	// IMP=0x00000000006b8a40
- (void)_pendingSwipeGestureDidBegin:(id)arg1;	// IMP=0x00000000006b8959
- (void)_failedPendingSwipe;	// IMP=0x00000000006b8824
- (void)_exclusiveTouchGestureChanged:(id)arg1;	// IMP=0x00000000006b8478
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;	// IMP=0x00000000006b830c
- (unsigned char)_dispatchModeForExternalGestureCompletion;	// IMP=0x00000000006b82e9
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(_Bool)arg2 timestamp:(double)arg3;	// IMP=0x00000000006b8246
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000006b8167
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000006b808c
- (id)windowForSystemGestures;	// IMP=0x00000000006b807e
- (void)clearTransform;	// IMP=0x00000000006b7f81
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000006b7e7d
- (void)removeGestureRecognizer:(id)arg1;	// IMP=0x00000000006b7d26
- (void)addGestureRecognizer:(id)arg1;	// IMP=0x00000000006b7cc9
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2;	// IMP=0x00000000006b78ff
@property(readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000006b7791
- (void)_removeInternalGestures;	// IMP=0x00000000006b76b9
- (void)_addInternalGesturesToView:(id)arg1;	// IMP=0x00000000006b760c
- (id)initWithRootDisplayIdentity:(id)arg1;	// IMP=0x00000000006b6bf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
