//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewAnimationState;

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject
{
    _Bool _didBeginBlockAnimation;	// 8 = 0x8
    _Bool _allowUserInteraction;	// 9 = 0x9
    _Bool _isZeroDuration;	// 10 = 0xa
    _Bool _allowsUserInteractionToCutOffEndOfAnimation;	// 11 = 0xb
    _Bool _allowsHitTesting;	// 12 = 0xc
    _Bool _animationDidStopSent;	// 13 = 0xd
    CDUnknownBlockType _start;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    NSMutableArray *_systemPostAnimationActions;	// 32 = 0x20
    _Bool __forcingImmediateCompletion;	// 40 = 0x28
    UIViewAnimationState *_animationState;	// 48 = 0x30
}

+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000010697e4
+ (id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000106970b
- (void).cxx_destruct;	// IMP=0x0000000001069d65
@property(nonatomic, setter=_setForcingImmediateCompletion:) _Bool _forcingImmediateCompletion; // @synthesize _forcingImmediateCompletion=__forcingImmediateCompletion;
@property(nonatomic) __weak UIViewAnimationState *_animationState; // @synthesize _animationState;
@property(readonly, nonatomic) _Bool _allowsUserInteraction; // @synthesize _allowsUserInteraction=_allowUserInteraction;
- (_Bool)_allowsHitTesting;	// IMP=0x0000000001069d1a
- (_Bool)_allowsUserInteractionToCutOffEndOfAnimation;	// IMP=0x0000000001069d11
- (void)_sendDeferredCompletion:(id)arg1;	// IMP=0x0000000001069c9c
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;	// IMP=0x0000000001069929
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;	// IMP=0x0000000001069901

@end

