//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isHearstConnected;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000091e3b
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x0010000000091e35
- (void)_systemControllerDied:(id)arg1;	// IMP=0x0010000000091d5e
- (void)_notifyHearstConnectionState:(_Bool)arg1;	// IMP=0x0010000000091c0e
- (_Bool)_fetchHearstConnectionState;	// IMP=0x0010000000091c06
- (void)_stopMonitoring;	// IMP=0x0010000000091b87
- (void)_startObservingAudioRouteChange;	// IMP=0x0010000000091b81
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000091a6d
- (void)activeAudioRouteDidChange:(id)arg1;	// IMP=0x0010000000091960
- (_Bool)jarvisConnected;	// IMP=0x0010000000091958
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x00100000000918b8
- (_Bool)hearstConnected;	// IMP=0x0010000000091804
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000009174c
- (id)init;	// IMP=0x00100000000916ed

@end

