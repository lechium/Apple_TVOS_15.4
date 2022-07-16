//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SYDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_storeIdentifier;	// 32 = 0x20
    _Bool _additionalSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003cdcd
- (void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003cd55
- (void)sendMessageWithName:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003cce0
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000003cc69
- (void)sendMessageWithName:(id)arg1;	// IMP=0x001000000003cc23
- (void)_sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c668
- (void)_sendMessageNoReply:(id)arg1;	// IMP=0x001000000003c48f
- (id)_sendMessageWithReplySync:(id)arg1;	// IMP=0x001000000003c026
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000003bed5
- (void)shutdown;	// IMP=0x001000000003be74
- (void)_resetConnection;	// IMP=0x001000000003be3e
- (void)_createConnectionIfNecessary;	// IMP=0x001000000003bc44
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3;	// IMP=0x001000000003bc2f
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3 additionalSource:(_Bool)arg4;	// IMP=0x001000000003bb4b

@end
