//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSMutableDictionary, NSMutableSet, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface CULiveAudioServer : NSObject
{
    NSMutableSet *_audioSessionClients;	// 8 = 0x8
    AVAudioSession *_audioSession;	// 16 = 0x10
    RPCompanionLinkClient *_messenger;	// 24 = 0x18
    _Bool _prefSiriLED;	// 32 = 0x20
    _Bool _prefSiriVOX;	// 33 = 0x21
    NSMutableDictionary *_sessionMap;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
}

+ (void)liveActionPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b59f
+ (void)liveActionSetupRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b456
- (void).cxx_destruct;	// IMP=0x000000000006934f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_handleDataEvent:(id)arg1 options:(id)arg2;	// IMP=0x00000000000691c0
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068f3c
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068bc8
- (void)_handleActionSpeakText:(id)arg1 senderID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068938
- (void)_handleActionPlayAlert:(int)arg1 senderID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006864a
- (void)_handleActionRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006842b
- (void)_prepareSpeakText:(id)arg1 senderID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006841b
- (void)_prepareAlert:(long long)arg1 senderID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006817e
- (void)_handleActionPrepare:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067ef6
- (void)_audioSessionEnd:(id)arg1;	// IMP=0x0000000000067dc6
- (void)_audioSessionStart:(id)arg1;	// IMP=0x0000000000067b96
- (void)peerDisconnected:(id)arg1;	// IMP=0x0000000000067942
- (void)invalidate;	// IMP=0x000000000006784c
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000674f0
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000067465
- (void)dealloc;	// IMP=0x0000000000067417
- (id)init;	// IMP=0x0000000000067385

@end

