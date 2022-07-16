//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXMachTransport
{
    unsigned int _receivePort;	// 8 = 0x8
    unsigned int _sendPort;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_inputQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_outputQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_listenSource;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_deadPortSource;	// 40 = 0x28
    CDUnknownBlockType _disconnectBlock;	// 48 = 0x30
    struct DTXMachMessage *_sendBuffer;	// 56 = 0x38
    unsigned int _bufferedLength;	// 64 = 0x40
}

+ (id)_legacyFileDescriptorHandshakeWithSendPort:(unsigned int)arg1;	// IMP=0x0000000000005117
+ (id)_legacyFileDescriptorHandshakeWithReceivePort:(unsigned int)arg1;	// IMP=0x0000000000004aff
+ (id)fileDescriptorHandshakeWithSendPort:(unsigned int)arg1;	// IMP=0x000000000000471c
+ (id)fileDescriptorHandshakeWithReceivePort:(unsigned int)arg1;	// IMP=0x00000000000041fb
+ (id)schemes;	// IMP=0x0000000000002d33
- (void).cxx_destruct;	// IMP=0x0000000000005559
- (id)localAddresses;	// IMP=0x000000000000410c
- (void)disconnect;	// IMP=0x0000000000003f8e
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x0000000000003e5b
- (void)dealloc;	// IMP=0x0000000000003e09
- (id)serializedXPCRepresentation;	// IMP=0x0000000000003c15
- (id)initWithXPCRepresentation:(id)arg1;	// IMP=0x0000000000003a6f
- (id)initWithRemoteAddress:(id)arg1;	// IMP=0x00000000000031ef
- (id)initWithReceiveRight:(unsigned int)arg1 sendRight:(unsigned int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000030d8
- (id)init;	// IMP=0x00000000000030b5
- (_Bool)_setupWithSendPort:(unsigned int)arg1 receivePort:(unsigned int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002d57

@end
