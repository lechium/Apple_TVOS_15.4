//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isHearstConnected;	// 16 = 0x10
    _Bool _isJarvisConnected;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x002000000004f238
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x001000000004f232
- (void)_systemControllerDied:(id)arg1;	// IMP=0x001000000004f13a
- (void)_notifyJarvisConnectionState:(_Bool)arg1;	// IMP=0x001000000004efda
- (void)_notifyHearstConnectionState:(_Bool)arg1;	// IMP=0x001000000004ee8a
- (_Bool)_fetchJarvisConnectionState;	// IMP=0x001000000004ee82
- (_Bool)_fetchHearstConnectionState;	// IMP=0x001000000004ee7a
- (void)_stopMonitoring;	// IMP=0x001000000004edfb
- (void)_startObservingAudioRouteChange;	// IMP=0x001000000004edf5
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000004ecc2
- (void)carPlayIsConnectedDidChange:(id)arg1;	// IMP=0x001000000004ebe2
- (void)carPlayAuxStreamSupportDidChange:(id)arg1;	// IMP=0x001000000004ead9
- (void)preferredExternalRouteDidChange:(id)arg1;	// IMP=0x001000000004e9cc
- (_Bool)carPlayConnected;	// IMP=0x001000000004e9c4
- (_Bool)jarvisConnected;	// IMP=0x001000000004e910
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000004e858
- (_Bool)hearstConnected;	// IMP=0x001000000004e7a4
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x001000000004e6ec
- (id)init;	// IMP=0x001000000004e654

@end

