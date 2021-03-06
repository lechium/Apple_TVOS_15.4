//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MCProfileConnectionObserver-Protocol.h>

@class MCProfileConnection, NSMutableDictionary, NSString;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_cachedSettings;	// 16 = 0x10
    MCProfileConnection *_connection;	// 24 = 0x18
    id _homeUserMonitorToken;	// 32 = 0x20
    _Bool _allowsAccountModification;	// 40 = 0x28
    _Bool _allowsDeletion;	// 41 = 0x29
    _Bool _allowsExplicitContent;	// 42 = 0x2a
    _Bool _allowsMusicSubscription;	// 43 = 0x2b
    _Bool _allowsStorePurchases;	// 44 = 0x2c
    _Bool _allowsRadioPurchases;	// 45 = 0x2d
    _Bool _allowsRadioService;	// 46 = 0x2e
    _Bool _allowsMusicVideos;	// 47 = 0x2f
    long long _maximumTVShowRatingForAgeGate;	// 48 = 0x30
    long long _maximumMovieRatingForAgeGate;	// 56 = 0x38
}

+ (id)sharedRestrictionsMonitor;	// IMP=0x00000000002c415e
- (void).cxx_destruct;	// IMP=0x00000000002c3ef9
@property(nonatomic) long long maximumMovieRatingForAgeGate; // @synthesize maximumMovieRatingForAgeGate=_maximumMovieRatingForAgeGate;
@property(nonatomic) long long maximumTVShowRatingForAgeGate; // @synthesize maximumTVShowRatingForAgeGate=_maximumTVShowRatingForAgeGate;
@property(readonly, nonatomic) _Bool allowsMusicVideos; // @synthesize allowsMusicVideos=_allowsMusicVideos;
@property(readonly, nonatomic) _Bool allowsRadioService; // @synthesize allowsRadioService=_allowsRadioService;
@property(readonly, nonatomic) _Bool allowsRadioPurchases; // @synthesize allowsRadioPurchases=_allowsRadioPurchases;
@property(readonly, nonatomic) _Bool allowsStorePurchases; // @synthesize allowsStorePurchases=_allowsStorePurchases;
@property(readonly, nonatomic) _Bool allowsMusicSubscription; // @synthesize allowsMusicSubscription=_allowsMusicSubscription;
@property(readonly, nonatomic) _Bool allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
@property(readonly, nonatomic) _Bool allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property(readonly, nonatomic) _Bool allowsAccountModification; // @synthesize allowsAccountModification=_allowsAccountModification;
- (void)_updateWithCanPostNotifications:(_Bool)arg1;	// IMP=0x00000000002c3780
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;	// IMP=0x00000000002c36e9
- (_Bool)_isRunningInStoreDemoMode;	// IMP=0x00000000002c36be
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000002c36a7
- (id)effectiveValueForSetting:(id)arg1;	// IMP=0x00000000002c3599
@property(readonly, nonatomic) long long maximumMovieRating;
@property(readonly, nonatomic) long long maximumTVShowRating;
@property(readonly, nonatomic) _Bool hasRestrictionsPasscode;
- (void)dealloc;	// IMP=0x00000000002c3440
- (id)init;	// IMP=0x00000000002c32b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

