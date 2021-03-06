//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_defaultReplyQueue;	// 16 = 0x10
    NSMutableDictionary *_customXpcHandlers;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connection;	// 32 = 0x20
    CDUnknownBlockType _messageHandler;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000111104
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)sendSyncMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000110c1f
- (id)sendSyncMessageWithType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000110bc0
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000110941
- (void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001108be
- (void)removeCustomXPCHandler:(unsigned long long)arg1;	// IMP=0x0000000000110813
- (void)addCustomXPCHandler:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;	// IMP=0x00000000001105e5
@property(readonly, nonatomic) unsigned int uid;
@property(readonly, nonatomic) int pid;
- (void)dealloc;	// IMP=0x000000000011058f
- (id)initWithConnection:(id)arg1 queue:(id)arg2 defaultReplyQueue:(id)arg3;	// IMP=0x0000000000110338

@end

