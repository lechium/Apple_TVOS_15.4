//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VideoConferenceDelegate-Protocol.h>

@class ICEResultWaitQueue, NSMutableArray, VideoConference;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VideoConferenceManager : NSObject <VideoConferenceDelegate>
{
    unsigned char _clientUUID[16];	// 8 = 0x8
    struct _opaque_pthread_mutex_t stateLock;	// 24 = 0x18
    struct _opaque_pthread_mutex_t sipLock;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 152 = 0x98
    NSMutableArray *vcList;	// 160 = 0xa0
    VideoConference *activeConference;	// 168 = 0xa8
    VideoConference *conferenceWithMic;	// 176 = 0xb0
    ICEResultWaitQueue *resultQueue;	// 184 = 0xb8
    struct tagHANDLE *hSIP;	// 192 = 0xc0
    int sipRefCount;	// 200 = 0xc8
    id _vtpWrapper;	// 208 = 0xd0
    _Bool isVTPInitialized;	// 216 = 0xd8
    id _networkAgent;	// 224 = 0xe0
}

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;	// IMP=0x00000000001b3c5d
+ (id)defaultVideoConferenceManager;	// IMP=0x00000000001b3abc
@property(readonly) NSMutableArray *vcList; // @synthesize vcList;
@property(readonly) ICEResultWaitQueue *resultQueue; // @synthesize resultQueue;
@property VideoConference *activeConference; // @synthesize activeConference;
- (void)getClientUUID:(unsigned char [16])arg1;	// IMP=0x00000000001b7be5
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;	// IMP=0x00000000001b7a8a
- (void)pauseVideoConferences:(_Bool)arg1;	// IMP=0x00000000001b76ee
- (id)conferenceForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000001b7458
- (id)conferenceForParticipantID:(id)arg1;	// IMP=0x00000000001b72b5
- (_Bool)hasVideoConference:(id)arg1;	// IMP=0x00000000001b726b
- (id)conferenceForCallID:(unsigned int)arg1;	// IMP=0x00000000001b7122
@property VideoConference *conferenceWithMic;
- (void)removeVideoConference:(id)arg1;	// IMP=0x00000000001b6cfd
- (void)addVideoConference:(id)arg1;	// IMP=0x00000000001b6bb9
- (void)stopSIPWithTransportType:(unsigned int)arg1;	// IMP=0x00000000001b680f
- (void)cleanupVTP;	// IMP=0x00000000001b65a0
- (_Bool)isSIPHandleValid:(struct tagHANDLE *)arg1;	// IMP=0x00000000001b6498
- (void)startSIPWithPacketMultiplexMode:(int)arg1 transportType:(unsigned int)arg2;	// IMP=0x00000000001b62e1
- (void)createSIPWithPacketMultiplexMode:(int)arg1;	// IMP=0x00000000001b5bb9
- (void)setupVTPCallback;	// IMP=0x00000000001b58e0
- (struct tagHANDLE *)SIPHandle;	// IMP=0x00000000001b58b3
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001b57c7
- (void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned int)arg2;	// IMP=0x00000000001b571f
- (void)videoConference:(id)arg1 localAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000001b5617
- (void)videoConference:(id)arg1 remoteAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001b552e
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001b546a
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;	// IMP=0x00000000001b53c2
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;	// IMP=0x00000000001b51c7
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;	// IMP=0x00000000001b50df
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x00000000001b4fbc
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x00000000001b4ef9
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;	// IMP=0x00000000001b4e36
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x00000000001b4d73
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(_Bool)arg2;	// IMP=0x00000000001b4cbe
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x00000000001b4c08
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x00000000001b4b52
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00000000001b4ad2
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x00000000001b4a52
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001b4978
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000001b489e
- (void)videoConference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001b47b5
- (void)videoConference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001b46cc
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;	// IMP=0x00000000001b4624
- (void)videoConference:(id)arg1 remoteMediaStalled:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001b453b
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000001b4424
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseVideo:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001b431d
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 isSendingAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001b4216
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001b410f
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x00000000001b402d
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;	// IMP=0x00000000001b3f11
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000001b3e19
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;	// IMP=0x00000000001b3d55
- (id)init;	// IMP=0x00000000001b3b2a
- (void)registerBlocksForConference;	// IMP=0x000000000031bca1

@end

