//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIImageView, UIStatusBarLockItemView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItemPadlockView <CAAnimationDelegate>
{
    UIImageView *_bodyView;	// 112 = 0x70
    UIImageView *_shackleView;	// 120 = 0x78
    CDUnknownBlockType _completionBlock;	// 128 = 0x80
    UIStatusBarLockItemView *_owner;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000c18559
@property(nonatomic) __weak UIStatusBarLockItemView *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIImageView *shackleView; // @synthesize shackleView=_shackleView;
@property(retain, nonatomic) UIImageView *bodyView; // @synthesize bodyView=_bodyView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000c1846f
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c17ede
- (void)animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c17982
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000c1796c
- (void)reset;	// IMP=0x0000000000c17910
- (id)initWithFrame:(struct CGRect)arg1 owner:(id)arg2;	// IMP=0x0000000000c175a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

