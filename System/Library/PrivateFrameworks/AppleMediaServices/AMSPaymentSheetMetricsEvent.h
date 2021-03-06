//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetMetricsEvent
{
}

+ (id)_timestamp;	// IMP=0x00000000001bc09a
+ (id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x00000000001bb3fd
+ (id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x00000000001bb378
+ (id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(_Bool)arg2 biometricsType:(long long)arg3;	// IMP=0x00000000001bae84
- (void)addUserActions:(id)arg1;	// IMP=0x00000000001bc081
- (void)addDualActionSuccess:(_Bool)arg1;	// IMP=0x00000000001bc051
- (void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2;	// IMP=0x00000000001bbbf7
- (void)addClientMetadataForPaymentSheetRequest:(id)arg1;	// IMP=0x00000000001bbb4b
- (void)addBiometricsState:(long long)arg1;	// IMP=0x00000000001bbb14
- (void)addBiometricMatchState:(long long)arg1;	// IMP=0x00000000001bb7e4

@end

