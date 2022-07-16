//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UISwipeDismissalGestureRecognizerDelegate-Protocol.h>

@class NSString, UISwipeActionController, _UISwipeActionPanGestureRecognizer, _UISwipeDismissalGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UISwipeHandler : NSObject <UIGestureRecognizerDelegate, _UISwipeDismissalGestureRecognizerDelegate>
{
    struct {
        unsigned int didProcessBegan:1;
    } _flags;	// 8 = 0x8
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 16 = 0x10
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;	// 24 = 0x18
    CDStruct_324b76a9 _currentSwipeConfig;	// 32 = 0x20
    unsigned long long _currentSwipeState;	// 64 = 0x40
    _Bool _resetSwipeWhileInitiating;	// 72 = 0x48
    double _initialTranslation;	// 80 = 0x50
    double _confirmationTranslationAdjustment;	// 88 = 0x58
    _Bool _active;	// 96 = 0x60
    UISwipeActionController *_swipeController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000ce3568
@property(nonatomic) __weak UISwipeActionController *swipeController; // @synthesize swipeController=_swipeController;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long currentSwipeState; // @synthesize currentSwipeState=_currentSwipeState;
- (void)_moveSwipedItemToOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3 isTracking:(_Bool)arg4;	// IMP=0x0000000000ce3499
- (CDStruct_9b6dff2a)_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3;	// IMP=0x0000000000ce323a
@property(readonly, nonatomic) CDStruct_324b76a9 currentSwipeConfig;
- (_Bool)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)arg1;	// IMP=0x0000000000ce3167
- (void)_cancelExistingSwipe;	// IMP=0x0000000000ce30dc
- (void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)arg1;	// IMP=0x0000000000ce3069
- (void)resetSwipe;	// IMP=0x0000000000ce3036
- (void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(struct CGPoint)arg3 userInitiated:(_Bool)arg4;	// IMP=0x0000000000ce2f00
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x0000000000ce2c33
- (void)_swipeRecognizerChanged:(id)arg1;	// IMP=0x0000000000ce268a
- (void)_swipeRecognizerBegan:(id)arg1;	// IMP=0x0000000000ce2577
- (void)_swipeRecognizerDidRecognize:(id)arg1;	// IMP=0x0000000000ce23b9
- (unsigned long long)_directionForGestureRecognizer:(id)arg1;	// IMP=0x0000000000ce22e6
- (void)_dismissalRecognizerDidRecognize:(id)arg1;	// IMP=0x0000000000ce22a3
- (_Bool)gestureRecognizerShouldDismissForTouchUp:(id)arg1;	// IMP=0x0000000000ce21e5
- (_Bool)gestureRecognizerShouldDismissForTouchDown:(id)arg1;	// IMP=0x0000000000ce21d3
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000ce2056
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000ce1f9f
@property(readonly, nonatomic, getter=isInteracting) _Bool interacting;
- (void)dealloc;	// IMP=0x0000000000ce1eaf
- (void)_setUp;	// IMP=0x0000000000ce1d05
- (id)initWithSwipeController:(id)arg1;	// IMP=0x0000000000ce1c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

