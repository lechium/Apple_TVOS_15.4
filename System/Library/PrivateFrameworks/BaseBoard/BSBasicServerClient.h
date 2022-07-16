//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCServerClient-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface BSBasicServerClient : NSObject <BSXPCServerClient>
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    int _resumed;	// 16 = 0x10
    int _cancelled;	// 20 = 0x14
    _Bool _managingResumeState;	// 24 = 0x18
}

+ (id)wrapperWithConnection:(id)arg1;	// IMP=0x0000000000042ab6
- (void).cxx_destruct;	// IMP=0x0000000000042fd0
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x0000000000042e5f
- (void)sendMessageWithPacker:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042e48
- (void)sendMessage:(id)arg1;	// IMP=0x0000000000042dc0
- (void)invalidate;	// IMP=0x0000000000042d4c
- (void)suspend;	// IMP=0x0000000000042ced
- (void)resume;	// IMP=0x0000000000042c8b
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000042b81
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000042b13
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
