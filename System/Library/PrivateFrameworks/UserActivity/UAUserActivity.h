//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserActivity/SFCompanionAdvertiserDelegate-Protocol.h>

@class CSSearchableItemAttributeSet, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL, NSUUID, NSUserActivity, SFCompanionAdvertiser, UAUserActivityManager;
@protocol OS_dispatch_group, OS_dispatch_queue, UAUserActivityDelegate;

@interface UAUserActivity : NSObject <SFCompanionAdvertiserDelegate>
{
    NSMutableDictionary *_frameworkPayload;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSURL *_webpageURL;	// 24 = 0x18
    NSURL *_referrerURL;	// 32 = 0x20
    NSString *_targetContentIdentifier;	// 40 = 0x28
    SFCompanionAdvertiser *_advertiser;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_advertiserCompletedGroup;	// 56 = 0x38
    SFCompanionAdvertiser *_resumerAdvertiser;	// 64 = 0x40
    NSMutableSet *_dirtyPayloadIdentifiers;	// 72 = 0x48
    double _lastSaveTime;	// 80 = 0x50
    _Bool _saveScheduled;	// 88 = 0x58
    _Bool _createsNewUUIDIfSaved;	// 89 = 0x59
    NSError *_decodeUserInfoError;	// 96 = 0x60
    _Bool _needsSave;	// 104 = 0x68
    _Bool _needsSaveValueAtEndOfWillSaveCallback;	// 105 = 0x69
    _Bool _dirty;	// 106 = 0x6a
    _Bool _sendToServerPending;	// 107 = 0x6b
    _Bool _activityHasBeenSentToServer;	// 108 = 0x6c
    _Bool _supportsContinuationStreams;	// 109 = 0x6d
    _Bool _forceImmediateSendToServer;	// 110 = 0x6e
    _Bool _encodedContainsUnsynchronizedCloudDocument;	// 111 = 0x6f
    _Bool _encodedFileProviderURL;	// 112 = 0x70
    _Bool _userActivityWasCreatedSent;	// 113 = 0x71
    _Bool _indexInProcess;	// 114 = 0x72
    long long _inWillSaveCallback;	// 120 = 0x78
    NSSet *_keywords;	// 128 = 0x80
    NSDate *_expirationDate;	// 136 = 0x88
    NSString *_contentUserAction;	// 144 = 0x90
    NSSet *_requiredUserInfoKeys;	// 152 = 0x98
    NSString *_teamIdentifier;	// 160 = 0xa0
    unsigned long long _os_state_handler;	// 168 = 0xa8
    int _forwardToCoreSpotlightIndexerCount;	// 176 = 0xb0
    _Bool _eligibleForHandoff;	// 180 = 0xb4
    _Bool _eligibleForSearch;	// 181 = 0xb5
    _Bool _eligibleForReminders;	// 182 = 0xb6
    _Bool _eligibleForPublicIndexing;	// 183 = 0xb7
    _Bool _eligibleForPrediction;	// 184 = 0xb8
    NSString *_persistentIdentifier;	// 192 = 0xc0
    id <UAUserActivityDelegate> _delegate;	// 200 = 0xc8
    unsigned int _userInfoChangeCount;	// 208 = 0xd0
    NSDictionary *_savedUserInfo;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_willCallSaveSerializationQueue;	// 224 = 0xe0
    _Bool _invalidated;	// 232 = 0xe8
    _Bool _userInfoContainsFileURLs;	// 233 = 0xe9
    _Bool _universalLink;	// 234 = 0xea
    _Bool _canCreateStreams;	// 235 = 0xeb
    NSDate *_madeCurrentDate;	// 240 = 0xf0
    NSDate *_madeCurrentEndDate;	// 248 = 0xf8
    double _madeCurrentInterval;	// 256 = 0x100
    NSDate *_madeInitiallyCurrentDate;	// 264 = 0x108
    NSDate *_sentToIndexerDate;	// 272 = 0x110
    NSData *_cachedEncodedUserInfo;	// 280 = 0x118
    NSDictionary *_userInfo;	// 288 = 0x120
    UAUserActivityManager *_manager;	// 296 = 0x128
    NSString *_typeIdentifier;	// 304 = 0x130
    NSString *_dynamicIdentifier;	// 312 = 0x138
    NSUUID *_uniqueIdentifier;	// 320 = 0x140
    unsigned long long _suggestedActionType;	// 328 = 0x148
    NSDictionary *_options;	// 336 = 0x150
    NSUUID *_originalUniqueIdentifier;	// 344 = 0x158
    NSMutableDictionary *_payloadObjects;	// 352 = 0x160
    NSMutableDictionary *_payloadUpdateBlocks;	// 360 = 0x168
    NSMutableDictionary *_payloadDataCache;	// 368 = 0x170
}

