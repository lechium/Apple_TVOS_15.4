//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/CSAudioServerCrashEventProvidingDelegate-Protocol.h>

@class NSString;

@interface CSAudioServerCrashMonitor <CSAudioServerCrashEventProvidingDelegate>
{
    unsigned long long _serverState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000eb64f
@property(nonatomic) unsigned long long serverState; // @synthesize serverState=_serverState;
- (void)audioServerCrashEventProvidingLostMediaserverd;	// IMP=0x00000000000eb876
- (void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2;	// IMP=0x00000000000eb7fb
- (void)_didReceiveMediaserverNotification:(unsigned long long)arg1;	// IMP=0x00000000000eb77d
- (void)_mediaserverdDidRestart;	// IMP=0x00000000000eb766
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000eb6e7
- (id)init;	// IMP=0x00000000000eb6a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

