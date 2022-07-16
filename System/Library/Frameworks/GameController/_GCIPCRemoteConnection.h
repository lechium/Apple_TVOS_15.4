//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCIPCConnection-Protocol.h>

@class NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection>
{
    _Atomic _Bool _invalid;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSArray *_interruptionHandlers;	// 24 = 0x18
    NSArray *_invalidationHandlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006c3e5
@property(copy) NSArray *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(copy) NSArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)debugDescription;	// IMP=0x000000000006c2d9
- (id)redactedDescription;	// IMP=0x000000000006c267
- (id)description;	// IMP=0x000000000006c1f5
- (unsigned long long)hash;	// IMP=0x000000000006c1b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006c154
- (_Bool)isEqualToConnection:(id)arg1;	// IMP=0x000000000006c0c3
- (id)synchronousRemoteProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c0ad
- (id)remoteProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c097
- (id)remoteProxy;	// IMP=0x000000000006c081
- (void)scheduleSendBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c06b
- (id)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006be13
- (id)addInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006bbbb
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid;
- (void)invalidate;	// IMP=0x000000000006bb9a
- (void)suspend;	// IMP=0x000000000006bb84
- (void)resume;	// IMP=0x000000000006bb6e
- (id)init;	// IMP=0x000000000006bb43
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000006b573

@end

