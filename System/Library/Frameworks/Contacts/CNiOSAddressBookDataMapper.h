//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNAuthorization, CNContactsEnvironment, CNManagedAccountsCache, CNManagedConfiguration, CNiOSAddressBook, NSString;
@protocol CNContactsLogger;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper>
{
    CNiOSAddressBook *_addressBook;	// 8 = 0x8
    CNContactsEnvironment *_environment;	// 16 = 0x10
    id <CNContactsLogger> _logger;	// 24 = 0x18
    CNManagedConfiguration *_managedConfiguration;	// 32 = 0x20
    CNManagedAccountsCache *_managedAccountsCache;	// 40 = 0x28
    CNAuthorization *_authorization;	// 48 = 0x30
}

+ (id)encodedPeopleFetcherForForFetchRequest:(id)arg1 addressBook:(void *)arg2 managedConfiguration:(id)arg3 addressBookCompletionHandler:(CDUnknownBlockType)arg4 cursorCompletionHandler:(CDUnknownBlockType)arg5 environment:(id)arg6;	// IMP=0x000000000006820f
+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;	// IMP=0x00000000000681c2
+ (void)initialize;	// IMP=0x000000000006818d
- (void).cxx_destruct;	// IMP=0x000000000007adf6
- (_Bool)hasMultipleGroupsOrAccounts;	// IMP=0x000000000007acf5
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;	// IMP=0x000000000007ace8
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a9db
- (id)currentHistoryAnchor;	// IMP=0x000000000007a638
- (id)currentHistoryToken;	// IMP=0x000000000007a5be
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079f13
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078cb6
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000078a0c
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000787d6
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;	// IMP=0x0000000000078654
- (id)matchingDictionaryForContact:(id)arg1;	// IMP=0x000000000007848e
- (id)descriptorForRequiredKeysForMatchingDictionary;	// IMP=0x000000000007847a
- (id)userActivityUserInfoForContact:(id)arg1;	// IMP=0x00000000000782d0
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000007812d
@property(retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property(retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007795b
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077953
- (id)groupsWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000778e8
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007758e
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007706e
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076e95
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076a46
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076a34
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076a25
- (id)defaultContainerIdentifier;	// IMP=0x00000000000764fc
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006bb1e
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006bb04
- (id)meContactIdentifiers:(id *)arg1;	// IMP=0x000000000006ae5e
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006ac18
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006a9b0
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006a7e4
- (id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000006a443
- (_Bool)fetchContactsForFetchRequest:(id)arg1 error:(id *)arg2 batchHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006977b
- (id)contactObservableForFetchRequest:(id)arg1;	// IMP=0x00000000000691e2
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000068f8a
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000068bf4
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000689cf
- (id)unifiedContactCountWithError:(id *)arg1;	// IMP=0x0000000000068833
- (int)saveSequenceCount;	// IMP=0x0000000000068747
- (id)identifierWithError:(id *)arg1;	// IMP=0x000000000006862c
@property(readonly) _Bool shouldLogContactsAccess;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068617
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000068582
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068561
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000068555
- (id)init;	// IMP=0x00000000000682ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldLogPrivacyAccountingAccessEvents;
@property(readonly) Class superclass;

@end

