//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INBoundedSettingValueResolutionResult
{
}

+ (id)confirmationRequiredWithBoundedSettingValueToConfirm:(long long)arg1;	// IMP=0x000000000046db41
+ (id)successWithResolvedBoundedSettingValue:(long long)arg1;	// IMP=0x000000000046daab
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000046ddcf
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000046dcd7
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000046dbec

@end

