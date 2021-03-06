//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSAuthorizationMetricsController : NSObject
{
}

+ (id)_mtTopicForBuyParams:(id)arg1;	// IMP=0x0000000000180a57
+ (id)_clientIDForAccount:(id)arg1 orUserID:(id)arg2;	// IMP=0x0000000000180356
+ (id)_clientIdForMetrics;	// IMP=0x0000000000180279
+ (id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)arg1 error:(id)arg2;	// IMP=0x000000000017ff6d
+ (id)_dialogEventForPasswordAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4;	// IMP=0x000000000017fd6e
+ (id)_dialogEventForBiometricOptInWithResult:(_Bool)arg1 message:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4 error:(id)arg5;	// IMP=0x000000000017fa0c
+ (id)_dialogEventForBiometricAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 matchState:(long long)arg3 topicName:(id)arg4 userAgent:(id)arg5;	// IMP=0x000000000017f4bc
+ (id)userActionDictionaryForUserAction:(long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x000000000017f1e4
+ (id)userActionDictionaryForBiometricMatchState:(unsigned long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x000000000017ecdd
+ (id)dialogIdForMetricsDictionary:(id)arg1;	// IMP=0x000000000017ec68
+ (id)authorizationDialogEventForParameters:(id)arg1;	// IMP=0x000000000017e934

@end

