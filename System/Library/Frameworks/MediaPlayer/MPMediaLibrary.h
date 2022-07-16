//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>
#import <MediaPlayer/_MPActiveUserChangeMonitorDelegate-Protocol.h>

@class ICUserIdentity, ML3MusicLibrary, MPMediaLibraryPrivacyContext, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSPointerArray, NSString, NSURL, QueryCriteriaResultsCache, _MPActiveUserChangeMonitor;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaLibrary : NSObject <_MPActiveUserChangeMonitorDelegate, NSSecureCoding>
{
    MPMediaLibraryPrivacyContext *_privacyContext;	// 8 = 0x8
    id <MPMediaLibraryDataProviderPrivate> _libraryDataProvider;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_entityCacheQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_fixedQueue;	// 32 = 0x20
    NSArray *_notificationObservers;	// 40 = 0x28
    QueryCriteriaResultsCache *_itemsForCriteriaCache;	// 48 = 0x30
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;	// 56 = 0x38
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;	// 64 = 0x40
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;	// 72 = 0x48
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;	// 80 = 0x50
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;	// 88 = 0x58
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;	// 96 = 0x60
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;	// 104 = 0x68
    NSMutableDictionary *_hasItemsDidLoadForCriteria;	// 112 = 0x70
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;	// 120 = 0x78
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;	// 128 = 0x80
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;	// 136 = 0x88
    NSMutableArray *_additionalLibraryFilterPredicates;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;	// 152 = 0x98
    NSPointerArray *_connectionAssertions;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_connectionAssertionsQueue;	// 168 = 0xa8
    _Bool _disconnectAfterReleasingAssertions;	// 176 = 0xb0
    float _connectionProgress;	// 180 = 0xb4
    long long _removalReason;	// 184 = 0xb8
    unsigned int _determinedHasMedia:1;	// 192 = 0xc0
    unsigned int _hasMedia:1;	// 192 = 0xc0
    unsigned int _determinedHasSongs:1;	// 192 = 0xc0
    unsigned int _hasSongs:1;	// 192 = 0xc0
    unsigned int _determinedHasGeniusMixes:1;	// 192 = 0xc0
    unsigned int _hasGeniusMixes:1;	// 192 = 0xc0
    unsigned int _determinedHasPlaylists:1;	// 192 = 0xc0
    unsigned int _hasPlaylists:1;	// 192 = 0xc0
    unsigned int _determinedHasComposers:1;	// 193 = 0xc1
    unsigned int _hasComposers:1;	// 193 = 0xc1
    unsigned int _determinedHasPodcasts:1;	// 193 = 0xc1
    unsigned int _hasPodcasts:1;	// 193 = 0xc1
    unsigned int _determinedHasUbiquitousBookmarkableItems:1;	// 193 = 0xc1
    unsigned int _hasUbiquitousBookmarkableContent:1;	// 193 = 0xc1
    unsigned int _determinedHasAudiobooks:1;	// 193 = 0xc1
    unsigned int _hasAudiobooks:1;	// 193 = 0xc1
    long long _cloudFilteringType;	// 200 = 0xc8
    _Bool _filteringDisabled;	// 208 = 0xd0
    _Bool _hasVideos;	// 209 = 0xd1
    _Bool _determinedHasVideos;	// 210 = 0xd2
    _Bool _hasMusicVideos;	// 211 = 0xd3
    _Bool _determinedHasMusicVideos;	// 212 = 0xd4
    _Bool _hasAudibleAudioBooks;	// 213 = 0xd5
    _Bool _determinedHasAudibleAudioBooks;	// 214 = 0xd6
    _Bool _hasMovies;	// 215 = 0xd7
    _Bool _determinedHasMovies;	// 216 = 0xd8
    _Bool _hasCompilations;	// 217 = 0xd9
    _Bool _determinedHasCompilations;	// 218 = 0xda
    _Bool _hasITunesU;	// 219 = 0xdb
    _Bool _determinedHasITunesU;	// 220 = 0xdc
    _Bool _hasVideoITunesU;	// 221 = 0xdd
    _Bool _determinedHasVideoITunesU;	// 222 = 0xde
    _Bool _hasMovieRentals;	// 223 = 0xdf
    _Bool _determinedHasMovieRentals;	// 224 = 0xe0
    _Bool _hasTVShows;	// 225 = 0xe1
    _Bool _determinedHasTVShows;	// 226 = 0xe2
    _Bool _hasHomeVideos;	// 227 = 0xe3
    _Bool _determinedHasHomeVideos;	// 228 = 0xe4
    _Bool _hasVideoPodcasts;	// 229 = 0xe5
    _Bool _determinedHasVideoPodcasts;	// 230 = 0xe6
    unsigned char _originalCellNetworkFlags;	// 231 = 0xe7
    unsigned char _originalWiFiNetworkFlags;	// 232 = 0xe8
    struct os_unfair_lock_s __MLCoreStorageLock;	// 236 = 0xec
    id __MLCoreStorage;	// 240 = 0xf0
    ICUserIdentity *_userIdentity;	// 248 = 0xf8
    long long _libraryChangeObservers;	// 256 = 0x100
    _MPActiveUserChangeMonitor *_activeUserChangeMonitor;	// 264 = 0x108
    struct os_unfair_lock_s *__MLCoreStorageLockPointer;	// 272 = 0x110
}

