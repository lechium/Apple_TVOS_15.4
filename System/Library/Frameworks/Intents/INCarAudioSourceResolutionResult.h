//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INCarAudioSourceResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x000000000022e90d
+ (id)confirmationRequiredWithCarAudioSourceToConfirm:(long long)arg1;	// IMP=0x000000000022e862
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x000000000022e850
+ (id)successWithResolvedCarAudioSource:(long long)arg1;	// IMP=0x000000000022e7ba
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000022eb64
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000022ea08
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000022e91f

@end

