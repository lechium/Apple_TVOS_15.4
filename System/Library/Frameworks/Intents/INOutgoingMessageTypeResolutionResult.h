//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INOutgoingMessageTypeResolutionResult
{
}

+ (id)confirmationRequiredWithOutgoingMessageTypeToConfirm:(long long)arg1;	// IMP=0x000000000047cbb6
+ (id)successWithResolvedOutgoingMessageType:(long long)arg1;	// IMP=0x000000000047cb20
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000047ce3b
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000047cd55
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000047cc61

@end

