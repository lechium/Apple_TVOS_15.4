//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMusicLibraryArtistAffinityAnalyzer, MISSING_TYPE, NSNumber, NSString;
@protocol NSCopying, OS_dispatch_queue;

@interface ICMusicLibraryRecommendationController : NSObject
{
    ICMusicLibraryArtistAffinityAnalyzer *_affinityAnalyzer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    _Bool _userHasOptedIn;	// 24 = 0x18
    _Bool _userHasEverToggledOptInSwitch;	// 25 = 0x19
    id <NSCopying> _subscriptionObservationToken;	// 32 = 0x20
    _Bool _isSystemService;	// 40 = 0x28
    _Bool _failedToPerformAnalysis;	// 41 = 0x29
    NSNumber *_lastSeenDSID;	// 48 = 0x30
    double _lastTimePeriodicXPCFired;	// 56 = 0x38
    double _refreshIntervalFromBag;	// 64 = 0x40
}

+ (id)sharedLibraryRecommendationController;	// IMP=0x0020000000096856
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000000912bb
- (id)_createLocalNotificationDictionaryForRecommendationResult:(id)arg1 storePlatformMetadata:(id)arg2 recommendationID:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000090544
- (void)_updateOptInIfNecessary;	// IMP=0x001000000009047b
- (void)_optInMessageForPriorityMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090382
- (id)_optInMessageContentForPriorityMessageContent:(id)arg1;	// IMP=0x00100000000901e4
- (void)_createApplicationMessagesForResult:(id)arg1 artistNewContentResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ff97
- (void)_cleanupExpiredApplicationMessages;	// IMP=0x001000000008fece
- (id)_retrievePreviousRecommendationMatchesFromCache;	// IMP=0x001000000008fdd5
- (id)_cacheDirectoryPath;	// IMP=0x001000000008fd4a
- (id)_getNetworkConstraints;	// IMP=0x001000000008fcfa
- (id)_storeRequestContext;	// IMP=0x001000000008fcca
- (id)_wrapAndCacheResponseModelWithCompiledMLModel:(id)arg1;	// IMP=0x001000000008f576
- (_Bool)_setupCacheDirectoryStructureWithPath:(id)arg1;	// IMP=0x001000000008f3ca
- (void)_clearMLModelCache;	// IMP=0x001000000008f209
- (void)_fetchRecommendationsSetAndModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008f11b
- (void)_computeLibraryRecommendationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ef91
- (void)_handleRecommendationsResponseModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008edb4
- (void)_performRecommendationsRequest;	// IMP=0x001000000008ec8a
- (void)_performRecommendationsUpdate;	// IMP=0x001000000008ea27
- (void)_cacheMatchedRecommendations:(id)arg1;	// IMP=0x001000000008e99a
- (void)_clearRecommendationsData;	// IMP=0x001000000008e6f9
- (void)_handleNewArtistContentResponseNotification:(id)arg1;	// IMP=0x001000000008e4ad
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x001000000008e3b8
- (void)handleAccountStateChange:(id)arg1;	// IMP=0x001000000008e2ce
- (void)scheduleRecommendationsRefreshTimer;	// IMP=0x001000000008e111
- (void)stopSystemService;	// IMP=0x001000000008df89
- (void)startSystemService;	// IMP=0x001000000008de04
- (void)dealloc;	// IMP=0x001000000008dd74
- (id)init;	// IMP=0x001000000008dbf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

