//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCConnectionManagerDelegate-Protocol.h>
#import <AVConference/VCIDSSessionInfoSynchronizerDelegate-Protocol.h>

@class NSString, VCIDSSessionInfoSynchronizer;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDSMultiLink <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate>
{
    VCIDSSessionInfoSynchronizer *_sessionInfoSynchronizer;	// 176 = 0xb0
    _Bool _isWiFiAssistActive;	// 184 = 0xb8
    _Bool _oneToOneModeEnabled;	// 185 = 0xb9
}

@property(readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer; // @synthesize sessionInfoSynchronizer=_sessionInfoSynchronizer;
- (void)VCIDSSessionInfoSynchronizer:(void *)arg1 sendVCIDSSessionInfoRequest:(id)arg2;	// IMP=0x000000000030047c
- (void)logSignalStrength;	// IMP=0x0000000000300476
- (void)setRemoteDeviceVersionIDS;	// IMP=0x00000000003002ac
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000003000e7
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000002fff22
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000002ffd5d
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000002ffb3d
- (void)setOneToOneModeEnabled:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00000000002ff970
- (void)optIntoExistingSubscribedStreamsForConnection:(id)arg1;	// IMP=0x00000000002ff953
- (void)optOutAllStreamsForConnection:(id)arg1;	// IMP=0x00000000002ff8db
- (void)resetParticipantGenerationCounter;	// IMP=0x00000000002ff8be
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x00000000002ff8a1
- (void)didMediaQualityDegrade:(_Bool)arg1;	// IMP=0x00000000002ff807
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x00000000002ff6da
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;	// IMP=0x00000000002ff3ae
- (void)discardConnection:(id)arg1;	// IMP=0x00000000002ff0dd
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x00000000002fef61
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;	// IMP=0x00000000002fec13
- (void)setDefaultLink:(id)arg1;	// IMP=0x00000000002fe9fb
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x00000000002fe806
- (void)resetActiveConnection;	// IMP=0x00000000002fe7ed
- (void)setQuickRelayServerProvider:(int)arg1;	// IMP=0x00000000002fe7bd
- (void)handleProbingResponse:(id)arg1;	// IMP=0x00000000002fe747
- (void)handleSessionInfoResponse:(id)arg1;	// IMP=0x00000000002fe72a
- (void)handleLinkDisconnectedWithInfo:(id)arg1;	// IMP=0x00000000002fe43f
- (void)handleLinkConnectedWithInfo:(id)arg1;	// IMP=0x00000000002fdfd3
- (void)onStop;	// IMP=0x00000000002fdfb3
- (int)onStart;	// IMP=0x00000000002fdf90
- (void)dealloc;	// IMP=0x00000000002fdf09
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5;	// IMP=0x00000000002fdd9c
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x00000000002fdd72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
