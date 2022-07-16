//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KCPairingChannelContext, NSString, NSXPCConnection, OTControl, OTJoiningConfiguration;

@interface KCPairingChannel : NSObject
{
    _Bool _needInitialSync;	// 8 = 0x8
    _Bool _initiator;	// 9 = 0x9
    _Bool _acceptorWillSendInitialSyncCredentials;	// 10 = 0xa
    _Bool _testFailSOS;	// 11 = 0xb
    _Bool _testFailOctagon;	// 12 = 0xc
    _Bool _sessionSupportsSOS;	// 13 = 0xd
    _Bool _sessionSupportsOctagon;	// 14 = 0xe
    unsigned int _counter;	// 16 = 0x10
    unsigned int _acceptorInitialSyncCredentialsFlags;	// 20 = 0x14
    KCPairingChannelContext *_peerVersionContext;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    OTControl *_otControl;	// 40 = 0x28
    NSString *_contextID;	// 48 = 0x30
    CDUnknownBlockType _nextOctagonState;	// 56 = 0x38
    CDUnknownBlockType _nextState;	// 64 = 0x40
    OTJoiningConfiguration *_joiningConfiguration;	// 72 = 0x48
}

+ (id)pairingChannelDecompressData:(id)arg1;	// IMP=0x00000000000083f1
+ (id)pairingChannelCompressData:(id)arg1;	// IMP=0x0000000000008279
+ (_Bool)isSupportedPlatform;	// IMP=0x0000000000008271
+ (id)pairingChannelAcceptor:(id)arg1;	// IMP=0x0000000000008222
+ (id)pairingChannelInitiator:(id)arg1;	// IMP=0x00000000000081d0
- (void).cxx_destruct;	// IMP=0x00000000000051e6
@property _Bool sessionSupportsOctagon; // @synthesize sessionSupportsOctagon=_sessionSupportsOctagon;
@property _Bool sessionSupportsSOS; // @synthesize sessionSupportsSOS=_sessionSupportsSOS;
@property(nonatomic) _Bool testFailOctagon; // @synthesize testFailOctagon=_testFailOctagon;
@property(nonatomic) _Bool testFailSOS; // @synthesize testFailSOS=_testFailSOS;
@property(retain, nonatomic) OTJoiningConfiguration *joiningConfiguration; // @synthesize joiningConfiguration=_joiningConfiguration;
@property(copy) CDUnknownBlockType nextState; // @synthesize nextState=_nextState;
@property(copy) CDUnknownBlockType nextOctagonState; // @synthesize nextOctagonState=_nextOctagonState;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) OTControl *otControl; // @synthesize otControl=_otControl;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property unsigned int acceptorInitialSyncCredentialsFlags; // @synthesize acceptorInitialSyncCredentialsFlags=_acceptorInitialSyncCredentialsFlags;
@property _Bool acceptorWillSendInitialSyncCredentials; // @synthesize acceptorWillSendInitialSyncCredentials=_acceptorWillSendInitialSyncCredentials;
@property unsigned int counter; // @synthesize counter=_counter;
@property _Bool initiator; // @synthesize initiator=_initiator;
@property KCPairingChannelContext *peerVersionContext; // @synthesize peerVersionContext=_peerVersionContext;
@property(readonly) _Bool needInitialSync; // @synthesize needInitialSync=_needInitialSync;
- (void)setSessionSupportsOctagonForTesting:(_Bool)arg1;	// IMP=0x0000000000005053
- (void)setOctagonMessageFailForTesting:(_Bool)arg1;	// IMP=0x0000000000005041
- (void)setSOSMessageFailForTesting:(_Bool)arg1;	// IMP=0x000000000000502f
- (void)setConfiguration:(id)arg1;	// IMP=0x000000000000501d
- (void)setControlObject:(id)arg1;	// IMP=0x000000000000500b
- (void)setXPCConnectionObject:(id)arg1;	// IMP=0x0000000000004ff9
- (id)exchangePacket:(id)arg1 complete:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000004e4a
- (void)exchangePacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004b44
- (void)validateStart:(CDUnknownBlockType)arg1;	// IMP=0x000000000000499d
- (_Bool)ensureControlChannel;	// IMP=0x000000000000484a
- (void)acceptorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000000000046bc
- (void)acceptorSecondOctagonPacket:(id)arg1 reply:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004228
- (void)acceptorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003ea3
- (void)acceptorFirstOctagonPacket:(id)arg1 reply:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003b20
- (void)acceptorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003598
- (void)initiatorFourthPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000000000032a1
- (void)initiatorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002c75
- (void)initiatorCompleteSecondPacketOctagon:(id)arg1 application:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000000000029aa
- (void)initiatorCompleteSecondPacketWithSOS:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002791
- (void)initiatorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002411
- (void)initiatorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002089
- (void)waitForOctagonUpgrade;	// IMP=0x0000000000002010
- (void)setNextStateError:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001e8f
- (void)oneStepTooMany:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001dcc
- (id)initAsInitiator:(_Bool)arg1 version:(id)arg2;	// IMP=0x00000000000019ff

@end
