//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSInputStream, NSMutableData, NSOutputStream, NSString, NSUUID;

@interface UANetworkReplayController
{
    NSInputStream *_inputStream;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
    NSMutableData *_readBuffer;	// 24 = 0x18
    NSMutableData *_writeBuffer;	// 32 = 0x20
    NSString *_peerName;	// 40 = 0x28
    NSUUID *_peerUUID;	// 48 = 0x30
}

+ (_Bool)createConnection:(id)arg1 host:(id)arg2 port:(long long)arg3;	// IMP=0x00200000000780f2
- (void).cxx_destruct;	// IMP=0x0020000000078333
@property(copy) NSUUID *peerUUID; // @synthesize peerUUID=_peerUUID;
@property(copy) NSString *peerName; // @synthesize peerName=_peerName;
@property(retain) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(retain) NSMutableData *readBuffer; // @synthesize readBuffer=_readBuffer;
@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (_Bool)terminate;	// IMP=0x0010000000077ee7
- (id)statusString;	// IMP=0x0010000000077d9b
- (_Bool)sendResponse:(id)arg1;	// IMP=0x0010000000077aab
- (_Bool)processCommand:(id)arg1;	// IMP=0x0010000000076e63
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0010000000075c0d
- (id)initWithManager:(id)arg1 service:(id)arg2;	// IMP=0x001000000007597d
- (id)initWithManager:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 name:(id)arg4;	// IMP=0x001000000007571a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

