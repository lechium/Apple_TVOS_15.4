//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INRadioTypeResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x0000000000254287
+ (id)confirmationRequiredWithRadioTypeToConfirm:(long long)arg1;	// IMP=0x00000000002541dc
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x00000000002541ca
+ (id)successWithResolvedRadioType:(long long)arg1;	// IMP=0x0000000000254134
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002544ac
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000254384
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000254299

@end