+ (void)removeUserActivityObserver:(id)arg1;	// IMP=0x000000000000f356
+ (void)addUserActivityObserver:(id)arg1;	// IMP=0x000000000000f28e
+ (id)observers;	// IMP=0x000000000000f284
+ (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;	// IMP=0x000000000000e892
+ (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;	// IMP=0x000000000000e756
+ (id)fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000021cb
+ (void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002103
+ (id)userActivityFromUUID:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000020d9
+ (id)userActivityFromUUID:(id)arg1 timeout:(double)arg2 withError:(id *)arg3;	// IMP=0x0000000000001d39
+ (_Bool)userActivityContinuationSupported;	// IMP=0x0000000000001d20
+ (void)setIndexPending:(_Bool)arg1 forUUID:(id)arg2;	// IMP=0x00000000000170ac
+ (_Bool)isIndexPendingForUUID:(id)arg1;	// IMP=0x0000000000016fc3
+ (_Bool)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(_Bool)arg3;	// IMP=0x00000000000168f8
+ (id)allowedWebpageURLSchemes;	// IMP=0x0000000000016880
+ (void)unregisterForSuggestedActionNudgeOfType:(id)arg1;	// IMP=0x000000000001735c
+ (id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000170bb
+ (_Bool)currentUserActivityProxiesWithOptions:(id)arg1 matching:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017717
+ (_Bool)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000175ff
+ (_Bool)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000174e1
+ (id)currentUserActivityUUID;	// IMP=0x0000000000017476
+ (_Bool)supportsUserActivityAppLinks;	// IMP=0x00000000000179b8
+ (id)_decodeFromEntireString:(id)arg1;	// IMP=0x000000000001c0a6
+ (id)_decodeFromString:(id)arg1;	// IMP=0x000000000001c034
+ (id)_decodeFromScanner:(id)arg1;	// IMP=0x000000000001b57f
+ (id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2;	// IMP=0x000000000001b447
+ (id)_encodeToString:(id)arg1;	// IMP=0x000000000001a584
+ (_Bool)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c151
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041b33
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041b28
+ (id)mainBundleIdentifier;	// IMP=0x0000000000041a95
- (void).cxx_destruct;	// IMP=0x000000000000f851
@property(retain) NSMutableSet *dirtyPayloadIdentifiers; // @synthesize dirtyPayloadIdentifiers=_dirtyPayloadIdentifiers;
@property(retain) NSMutableDictionary *payloadDataCache; // @synthesize payloadDataCache=_payloadDataCache;
@property(retain) NSMutableDictionary *payloadUpdateBlocks; // @synthesize payloadUpdateBlocks=_payloadUpdateBlocks;
@property(retain) NSMutableDictionary *payloadObjects; // @synthesize payloadObjects=_payloadObjects;
@property(readonly, copy) NSUUID *originalUniqueIdentifier; // @synthesize originalUniqueIdentifier=_originalUniqueIdentifier;
@property _Bool canCreateStreams; // @synthesize canCreateStreams=_canCreateStreams;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly) unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *dynamicIdentifier; // @synthesize dynamicIdentifier=_dynamicIdentifier;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly) __weak UAUserActivityManager *manager; // @synthesize manager=_manager;
@property _Bool userInfoContainsFileURLs; // @synthesize userInfoContainsFileURLs=_userInfoContainsFileURLs;
@property(readonly) unsigned long long os_state_handler; // @synthesize os_state_handler=_os_state_handler;
@property(copy) NSData *cachedEncodedUserInfo; // @synthesize cachedEncodedUserInfo=_cachedEncodedUserInfo;
@property(readonly) _Bool activityHasBeenSentToServer; // @synthesize activityHasBeenSentToServer=_activityHasBeenSentToServer;
@property _Bool encodedContainsUnsynchronizedCloudDocument; // @synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument;
@property _Bool encodedFileProviderURL; // @synthesize encodedFileProviderURL=_encodedFileProviderURL;
@property(retain) NSError *decodeUserInfoError; // @synthesize decodeUserInfoError=_decodeUserInfoError;
@property _Bool createsNewUUIDIfSaved; // @synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved;
@property _Bool forceImmediateSendToServer; // @synthesize forceImmediateSendToServer=_forceImmediateSendToServer;
@property _Bool sendToServerPending; // @synthesize sendToServerPending=_sendToServerPending;
@property(copy) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy) NSDate *sentToIndexerDate; // @synthesize sentToIndexerDate=_sentToIndexerDate;
@property(readonly, copy) NSDate *madeInitiallyCurrentDate; // @synthesize madeInitiallyCurrentDate=_madeInitiallyCurrentDate;
@property(copy) NSDate *madeCurrentEndDate; // @synthesize madeCurrentEndDate=_madeCurrentEndDate;
@property(copy) NSDate *madeCurrentDate; // @synthesize madeCurrentDate=_madeCurrentDate;
- (id)stateString;	// IMP=0x000000000000f3e5
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000eb5d
- (id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;	// IMP=0x000000000000ea70
- (void)pinUserActivityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ea58
- (void)prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e9ce
- (id)decodeUserInfo:(id)arg1;	// IMP=0x000000000000c4d8
- (id)encodeUserInfo:(id)arg1;	// IMP=0x000000000000c4b4
- (id)encodeUserInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c128
- (_Bool)encodeUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000aba2
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;	// IMP=0x0000000000009817
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x0000000000009568
- (id)unarchiveURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009245
- (_Bool)archiveURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008eb2
- (void)invalidate;	// IMP=0x00000000000088c7
@property(readonly, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, retain) NSObject<OS_dispatch_queue> *willCallSaveSerializationQueue;
@property(readonly) double madeCurrentInterval; // @synthesize madeCurrentInterval=_madeCurrentInterval;
- (void)resignCurrent;	// IMP=0x000000000000807d
- (void)_resignCurrent;	// IMP=0x000000000000806b
- (void)becomeCurrent;	// IMP=0x00000000000079b3
@property(readonly) _Bool isCurrent;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000712f
@property __weak id <UAUserActivityDelegate> delegate; // @dynamic delegate;
@property _Bool supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property(copy) NSData *streamsData;
@property __weak NSUserActivity *parentUserActivity;
- (id)teamID;	// IMP=0x000000000000610d
@property _Bool needsSave; // @dynamic needsSave;
@property _Bool dirty; // @dynamic dirty;
@property(copy) NSString *targetContentIdentifier;
@property(getter=isUniversalLink) _Bool universalLink; // @synthesize universalLink=_universalLink;
@property(copy) NSURL *referrerURL; // @dynamic referrerURL;
@property(copy) NSURL *webpageURL; // @dynamic webpageURL;
- (void)_setWebpageURL:(id)arg1 throwOnFailure:(_Bool)arg2;	// IMP=0x00000000000044f8
- (_Bool)finishUserInfoUpdate;	// IMP=0x0000000000004447
- (unsigned long long)beginUserInfoUpdate:(id)arg1;	// IMP=0x000000000000435e
@property(readonly) unsigned long long userInfoChangeCount;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;	// IMP=0x000000000000404a
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *title; // @dynamic title;
- (void)dealloc;	// IMP=0x00000000000031df
- (id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4;	// IMP=0x0000000000002599
- (id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3;	// IMP=0x000000000000257d
- (id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3;	// IMP=0x00000000000022eb
- (id)initWithTypeIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x00000000000022d0
- (id)initWithTypeIdentifier:(id)arg1;	// IMP=0x00000000000022b5
- (id)init;	// IMP=0x0000000000002298
- (void)removeContentAttribute:(id)arg1;	// IMP=0x000000000000feef
- (void)addContentAttribute:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000fdfb
- (void)setContentAttributes:(id)arg1;	// IMP=0x000000000000fd3d
- (id)contentAttributes;	// IMP=0x000000000000fcad
- (void)setContentType:(id)arg1;	// IMP=0x000000000000fbef
- (id)contentType;	// IMP=0x000000000000fb5f
@property(copy) NSString *subtitle; // @dynamic subtitle;
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x0000000000016e3e
- (void)displayInDtrace;	// IMP=0x0000000000016b63
- (long long)priority;	// IMP=0x000000000001676e
- (void)sendUserActivityInfoToLSUserActivityd:(_Bool)arg1 onAsyncQueue:(_Bool)arg2;	// IMP=0x0000000000015dfe
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(_Bool)arg1 clearDirty:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014cf4
- (id)callWillSaveDelegateIfDirtyAndPackageUpData:(_Bool)arg1 clearDirty:(_Bool)arg2;	// IMP=0x0000000000013bea
- (id)userActivityInfoForSelfWithPayload:(_Bool)arg1;	// IMP=0x0000000000012af1
- (id)userActivityInfoForSelf;	// IMP=0x0000000000012ada
- (void)scheduleSendUserActivityInfoToLSUserActivityd;	// IMP=0x00000000000128b0
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x00000000000127cc
- (void)didSynchronizeUserActivity;	// IMP=0x0000000000012022
- (void)willSynchronizeUserActivityWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011c5a
- (void)tellDaemonAboutNewLSUserActivity;	// IMP=0x0000000000011884
- (id)copyWithNewUUID:(_Bool)arg1;	// IMP=0x0000000000010731
- (id)initWithManager:(id)arg1 userActivityInfo:(id)arg2;	// IMP=0x000000000000ffad
@property(getter=isEligibleForPublicIndexing) _Bool eligibleForPublicIndexing; // @dynamic eligibleForPublicIndexing;
@property(getter=isEligibleForReminders) _Bool eligibleForReminders; // @dynamic eligibleForReminders;
@property(getter=isEligibleForSearch) _Bool eligibleForSearch; // @dynamic eligibleForSearch;
@property(getter=isEligibleForHandoff) _Bool eligibleForHandoff; // @dynamic eligibleForHandoff;
- (void)addKeywordsFromArray:(id)arg1;	// IMP=0x0000000000017e9e
@property(copy) NSSet *requiredUserInfoKeys; // @dynamic requiredUserInfoKeys;
@property(copy) NSSet *keywords; // @dynamic keywords;
@property(copy) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy) NSString *contentIdentifier; // @dynamic contentIdentifier;
@property(copy) NSString *contentUserAction; // @dynamic contentUserAction;
- (_Bool)createUserActivityDataWithSaving:(_Bool)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a357
- (id)createUserActivityDataWithSaving:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a332
- (id)_encodeIntoUserActivityDataWithSave:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000001a188
- (_Bool)createUserActivityStringsWithSaving:(_Bool)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019f91
- (id)createUserActivityStringsWithSaving:(_Bool)arg1 options:(id)arg2 optionalString:(id *)arg3 data:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000019d5b
- (_Bool)_encodeIntoUserActivityStringWithSave:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019ab8
- (id)_encodeIntoUserActivityStringWithSave:(_Bool)arg1 optionalString:(id *)arg2 optionalData:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000019840
- (id)initWithUserActivityData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000019656
- (id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4;	// IMP=0x00000000000184fe
- (void)indexActivity:(double)arg1 forceIndexing:(_Bool)arg2;	// IMP=0x000000000001e69f
- (void)sendToCoreSpotlightIndexer;	// IMP=0x000000000001e699
- (void)updateForwardToCoreSpotlightIndexer:(BOOL)arg1;	// IMP=0x000000000001e55b
@property(readonly) _Bool forwardToCoreSpotlightIndexer;
@property(copy) CSSearchableItemAttributeSet *contentAttributeSet; // @dynamic contentAttributeSet;
@property(copy) NSString *persistentIdentifier;
- (void)setDirty:(_Bool)arg1 identifier:(id)arg2;	// IMP=0x0000000000045f0d
- (_Bool)isPayloadDirty:(id)arg1;	// IMP=0x0000000000045dfc
- (CDUnknownBlockType)payloadUpdateBlockForIdentifier:(id)arg1;	// IMP=0x0000000000045cfc
- (void)setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000459b8
- (void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;	// IMP=0x0000000000045507
- (void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000000454f2
- (id)payloadForIdentifier:(id)arg1;	// IMP=0x0000000000045209
- (id)objectForIdentifier:(id)arg1;	// IMP=0x0000000000045154
- (id)payloadIdentifiers;	// IMP=0x0000000000044fe2

// Remaining properties
@property(getter=isEligibleForPrediction) _Bool eligibleForPrediction;
@property(readonly) Class superclass;

@end

