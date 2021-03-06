//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPHomeKitAnalysisSessionClientProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPHomeKitAnalysisSession : NSObject <VCPHomeKitAnalysisSessionClientProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_managementQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 24 = 0x18
    struct CF<const opaqueCMFormatDescription *> _formatDescription;	// 32 = 0x20
    CDUnknownBlockType _resultsHandler;	// 40 = 0x28
    CDUnknownBlockType _interruptionHander;	// 48 = 0x30
}

+ (id)sessionWithProperties:(id)arg1 withResultsHandler:(CDUnknownBlockType)arg2 andInterruptionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c02b9
+ (id)sessionWithProperties:(id)arg1 andResultsHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c0218
- (id).cxx_construct;	// IMP=0x00000000001c1914
- (void).cxx_destruct;	// IMP=0x00000000001c18c2
- (void)invalidate;	// IMP=0x00000000001c184e
- (void)processResults:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c163e
- (void)processMessageWithOptions:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c1164
- (void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c0c5c
- (void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c090d
- (id)connection;	// IMP=0x00000000001c0371
- (id)initWithProperties:(id)arg1 withResultsHandler:(CDUnknownBlockType)arg2 andInterruptionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bfc70

@end

