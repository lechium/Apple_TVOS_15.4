//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface UIScrollViewDirectionalPressGestureRecognizer
{
    _Bool _hasBeenModified;	// 16 = 0x10
    UIView *_originalView;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    long long _activePressType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000100a77c
@property(readonly, nonatomic) long long activePressType; // @synthesize activePressType=_activePressType;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setAllowedTouchTypes:(id)arg1;	// IMP=0x000000000100a72a
- (void)setAllowedPressTypes:(id)arg1;	// IMP=0x000000000100a716
- (void)_resetToOriginalViewIfAllowed;	// IMP=0x000000000100a687
- (void)_addToViewIfAllowed:(id)arg1;	// IMP=0x000000000100a5ea
- (void)_setEnabledIfAllowed:(_Bool)arg1;	// IMP=0x000000000100a5ab
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000100a512
- (void)reset;	// IMP=0x000000000100a4fd
- (_Bool)_shouldReceivePress:(id)arg1;	// IMP=0x000000000100a3d1
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000100a33c

@end

