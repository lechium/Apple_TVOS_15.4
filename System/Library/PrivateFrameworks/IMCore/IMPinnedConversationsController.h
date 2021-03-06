//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet, NSUbiquitousKeyValueStore;

@interface IMPinnedConversationsController : NSObject
{
    _Bool _hasCompletedInitialization;	// 8 = 0x8
    _Bool _hasDefferedPinnedConversationsDidChangeNotification;	// 9 = 0x9
    long long _numberOfPendingForceSyncs;	// 16 = 0x10
    NSUbiquitousKeyValueStore *_dataStore;	// 24 = 0x18
    NSOrderedSet *_pinnedConversationIdentifierSet;	// 32 = 0x20
    NSDictionary *_chatMetadata;	// 40 = 0x28
}

+ (id)_forceSyncDispatchQueue;	// IMP=0x000000000000a011
+ (id)_ubiquitousDispatchQueue;	// IMP=0x00000000000073bd
+ (id)requiredKeys;	// IMP=0x00000000000072fb
+ (long long)currentPinConfigurationRevision;	// IMP=0x00000000000072f0
+ (long long)currentPinConfigurationVersion;	// IMP=0x00000000000072e5
+ (id)pinConfigurationMigrationKey;	// IMP=0x0000000000007288
+ (unsigned long long)maximumNumberOfPinnedConversations;	// IMP=0x000000000000727d
+ (id)sharedInstance;	// IMP=0x0000000000007214
- (void).cxx_destruct;	// IMP=0x000000000000c51b
@property(retain, nonatomic) NSDictionary *chatMetadata; // @synthesize chatMetadata=_chatMetadata;
@property(retain, nonatomic) NSOrderedSet *pinnedConversationIdentifierSet; // @synthesize pinnedConversationIdentifierSet=_pinnedConversationIdentifierSet;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) long long numberOfPendingForceSyncs; // @synthesize numberOfPendingForceSyncs=_numberOfPendingForceSyncs;
@property(nonatomic) _Bool hasDefferedPinnedConversationsDidChangeNotification; // @synthesize hasDefferedPinnedConversationsDidChangeNotification=_hasDefferedPinnedConversationsDidChangeNotification;
@property(nonatomic) _Bool hasCompletedInitialization; // @synthesize hasCompletedInitialization=_hasCompletedInitialization;
- (id)chatMetadataFromPinConfiguration:(id)arg1;	// IMP=0x000000000000c47d
- (id)pinnedConversationIdentifiersFromPinConfiguration:(id)arg1;	// IMP=0x000000000000c429
- (id)_ubiquitousPinConfigurationInStore:(id)arg1;	// IMP=0x000000000000c2d5
- (id)_locallyStoredPinConfiguration;	// IMP=0x000000000000c22f
- (void)fetchMostUpToDatePinConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bdd1
- (void)_fetchUbiquitousPinConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ba18
- (void)fetchPinnedConversationIdentifiersFromLocalStore;	// IMP=0x000000000000b971
- (_Bool)shouldUpdateExistingPinConfig:(id)arg1 withProposedPinConfig:(id)arg2;	// IMP=0x000000000000b7a1
- (_Bool)pinConfigurationHasCurrentVersion:(id)arg1;	// IMP=0x000000000000b72b
- (_Bool)pinConfigurationIsValid:(id)arg1;	// IMP=0x000000000000b554
- (_Bool)pinConfigurationHasCompatibleVersion:(id)arg1;	// IMP=0x000000000000b400
- (_Bool)shouldWriteProposedPinConfiguration:(id)arg1 toUbiquitousStoreWithExistingPinConfiguration:(id)arg2;	// IMP=0x000000000000b1dc
- (_Bool)_updateLocalStoreWithPinConfiguration:(id)arg1;	// IMP=0x000000000000af6e
- (void)_updateUbiquitousStoreWithPinConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000abca
- (void)updateStoresWithPinConfiguration:(id)arg1;	// IMP=0x000000000000aaa4
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg1;	// IMP=0x000000000000a73d
- (void)forceSynchronizeUbiquitousStore;	// IMP=0x000000000000a4cf
- (void)synchronizeLocalDataStore;	// IMP=0x000000000000a24d
- (void)imCloudKitHooksSetEnabledDidReturn:(id)arg1;	// IMP=0x000000000000a11b
- (_Bool)shouldSync;	// IMP=0x000000000000a094
- (id)validatedPinConfigurationWithCurrentVersionForPinConfiguration:(id)arg1;	// IMP=0x00000000000097a0
- (void)performPinConfigValidationAndMigrationIfNecessary;	// IMP=0x0000000000009578
- (unsigned long long)pinIndexForChat:(id)arg1 inIdentifierSet:(id)arg2 withMetadata:(id)arg3;	// IMP=0x0000000000008d2a
- (id)matchingIdentifierForChat:(id)arg1 inIdentifierSet:(id)arg2 withMetadata:(id)arg3;	// IMP=0x0000000000008c93
- (id)matchingIdentifierForChat:(id)arg1;	// IMP=0x0000000000008bef
- (_Bool)pinnedConversationsContainsChat:(id)arg1;	// IMP=0x0000000000008b45
- (void)conversationsWereDeletedWithIdentifiers:(id)arg1;	// IMP=0x0000000000008610
- (void)conversationWasDeletedWithIdentifier:(id)arg1;	// IMP=0x0000000000008561
- (void)_postPinnedConversationsDidChangeNotification;	// IMP=0x00000000000084ae
- (void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;	// IMP=0x0000000000008457
- (void)_setPinnedConversationIdentifiers:(id)arg1 withChatMetadata:(id)arg2 updateReason:(id)arg3 shouldUpdateStores:(_Bool)arg4;	// IMP=0x0000000000008211
- (void)setPinnedChats:(id)arg1 withUpdateReason:(id)arg2;	// IMP=0x0000000000007f69
- (void)_handleChatGroupIDDidChangeNotification:(id)arg1;	// IMP=0x0000000000007c15
- (id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)arg1 toOtherPinConfiguration:(id)arg2;	// IMP=0x0000000000007ada
- (id)_metadataDictionaryForChat:(id)arg1;	// IMP=0x0000000000007983
- (id)dictionaryWithPinnedConversationIdentifiers:(id)arg1 chatMetadata:(id)arg2 updateReason:(id)arg3;	// IMP=0x00000000000078bf
- (id)_dictionaryWithPinnedConversationIdentifiers:(id)arg1 chatMetadata:(id)arg2 updateReason:(id)arg3 timestamp:(id)arg4;	// IMP=0x000000000000768e
- (id)pinnedConversationIdentifiers;	// IMP=0x0000000000007678
- (id)init;	// IMP=0x0000000000007440

@end

