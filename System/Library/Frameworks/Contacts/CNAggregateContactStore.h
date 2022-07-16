//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface CNAggregateContactStore
{
    CNContactStore *_mainStore;	// 8 = 0x8
    NSArray *_contactStores;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d578
@property(copy, nonatomic) NSArray *contactStores; // @synthesize contactStores=_contactStores;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d3e3
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000d250
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d0c7
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cf54
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cde1
- (id)userActivityUserInfoForContact:(id)arg1;	// IMP=0x000000000000cc6a
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000000cacd
- (id)currentHistoryAnchor;	// IMP=0x000000000000ca7d
- (id)currentHistoryToken;	// IMP=0x000000000000ca2d
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c889
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c59c
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c299
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c02f
- (_Bool)supportsSaveRequest:(id)arg1;	// IMP=0x000000000000bf74
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000beab
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bc65
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ba4d
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b984
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b7fb
- (id)defaultContainerIdentifier;	// IMP=0x000000000000b6b0
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b5e7
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b51e
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b455
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b361
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b1d8
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b10f
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ac2b
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a1f9
- (id)meContactIdentifiers:(id *)arg1;	// IMP=0x0000000000009f45
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009c40
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000997b
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009792
- (id)unifiedContactCountWithError:(id *)arg1;	// IMP=0x00000000000095d7
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000009573
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000008823
- (void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(_Bool)arg4;	// IMP=0x0000000000008726
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;	// IMP=0x00000000000086d3
- (void)_enumerateStoresUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008588
- (id)_allStoreResultsWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000830e
- (id)requestAccessForEntityType:(long long)arg1;	// IMP=0x0000000000008203
- (id)mainContactStore;	// IMP=0x00000000000081f1
@property(readonly, nonatomic) __weak CNContactStore *mainStore;
- (_Bool)hasMultipleGroupsOrAccounts;	// IMP=0x0000000000007fed
- (_Bool)store:(id)arg1 supportsSelector:(SEL)arg2;	// IMP=0x0000000000007f9b
- (id)initWithContactStores:(id)arg1;	// IMP=0x0000000000007f1c
- (id)iOSMapper;	// IMP=0x00000000000aa0e0
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e309

@end

