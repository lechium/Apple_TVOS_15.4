//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamDelegate-Protocol.h>

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary, NSString, VCVideoStream;
@protocol AVCVideoStreamDelegate, OS_dispatch_queue;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate>
{
    AVConferenceXPCClient *_connection;	// 8 = 0x8
    AVCMediaStreamConfig *_configuration;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
    VCVideoStream *_opaqueStream;	// 32 = 0x20
    long long _streamToken;	// 40 = 0x28
    NSDictionary *_capabilities;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 56 = 0x38
    _Bool _shouldUseXPC;	// 64 = 0x40
}

+ (id)capabilities;	// IMP=0x0000000000398200
+ (id)extractClientUplinkQualityInfoDictionary:(id)arg1;	// IMP=0x0000000000397246
+ (id)extractClientDownlinkQualityInfoDictionary:(id)arg1;	// IMP=0x0000000000397147
@property(retain, nonatomic) AVCMediaStreamConfig *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3 dictionary:(id)arg4;	// IMP=0x0000000000397f5c
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;	// IMP=0x0000000000397e13
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;	// IMP=0x0000000000397cca
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;	// IMP=0x0000000000397a23
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;	// IMP=0x000000000039790a
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;	// IMP=0x00000000003977f1
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000003976a3
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000397555
- (void)vcMediaStreamDidStop:(id)arg1;	// IMP=0x0000000000397429
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000003972c8
- (void)deregisterBlocksForDelegateNotifications;	// IMP=0x0000000000397065
- (void)registerBlocksForDelegateNotifications;	// IMP=0x0000000000395137
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) long long direction;
- (void)requestLastDecodedFrame;	// IMP=0x0000000000394261
- (id)getStats;	// IMP=0x0000000000394259
- (void)updateVideoConfiguration:(id)arg1;	// IMP=0x0000000000393d3f
- (void)resume;	// IMP=0x0000000000393bd5
- (void)pause;	// IMP=0x0000000000393a68
- (void)stop;	// IMP=0x000000000039392f
- (void)start;	// IMP=0x00000000003936a3
- (_Bool)configure:(id)arg1 error:(id *)arg2;	// IMP=0x000000000039300f
- (void)refreshLoggingParameters;	// IMP=0x0000000000392fe5
@property(nonatomic) id <AVCVideoStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000392ccf
- (void)terminateSession;	// IMP=0x0000000000392c77
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 connectionClientID:(id)arg4 callID:(id)arg5 options:(id)arg6 error:(id *)arg7;	// IMP=0x000000000039231b
- (id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003921f5
- (id)initWithNWConnectionClientID:(unsigned char [16])arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000391f2e
- (id)initWithNetworkSockets:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000391cb5
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000391a5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

