//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INCallDestinationTypeResolutionResult
{
}

+ (id)confirmationRequiredWithCallDestinationTypeToConfirm:(long long)arg1;	// IMP=0x000000000001a4c8
+ (id)successWithResolvedCallDestinationType:(long long)arg1;	// IMP=0x000000000001a432
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a780
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000001a65c
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000001a573

@end