+ (void)libraryPathDidChangeForDataProvider:(id)arg1;	// IMP=0x00000000000df1a7
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;	// IMP=0x00000000000df139
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;	// IMP=0x00000000000df0ee
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;	// IMP=0x00000000000df080
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;	// IMP=0x00000000000df041
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;	// IMP=0x00000000000df002
+ (void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1;	// IMP=0x00000000000defb7
+ (void)reloadLibraryDataProvider:(id)arg1;	// IMP=0x00000000000deeac
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;	// IMP=0x00000000000dece1
+ (void)addLibraryDataProvider:(id)arg1;	// IMP=0x00000000000deb42
+ (id)libraryDataProviders;	// IMP=0x00000000000deafa
+ (id)_libraryDataProviders;	// IMP=0x00000000000deabd
+ (id)_libraryForDataProvider:(id)arg1;	// IMP=0x00000000000de8e8
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1 allowsLoadingFromDisk:(_Bool)arg2;	// IMP=0x00000000000de8a9
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000000de6a6
+ (id)sharedMediaLibraries;	// IMP=0x00000000000de4d1
+ (id)mediaLibraries;	// IMP=0x00000000000de489
+ (id)_mediaLibraries;	// IMP=0x00000000000de426
+ (void)_endDiscoveringMediaLibrariesIfAllowed;	// IMP=0x00000000000de1dd
+ (void)setRunLoopForNotifications:(id)arg1;	// IMP=0x00000000000de1d7
+ (void)setLibraryServerDisabled:(_Bool)arg1;	// IMP=0x00000000000de1d1
+ (_Bool)isLibraryServerDisabled;	// IMP=0x00000000000de1c9
+ (void)logDatabaseAccess;	// IMP=0x00000000000de159
+ (void)setGlobalPrivacyClientWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000de0b7
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ddff3
+ (long long)authorizationStatus;	// IMP=0x00000000000ddf91
+ (long long)_mediaLibraryAuthorizationStatusFromCloudServiceAuthorizationStatus:(long long)arg1;	// IMP=0x00000000000ddf7d
+ (id)_sharedCloudServiceStatusMonitor;	// IMP=0x00000000000ddf4d
+ (void)endDiscoveringMediaLibraries;	// IMP=0x00000000000ddeba
+ (void)beginDiscoveringMediaLibraries;	// IMP=0x00000000000dde40
+ (void)_postNotificationName:(id)arg1 library:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000ddc5f
+ (void)_postNotificationName:(id)arg1 library:(id)arg2;	// IMP=0x00000000000ddc43
+ (id)_mediaLibraryWithUniqueIdentifier:(id)arg1 userDSID:(id)arg2;	// IMP=0x00000000000dd288
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dd280
+ (id)_deviceMediaLibraryWithUserIdentity:(id)arg1 createIfRequired:(_Bool)arg2;	// IMP=0x00000000000dd00f
+ (id)deviceMediaLibraryWithUserIdentity:(id)arg1;	// IMP=0x00000000000dcf45
+ (id)deviceMediaLibrary;	// IMP=0x00000000000dcf15
+ (void)setDefaultMediaLibrary:(id)arg1;	// IMP=0x00000000000dcdc2
+ (id)defaultMediaLibrary;	// IMP=0x00000000000dccce
+ (void)initialize;	// IMP=0x00000000000dccaa
- (void).cxx_destruct;	// IMP=0x00000000000d8e36
@property(readonly, nonatomic) struct os_unfair_lock_s *_MLCoreStorageLockPointer; // @synthesize _MLCoreStorageLockPointer=__MLCoreStorageLockPointer;
@property(retain, nonatomic) _MPActiveUserChangeMonitor *activeUserChangeMonitor; // @synthesize activeUserChangeMonitor=_activeUserChangeMonitor;
@property(readonly, nonatomic) struct os_unfair_lock_s _MLCoreStorageLock; // @synthesize _MLCoreStorageLock=__MLCoreStorageLock;
@property(retain, nonatomic, setter=_setMLCoreStorage:) id _MLCoreStorage; // @synthesize _MLCoreStorage=__MLCoreStorage;
- (_Bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;	// IMP=0x00000000000d8d8d
- (_Bool)recordPlayEventForAlbumPersistentID:(long long)arg1;	// IMP=0x00000000000d8d3f
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d8b28
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d88e2
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d870b
- (_Bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;	// IMP=0x00000000000d866c
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;	// IMP=0x00000000000d85f0
- (void)addTracksToMyLibrary:(id)arg1;	// IMP=0x00000000000d859d
- (void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7e19
- (void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d72de
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7112
- (void)addStoreItemIDs:(id)arg1 referralObject:(id)arg2 andAddTracksToCloudLibrary:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d6e6a
- (void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d6e50
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d6d78
- (id)artworkDataSource;	// IMP=0x00000000000d6d28
- (id)libraryDataProvider;	// IMP=0x00000000000d6d1a
- (id)_initWithLibraryDataProvider:(id)arg1;	// IMP=0x00000000000d6bdf
@property(readonly, nonatomic) long long libraryChangeObservers; // @synthesize libraryChangeObservers=_libraryChangeObservers;
@property(readonly, copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) ML3MusicLibrary *ml3Library;
- (void)_tearDownNotifications;	// IMP=0x00000000000d6873
- (void)_setupNotifications;	// IMP=0x00000000000d6356
- (void)_disconnect;	// IMP=0x00000000000d61e7
- (void)_removeConnectionAssertion:(id)arg1;	// IMP=0x00000000000d60d2
- (id)_collectionsForQueryCriteria:(id)arg1;	// IMP=0x00000000000d5ea0
- (void)_setLibraryFilterPredicates;	// IMP=0x00000000000d5bea
- (long long)cloudFilteringType;	// IMP=0x00000000000d5b62
- (void)setCloudFilteringType:(long long)arg1;	// IMP=0x00000000000d58ba
- (void)_clearPendingDisconnection;	// IMP=0x00000000000d586c
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;	// IMP=0x00000000000d565f
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;	// IMP=0x00000000000d5452
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;	// IMP=0x00000000000d5280
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;	// IMP=0x00000000000d50ae
- (_Bool)_hasCollectionsForQueryCriteria:(id)arg1;	// IMP=0x00000000000d4edb
- (_Bool)_hasItemsForQueryCriteria:(id)arg1;	// IMP=0x00000000000d4d08
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(CDUnknownBlockType)arg5 loadValueFromDataProviderBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d49d5
- (id)_itemsForQueryCriteria:(id)arg1;	// IMP=0x00000000000d471b
- (_Bool)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;	// IMP=0x00000000000d4705
- (_Bool)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;	// IMP=0x00000000000d46ef
- (_Bool)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;	// IMP=0x00000000000d46d9
- (_Bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;	// IMP=0x00000000000d46c3
- (_Bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;	// IMP=0x00000000000d46ad
- (_Bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;	// IMP=0x00000000000d4697
- (void)_performBlockOnLibraryHandlingTheSameAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d44cd
- (_Bool)_handlesSameAccountAs:(id)arg1;	// IMP=0x00000000000d439e
- (void)activeUserChangeDidFinish;	// IMP=0x00000000000d4300
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;	// IMP=0x00000000000d3f70
- (id)pathForAssetURL:(id)arg1;	// IMP=0x00000000000d3ef1
- (_Bool)isValidAssetURL:(id)arg1;	// IMP=0x00000000000d3ed8
- (id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2;	// IMP=0x00000000000d3e00
- (id)entityWithSpotlightIdentifier:(id)arg1;	// IMP=0x00000000000d3d69
- (id)entityWithLibraryURL:(id)arg1;	// IMP=0x00000000000d3a91
- (id)entityWithMultiverseIdentifier:(id)arg1;	// IMP=0x00000000000d39f8
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;	// IMP=0x00000000000d39e2
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;	// IMP=0x00000000000d39cc
- (_Bool)deleteDatabaseProperty:(id)arg1;	// IMP=0x00000000000d39b6
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;	// IMP=0x00000000000d39a0
- (id)valueForDatabaseProperty:(id)arg1;	// IMP=0x00000000000d398a
- (id)entityCache;	// IMP=0x00000000000d3974
- (id)syncValidity;	// IMP=0x00000000000d395e
- (float)connectionProgress;	// IMP=0x00000000000d3950
- (_Bool)isCurrentThreadInTransaction;	// IMP=0x00000000000d3917
- (void)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d38ba
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d3856
- (id)connectionAssertionWithIdentifier:(id)arg1;	// IMP=0x00000000000d3781
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d36f3
- (_Bool)requiresAuthentication;	// IMP=0x00000000000d36ba
- (id)preferredSubtitleLanguages;	// IMP=0x00000000000d3674
- (id)preferredAudioLanguages;	// IMP=0x00000000000d362e
- (_Bool)isGeniusEnabled;	// IMP=0x00000000000d35f5
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d357c
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;	// IMP=0x00000000000d341c
- (void)clearLocationPropertiesOfItem:(id)arg1;	// IMP=0x00000000000d33b6
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d32e4
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;	// IMP=0x00000000000d324f
- (void)downloadAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d30c2
- (_Bool)removePlaylist:(id)arg1;	// IMP=0x00000000000d3053
- (_Bool)removeItems:(id)arg1;	// IMP=0x00000000000d2f43
- (_Bool)deleteItems:(id)arg1;	// IMP=0x00000000000d2e33
- (id)URLForHomeSharingRequest:(id)arg1;	// IMP=0x00000000000d2dbd
- (unsigned int)homeSharingDatabaseID;	// IMP=0x00000000000d2d78
- (unsigned long long)syncPlaylistId;	// IMP=0x00000000000d2d2d
- (void)setSyncPlaylistId:(unsigned long long)arg1;	// IMP=0x00000000000d2cd3
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(_Bool)arg2;	// IMP=0x00000000000d2bbf
- (id)addPlaylistWithName:(id)arg1;	// IMP=0x00000000000d2bab
- (id)playlistWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000d2b91
- (id)photosMemoriesPlaylist;	// IMP=0x00000000000d2b33
- (id)playbackHistoryPlaylist;	// IMP=0x00000000000d2ad5
- (id)localizedSectionIndexTitles;	// IMP=0x00000000000d2abf
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;	// IMP=0x00000000000d2aa9
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000d2945
- (id)decodeItemWithCoder:(id)arg1;	// IMP=0x00000000000d28f8
- (id)itemWithStoreID:(unsigned long long)arg1;	// IMP=0x00000000000d2888
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(_Bool)arg2;	// IMP=0x00000000000d282c
- (id)itemWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000d2815
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(_Bool)arg3;	// IMP=0x00000000000d268a
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;	// IMP=0x00000000000d2672
- (_Bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;	// IMP=0x00000000000d265c
- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000d255c
- (_Bool)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000d244d
- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000d234d
- (_Bool)hasUserPlaylistsContainingAppleMusicContent;	// IMP=0x00000000000d22bc
- (_Bool)hasAddedToLibraryAppleMusicContent;	// IMP=0x00000000000d222b
- (_Bool)hasUserPlaylists;	// IMP=0x00000000000d219a
- (_Bool)hasVideoPodcasts;	// IMP=0x00000000000d216d
- (_Bool)hasHomeVideos;	// IMP=0x00000000000d2140
- (_Bool)hasTVShows;	// IMP=0x00000000000d2113
- (_Bool)hasMovieRentals;	// IMP=0x00000000000d20ec
- (_Bool)hasVideoITunesUContent;	// IMP=0x00000000000d20bf
- (_Bool)hasAudioITunesUContent;	// IMP=0x00000000000d2092
- (_Bool)hasITunesUContent;	// IMP=0x00000000000d2065
- (_Bool)hasCompilations;	// IMP=0x00000000000d203e
- (_Bool)hasMovies;	// IMP=0x00000000000d2011
- (_Bool)hasAudibleAudioBooks;	// IMP=0x00000000000d1fea
- (_Bool)hasMusicVideos;	// IMP=0x00000000000d1fbd
- (_Bool)hasVideos;	// IMP=0x00000000000d1f90
- (_Bool)_checkHasContent:(_Bool *)arg1 determined:(_Bool *)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d1f67
- (_Bool)_checkHasContent:(_Bool *)arg1 determined:(_Bool *)arg2 queryHasEntitiesBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d1f3e
- (_Bool)hasAudiobooks;	// IMP=0x00000000000d1e80
- (_Bool)hasComposers;	// IMP=0x00000000000d1e00
- (_Bool)hasGenres;	// IMP=0x00000000000d1dee
- (_Bool)hasUbiquitousBookmarkableItems;	// IMP=0x00000000000d1d8b
- (_Bool)hasPodcasts;	// IMP=0x00000000000d1ccb
- (_Bool)hasSongs;	// IMP=0x00000000000d1c0b
- (_Bool)hasAlbums;	// IMP=0x00000000000d1bf9
- (_Bool)hasArtists;	// IMP=0x00000000000d1be7
- (_Bool)hasPlaylists;	// IMP=0x00000000000d1b67
- (_Bool)hasGeniusMixes;	// IMP=0x00000000000d1b04
- (_Bool)hasMedia;	// IMP=0x00000000000d1a5f
- (_Bool)hasMediaOfType:(unsigned long long)arg1;	// IMP=0x00000000000d19fd
- (id)databasePath;	// IMP=0x00000000000d19e7
- (id)uniqueIdentifier;	// IMP=0x00000000000d19d1
@property(nonatomic) long long removalReason;
- (id)name;	// IMP=0x00000000000d19a1
- (void)removeLibraryFilterPredicate:(id)arg1;	// IMP=0x00000000000d188a
- (void)addLibraryFilterPredicate:(id)arg1;	// IMP=0x00000000000d1773
- (id)additionalLibraryFilterPredicates;	// IMP=0x00000000000d16b7
- (void)setClientIdentity:(id)arg1;	// IMP=0x00000000000d15e2
- (void)logDatabaseAccess;	// IMP=0x00000000000d1589
- (long long)status;	// IMP=0x00000000000d153b
- (_Bool)writable;	// IMP=0x00000000000d1502
- (_Bool)isHomeSharingLibrary;	// IMP=0x00000000000d14d8
- (_Bool)isDeviceLibrary;	// IMP=0x00000000000d13b4
- (long long)playlistGeneration;	// IMP=0x00000000000d1376
- (unsigned long long)syncGenerationID;	// IMP=0x00000000000d133a
- (unsigned long long)currentEntityRevision;	// IMP=0x00000000000d12fe
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d0ff5
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (void)disconnect;	// IMP=0x00000000000d0f55
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d0d68
- (void)endGeneratingLibraryChangeNotifications;	// IMP=0x00000000000d0d16
- (void)beginGeneratingLibraryChangeNotifications;	// IMP=0x00000000000d0cd3
- (void)_displayValuesDidChangeNotification:(id)arg1;	// IMP=0x00000000000d0c87
- (void)_didReceiveMemoryWarning:(id)arg1;	// IMP=0x00000000000d0c70
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;	// IMP=0x00000000000d0c5e
- (void)_activeUserDidChangeNotification:(id)arg1;	// IMP=0x00000000000d0bce
- (void)_reloadLibraryForPathChange;	// IMP=0x00000000000d0b82
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;	// IMP=0x00000000000d0af0
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;	// IMP=0x00000000000d0a45
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;	// IMP=0x00000000000d097a
- (void)_reloadLibraryForRestrictionsChange;	// IMP=0x00000000000d0902
- (void)_scheduleLibraryChangeNotificationPostingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d0835
- (void)_clearCachedContentDataAndResultSets:(_Bool)arg1;	// IMP=0x00000000000d07d1
- (void)_clearCachedEntitiesIncludingResultSets:(_Bool)arg1;	// IMP=0x00000000000d0783
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d062a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d048c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d0393
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000d020a
- (id)initWithClientIdentity:(id)arg1 userIdentity:(id)arg2;	// IMP=0x00000000000cfd33
- (id)_initWithUserIdentity:(id)arg1;	// IMP=0x00000000000cfd1c
- (id)init;	// IMP=0x00000000000cfc7c
@property(readonly, nonatomic) shared_ptr_0f3dbfb3 _MediaLibrary_coreLibrary;
@property(readonly, nonatomic) NSURL *protectedContentSupportStorageURL;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dfdcf
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dfdb7
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dfcaf
@property(readonly, nonatomic) NSString *_syncValidity;
- (id)errorResolverForItem:(id)arg1;	// IMP=0x000000000011a8dc
- (void)clearSagaLastPlaylistPlayDataUploadDate;	// IMP=0x00000000001b4142
- (void)clearSagaLastItemPlayDataUploadDate;	// IMP=0x00000000001b4105
- (void)clearSagaCloudAccountID;	// IMP=0x00000000001b40c8
@property(copy, nonatomic) NSDate *sagaLastSubscribedContainersUpdateTime;
@property(copy, nonatomic) NSDate *sagaLastLibraryUpdateTime;
@property(nonatomic) long long sagaOnDiskDatabaseRevision;
@property(copy, nonatomic) NSString *storefrontIdentifier;
@property(nonatomic) long long sagaDatabaseUserVersion;
@property(copy, nonatomic) NSDate *sagaLastPlaylistPlayDataUploadDate;
@property(copy, nonatomic) NSDate *sagaLastItemPlayDataUploadDate;
@property(copy, nonatomic) NSNumber *sagaAccountID;
- (unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000001c424d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
