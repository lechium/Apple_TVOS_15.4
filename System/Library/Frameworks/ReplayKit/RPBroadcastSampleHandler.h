//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReplayKit/RPExtensionContextDelegate-Protocol.h>

@class NSString;
@protocol RPBroadcastDaemonProtocol;

@interface RPBroadcastSampleHandler <RPExtensionContextDelegate>
{
    id <RPBroadcastDaemonProtocol> _daemonProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c141
@property(retain, nonatomic) id <RPBroadcastDaemonProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
- (void)_setupListenerWithEndpoint:(id)arg1;	// IMP=0x000000000000c116
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c0cc
- (void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2;	// IMP=0x000000000000c0c6
- (void)_processPayloadWithVideoSample:(id)arg1;	// IMP=0x000000000000c0c0
- (void)_processPayload:(id)arg1;	// IMP=0x000000000000bda0
- (void)extensionContext:(id)arg1 setEndpoint:(id)arg2;	// IMP=0x000000000000bd8b
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000000bd38
- (void)finishBroadcastWithError:(id)arg1;	// IMP=0x000000000000bc20
- (void)updateBroadcastURL:(id)arg1;	// IMP=0x000000000000bc03
- (void)updateServiceInfo:(id)arg1;	// IMP=0x000000000000bbe6
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x000000000000bbe0
- (void)broadcastPaused;	// IMP=0x000000000000bbda
- (void)broadcastResumed;	// IMP=0x000000000000bbd4
- (void)broadcastFinished;	// IMP=0x000000000000bbce
- (void)broadcastStartedWithSetupInfo:(id)arg1;	// IMP=0x000000000000bbc8
- (id)videoQueue;	// IMP=0x000000000000bb71
- (id)audioQueue;	// IMP=0x000000000000bb1a
- (id)group;	// IMP=0x000000000000bacc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

