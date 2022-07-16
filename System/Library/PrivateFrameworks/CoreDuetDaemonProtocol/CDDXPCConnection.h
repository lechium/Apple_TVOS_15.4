//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDDebug, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CDDXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_replyQueue;	// 24 = 0x18
    _Bool _hasValidConnection;	// 32 = 0x20
    _Atomic long long _sequenceNumber;	// 40 = 0x28
    NSString *_serviceName;	// 48 = 0x30
    CDDebug *_debug;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000aa89
@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)establishConnection;	// IMP=0x000000000000a74e
- (void)invalidateConnection;	// IMP=0x000000000000a744
- (void)cancelConnection;	// IMP=0x000000000000a736
- (id)connection;	// IMP=0x000000000000a6b2
- (void)dealloc;	// IMP=0x000000000000a66b
- (id)makeStashWithId:(unsigned long long)arg1;	// IMP=0x000000000000a635
- (unsigned long long)sequenceNumber;	// IMP=0x000000000000a621
- (void)sendBarrier:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a5c1
- (_Bool)sendMessageAsync:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a31f
- (id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x000000000000a222

@end
