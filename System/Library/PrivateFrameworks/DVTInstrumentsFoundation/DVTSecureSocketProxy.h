//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTSecureSocketProxyBufferPool;
@protocol OS_dispatch_group, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

@interface DVTSecureSocketProxy : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ioQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_receiveFromConnectionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sendToConnectionQueue;	// 32 = 0x20
    DVTSecureSocketProxyBufferPool *_receiveFromConnectionBufferPool;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_sendToConnectionCompleted;	// 48 = 0x30
    NSObject<OS_dispatch_io> *_socketIOChannel;	// 56 = 0x38
    unsigned long long _pendingWrites;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_canReceiveFromConnection;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_canSendToConnection;	// 80 = 0x50
    CDUnknownBlockType _receiveDataFromConnection;	// 88 = 0x58
    CDUnknownBlockType _sendDataToConnection;	// 96 = 0x60
    CDUnknownBlockType _cleanupConnection;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000cb14
@property(copy, nonatomic) CDUnknownBlockType cleanupConnection; // @synthesize cleanupConnection=_cleanupConnection;
@property(copy, nonatomic) CDUnknownBlockType sendDataToConnection; // @synthesize sendDataToConnection=_sendDataToConnection;
@property(copy, nonatomic) CDUnknownBlockType receiveDataFromConnection; // @synthesize receiveDataFromConnection=_receiveDataFromConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *canSendToConnection; // @synthesize canSendToConnection=_canSendToConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *canReceiveFromConnection; // @synthesize canReceiveFromConnection=_canReceiveFromConnection;
@property(nonatomic) unsigned long long pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *socketIOChannel; // @synthesize socketIOChannel=_socketIOChannel;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *sendToConnectionCompleted; // @synthesize sendToConnectionCompleted=_sendToConnectionCompleted;
@property(retain, nonatomic) DVTSecureSocketProxyBufferPool *receiveFromConnectionBufferPool; // @synthesize receiveFromConnectionBufferPool=_receiveFromConnectionBufferPool;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sendToConnectionQueue; // @synthesize sendToConnectionQueue=_sendToConnectionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiveFromConnectionQueue; // @synthesize receiveFromConnectionQueue=_receiveFromConnectionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void)_onIOQueue_sendDataToConnection:(id)arg1;	// IMP=0x000000000000c836
- (void)readDataFromSocketAndSendToConnection;	// IMP=0x000000000000c41c
- (void)receiveDataFromConnectionAndWriteToSocket;	// IMP=0x000000000000bdb9
- (void)_onIOQueue_finishCleanup;	// IMP=0x000000000000bc75
- (void)_onIOQueue_cancelProxy;	// IMP=0x000000000000b8d9

@end

