//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVScanningDelegate-Protocol.h>

@class AVKeyValueObserverCollection, AVPlayer, AVTimeRangeCollection, CADisplayLink, NSString;

__attribute__((visibility("hidden")))
@interface AVStandardScanningDelegate : NSObject <AVScanningDelegate>
{
    _Bool _scanningActive;	// 8 = 0x8
    _Bool _canPlayerServiceScan;	// 9 = 0x9
    _Bool _playerServicingScan;	// 10 = 0xa
    _Bool _starting;	// 11 = 0xb
    _Bool _hasIFrames;	// 12 = 0xc
    _Bool _waitingForPreroll;	// 13 = 0xd
    _Bool _enableExtraLogging;	// 14 = 0xe
    AVTimeRangeCollection *_interstitialTimeRangeCollection;	// 16 = 0x10
    AVPlayer *_player;	// 24 = 0x18
    AVKeyValueObserverCollection *_kvo;	// 32 = 0x20
    CDUnknownBlockType _imageBlock;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    double _elapsedDisplayTimeWhenScanStarted;	// 56 = 0x38
    double _clockTimeWhenScanStarted;	// 64 = 0x40
    double _rate;	// 72 = 0x48
    double _minTime;	// 80 = 0x50
    double _maxTime;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000010b8c6
@property(nonatomic) _Bool enableExtraLogging; // @synthesize enableExtraLogging=_enableExtraLogging;
@property(nonatomic, getter=isWaitingForPreroll) _Bool waitingForPreroll; // @synthesize waitingForPreroll=_waitingForPreroll;
@property(nonatomic) _Bool hasIFrames; // @synthesize hasIFrames=_hasIFrames;
@property(nonatomic, getter=isStarting) _Bool starting; // @synthesize starting=_starting;
@property(nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) double minTime; // @synthesize minTime=_minTime;
@property(nonatomic, getter=isPlayerServicingScan) _Bool playerServicingScan; // @synthesize playerServicingScan=_playerServicingScan;
@property(nonatomic) _Bool canPlayerServiceScan; // @synthesize canPlayerServiceScan=_canPlayerServiceScan;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) double clockTimeWhenScanStarted; // @synthesize clockTimeWhenScanStarted=_clockTimeWhenScanStarted;
@property(nonatomic) double elapsedDisplayTimeWhenScanStarted; // @synthesize elapsedDisplayTimeWhenScanStarted=_elapsedDisplayTimeWhenScanStarted;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(retain, nonatomic) AVKeyValueObserverCollection *kvo; // @synthesize kvo=_kvo;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(nonatomic, getter=isScanningActive) _Bool scanningActive; // @synthesize scanningActive=_scanningActive;
- (void)stopScanningPlayerViewController:(id)arg1;	// IMP=0x000000000010b6f7
- (void)_stopWaitingForPreroll;	// IMP=0x000000000010b6e3
- (long long)playerViewController:(id)arg1 scanFromElapsedTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3 imageBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000010b11e
- (void)_didFireDisplayLink:(id)arg1;	// IMP=0x000000000010ab16
- (void)setElapsedTimeWhenScanStarted:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000010aa61
@property(readonly, nonatomic) double _currentScanningTimeInterval;
- (void)_updateMinMaxTimes;	// IMP=0x000000000010a5a5
@property(readonly, nonatomic) double _clockTimeElapsed;
- (void)startDisplayLink;	// IMP=0x000000000010a331
- (void)invalidate;	// IMP=0x000000000010a203
- (void)dealloc;	// IMP=0x000000000010a1a8
- (id)init;	// IMP=0x000000000010a017

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

