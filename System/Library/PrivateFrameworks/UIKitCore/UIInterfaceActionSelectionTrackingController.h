//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFocusedInterfaceActionPressDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSPointerArray, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIScrollView, UIView, _UIInterfaceActionSelectByPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate>
{
    _Bool _scrubbingEnabled;	// 8 = 0x8
    _Bool _selectByPressGestureEnabled;	// 9 = 0x9
    _Bool _selectionFeedbackEnabled;	// 10 = 0xa
    UIView *_trackableContainerView;	// 16 = 0x10
    UIScrollView *_actionsScrollView;	// 24 = 0x18
    NSArray *_representationViews;	// 32 = 0x20
    UILongPressGestureRecognizer *_selectionGestureRecognizer;	// 40 = 0x28
    _UIInterfaceActionSelectionDelayGestureRecognizer *_selectionDelayGestureRecognizer;	// 48 = 0x30
    UIGestureRecognizer *_systemProvidedGestureRecognizer;	// 56 = 0x38
    NSMutableSet *_viewsRequiringSelectionGestureDisabling;	// 64 = 0x40
    _UIInterfaceActionSelectByPressGestureRecognizer *_selectByPressGestureRecognizer;	// 72 = 0x48
    NSPointerArray *_weakCooperatingSelectionTrackingControllers;	// 80 = 0x50
    id _scrollViewWillBeginDraggingNotificationToken;	// 88 = 0x58
    id _scrollViewDidEndDraggingNotificationToken;	// 96 = 0x60
    id _scrollViewDidEndDeceleratingNotificationToken;	// 104 = 0x68
    struct CGPoint _actionSelectionInitialLocationInContainerView;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000033382
@property(retain, nonatomic) id scrollViewDidEndDeceleratingNotificationToken; // @synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken;
@property(retain, nonatomic) id scrollViewDidEndDraggingNotificationToken; // @synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken;
@property(retain, nonatomic) id scrollViewWillBeginDraggingNotificationToken; // @synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken;
@property(retain, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers; // @synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers;
@property(retain, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer; // @synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer;
@property(readonly, nonatomic) NSMutableSet *viewsRequiringSelectionGestureDisabling; // @synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling;
@property(readonly, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer;
@property(readonly, nonatomic) _UIInterfaceActionSelectionDelayGestureRecognizer *selectionDelayGestureRecognizer; // @synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(readonly, nonatomic) struct CGPoint actionSelectionInitialLocationInContainerView; // @synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView;
@property(retain, nonatomic) NSArray *representationViews; // @synthesize representationViews=_representationViews;
@property(nonatomic) _Bool selectionFeedbackEnabled; // @synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled;
@property(nonatomic) _Bool selectByPressGestureEnabled; // @synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) __weak UIScrollView *actionsScrollView; // @synthesize actionsScrollView=_actionsScrollView;
@property(nonatomic) __weak UIView *trackableContainerView; // @synthesize trackableContainerView=_trackableContainerView;
- (id)_allGestureRecognizers;	// IMP=0x00000000000331d8
- (id)_allActionViewsIncludingCooperatingActionViews;	// IMP=0x000000000003311f
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032e00
- (_Bool)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;	// IMP=0x0000000000032d85
- (void)_noteScrollView:(id)arg1 isUserScrolling:(_Bool)arg2;	// IMP=0x0000000000032cf0
- (void)_unregisterForScrollViewNotifications;	// IMP=0x0000000000032c80
- (void)_registerForScrollViewNotifications;	// IMP=0x000000000003282c
- (void)_initializeSelectionGestureRecognizer;	// IMP=0x000000000003272e
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;	// IMP=0x0000000000032408
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;	// IMP=0x000000000003224b
- (_Bool)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000032184
- (void)_invokeHandlerForInterfaceAction:(id)arg1;	// IMP=0x0000000000032162
- (_Bool)_isPresentedAndVisible;	// IMP=0x000000000003210c
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;	// IMP=0x0000000000031a59
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x0000000000031a47
- (void)deselectAllActions;	// IMP=0x00000000000319ec
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000031889
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000317ad
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000316f5
- (void)_clearSystemProvidedGestureRecognizer;	// IMP=0x00000000000316e1
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x000000000003152a
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;	// IMP=0x00000000000314d5
- (void)handlePressedFocusedInterfaceAction:(id)arg1;	// IMP=0x00000000000314c3
- (id)_interfaceActionOfFocusedRepresentationView;	// IMP=0x0000000000031361
- (id)focusedInterfaceAction;	// IMP=0x000000000003134f
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;	// IMP=0x0000000000030f40
- (void)dealloc;	// IMP=0x0000000000030f02
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;	// IMP=0x0000000000030e24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

