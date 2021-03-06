//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MCMCommandDispatcher : NSObject
{
    NSMutableDictionary *_messageToCommandClassMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000540c1
@property(readonly, nonatomic) NSMutableDictionary *messageToCommandClassMap; // @synthesize messageToCommandClassMap=_messageToCommandClassMap;
- (void)_queueCommand:(id)arg1 commandQueue:(id)arg2 xpcReply:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000054000
- (id)_commandFromMessage:(id)arg1 clientIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000053ef8
- (_Bool)dispatchMessage:(id)arg1 clientConnection:(id)arg2 userIdentityCache:(id)arg3 xpcReply:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x0010000000053d95
- (_Bool)dispatchMessage:(id)arg1 commandQueue:(id)arg2 clientIdentity:(id)arg3 userIdentityCache:(id)arg4 xpcReply:(id)arg5 error:(unsigned long long *)arg6;	// IMP=0x0010000000053cc9
- (void)registerCommandClass:(Class)arg1;	// IMP=0x0010000000053c5c
- (id)init;	// IMP=0x0010000000053bf6

@end

