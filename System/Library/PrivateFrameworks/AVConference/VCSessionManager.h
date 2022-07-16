//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject <VCSessionDelegate>
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 16 = 0x10
    _Bool _sharingEnabled;	// 24 = 0x18
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;	// IMP=0x00000000000f58b0
+ (id)sharedInstance;	// IMP=0x00000000000f5861
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (id)participantConfigFromXPCDictionary:(id)arg1;	// IMP=0x00000000000f92df
- (void)deregisterBlocksForService;	// IMP=0x00000000000f9103
- (void)registerBlocksForService;	// IMP=0x00000000000f7358
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;	// IMP=0x00000000000f72ce
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(id)arg4;	// IMP=0x00000000000f71e2
- (void)vcSessionShouldReconnect:(id)arg1;	// IMP=0x00000000000f719c
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(_Bool)arg3;	// IMP=0x00000000000f70ea
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(_Bool)arg3;	// IMP=0x00000000000f7038
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000f6f3c
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000f6e40
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteScreenEnabledDidChange:(_Bool)arg3;	// IMP=0x00000000000f6d8e
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;	// IMP=0x00000000000f6cdc
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;	// IMP=0x00000000000f6c2a
- (void)vcSession:(id)arg1 participantID:(id)arg2 screenEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000f6b2e
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000f6a32
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000f6936
- (void)vcSession:(id)arg1 oneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000f6862
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000f67a9
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000f66f0
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000f659c
- (void)vcSession:(id)arg1 downlinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x00000000000f652b
- (void)vcSession:(id)arg1 uplinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x00000000000f64ba
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00000000000f63fa
- (void)vcSession:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000f633a
- (id)sessionForStreamToken:(unsigned int)arg1;	// IMP=0x00000000000f5c04
- (id)sessionForUUID:(id)arg1;	// IMP=0x00000000000f5adc
- (void)dealloc;	// IMP=0x00000000000f5a68
- (id)init;	// IMP=0x00000000000f59d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

