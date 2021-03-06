//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKAccountServiceExportedInterface-Protocol.h>

@class NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface>
{
    PKXPCService *_remoteService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    struct os_unfair_lock_s _lockObservers;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    long long _accountChangedNotificationSuspensionCount;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000003fa262
- (void).cxx_destruct;	// IMP=0x0000000000405b68
- (void)physicalCardsChanged:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x0000000000405a56
- (void)accountUsersChanged:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x0000000000405944
- (void)didUpdatePaymentFundingSources:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x0000000000405832
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;	// IMP=0x0000000000405752
- (void)statementsChangedForAccountIdentifier:(id)arg1;	// IMP=0x0000000000405672
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000405592
- (void)accountChanged:(id)arg1;	// IMP=0x00000000004054b2
- (void)accountAdded:(id)arg1;	// IMP=0x00000000004053d2
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000004051de
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000405185
- (void)registerObserver:(id)arg1;	// IMP=0x000000000040512c
- (void)accountPendingFamilyMembersForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000404eec
- (void)didAddAccountPendingFamilyMembers:(id)arg1;	// IMP=0x0000000000404e51
- (void)updateSharedAccountCloudStoreWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000404c11
- (void)sharedAccountCloudStoreWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004049fb
- (void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000040474b
- (void)markUserViewedIntroduction:(_Bool)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x00000000004044e8
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000040424e
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000404233
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 allowFetchFromServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000403f82
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000403c97
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004039de
- (void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 forFeatureIdentifier:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000040373f
- (void)physicalCardForFeatureIdentifier:(unsigned long long)arg1 activationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004034c8
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000403269
- (void)activateBroadwayPhysicalCardWithActivationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000403019
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000402d1c
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 accountUserAltDSID:(id)arg4 deviceMetadata:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000402946
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000402649
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 deviceMetadata:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000402294
- (void)physicalCardsForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000402066
- (void)noteSecurityCodeActivityWithAction:(long long)arg1 forSecurityCodeIdentifier:(id)arg2 forVirtualCardIdentifier:(id)arg3 forAccountIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000401d6a
- (void)virtualCardsInKeychainWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000401b16
- (void)writeVirtualCardToKeychain:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004018eb
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000401660
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004013f5
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 action:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000040112c
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000400e4f
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000400b43
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000040085c
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004005a2
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000400308
- (void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000040007d
- (void)deleteEventsWithAccountIdentifier:(id)arg1 excludingTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ffdf2
- (void)deleteEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003ffb87
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003ff91c
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000003ff618
- (void)eventsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003ff37e
- (void)updateLastUsedInAppFundingSource:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00000000003ff2ea
- (void)lastUsedInAppFundingSourceForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003ff05c
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003fed90
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003feade
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 accountUserAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003fe7e4
- (void)termsWithIdentifier:(id)arg1 accepted:(_Bool)arg2 withAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003fe638
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fe4c9
- (void)updatePaymentFundingSourcesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fe22f
- (void)paymentFundingSourceForIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003fdfa2
- (void)paymentFundingSourcesForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fdd35
- (void)insertDailyCashNotificationForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fdaca
- (void)insertSummaryNotificationForAccountIdentifier:(id)arg1 summaryType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003fd855
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fd678
- (void)insertOrUpdateLocalAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fd40b
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fd1a0
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fcf35
- (void)updateAccountUserNotificationSettings:(id)arg1 forAccountUserWithAltDSID:(id)arg2 forAccountWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003fcc49
- (void)updateAccountUserPreferences:(id)arg1 forAccountUserWithAltDSID:(id)arg2 forAccountWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003fc95d
- (void)deleteAccountUserWithAltDSID:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003fc6d2
- (void)accountUsersForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fc465
- (void)updateAccountUsersForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fc1cb
- (void)updateAccountWithIdentifier:(id)arg1 extended:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003fbf29
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fbc8d
- (void)accountForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fb9ff
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fb744
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fb489
- (void)updateMockAccountWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fb21c
- (void)updateAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003faf9b
- (void)accountsWithPassLocallyProvisionedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fad0a
- (void)accountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003faa36
- (void)accountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fa7a5
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fa78f
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fa779
- (CDUnknownBlockType)errorHandlerForMethod:(SEL)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fa515
- (void)_accountsChanged:(id)arg1;	// IMP=0x00000000003fa4bb
- (void)dealloc;	// IMP=0x00000000003fa446
- (id)init;	// IMP=0x00000000003fa2e7

@end

