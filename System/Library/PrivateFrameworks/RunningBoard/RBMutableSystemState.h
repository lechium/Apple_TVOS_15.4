//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBMutableSystemState
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038b65
- (void)addPreventLaunchPredicate:(id)arg1;	// IMP=0x0000000000038afb
- (void)addTag:(id)arg1;	// IMP=0x0000000000038a91
- (void)removeAllPreventIdleSleepIdentifiers;	// IMP=0x0000000000038a7b
- (void)removePreventIdleSleepIdentifier:(id)arg1;	// IMP=0x0000000000038a65
- (void)addPreventIdleSleepIdentifier:(id)arg1;	// IMP=0x00000000000389fb
- (void)setPreventIdleSleep:(_Bool)arg1;	// IMP=0x00000000000389f2
- (void)setPreventLaunch:(_Bool)arg1;	// IMP=0x00000000000389e9
- (void)unionState:(id)arg1;	// IMP=0x000000000003886c
- (id)init;	// IMP=0x000000000003883d

@end

