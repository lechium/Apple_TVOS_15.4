//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol CNContactsLogger, CNDataMapper, CNRegulatoryLogger;

@interface CNDataMapperContactStore
{
    id <CNDataMapper> _mapper;	// 8 = 0x8
    id <CNContactsLogger> _logger;	// 16 = 0x10
    _Bool _shouldLogPrivacyAccountingAccessEvents;	// 24 = 0x18
    id <CNRegulatoryLogger> _regulatoryLogger;	// 32 = 0x20
}

+ (Class)dataMapperClassForConfiguration:(id)arg1;	// IMP=0x000000000008b85e
+ (_Bool)enableContactsOutOfProcess;	// IMP=0x000000000008b5cc
- (void).cxx_destruct;	// IMP=0x0000000000094043
@property(readonly, nonatomic) _Bool shouldLogPrivacyAccountingAccessEvents; // @synthesize shouldLogPrivacyAccountingAccessEvents=_shouldLogPrivacyAccountingAccessEvents;
@property(readonly, nonatomic) id <CNRegulatoryLogger> regulatoryLogger; // @synthesize regulatoryLogger=_regulatoryLogger;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, retain, nonatomic) NSObject<CNDataMapper> *mapper; // @synthesize mapper=_mapper;
- (void)_logPrivacyAccountingForAccessType:(unsigned long long)arg1;	// IMP=0x0000000000093fa1
- (void)_logGreenTeaForAccessType:(unsigned long long)arg1;	// IMP=0x0000000000093f39
- (void)_logContactsAccessWasDeniedForAccessType:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000093e97
- (void)_logContactsAccessWasGrantedForAccessType:(unsigned long long)arg1;	// IMP=0x0000000000093dd9
- (_Bool)_requestDataMapperAccessType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000093d0e
- (_Bool)requestMetadataAccessWithError:(id *)arg1;	// IMP=0x0000000000093cf4
- (_Bool)requestContactsWriteAccessWithError:(id *)arg1;	// IMP=0x0000000000093cda
- (_Bool)requestContactsReadAccessWithError:(id *)arg1;	// IMP=0x0000000000093cc3
- (void)requestReadAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000093b75
- (id)requestAccessForEntityType:(long long)arg1;	// IMP=0x0000000000093921
- (_Bool)hasMultipleGroupsOrAccounts;	// IMP=0x000000000009387e
- (id)currentHistoryAnchor;	// IMP=0x0000000000093730
- (id)currentHistoryToken;	// IMP=0x0000000000093681
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000933ba
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000092e82
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000092b7c
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000092876
- (id)matchingDictionaryForContact:(id)arg1;	// IMP=0x00000000000927a3
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;	// IMP=0x0000000000092595
- (id)descriptorForRequiredKeysForMatchingDictionary;	// IMP=0x00000000000924fe
- (id)userActivityUserInfoForContact:(id)arg1;	// IMP=0x00000000000922dd
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000092026
- (void)setLegacyTetheredSyncComputerAnchor:(id)arg1;	// IMP=0x0000000000091f6a
- (id)legacyTetheredSyncComputerAnchor;	// IMP=0x0000000000091ebb
- (void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;	// IMP=0x0000000000091dff
- (id)legacyTetheredSyncDeviceAnchor;	// IMP=0x0000000000091d50
- (id)defaultContainerIdentifier;	// IMP=0x0000000000091bc4
- (_Bool)isValidSaveRequest:(id)arg1 authorizationContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000091765
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000090f6d
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000090f53
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000090eb3
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000090ded
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000090b46
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009089f
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000905f8
- (id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000905f0
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000090349
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000090025
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008fbe8
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008f941
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008f312
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000008ef45
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e5f8
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008e16e
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008ddeb
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000008dadc
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008d74b
- (id)unifiedContactCountWithError:(id *)arg1;	// IMP=0x000000000008d3d4
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008cfb4
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008cbae
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008c7e3
- (id)meContactIdentifiers:(id *)arg1;	// IMP=0x000000000008c520
- (int)saveSequenceCount;	// IMP=0x000000000008c471
- (id)identifierWithError:(id *)arg1;	// IMP=0x000000000008c3b0
- (id)description;	// IMP=0x000000000008c30a
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;	// IMP=0x000000000008c027
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008bcd0
- (id)initWithDataMapper:(id)arg1 dataMapperConfiguration:(id)arg2;	// IMP=0x000000000008baa9
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000008b9e3
- (id)initWithEnvironment:(id)arg1 managedConfiguration:(id)arg2;	// IMP=0x000000000008b93d
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000000008b929
- (id)init;	// IMP=0x000000000008b8cf
- (id)iOSMapper;	// IMP=0x00000000000aa230

@end
