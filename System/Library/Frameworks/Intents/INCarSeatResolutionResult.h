//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INCarSeatResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;	// IMP=0x000000000007e4a3
+ (id)confirmationRequiredWithCarSeatToConfirm:(long long)arg1;	// IMP=0x000000000007e3f8
+ (id)successWithResolvedValue:(long long)arg1;	// IMP=0x000000000007e3e6
+ (id)successWithResolvedCarSeat:(long long)arg1;	// IMP=0x000000000007e350
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000007e67b
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000007e5b0
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000007e4b5

@end

