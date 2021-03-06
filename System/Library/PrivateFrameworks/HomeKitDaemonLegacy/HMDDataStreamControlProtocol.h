//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSNumber, NSString;

@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    _Bool _helloMessageResponseReceived;	// 8 = 0x8
    _Bool _controlHandshakeComplete;	// 9 = 0x9
    NSNumber *_peerDataStreamProtocolVersion;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    NSNumber *_pendingHelloMessageIdentifier;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000a6d1da
- (void).cxx_destruct;	// IMP=0x0000000000a6cfa9
@property(nonatomic) _Bool controlHandshakeComplete; // @synthesize controlHandshakeComplete=_controlHandshakeComplete;
@property(retain, nonatomic) NSNumber *pendingHelloMessageIdentifier; // @synthesize pendingHelloMessageIdentifier=_pendingHelloMessageIdentifier;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(retain, nonatomic) NSNumber *peerDataStreamProtocolVersion; // @synthesize peerDataStreamProtocolVersion=_peerDataStreamProtocolVersion;
@property(nonatomic) _Bool helloMessageResponseReceived; // @synthesize helloMessageResponseReceived=_helloMessageResponseReceived;
- (void)_sendVersionRequestOnDataStream:(id)arg1;	// IMP=0x0000000000a6ce33
- (void)_sendHelloMessageOnDataStream:(id)arg1;	// IMP=0x0000000000a6cd56
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000a6ca06
- (_Bool)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2;	// IMP=0x0000000000a6c8d1
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000a6c555
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000a6c54f
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000a6c549
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x0000000000a6c543
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x0000000000a6c53d
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x0000000000a6c449
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithLogIdentifier:(id)arg1;	// IMP=0x0000000000a6c39f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

