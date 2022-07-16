//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollViewIntersectionDelegate-Protocol.h>

@class UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport <UIScrollViewIntersectionDelegate>
{
    UIScrollView *_scrollViewForTransition;	// 32 = 0x20
    _Bool _scrollViewShowsHorizontalScrollIndicator;	// 40 = 0x28
    _Bool _scrollViewTransitionFinishing;	// 41 = 0x29
    _Bool _disableInterfaceAutorotation;	// 42 = 0x2a
    struct CGPoint _scrollViewTransitionPreviousPoint;	// 48 = 0x30
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;	// 64 = 0x40
}

- (void)_updateKeyboardLayoutGuideForInteractiveScrollWithSize:(struct CGSize)arg1;	// IMP=0x00000000009bf399
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;	// IMP=0x00000000009bf0ab
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;	// IMP=0x00000000009bea88
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;	// IMP=0x00000000009be82c
- (id)cancelNotificationsForMode:(unsigned long long)arg1;	// IMP=0x00000000009be7f3
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x00000000009be766
- (void)finishScrollViewTransitionForController:(id)arg1;	// IMP=0x00000000009be74c
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;	// IMP=0x00000000009be6d1
- (void)finishScrollViewTransition;	// IMP=0x00000000009be65b
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x00000000009be5d3
- (void)updateScrollViewContentInsetBottom:(double)arg1;	// IMP=0x00000000009be531
- (void)dealloc;	// IMP=0x00000000009be4d9

@end
