//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _EXServiceClient : NSObject
{
    struct os_unfair_lock_s _connectionLock;	// 8 = 0x8
    struct os_unfair_lock_s _activeQueriesLock;	// 12 = 0xc
    NSXPCConnection *_discoveryConnection;	// 16 = 0x10
    NSXPCConnection *_launchConnection;	// 24 = 0x18
    NSMutableSet *_activeQueries;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000019119
- (void).cxx_destruct;	// IMP=0x000000000001b25d
@property(readonly) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain, nonatomic) NSMutableSet *activeQueries; // @synthesize activeQueries=_activeQueries;
@property(retain, nonatomic) NSXPCConnection *launchConnection; // @synthesize launchConnection=_launchConnection;
@property(retain, nonatomic) NSXPCConnection *discoveryConnection; // @synthesize discoveryConnection=_discoveryConnection;
- (id)prepareConnectionForExtension:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ae2d
- (void)removeQueryObserver:(id)arg1;	// IMP=0x000000000001ab8e
- (void)addQueryObserver:(id)arg1;	// IMP=0x000000000001a97a
- (void)_beginActiveQuery:(id)arg1;	// IMP=0x000000000001a7a4
- (id)_activeQueryForQuery:(id)arg1;	// IMP=0x000000000001a6e9
- (void)fetchExtensionsWithQueries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a0e9
- (id)extensionsWithQueries:(id)arg1;	// IMP=0x0000000000019ad8
- (void)reconnectActiveQueries;	// IMP=0x0000000000019935
@property(nonatomic) struct os_unfair_lock_s *activeQueriesLock; // @dynamic activeQueriesLock;
@property(nonatomic) struct os_unfair_lock_s *connectionLock; // @dynamic connectionLock;
- (id)_init;	// IMP=0x000000000001917e

@end

