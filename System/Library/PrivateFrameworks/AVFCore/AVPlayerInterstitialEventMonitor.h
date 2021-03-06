//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerInterstitialEvent, AVQueuePlayer, AVWeakReference, NSArray;

@interface AVPlayerInterstitialEventMonitor : NSObject
{
    AVPlayer *_primaryPlayer;	// 8 = 0x8
    AVQueuePlayer *_interstitialPlayer;	// 16 = 0x10
    AVWeakReference *_weakReference;	// 24 = 0x18
    struct OpaqueFigPlayerInterstitialCoordinator *_observedCoord;	// 32 = 0x20
}

+ (id)interstitialEventMonitorWithPrimaryPlayer:(id)arg1;	// IMP=0x0000000000015891
- (void).cxx_destruct;	// IMP=0x0000000000015e6a
- (void)_removeMonitorListeners;	// IMP=0x0000000000015dbb
- (void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator *)arg1;	// IMP=0x0000000000015bc1
@property(readonly) AVPlayerInterstitialEvent *currentEvent;
@property(readonly) NSArray *events;
@property(readonly, nonatomic) AVQueuePlayer *interstitialPlayer;
@property(readonly, nonatomic) __weak AVPlayer *primaryPlayer;
- (void)dealloc;	// IMP=0x0000000000015a86
- (id)init;	// IMP=0x0000000000015a0f
- (id)initWithPrimaryPlayer:(id)arg1;	// IMP=0x00000000000158c0

@end

