//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileHandle, NSInputStream, NSMutableData, NSNetServiceBrowser, NSOutputStream, NSString, SDStreamHandler;
@protocol OS_dispatch_queue, SDCompanionStreamDelegate;

__attribute__((visibility("hidden")))
@interface SDCompanionStream : NSObject
{
    _Bool _initiator;	// 8 = 0x8
    _Bool _shouldStop;	// 9 = 0x9
    _Bool _clientSent;	// 10 = 0xa
    _Bool _clientReceived;	// 11 = 0xb
    _Bool _networkBufferSpaceAvailable;	// 12 = 0xc
    NSFileHandle *_fileHandle;	// 16 = 0x10
    id <SDCompanionStreamDelegate> _delegate;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    SDStreamHandler *_streamHandler;	// 40 = 0x28
    NSData *_authorData;	// 48 = 0x30
    NSNetServiceBrowser *_netServiceBrowser;	// 56 = 0x38
    NSInputStream *_clientInputStream;	// 64 = 0x40
    NSOutputStream *_clientOutputStream;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_writeQueue;	// 80 = 0x50
    NSMutableData *_networkStreamData;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_readQueue;	// 96 = 0x60
    NSMutableData *_clientStreamData;	// 104 = 0x68
    long long _readFromClient;	// 112 = 0x70
    long long _wroteToClient;	// 120 = 0x78
    CDUnknownBlockType _streamsRequestHandler;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000014b9b4
@property(copy) CDUnknownBlockType streamsRequestHandler; // @synthesize streamsRequestHandler=_streamsRequestHandler;
@property long long wroteToClient; // @synthesize wroteToClient=_wroteToClient;
@property long long readFromClient; // @synthesize readFromClient=_readFromClient;
@property(retain) NSMutableData *clientStreamData; // @synthesize clientStreamData=_clientStreamData;
@property(retain) NSObject<OS_dispatch_queue> *readQueue; // @synthesize readQueue=_readQueue;
@property(retain) NSMutableData *networkStreamData; // @synthesize networkStreamData=_networkStreamData;
@property(retain) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain) NSOutputStream *clientOutputStream; // @synthesize clientOutputStream=_clientOutputStream;
@property(retain) NSInputStream *clientInputStream; // @synthesize clientInputStream=_clientInputStream;
@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property _Bool networkBufferSpaceAvailable; // @synthesize networkBufferSpaceAvailable=_networkBufferSpaceAvailable;
@property _Bool clientReceived; // @synthesize clientReceived=_clientReceived;
@property _Bool clientSent; // @synthesize clientSent=_clientSent;
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property _Bool initiator; // @synthesize initiator=_initiator;
@property(retain) NSData *authorData; // @synthesize authorData=_authorData;
@property(retain) SDStreamHandler *streamHandler; // @synthesize streamHandler=_streamHandler;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak id <SDCompanionStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logClientReceived;	// IMP=0x001000000014b720
- (void)logClientSent;	// IMP=0x001000000014b6c0
- (void)writeNetworkStream;	// IMP=0x001000000014b5a9
- (void)readClientStream;	// IMP=0x001000000014b396
- (void)writeClientStream;	// IMP=0x001000000014b08b
- (void)handleOpenedStream;	// IMP=0x001000000014aff8
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x001000000014ae17
- (void)streamHandlerDidClose:(id)arg1 withError:(id)arg2;	// IMP=0x001000000014ab86
- (void)streamHandler:(id)arg1 didReceiveStreamData:(id)arg2;	// IMP=0x001000000014ab23
- (void)streamHandler:(id)arg1 bufferSpaceChanged:(_Bool)arg2;	// IMP=0x001000000014aab1
- (void)handleStreamResponse:(id)arg1;	// IMP=0x001000000014a8d5
- (void)handleStreamRequest:(id)arg1;	// IMP=0x001000000014a639
- (void)streamHandler:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000014a3f2
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x001000000014a34d
- (int)setBufferSize:(int)arg1 socket:(int)arg2;	// IMP=0x001000000014a2f6
@property(readonly) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void)notifyStreamRequestWithError:(id)arg1;	// IMP=0x0010000000149d42
- (void)switchToStreaming;	// IMP=0x0010000000149cba
- (void)sendInitialResponse:(_Bool)arg1;	// IMP=0x00100000001499f9
- (void)sendInitialRequest;	// IMP=0x00100000001496d7
- (void)startBrowser;	// IMP=0x0010000000149605
- (void)getStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001495b0
- (void)setBundleID:(id)arg1;	// IMP=0x0010000000149504
- (void)stopIfReady;	// IMP=0x00100000001494c2
- (void)stop;	// IMP=0x0010000000149121
- (void)start;	// IMP=0x00100000001490eb
- (void)dealloc;	// IMP=0x00100000001490ad
- (id)initWithAuthorData:(id)arg1 streamHandler:(id)arg2;	// IMP=0x0010000000148f87
- (id)initWithStreamHandler:(id)arg1;	// IMP=0x0010000000148f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

