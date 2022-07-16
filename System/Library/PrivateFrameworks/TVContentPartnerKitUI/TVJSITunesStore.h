//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSITunesStore.h>

#import <TVContentPartnerKitUI/MCProfileConnectionObserver-Protocol.h>
#import <TVContentPartnerKitUI/TVApplicationControllerDelegate-Protocol.h>
#import <TVContentPartnerKitUI/TVCKRemoteNotifierDelegate-Protocol.h>
#import <TVContentPartnerKitUI/TVJSITunesStore-Protocol.h>
#import <TVContentPartnerKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString, TVCKExtrasApplicationController, TVCKRemoteNotifier, TVCKStoreFavoritesController, TVCKStorePlaybackProgressFactory, _TVNavigationZoomAnimator, _TVProductTemplateZoomAnimator;

@interface TVJSITunesStore : IKJSITunesStore <TVApplicationControllerDelegate, TVCKRemoteNotifierDelegate, UIViewControllerTransitioningDelegate, MCProfileConnectionObserver, TVJSITunesStore>
{
    id _acquisitionToken;	// 8 = 0x8
    _Bool _didLoadStoreJS;	// 16 = 0x10
    id _rentalsDidChangeObserver;	// 24 = 0x18
    TVCKStoreFavoritesController *_favoritesController;	// 32 = 0x20
    id _favoritesDidChangeObserver;	// 40 = 0x28
    TVCKStorePlaybackProgressFactory *_progressFactory;	// 48 = 0x30
    id _progressDidChangeObserver;	// 56 = 0x38
    id _accountStoreChangeObserver;	// 64 = 0x40
    _Bool _presentingExtras;	// 72 = 0x48
    TVCKExtrasApplicationController *_extrasApplicationController;	// 80 = 0x50
    _TVNavigationZoomAnimator *_presentingAnimator;	// 88 = 0x58
    _TVProductTemplateZoomAnimator *_dismissingAnimator;	// 96 = 0x60
    _Bool _reverseDismissal;	// 104 = 0x68
    TVCKRemoteNotifier *_remoteAcquisitionNotifier;	// 112 = 0x70
    TVJSITunesStore *_extrasOriginalJSITunesStore;	// 120 = 0x78
    NSDate *_backgroundedDate;	// 128 = 0x80
    NSNumber *_extrasContentRating;	// 136 = 0x88
}

+ (void)initialize;	// IMP=0x000000000007cdf3
- (void).cxx_destruct;	// IMP=0x0000000000084144
@property(copy, nonatomic) NSNumber *extrasContentRating; // @synthesize extrasContentRating=_extrasContentRating;
@property(copy, nonatomic) NSDate *backgroundedDate; // @synthesize backgroundedDate=_backgroundedDate;
@property(nonatomic) __weak TVJSITunesStore *extrasOriginalJSITunesStore; // @synthesize extrasOriginalJSITunesStore=_extrasOriginalJSITunesStore;
@property(retain, nonatomic) TVCKRemoteNotifier *remoteAcquisitionNotifier; // @synthesize remoteAcquisitionNotifier=_remoteAcquisitionNotifier;
- (_Bool)shouldPreventActionForStoreDemoModeWithMessage:(id)arg1;	// IMP=0x0000000000084052
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0000000000083c60
- (void)_showStoreDemoModeRestrictionMessage:(id)arg1;	// IMP=0x0000000000083bb5
- (id)_rentalInfoFromDataItems:(id)arg1;	// IMP=0x0000000000083675
- (id)_optionsFromActiveAccount;	// IMP=0x0000000000083519
- (void)_buyWithActionParams:(id)arg1:(id)arg2;	// IMP=0x0000000000082c2b
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000082bec
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000000082a10
- (void)showMigrationForMoviesIfNecessary;	// IMP=0x0000000000082a0a
- (void)showMigrationForShowsIfNecessary;	// IMP=0x0000000000082a04
- (void)loadBookmarkDataIfNeeded;	// IMP=0x000000000008292e
- (void)loadStoreURL:(id)arg1;	// IMP=0x0000000000082895
- (void)dismissExtrasWithNavigationURL:(id)arg1;	// IMP=0x0000000000082516
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x000000000008245f
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000082431
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000008241c
- (id)_extrasNavigationController;	// IMP=0x00000000000823ff
- (void)_presentExtrasApplicationController:(id)arg1 usingAppNavigationController:(id)arg2 withPreviousAppNavigationController:(id)arg3 presentImmediately:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000821f3
- (void)_loadExtrasURL:(id)arg1 adamID:(id)arg2 actionParams:(id)arg3 previewURL:(id)arg4 loadingImage:(id)arg5 lightTheme:(_Bool)arg6 presentImmediately:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000081e2d
- (void)_dismissExtrasNavigationControllerAnimated:(_Bool)arg1 reverseAnimation:(_Bool)arg2;	// IMP=0x0000000000081c24
- (void)_stopExtrasApp;	// IMP=0x0000000000081be2
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000081974
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000000081934
- (void)loadExtrasURL:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(long long)arg5:(id)arg6:(_Bool)arg7;	// IMP=0x00000000000811f8
@property(readonly, nonatomic) _Bool preferVideoDescriptions;
@property(readonly, nonatomic) _Bool preferSDHOverRegularSubtitles;
- (void)markAsUnwatched:(id)arg1;	// IMP=0x0000000000080e5c
- (void)markAsWatched:(id)arg1;	// IMP=0x0000000000080b56
- (void)determineProgressForAdamIDs:(id)arg1:(id)arg2;	// IMP=0x00000000000803e6
- (void)_determineStatusOfItemInCategory:(unsigned long long)arg1 withAdamID:(id)arg2:(id)arg3;	// IMP=0x000000000008002f
- (void)determineStatusOfItemWithAdamID:(id)arg1:(id)arg2;	// IMP=0x0000000000080015
- (void)determineStatusOfSeasonWithAdamID:(id)arg1:(id)arg2;	// IMP=0x000000000007fff8
- (void)determineStatusOfMovieWithAdamID:(id)arg1:(id)arg2;	// IMP=0x000000000007ffdb
- (void)removeItemFromFavoritesWithAdamID:(id)arg1;	// IMP=0x000000000007ff0d
- (void)addItemToFavoritesWithAdamID:(id)arg1;	// IMP=0x000000000007fe3f
- (void)loadImageURLs:(id)arg1:(id)arg2;	// IMP=0x000000000007f606
- (void)loadCountOfFavoriteMovies:(id)arg1;	// IMP=0x000000000007f5ec
- (void)loadCountOfFavoriteShows:(id)arg1;	// IMP=0x000000000007f5d2
- (void)_loadCountOfFavoritesInCategory:(unsigned long long)arg1 withCallback:(id)arg2;	// IMP=0x000000000007f235
- (void)refreshRentals:(id)arg1;	// IMP=0x000000000007ecdd
- (void)loadRentals:(id)arg1;	// IMP=0x000000000007e7d9
- (void)buyWithActionParams:(id)arg1:(id)arg2;	// IMP=0x000000000007dce8
@property(readonly, nonatomic) NSDictionary *activeAccount;
@property(readonly, nonatomic) NSString *PCID;
- (id)DSID;	// IMP=0x000000000007dc21
- (void)dealloc;	// IMP=0x000000000007db1f
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000000007ce43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

