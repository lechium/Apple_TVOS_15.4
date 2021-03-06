//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIVisualEffectViewEntry;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewTransitioningEntry
{
    _UIVisualEffectViewEntry *_sourceEntry;	// 16 = 0x10
    _UIVisualEffectViewEntry *_destinationEntry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e61d8
- (id)description;	// IMP=0x00000000000e614e
- (id)copyForTransitionOut;	// IMP=0x00000000000e60d1
- (id)copyForTransitionToEffect:(id)arg1;	// IMP=0x00000000000e6054
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x00000000000e604c
- (_Bool)isSameTypeOfEffect:(id)arg1;	// IMP=0x00000000000e6044
- (void)removeEffectFromView:(id)arg1;	// IMP=0x00000000000e6027
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x00000000000e600a
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000000e5fed
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000000e5fd0
- (_Bool)shouldAnimateProperty:(id)arg1;	// IMP=0x00000000000e5f65
- (id)initWithSourceEntry:(id)arg1 destinationEntry:(id)arg2;	// IMP=0x00000000000e5e61

@end

