//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIViewInProcessAnimationState
{
    _Bool _retargeted;	// 280 = 0x118
    CDUnknownBlockType _animationAndComposerGetter;	// 288 = 0x120
    long long _type;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000000fa8116
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool retargeted; // @synthesize retargeted=_retargeted;
@property(copy, nonatomic) CDUnknownBlockType animationAndComposerGetter; // @synthesize animationAndComposerGetter=_animationAndComposerGetter;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;	// IMP=0x0000000000fa798b
- (void)animatePropertyWithKey:(id)arg1 view:(id)arg2 forceNew:(_Bool)arg3 currentValue:(id)arg4 targetValue:(id)arg5 preTickShouldRemoveCallback:(CDUnknownBlockType)arg6 newValueCallback:(CDUnknownBlockType)arg7 removedCallback:(CDUnknownBlockType)arg8;	// IMP=0x0000000000fa785a
- (void)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(CDUnknownBlockType)arg3 newValueCallback:(CDUnknownBlockType)arg4 removedCallback:(CDUnknownBlockType)arg5 animatableProperty:(id)arg6;	// IMP=0x0000000000fa6669
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000fa65f7
- (_Bool)isKeySupported:(id)arg1;	// IMP=0x0000000000fa6599
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000fa6508
- (id)init;	// IMP=0x0000000000fa64cd

@end

