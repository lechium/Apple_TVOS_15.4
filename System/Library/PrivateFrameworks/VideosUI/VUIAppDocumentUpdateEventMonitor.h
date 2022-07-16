//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/PBSUserProfileManagerObserver-Protocol.h>

@class NSDate, NSMapTable, NSString, PBSGroupRecommendationsSession, WLKPlaybackSummary;

@interface VUIAppDocumentUpdateEventMonitor : NSObject <PBSUserProfileManagerObserver>
{
    WLKPlaybackSummary *_pendingPlayActivity;	// 8 = 0x8
    _Bool _playbackIsActive;	// 16 = 0x10
    int _playbackReportToken;	// 20 = 0x14
    PBSGroupRecommendationsSession *_lastGroupRecommendationsSession;	// 24 = 0x18
    NSMapTable *_observerMapTable;	// 32 = 0x20
    NSDate *_lastProcesssedPlayActivity;	// 40 = 0x28
    NSDate *_lastAppDidBecomeActive;	// 48 = 0x30
}

+ (_Bool)_isAppRefreshEventType:(id)arg1;	// IMP=0x00000000000e561b
+ (id)sharedMonitor;	// IMP=0x00000000000e11ac
- (void).cxx_destruct;	// IMP=0x00000000000e57d7
@property(retain, nonatomic) NSDate *lastAppDidBecomeActive; // @synthesize lastAppDidBecomeActive=_lastAppDidBecomeActive;
@property(retain, nonatomic) NSDate *lastProcesssedPlayActivity; // @synthesize lastProcesssedPlayActivity=_lastProcesssedPlayActivity;
@property(nonatomic) int playbackReportToken; // @synthesize playbackReportToken=_playbackReportToken;
@property(retain, nonatomic) NSMapTable *observerMapTable; // @synthesize observerMapTable=_observerMapTable;
@property(retain, nonatomic) PBSGroupRecommendationsSession *lastGroupRecommendationsSession; // @synthesize lastGroupRecommendationsSession=_lastGroupRecommendationsSession;
- (void)_notifyObserversOfEvent:(id)arg1;	// IMP=0x00000000000e4bfe
- (void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2;	// IMP=0x00000000000e4b21
- (void)userProfileManager:(id)arg1 didUpdateGroupRecommendationsSession:(id)arg2;	// IMP=0x00000000000e487c
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x00000000000e4876
- (void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1;	// IMP=0x00000000000e46c7
- (void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1;	// IMP=0x00000000000e44fd
- (void)_handlePlayHistoryUpdatedNotification:(id)arg1;	// IMP=0x00000000000e4452
- (void)_handleUpNextRequestDidFinishNotification:(id)arg1;	// IMP=0x00000000000e4265
- (void)_handleXPUpNextRequestDidFinishNotification:(id)arg1;	// IMP=0x00000000000e4169
- (void)_handleLocationDidChangeNotification:(id)arg1;	// IMP=0x00000000000e4075
- (void)_handleLocationAuthorizationDidChangeNotification:(id)arg1;	// IMP=0x00000000000e3fca
- (void)_handleUTSKDidChangeNotification:(id)arg1;	// IMP=0x00000000000e3f1f
- (void)_handleEntitlementsDidChangeNotification:(id)arg1;	// IMP=0x00000000000e3e74
- (void)_handleSubscriptionDidChangeNotification:(id)arg1;	// IMP=0x00000000000e3d03
- (void)_handlePurchaseFlowDidFinishNotification:(id)arg1;	// IMP=0x00000000000e3b3b
- (void)_handleAppLibraryDidChangeNotification:(id)arg1;	// IMP=0x00000000000e3997
- (void)_handleSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000000e38ec
- (void)_handleSyndicationInfoUpdatedNotification:(id)arg1;	// IMP=0x00000000000e3841
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000000e379e
- (void)_handleAppDidBecomeActive:(id)arg1;	// IMP=0x00000000000e35ea
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000000e3553
- (void)_handleVPPADidAcceptNotification:(id)arg1;	// IMP=0x00000000000e34a8
- (void)_handleTVSubscriptionEntitlementsChanged:(id)arg1;	// IMP=0x00000000000e3325
- (void)_handleFamilyUpdate:(id)arg1;	// IMP=0x00000000000e31d9
- (void)_handlePlaybackReportNotification:(id)arg1;	// IMP=0x00000000000e2ea5
- (void)_handleIAMMessageDidReceiveNotification:(id)arg1;	// IMP=0x00000000000e2cdf
- (void)_postPurchaseNotification:(id)arg1 error:(id)arg2;	// IMP=0x00000000000e2bf6
- (void)_postSubscriptionNotification:(id)arg1 interruptedOfferDetails:(id)arg2 error:(id)arg3;	// IMP=0x00000000000e2863
- (void)_handleClearPlayHistoryNotification:(id)arg1;	// IMP=0x00000000000e27b8
- (void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1;	// IMP=0x00000000000e270d
- (void)_handleUpNextLockupArtSettingDidChange:(id)arg1;	// IMP=0x00000000000e2662
- (void)_handleRestrictionsDidChangeNotification:(id)arg1;	// IMP=0x00000000000e25b7
- (void)_handleAccountDidChangeNotification:(id)arg1;	// IMP=0x00000000000e248f
- (void)_handleNowPlayingDidEndNotification:(id)arg1;	// IMP=0x00000000000e2355
- (void)_handleNowPlayingWillStartNotification:(id)arg1;	// IMP=0x00000000000e22e5
- (void)_handleFavoritesRequestDidFinishNotification:(id)arg1;	// IMP=0x00000000000e20f8
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000000e204d
- (void)_handlePostPlayUpNextShouldUpdateNotification:(id)arg1;	// IMP=0x00000000000e1f52
- (void)_handleXPPurchaseFlowDidFinishNotification:(id)arg1;	// IMP=0x00000000000e1e4f
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000e1d3c
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2 viewController:(id)arg3;	// IMP=0x00000000000e1932
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2;	// IMP=0x00000000000e191d
- (void)dealloc;	// IMP=0x00000000000e1823
- (id)_init;	// IMP=0x00000000000e1211
- (id)init;	// IMP=0x00000000000e113d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
