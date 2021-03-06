//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface StoreKitTestingService : NSObject
{
}

+ (id)defaultService;	// IMP=0x00200000000835e9
- (void)_logExitForMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x0040000000086f0c
- (id)_logAndValidateMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x0010000000086b6a
- (_Bool)_isAppleSignedApp:(id)arg1;	// IMP=0x0010000000086b1f
- (_Bool)_connectionHasEntitlement:(id)arg1 entitlementName:(id)arg2;	// IMP=0x0010000000086ab6
- (id)_bundleIDForConnection:(id)arg1;	// IMP=0x0010000000086a9d
- (id)tryGeneratingSignatureForPostbackDict:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000869eb
- (void)receiveEventOfType:(long long)arg1 eventData:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000086834
- (void)unregisterForEventWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000008648f
- (void)registerForEventOfType:(long long)arg1 forBundleID:(id)arg2 withFilterData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000085e2e
- (void)simulateStoreKitPushWithAction:(id)arg1 forBundleIdentifiers:(id)arg2;	// IMP=0x0010000000085a6a
- (void)removeTransactionIdentifiersFromCache:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000008586c
- (void)updatePort:(long long)arg1;	// IMP=0x0010000000085789
- (void)transactionUpdated:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000008559d
- (void)transactionDeleted:(unsigned long long)arg1 productID:(id)arg2 forBundleID:(id)arg3;	// IMP=0x00100000000852eb
- (void)revokeEntitlementsForProductIdentifiers:(id)arg1 forBundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008516e
- (void)refreshQueueForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000084f3c
- (void)setStorefront:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000084e23
- (void)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000084d01
- (void)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000084bea
- (void)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000084ad2
- (void)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000849c6
- (void)startObservingTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000847e9
- (void)saveConfigurationData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000846d5
- (void)saveSigningData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000845c1
- (void)removeConfigurationForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000844d0
- (void)performAction:(long long)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000842e0
- (void)invalidateBag;	// IMP=0x00100000000841ce
- (void)getTransactionDataForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000840ba
- (void)getActivePortWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000083eb4
- (void)getStorefrontForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083da0
- (void)forceRenewalOfSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083c85
- (void)expireSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083b67
- (void)deleteAllTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083a6b
- (void)completeAskToBuyRequestWithResponse:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008395f
- (void)clearOverridesForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083863
- (void)changeAutoRenewStatus:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000083757
- (void)buyProductWithID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008363e

@end

