//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INPaymentAmountResolutionResult
{
}

+ (id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg1;	// IMP=0x0000000000181766
+ (id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg1;	// IMP=0x0000000000181754
+ (id)successWithResolvedPaymentAmount:(id)arg1;	// IMP=0x0000000000181742
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000181a31
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000181778

@end
