//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameKitServices/VideoConferenceDelegate-Protocol.h>

@class GKVoiceChatDictionary, GKVoiceChatService, NSLock, NSRecursiveLock, VideoConference;
@protocol GKVoiceChatClient;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate>
{
    id <GKVoiceChatClient> client;	// 8 = 0x8
    _Bool outputMeteringEnabled;	// 16 = 0x10
    _Bool inputMeteringEnabled;	// 17 = 0x11
    _Bool microphoneMuted;	// 18 = 0x12
    unsigned int curCallID;	// 20 = 0x14
    int state;	// 24 = 0x18
    GKVoiceChatDictionary *incomingCallDict;	// 32 = 0x20
    GKVoiceChatDictionary *outgoingCallDict;	// 40 = 0x28
    struct tagCONNRESULT currentConnResult;	// 48 = 0x30
    NSRecursiveLock *stateLock;	// 368 = 0x170
    NSLock *clientLock;	// 376 = 0x178
    GKVoiceChatService *wrapperService;	// 384 = 0x180
    _Bool forceNoICE;	// 392 = 0x188
    VideoConference *conf;	// 400 = 0x190
    int chatMode;	// 408 = 0x198
    _Bool focus;	// 412 = 0x19c
}

+ (id)defaultVoiceChatService;	// IMP=0x00000000000525db
@property GKVoiceChatService *wrapperService; // @synthesize wrapperService;
@property int state; // @synthesize state;
@property(nonatomic) id client; // @synthesize client;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;	// IMP=0x00000000000565b6
- (id)localDisplayNameForCallID:(unsigned int)arg1;	// IMP=0x00000000000565a0
@property(readonly) double remoteBitrate;
@property(readonly) double remoteFramerate;
@property(readonly) double localBitrate;
@property(readonly) double localFramerate;
@property(nonatomic) void *remoteVideoLayer;
@property(nonatomic) void *localVideoLayer;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000055cf5
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x0000000000055a5d
- (void)forceNoICE:(_Bool)arg1;	// IMP=0x0000000000055a3e
@property(getter=isFocus) _Bool focus; // @synthesize focus;
@property int chatMode; // @synthesize chatMode;
@property float remoteParticipantVolume;
@property(getter=isMicrophoneMuted) _Bool microphoneMuted;
@property(readonly, nonatomic) float inputMeterLevel;
@property(readonly, nonatomic) float outputMeterLevel;
@property(getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled;
@property(getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled;
- (_Bool)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;	// IMP=0x00000000000556ac
- (_Bool)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;	// IMP=0x00000000000555a9
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2 withCallID:(unsigned int)arg3;	// IMP=0x000000000005531d
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2;	// IMP=0x0000000000055307
- (id)createInvite:(id *)arg1 toParticipant:(id)arg2 callID:(unsigned int *)arg3;	// IMP=0x000000000005523a
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000055049
- (_Bool)inviteIsValid:(id)arg1;	// IMP=0x0000000000055034
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;	// IMP=0x00000000000539ae
- (void)resetState;	// IMP=0x0000000000053927
- (void)informClientVoiceChatDidStop:(id)arg1;	// IMP=0x000000000005386a
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;	// IMP=0x00000000000537c0
- (void)informClientVoiceChatDidNotStart:(id)arg1;	// IMP=0x0000000000053779
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;	// IMP=0x0000000000053709
- (void)informClientVoiceChatDidStart:(id)arg1;	// IMP=0x000000000005369f
- (void)informClientOfInviteFromParticipant:(id)arg1;	// IMP=0x000000000005359d
- (void)denyCallID:(unsigned int)arg1;	// IMP=0x0000000000053215
- (_Bool)acceptCallID:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000052e5a
- (void)stopVoiceChatWithParticipantID:(id)arg1;	// IMP=0x0000000000052e2b
- (void)stopVoiceChatProc:(id)arg1;	// IMP=0x0000000000052a6a
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005271f
- (void)dealloc;	// IMP=0x0000000000052695
- (void)cleanup;	// IMP=0x0000000000052649
- (id)init;	// IMP=0x00000000000523e8

@end

