//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSDictionary, NSInputStream, NSMutableDictionary, NSNumber, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol>
{
    NSString *_nsuuid;	// 8 = 0x8
    _Bool _isDefaultPairedDevice;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
    NSString *_streamName;	// 32 = 0x20
    NSString *_serviceToken;	// 40 = 0x28
    NSString *_connectionUUID;	// 48 = 0x30
    int _socket;	// 56 = 0x38
    unsigned long long _mtu;	// 64 = 0x40
    CDUnknownBlockType _openSocketCompletionHandler;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;	// 80 = 0x50
    NSString *_openSocketCompletionHandlerID;	// 88 = 0x58
    NSInputStream *_inputStreamForSocket;	// 96 = 0x60
    NSOutputStream *_outputStreamForSocket;	// 104 = 0x68
    _Bool _hasTimedOut;	// 112 = 0x70
    NSNumber *_clientTimeout;	// 120 = 0x78
    NSMutableDictionary *_awdMetrics;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000073dfc
- (id)deviceConnectionKey;	// IMP=0x0000000000073dcf
- (void)_daemonDied:(id)arg1;	// IMP=0x0000000000073c95
- (void)_cleanupCompletionBlock;	// IMP=0x0000000000073c45
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x00000000000735c4
- (void)_close;	// IMP=0x0000000000073128
- (void)close;	// IMP=0x000000000007307c
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000072cc7
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x0000000000072afc
@property(readonly, nonatomic) NSDictionary *metrics;
@property(readonly, nonatomic) unsigned long long mtu;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)_connect;	// IMP=0x000000000007257a
- (void)dealloc;	// IMP=0x0000000000072458
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000000000714cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
