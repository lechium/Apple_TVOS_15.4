//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INSettingActionResolutionResult
{
}

+ (id)confirmationRequiredWithSettingActionToConfirm:(long long)arg1;	// IMP=0x00000000004688bb
+ (id)successWithResolvedSettingAction:(long long)arg1;	// IMP=0x0000000000468825
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000468b49
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000468a51
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000468966

@end

