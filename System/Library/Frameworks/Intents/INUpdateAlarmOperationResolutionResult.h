//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INUpdateAlarmOperationResolutionResult
{
}

+ (id)confirmationRequiredWithUpdateAlarmOperationToConfirm:(long long)arg1;	// IMP=0x00000000004a387f
+ (id)successWithResolvedUpdateAlarmOperation:(long long)arg1;	// IMP=0x00000000004a37e9
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004a3b09
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000004a3a20
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000004a392a

@end
