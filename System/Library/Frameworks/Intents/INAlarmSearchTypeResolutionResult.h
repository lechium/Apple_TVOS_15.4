//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INAlarmSearchTypeResolutionResult
{
}

+ (id)confirmationRequiredWithAlarmSearchTypeToConfirm:(long long)arg1;	// IMP=0x00000000004a6dd9
+ (id)successWithResolvedAlarmSearchType:(long long)arg1;	// IMP=0x00000000004a6d43
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004a7094
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000004a6f6c
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000004a6e84

@end

