//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class MISSING_TYPE, PBScreenSaverContentPresentingViewController, UIViewPropertyAnimator;

@interface _PBScreenSaverToKioskDismissalAnimationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    _Bool _shouldApplyStartValues;	// 9 = 0x9
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    CDStruct_090c3085 _context;	// 24 = 0x18
    MISSING_TYPE *_springAnimator;	// 32 = 0x20
    UIViewPropertyAnimator *_alphaAnimator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001a5780
@property(readonly, nonatomic) UIViewPropertyAnimator *alphaAnimator; // @synthesize alphaAnimator=_alphaAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *springAnimator; // @synthesize springAnimator=_springAnimator;
@property(nonatomic) CDStruct_090c3085 context; // @synthesize context=_context;
@property(nonatomic) _Bool shouldApplyStartValues; // @synthesize shouldApplyStartValues=_shouldApplyStartValues;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_begin;	// IMP=0x00100000001a4190
- (_Bool)_canBeInterrupted;	// IMP=0x00100000001a4170

@end

