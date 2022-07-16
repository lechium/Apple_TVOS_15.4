//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface ASOctaneServer : NSObject
{
    NSXPCConnection *_connectionToService;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x0000000000001330
- (void).cxx_destruct;	// IMP=0x000000000000367e
- (id)_synchronousRemoteObjectProxy:(id *)arg1;	// IMP=0x000000000000354b
- (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3;	// IMP=0x00000000000033de
- (id)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x00000000000032a1
- (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3;	// IMP=0x0000000000003149
- (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000003031
- (id)generateSKANPostbackSignature:(id)arg1;	// IMP=0x0000000000002ed1
- (id)validateSKAdNetworkSignature:(id)arg1 withPublicKey:(id)arg2 andParameters:(id)arg3 forBundleID:(id)arg4;	// IMP=0x0000000000002caa
- (id)completePriceConsentRequestWithResponse:(_Bool)arg1 transactionIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3;	// IMP=0x0000000000002b66
- (id)startPriceIncreaseForTransactionID:(unsigned long long)arg1 bundleID:(id)arg2 needsConsent:(_Bool)arg3;	// IMP=0x0000000000002a22
- (void)unregisterForEventWithIdentifier:(id)arg1;	// IMP=0x00000000000029ae
- (id)registerForEventOfType:(long long)arg1 withFilterData:(id)arg2;	// IMP=0x0000000000002871
- (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000000000271d
- (id)setStorefront:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000000000025b8
- (id)resolveIssueForTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000002466
- (id)refundTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000002314
- (id)getTransactionDataForBundleID:(id)arg1;	// IMP=0x00000000000021e1
- (id)getStorefrontForBundleID:(id)arg1;	// IMP=0x00000000000020ae
- (id)expireOrRenewSubscriptionWithIdentifier:(id)arg1 expire:(_Bool)arg2 forBundleID:(id)arg3;	// IMP=0x0000000000001f42
- (id)deleteTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000001df0
- (id)deleteAllTransactionsForBundleID:(id)arg1;	// IMP=0x0000000000001cab
- (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 transactionID:(unsigned long long)arg2 forBundleID:(id)arg3;	// IMP=0x0000000000001b52
- (id)clearOverridesForBundleID:(id)arg1;	// IMP=0x0000000000001a0d
- (id)changeAutoRenewStatus:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3;	// IMP=0x00000000000018b4
- (id)cancelTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x0000000000001762
- (id)buyProductWithID:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000000000015d8
- (void)appRemovedWithBundleID:(id)arg1;	// IMP=0x0000000000001557
- (long long)activePort;	// IMP=0x0000000000001452
- (id)init;	// IMP=0x0000000000001385

@end

