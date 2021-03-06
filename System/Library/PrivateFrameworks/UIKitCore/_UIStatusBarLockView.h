//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/CAAnimationDelegate-Protocol.h>
#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSString, UIAccessibilityHUDItem, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockView <CAAnimationDelegate, _UIStatusBarDisplayable>
{
    _UIStatusBarImageView *_bodyView;	// 8 = 0x8
    _UIStatusBarImageView *_shackleView;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c5fb48
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) _UIStatusBarImageView *shackleView; // @synthesize shackleView=_shackleView;
@property(retain, nonatomic) _UIStatusBarImageView *bodyView; // @synthesize bodyView=_bodyView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000c5fa85
- (void)jiggleWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c5f59e
- (void)animateUnlockWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c5f23b
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000c5f225
- (void)resetLock;	// IMP=0x0000000000c5f16b
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000c5ef5b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c5ee4c

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

