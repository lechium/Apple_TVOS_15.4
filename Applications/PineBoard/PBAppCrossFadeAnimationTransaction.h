//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;

@interface PBAppCrossFadeAnimationTransaction : BSTransaction
{
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 8 = 0x8
    CDStruct_a697a85d _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000208e60
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) CDStruct_a697a85d context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x0010000000208950
- (void)_willFailWithReason:(id)arg1;	// IMP=0x0010000000208810
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x00100000002086d0
- (void)_begin;	// IMP=0x00100000002085d0
- (_Bool)_canBeInterrupted;	// IMP=0x00100000002085b0
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x0010000000208470

@end

