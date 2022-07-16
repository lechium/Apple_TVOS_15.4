//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVPlayerInterstitialEventController, AVPlayerInterstitialEventMonitor, AVTimeRange, AVTimeRangeCollection;
@protocol AVInterstitialControllerDelegateManager, NSObject;

__attribute__((visibility("hidden")))
@interface AVInterstitialController : NSObject
{
    id <NSObject> _playerItemTimeJumpedObserver;	// 8 = 0x8
    id <NSObject> _playerInterstitialEventsChangedObserver;	// 16 = 0x10
    id <NSObject> _playerInterstitialCurrentEventChangedObserver;	// 24 = 0x18
    AVPlayer *_player;	// 32 = 0x20
    AVPlayer *_interstitialPlayer;	// 40 = 0x28
    id <AVInterstitialControllerDelegateManager> _delegateManager;	// 48 = 0x30
    AVTimeRangeCollection *_interstitialTimeRangeCollection;	// 56 = 0x38
    double _continuationTimeAfterInterstitial;	// 64 = 0x40
    CDUnknownBlockType _didEnterInterstitialTimeRangeBlock;	// 72 = 0x48
    CDUnknownBlockType _didLeaveInterstitialTimeRangeBlock;	// 80 = 0x50
    CDUnknownBlockType _didLeaveRequiredInterstitialTimeRangeBlock;	// 88 = 0x58
    CDUnknownBlockType _skipInterstitialTimeRangeBlock;	// 96 = 0x60
    AVPlayerInterstitialEventMonitor *_eventMonitor;	// 104 = 0x68
    AVPlayerInterstitialEventController *_eventController;	// 112 = 0x70
    AVObservationController *_kvo;	// 120 = 0x78
    AVObservationController *_kvoPlayerItem;	// 128 = 0x80
    AVTimeRange *_interstitialTimeRangeInProgress;	// 136 = 0x88
    id _interstitialBoundaryTimeObserver;	// 144 = 0x90
}

+ (id)interstitialQueue;	// IMP=0x0000000000013b8f
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1 reversePlaybackEndTime:(CDStruct_1b6d18a9)arg2 forwardPlaybackEndTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000000136af
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1;	// IMP=0x000000000010c129
- (void).cxx_destruct;	// IMP=0x00000000000116e5
@property(retain, nonatomic) id interstitialBoundaryTimeObserver; // @synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver;
@property(retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // @synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress;
@property(retain, nonatomic) AVObservationController *kvoPlayerItem; // @synthesize kvoPlayerItem=_kvoPlayerItem;
@property(retain, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(retain, nonatomic) AVPlayerInterstitialEventController *eventController; // @synthesize eventController=_eventController;
@property(retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(copy, nonatomic) CDUnknownBlockType skipInterstitialTimeRangeBlock; // @synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveRequiredInterstitialTimeRangeBlock; // @synthesize didLeaveRequiredInterstitialTimeRangeBlock=_didLeaveRequiredInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveInterstitialTimeRangeBlock; // @synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterInterstitialTimeRangeBlock; // @synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock;
@property(readonly, nonatomic) double continuationTimeAfterInterstitial; // @synthesize continuationTimeAfterInterstitial=_continuationTimeAfterInterstitial;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(retain, nonatomic) id <AVInterstitialControllerDelegateManager> delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayer *interstitialPlayer; // @synthesize interstitialPlayer=_interstitialPlayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (double)_pendingTimeBoundary;	// IMP=0x00000000000114ca
- (void)_setPendingTimeBoundary:(double)arg1;	// IMP=0x0000000000011426
- (void)didPresentInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000111a4
- (void)willPresentInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000010fcd
- (void)skipInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000010d85
- (void)didBeginOrResumePlayback;	// IMP=0x0000000000010d27
- (_Bool)_shouldSkipInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000010c86
- (id)nextInterstitialTimeRange;	// IMP=0x0000000000010c1d
@property(readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
- (void)_stopObservingInterstitialTimeRanges;	// IMP=0x0000000000010a1c
- (void)_startObservingInterstitialTimeRanges;	// IMP=0x0000000000010991
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;	// IMP=0x0000000000010924
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;	// IMP=0x00000000000108f6
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1;	// IMP=0x000000000001084c
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)arg1;	// IMP=0x0000000000010800
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000106a9
- (double)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x000000000001030f
@property(readonly, nonatomic) _Bool requiresLinearPlayback;
@property(readonly, nonatomic) _Bool shouldEnforceInterstitialPolicy;
- (void)_updateInterstitialTimeRangeCollection;	// IMP=0x000000000000fedc
- (void)cancelCurrentPlayerInterstitialEvent;	// IMP=0x000000000000fdd2
@property(readonly, nonatomic) double timeRemainingInCurrentInterstitial;
- (double)elapsedTimeWithinCurrentInterstitial;	// IMP=0x000000000000fc40
- (double)elapsedTimeForInterstitialPlayer;	// IMP=0x000000000000fb3d
- (_Bool)isLive;	// IMP=0x000000000000fa9b
- (id)currentOrEstimatedDate;	// IMP=0x000000000000fa13
@property(readonly, nonatomic) double currentDisplayTime;
- (double)currentTime;	// IMP=0x000000000000f8a8
- (id)currentItem;	// IMP=0x000000000000f858
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x000000000000f801
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x000000000000f7aa
- (void)invalidate;	// IMP=0x000000000000f537
- (void)dealloc;	// IMP=0x000000000000f4f9
- (id)init;	// IMP=0x000000000000f0b3
- (_Bool)loadDurationOfCurrentOrNextInterstitialEvent:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012c75
- (id)timeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x0000000000012a4b
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x000000000001286e
- (void)updateSynthesizedInterstitialTimeRanges;	// IMP=0x0000000000012713
- (id)_copySynthesizedInterstitialTimeRanges;	// IMP=0x0000000000012349

@end

