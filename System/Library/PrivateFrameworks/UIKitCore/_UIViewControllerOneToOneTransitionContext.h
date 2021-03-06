//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, UIViewController;

@interface _UIViewControllerOneToOneTransitionContext
{
    _Bool _isToViewSet;	// 168 = 0xa8
    _Bool _isFromViewSet;	// 169 = 0xa9
    UIView *_toView;	// 176 = 0xb0
    UIView *_fromView;	// 184 = 0xb8
    _Bool __isDeferred;	// 192 = 0xc0
    UIViewController *_fromViewController;	// 200 = 0xc8
    UIViewController *_toViewController;	// 208 = 0xd0
    struct CGRect _fromStartFrame;	// 216 = 0xd8
    struct CGRect _fromEndFrame;	// 248 = 0xf8
    struct CGRect _toEndFrame;	// 280 = 0x118
    struct CGRect _toStartFrame;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000004ec337
@property(nonatomic, setter=_setIsDeferred:) _Bool _isDeferred; // @synthesize _isDeferred=__isDeferred;
@property(nonatomic, setter=_setToStartFrame:) struct CGRect toStartFrame; // @synthesize toStartFrame=_toStartFrame;
@property(nonatomic, setter=_setToEndFrame:) struct CGRect toEndFrame; // @synthesize toEndFrame=_toEndFrame;
@property(nonatomic, setter=_setFromEndFrame:) struct CGRect fromEndFrame; // @synthesize fromEndFrame=_fromEndFrame;
@property(nonatomic, setter=_setFromStartFrame:) struct CGRect fromStartFrame; // @synthesize fromStartFrame=_fromStartFrame;
@property(retain, nonatomic, setter=_setToViewController:) UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(retain, nonatomic, setter=_setFromViewController:) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView;
@property(retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView;
- (struct CGRect)finalFrameForViewController:(id)arg1;	// IMP=0x00000000004ec018
- (struct CGRect)initialFrameForViewController:(id)arg1;	// IMP=0x00000000004ebf97
- (id)viewControllerForKey:(id)arg1;	// IMP=0x00000000004ebf28
- (id)viewForKey:(id)arg1;	// IMP=0x00000000004ebeb9
- (void)dealloc;	// IMP=0x00000000004ebe62

@end

