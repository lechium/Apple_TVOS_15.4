//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SCNTransaction : NSObject
{
}

+ (void)checkUncommittedTransactions;	// IMP=0x000000000027ff27
+ (unsigned int)currentState;	// IMP=0x000000000027ff1d
+ (void)enqueueCommandForObject:(id)arg1 immediateTransactionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000027fd5d
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000027fca7
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000027fbf1
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 applyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000027fb83
+ (struct __C3DScene *)immediateModeRestrictedContext;	// IMP=0x000000000027fb71
+ (void)setImmediateModeRestrictedContext:(struct __C3DScene *)arg1;	// IMP=0x000000000027fb64
+ (_Bool)immediateMode;	// IMP=0x000000000027fb52
+ (void)setImmediateMode:(_Bool)arg1;	// IMP=0x000000000027fb46
+ (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000027fb36
+ (id)valueForKey:(id)arg1;	// IMP=0x000000000027fb29
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000027fb1c
+ (CDUnknownBlockType)completionBlock;	// IMP=0x000000000027fb12
+ (void)setDisableActions:(_Bool)arg1;	// IMP=0x000000000027fb06
+ (_Bool)disableActions;	// IMP=0x000000000027fafc
+ (void)setAnimationTimingFunction:(id)arg1;	// IMP=0x000000000027fae7
+ (id)animationTimingFunction;	// IMP=0x000000000027facc
+ (void)setAnimationDuration:(double)arg1;	// IMP=0x000000000027fac2
+ (double)animationDuration;	// IMP=0x000000000027fab8
+ (void)unlock;	// IMP=0x000000000027faae
+ (void)lock;	// IMP=0x000000000027faa4
+ (void)flush;	// IMP=0x000000000027fa9a
+ (void)commitImmediate;	// IMP=0x000000000027fa8b
+ (void)commit;	// IMP=0x000000000027fa7f
+ (void)begin;	// IMP=0x000000000027fa75
- (id)animationTimingFunction;	// IMP=0x000000000028006f
- (void)setAnimationTimingFunction:(id)arg1;	// IMP=0x0000000000280012
- (_Bool)disableActions;	// IMP=0x000000000027fff9
- (void)setDisableActions:(_Bool)arg1;	// IMP=0x000000000027ffe0
- (double)animationDuration;	// IMP=0x000000000027ffc7
- (void)setAnimationDuration:(double)arg1;	// IMP=0x000000000027ffae
- (void)unlock;	// IMP=0x000000000027ff95
- (void)lock;	// IMP=0x000000000027ff7c
- (void)flush;	// IMP=0x000000000027ff63
- (void)commit;	// IMP=0x000000000027ff4a
- (void)begin;	// IMP=0x000000000027ff31

@end

