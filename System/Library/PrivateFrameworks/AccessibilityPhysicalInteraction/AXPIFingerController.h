//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityPhysicalInteraction/AXAssertionCoordinatorDelegate-Protocol.h>
#import <AccessibilityPhysicalInteraction/AXPIFingerModelDelegate-Protocol.h>

@class AXAssertionCoordinator, AXPIFingerContainerView, AXPIFingerEventSender, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView, UIWindow;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerController : NSObject <AXPIFingerModelDelegate, AXAssertionCoordinatorDelegate>
{
    AXPIFingerContainerView *_fingerContainerView;	// 8 = 0x8
    NSMutableArray *_fingerModels;	// 16 = 0x10
    AXPIFingerEventSender *_eventSender;	// 24 = 0x18
    unsigned long long _updateCount;	// 32 = 0x20
    NSMutableDictionary *_downInfosByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_upInfosByIdentifier;	// 48 = 0x30
    _Bool _didMoveFingersDuringUpdate;	// 56 = 0x38
    CDUnknownBlockType _gestureCompletion;	// 64 = 0x40
    _Bool _isPerformingGesture;	// 72 = 0x48
    AXAssertionCoordinator *_suppressVisualsAssertionCoodinator;	// 80 = 0x50
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;	// 88 = 0x58
    UIWindow *_fixedReferenceWindow;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000008ffe
@property(retain, nonatomic) UIWindow *fixedReferenceWindow; // @synthesize fixedReferenceWindow=_fixedReferenceWindow;
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(readonly, nonatomic) _Bool isPerformingGesture; // @synthesize isPerformingGesture=_isPerformingGesture;
@property(readonly, nonatomic) NSArray *fingerModels; // @synthesize fingerModels=_fingerModels;
@property(readonly, nonatomic) UIView *fingerContainerView; // @synthesize fingerContainerView=_fingerContainerView;
- (void)endUpdates;	// IMP=0x0000000000008e97
- (void)beginUpdates;	// IMP=0x0000000000008e8d
- (_Bool)_isInUpdateBlock;	// IMP=0x0000000000008e7f
- (unsigned long long)_fingerIdentifierForIndex:(unsigned long long)arg1;	// IMP=0x0000000000008e75
- (void)didUpdateShapeForFingerModel:(id)arg1;	// IMP=0x0000000000008e18
- (void)didUpdateSelectedStateForFingerModel:(id)arg1;	// IMP=0x0000000000008dbb
- (void)didUpdatePressStateForFingerModel:(id)arg1;	// IMP=0x0000000000008b60
- (void)didUpdateLocationForFingerModel:(id)arg1;	// IMP=0x0000000000008ae1
- (void)didUpdateForceForFingerModel:(id)arg1;	// IMP=0x0000000000008a62
- (void)_sendMoveEventIfNeededForFingerModel:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000089d8
- (void)performUpAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000892b
- (void)performMoveToPoint:(struct CGPoint)arg1;	// IMP=0x000000000000887e
- (void)performDownAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000087d1
- (void)animateToTapWithDuration:(double)arg1;	// IMP=0x00000000000087bb
- (struct CGRect)rectForFingersAtPoints:(id)arg1;	// IMP=0x0000000000008784
- (_Bool)moveFingersToPoints:(id)arg1;	// IMP=0x00000000000084ea
- (id)legacyLiftFingersUp;	// IMP=0x00000000000084b7
- (id)legacyPressFingersDown;	// IMP=0x0000000000008484
- (id)_pointStringsFromFingers;	// IMP=0x00000000000082da
- (void)assertionCoordinator:(id)arg1 assertionsDidBecomeActive:(_Bool)arg2;	// IMP=0x0000000000008272
- (id)acquireAssertionToSuppressVisualsWithReason:(id)arg1;	// IMP=0x00000000000081ef
@property(readonly, nonatomic) AXAssertionCoordinator *suppressVisualsAssertionCoodinator; // @synthesize suppressVisualsAssertionCoodinator=_suppressVisualsAssertionCoodinator;
- (id)fingerModelAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000008143
- (void)_endGestureWithSuccess:(_Bool)arg1;	// IMP=0x00000000000080cf
- (void)_interruptGestureIfNeeded;	// IMP=0x00000000000080b3
- (void)cancelGesture;	// IMP=0x00000000000080a9
- (void)_performGesture:(id)arg1 shouldShowFingers:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007f53
- (void)performWithoutPreparingGesture:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f3c
- (void)performGesture:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f22
- (void)performGesture:(id)arg1;	// IMP=0x0000000000007eab
- (void)_replayEventAtIndex:(unsigned long long)arg1 inGesture:(id)arg2 allFingerIdentifiers:(id)arg3;	// IMP=0x0000000000007b5f
- (void)showStartingFingersForGesture:(id)arg1 animated:(_Bool)arg2 startPointForAnimation:(struct CGPoint)arg3;	// IMP=0x0000000000007b44
- (void)showStartingFingersForGesture:(id)arg1;	// IMP=0x0000000000007b1d
- (id)_handleStartingFingersForGesture:(id)arg1 animated:(_Bool)arg2 startPointForAnimation:(struct CGPoint)arg3 midpoint:(struct CGPoint *)arg4 showFingers:(_Bool)arg5;	// IMP=0x00000000000076a3
- (id)_showStartingFingersForGesture:(id)arg1 animated:(_Bool)arg2 startPointForAnimation:(struct CGPoint)arg3;	// IMP=0x0000000000007685
- (struct CGPoint)midpointOfStartingFingersForGesture:(id)arg1;	// IMP=0x0000000000007635
- (struct CGPoint)midpointForFingers;	// IMP=0x00000000000075da
- (void)enumerateFingersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000074ff
- (void)cancelCircularProgressAnimation;	// IMP=0x00000000000074e9
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007484
- (void)liftFingersUpAnimated:(_Bool)arg1;	// IMP=0x000000000000746d
- (void)pressFingersDownAnimated:(_Bool)arg1;	// IMP=0x0000000000007456
- (void)liftFingersUpAnimated:(_Bool)arg1 sendTouchEvents:(_Bool)arg2;	// IMP=0x0000000000007332
- (void)pressFingersDownAnimated:(_Bool)arg1 sendTouchEvents:(_Bool)arg2;	// IMP=0x0000000000007208
- (id)_touchInfosByIdentifierForPressedFingers;	// IMP=0x0000000000006fc0
- (id)_eventTouchInfoForFinger:(id)arg1;	// IMP=0x0000000000006f3c
- (id)_eventTouchInfoForFingerLocation:(struct CGPoint)arg1 force:(double)arg2;	// IMP=0x0000000000006e93
- (struct CGPoint)_fingerLocationFromSceneReferencePoint:(struct CGPoint)arg1;	// IMP=0x0000000000006d64
- (struct CGPoint)_sceneReferencePointFromFingerLocation:(struct CGPoint)arg1;	// IMP=0x0000000000006c20
- (void)resetPinchFingers;	// IMP=0x0000000000006a97
- (void)showPinchFingersAnimated:(_Bool)arg1 midpoint:(struct CGPoint)arg2;	// IMP=0x000000000000696b
- (void)_showFingerModels:(id)arg1 animated:(_Bool)arg2 startPointForAnimation:(struct CGPoint)arg3 shouldShowPinchChain:(_Bool)arg4 shouldReuseFingers:(_Bool)arg5;	// IMP=0x00000000000065cc
- (void)showFingerModels:(id)arg1 animated:(_Bool)arg2 startPointForAnimation:(struct CGPoint)arg3;	// IMP=0x00000000000065b1
- (void)clearAllFingersAnimated:(_Bool)arg1 endPointForAnimation:(struct CGPoint)arg2;	// IMP=0x0000000000006516
@property(readonly, nonatomic) unsigned long long numberOfFingers;
@property(nonatomic) unsigned long long senderID;
@property(nonatomic) _Bool shouldAddRealEventFlag;
@property(readonly, nonatomic) _Bool isPinchEnabled;
- (void)dealloc;	// IMP=0x0000000000006338
- (id)init;	// IMP=0x000000000000623e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

