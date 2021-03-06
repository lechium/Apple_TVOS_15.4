//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS
{
    VCDatagramChannelIDS *_datagramChannel;	// 168 = 0xa8
    int _socket;	// 176 = 0xb0
    NSString *_destination;	// 184 = 0xb8
    _Bool _requireEncryptionInfo;	// 192 = 0xc0
    unsigned int _linkPreferSuggestionFromDefaults;	// 196 = 0xc4
}

@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void)handleReportingBlob:(id)arg1;	// IMP=0x000000000011ef20
- (void)handleLinkPreferSuggestion:(id)arg1;	// IMP=0x000000000011edeb
- (void)setQuickRelayServerProvider:(int)arg1;	// IMP=0x000000000011ede5
- (void)handleChannelInfoReport:(id)arg1;	// IMP=0x000000000011ec31
- (void)setConnectionSetupTime;	// IMP=0x000000000011eb08
- (void)handleLinkConstrainsChanged:(id)arg1;	// IMP=0x000000000011eaee
- (void)handleCellularSoMaskChanged:(id)arg1;	// IMP=0x000000000011eae8
- (void)handleProbingResponse:(id)arg1;	// IMP=0x000000000011ea87
- (void)handleSessionInfoResponse:(id)arg1;	// IMP=0x000000000011ea81
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;	// IMP=0x000000000011e97a
- (void)handleIDSEncryptionInfoEvent:(id)arg1;	// IMP=0x000000000011e873
- (void)handleCellularMTUChanged:(id)arg1;	// IMP=0x000000000011e859
- (void)handleRATChanged:(id)arg1;	// IMP=0x000000000011e6ce
- (void)handlePreConnectionDataReceived:(id)arg1;	// IMP=0x000000000011e6b4
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;	// IMP=0x000000000011e5b6
- (void)handleLinkDisconnectedWithInfo:(id)arg1;	// IMP=0x000000000011e555
- (void)handleLinkConnectedWithInfo:(id)arg1;	// IMP=0x000000000011e4f4
- (void)onStop;	// IMP=0x000000000011e4ee
- (int)onStart;	// IMP=0x000000000011e4e6
- (id)connectionSetupPiggybackBlob;	// IMP=0x000000000011e3ae
- (void)setPiggybackBlobPreference;	// IMP=0x000000000011e240
- (void)setConnectionSetupPiggybackBlob:(id)arg1;	// IMP=0x000000000011e079
- (void)startMKMRecoveryForParticipantIDs:(id)arg1;	// IMP=0x000000000011df8a
- (void)cleanupDatagramChannel;	// IMP=0x000000000011df30
- (void)stop;	// IMP=0x000000000011de65
- (void)start;	// IMP=0x000000000011d874
- (unsigned int)remoteDeviceVersionIDS;	// IMP=0x000000000011d6d8
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;	// IMP=0x000000000011cfd6
- (void)processDatagramChannelEventInfo:(id)arg1;	// IMP=0x000000000011cf3a
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000011cf12
- (id)datagramChannel;	// IMP=0x000000000011cef4
- (void)dealloc;	// IMP=0x000000000011ce7b
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4;	// IMP=0x000000000011ce02
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x000000000011cde8

@end

