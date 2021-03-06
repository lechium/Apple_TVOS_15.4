//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUXPCCodable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NXClient : NSObject <CUXPCCodable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    struct LogCategory *_ucat;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcCnx;	// 24 = 0x18
    unsigned char _flags;	// 32 = 0x20
    unsigned int _clientID;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    NSString *_label;	// 56 = 0x38
    NSObject<OS_xpc_object> *_testListenerEndpoint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000f32ab
@property(retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)liveActionPerform:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f3175
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f30bd
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f3005
- (void)_xpcReceivedMessage:(id)arg1;	// IMP=0x00000000000f2f9f
- (void)_xpcReceivedEvent:(id)arg1;	// IMP=0x00000000000f2dd5
- (void)_invalidated;	// IMP=0x00000000000f2d38
- (void)invalidate;	// IMP=0x00000000000f2ced
- (void)_interrupted;	// IMP=0x00000000000f2c99
- (id)_ensureXPCStarted;	// IMP=0x00000000000f2b89
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00000000000f2ad8
- (id)description;	// IMP=0x00000000000f2ac1
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x00000000000f2aa0
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f2992
- (void)dealloc;	// IMP=0x00000000000f2945
- (id)init;	// IMP=0x00000000000f2899

@end

