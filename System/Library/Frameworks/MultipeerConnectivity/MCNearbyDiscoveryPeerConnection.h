//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate>
{
    NSString *_remoteServiceName;	// 8 = 0x8
    NSString *_localServiceName;	// 16 = 0x10
    _Bool _connected;	// 24 = 0x18
    NSMutableData *_dataReceived;	// 32 = 0x20
    NSInputStream *_inputStream;	// 40 = 0x28
    NSOutputStream *_outputStream;	// 48 = 0x30
    _Bool _shouldSendHello;	// 56 = 0x38
    _Bool _readyToWrite;	// 57 = 0x39
    NSMutableData *_dataToSend;	// 64 = 0x40
    unsigned int _currentSequenceNumber;	// 72 = 0x48
    NSMutableData *_dataToSendHoldingQueue;	// 80 = 0x50
    NSMutableArray *_receivedDataHoldingQueue;	// 88 = 0x58
    NSMutableArray *_messageReceiptHandlerList;	// 96 = 0x60
    NSMutableArray *_messageReceiptHandlerHoldingQueue;	// 104 = 0x68
    CDUnknownBlockType _receiveDataHandler;	// 112 = 0x70
    CDUnknownBlockType _connectedHandler;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_syncQueue;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_targetQueue;	// 136 = 0x88
}

@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(copy, nonatomic) CDUnknownBlockType connectedHandler; // @synthesize connectedHandler=_connectedHandler;
@property(nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(copy, nonatomic) NSString *localServiceName; // @synthesize localServiceName=_localServiceName;
@property(copy, nonatomic) NSString *remoteServiceName; // @synthesize remoteServiceName=_remoteServiceName;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000000013ce0
- (void)syncHandleOutputStreamEvent:(unsigned long long)arg1;	// IMP=0x0000000000013ae8
- (void)syncHandleInputStreamEvent:(unsigned long long)arg1;	// IMP=0x00000000000138f0
- (void)syncHandleStreamEventOpenCompleted:(id)arg1;	// IMP=0x00000000000135ce
- (int)socketForStream:(id)arg1;	// IMP=0x0000000000013558
- (void)syncReadFromInputStream;	// IMP=0x0000000000013424
- (id)stringForStreamEventCode:(unsigned long long)arg1;	// IMP=0x00000000000133ae
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013231
- (void)dealloc;	// IMP=0x0000000000013170
- (void)invalidate;	// IMP=0x00000000000130be
- (void)syncCloseConnectionNow;	// IMP=0x0000000000012b2a
- (void)syncReceivedData:(id)arg1 error:(id)arg2;	// IMP=0x00000000000124f1
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x0000000000011891
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;	// IMP=0x00000000000117e1
- (void)syncAcceptedConnection;	// IMP=0x0000000000011503
- (void)syncSendAccept;	// IMP=0x00000000000114e7
- (void)syncSendHello;	// IMP=0x0000000000011308
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010bde
- (void)syncSendData;	// IMP=0x0000000000010b25
- (_Bool)shouldDecideAboutConnection;	// IMP=0x00000000000108b2
- (void)attachInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x0000000000010716
- (void)connectToNetService:(id)arg1;	// IMP=0x000000000001053a
- (void)setupInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x00000000000103f0
- (void)syncAppendDataToSend:(id)arg1;	// IMP=0x00000000000103b3
- (id)initWithLocalServiceName:(id)arg1;	// IMP=0x0000000000010260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
