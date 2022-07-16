//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSProtocolChecker, NSString;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000000000243e4
+ (void)_unregisterIMLocalObject:(id)arg1;	// IMP=0x0000000000024397
+ (void)_registerIMLocalObject:(id)arg1;	// IMP=0x000000000002434a
+ (id)_registeredIMLocalObjectForPort:(unsigned int)arg1;	// IMP=0x00000000000241bf
+ (void)_setExceptionHandlingDisabled:(_Bool)arg1;	// IMP=0x00000000000241b3
+ (id)_imLocalObjectQueue;	// IMP=0x000000000002415f
- (id)description;	// IMP=0x000000000002682d
- (void)invalidate;	// IMP=0x00000000000264c2
@property(retain, nonatomic) NSArray *allowlistedClasses;
@property(readonly, nonatomic) _Bool isValid;
- (_Bool)isSameConnection:(id)arg1;	// IMP=0x00000000000263ce
- (_Bool)isValidSelector:(SEL)arg1;	// IMP=0x0000000000026310
- (void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(_Bool)arg3 isReply:(_Bool)arg4;	// IMP=0x00000000000262eb
- (void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(_Bool)arg3;	// IMP=0x00000000000262c3
- (void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2;	// IMP=0x00000000000262ae
- (void)_enqueueInvocationWithSync:(id)arg1;	// IMP=0x000000000002629a
- (void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3;	// IMP=0x0000000000026233
- (void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2;	// IMP=0x000000000002621c
- (void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2;	// IMP=0x00000000000261f1
- (void)_enqueueInvocation:(id)arg1;	// IMP=0x00000000000261dd
- (void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(_Bool)arg3 isSync:(_Bool)arg4 isReply:(_Bool)arg5;	// IMP=0x0000000000026030
- (void)_popInvocation;	// IMP=0x0000000000025fd6
- (id)_peekInvocation;	// IMP=0x0000000000025f64
- (void)_noteNewInvocation:(_Bool)arg1;	// IMP=0x0000000000025e16
- (void)_handleNewInvocations;	// IMP=0x0000000000025ba6
- (_Bool)handleInvocation:(id)arg1;	// IMP=0x0000000000025b7c
- (_Bool)_handleInvocation:(id)arg1;	// IMP=0x0000000000025b65
- (_Bool)_handleInvocation:(id)arg1 processingComponentQueue:(_Bool)arg2;	// IMP=0x0000000000025589
- (id)_currentMessageContext;	// IMP=0x000000000002557b
@property(retain, nonatomic) NSString *processName;
- (void)setPortName:(id)arg1;	// IMP=0x0000000000025501
@property(readonly, nonatomic) NSString *portName;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)_systemShutdown:(id)arg1;	// IMP=0x000000000002546e
- (void)terminated;	// IMP=0x00000000000253fa
@property(readonly, nonatomic) _Bool wasInterrupted;
- (void)_portDidBecomeInvalid;	// IMP=0x000000000002535d
- (void)_portInterrupted;	// IMP=0x00000000000252cf
- (void)dealloc;	// IMP=0x0000000000025143
- (void)_clearPort:(_Bool)arg1 signalRunLoopIfNeeded:(_Bool)arg2;	// IMP=0x0000000000024d92
- (void)_clearPort:(_Bool)arg1;	// IMP=0x0000000000024d7e
@property(readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property(nonatomic) id target;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3;	// IMP=0x0000000000024864
@property(retain, nonatomic) NSArray *whitelistedClasses;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(_Bool)arg4 offMainThread:(_Bool)arg5;	// IMP=0x0000000000024507
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(_Bool)arg4;	// IMP=0x00000000000244e5
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3;	// IMP=0x00000000000244d0
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;	// IMP=0x00000000000244b9

@end

