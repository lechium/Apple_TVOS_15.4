//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/ICEnvironmentMonitorObserver-Protocol.h>

@class ICMusicSubscriptionFairPlayKeyStatus, ICMusicSubscriptionStatus, ICMusicSubscriptionStatusMonitor, ICUserIdentity, NSString, SSVFairPlaySubscriptionStatus, SSVSubscriptionStatus;
@protocol NSCopying, OS_dispatch_queue;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;	// 24 = 0x18
    long long _cloudLibraryStatus;	// 32 = 0x20
    unsigned long long _cloudLibraryObservationCount;	// 40 = 0x28
    _Bool _hasLoadedMatchStatus;	// 48 = 0x30
    _Bool _hasLoadedSubscriptionAvailability;	// 49 = 0x31
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;	// 56 = 0x38
    id <NSCopying> _subscriptionStatusObservationToken;	// 64 = 0x40
    unsigned long long _matchStatusObservationCount;	// 72 = 0x48
    unsigned long long _matchStatus;	// 80 = 0x50
    _Bool _observingNetworkReachability;	// 88 = 0x58
    _Bool _hasSubscriptionLease;	// 89 = 0x59
    _Bool _shouldPlaybackRequireSubscriptionLease;	// 90 = 0x5a
    _Bool _subscriptionAvailable;	// 91 = 0x5b
    ICUserIdentity *_userIdentity;	// 96 = 0x60
    ICMusicSubscriptionFairPlayKeyStatus *_lastKnownSubscriptionFairPlayKeyStatus;	// 104 = 0x68
    SSVSubscriptionStatus *_subscriptionStatus;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_serialQueue;	// 120 = 0x78
}

+ (void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000018726e
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2;	// IMP=0x0000000000187252
+ (id)_cloudServiceStatusControllerWithUserIdentity:(id)arg1 createIfRequired:(_Bool)arg2;	// IMP=0x00000000001870ca
+ (id)cloudServiceStatusControllerWithUserIdentity:(id)arg1;	// IMP=0x0000000000186f87
+ (id)sharedController;	// IMP=0x0000000000186f57
+ (id)controllers;	// IMP=0x0000000000186f27
+ (id)globalSerialQueue;	// IMP=0x0000000000186ef7
- (void).cxx_destruct;	// IMP=0x000000000018635f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(readonly, nonatomic) ICMusicSubscriptionFairPlayKeyStatus *lastKnownSubscriptionFairPlayKeyStatus; // @synthesize lastKnownSubscriptionFairPlayKeyStatus=_lastKnownSubscriptionFairPlayKeyStatus;
- (void)_performBlockOnControllerHandlingTheSameAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000001861af
- (_Bool)_handlesSameAccountAs:(id)arg1;	// IMP=0x00000000001860c3
- (void)_copyObservationStateFrom:(id)arg1;	// IMP=0x0000000000185f3f
- (void)_endObservingMatchStatus;	// IMP=0x0000000000185ef4
- (void)_beginObservingMatchStatus;	// IMP=0x0000000000185ea9
- (void)_endObservingCloudLibraryEnabled;	// IMP=0x0000000000185e5e
- (void)_beginObservingCloudLibraryEnabled;	// IMP=0x0000000000185e13
- (void)_updateSubscriptionAvailabilityWithValue:(_Bool)arg1;	// IMP=0x0000000000185d61
- (void)_updateSubscriptionAvailability;	// IMP=0x0000000000185c20
- (void)_updateMatchStatus;	// IMP=0x0000000000185b30
- (_Bool)_currentPurchaseHistoryEnabled;	// IMP=0x0000000000185a61
- (_Bool)_currentCloudLibraryEnabled;	// IMP=0x00000000001859d3
- (_Bool)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(_Bool *)arg1;	// IMP=0x0000000000185974
- (void)endObservingSubscriptionAvailability;	// IMP=0x000000000018596e
- (void)endObservingPurchaseHistoryEnabled;	// IMP=0x0000000000185968
- (void)endObservingFairPlaySubscriptionStatus;	// IMP=0x0000000000185962
- (void)endObservingMatchStatus;	// IMP=0x00000000001858f9
- (void)endObservingCloudLibraryEnabled;	// IMP=0x0000000000185890
- (void)beginObservingSubscriptionAvailability;	// IMP=0x000000000018588a
- (void)beginObservingPurchaseHistoryEnabled;	// IMP=0x0000000000185884
- (void)beginObservingFairPlaySubscriptionStatus;	// IMP=0x000000000018587e
- (void)refreshMusicSubscriptionStatus;	// IMP=0x0000000000185868
- (void)beginObservingMatchStatus;	// IMP=0x00000000001857ff
- (void)beginObservingCloudLibraryEnabled;	// IMP=0x0000000000185796
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatus *musicSubscriptionStatus;
@property(readonly, nonatomic) _Bool shouldPlaybackRequireSubscriptionLease;
@property(readonly, nonatomic) unsigned long long matchStatus;
@property(readonly, nonatomic) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property(readonly, nonatomic, getter=isSubscriptionAvailable) _Bool subscriptionAvailable;
@property(readonly, nonatomic) _Bool hasLoadedSubscriptionAvailability;
@property(readonly, nonatomic, getter=isPurchaseHistoryEnabled) _Bool purchaseHistoryEnabled;
@property(readonly, nonatomic, getter=isCloudLibraryEnabled) _Bool cloudLibraryEnabled;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)_enableICMLErrorReasonChange:(id)arg1;	// IMP=0x0000000000185488
- (void)_userIdentityStoreDidChange:(id)arg1;	// IMP=0x000000000018536d
- (void)_cloudClientAuthenticationDidChange;	// IMP=0x0000000000185297
- (void)_allowsMusicSubscriptionDidChange:(id)arg1;	// IMP=0x00000000001851a1
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x000000000018513d
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000184f59
- (id)_initWithUserIdentity:(id)arg1;	// IMP=0x0000000000184b3f
- (id)init;	// IMP=0x0000000000184b2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
