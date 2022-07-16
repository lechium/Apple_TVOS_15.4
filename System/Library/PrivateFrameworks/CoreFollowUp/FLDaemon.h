//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject
{
    NSXPCConnection *_conn;	// 8 = 0x8
    NSLock *_connLock;	// 16 = 0x10
    NSXPCListenerEndpoint *_daemonXPCEndpoint;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000000105ab
+ (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010524
- (void).cxx_destruct;	// IMP=0x0000000000010d0b
@property(retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // @synthesize daemonXPCEndpoint=_daemonXPCEndpoint;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010c7e
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010bfb
- (void)invalidateConnection;	// IMP=0x0000000000010ba8
- (id)remoteObjectInterface;	// IMP=0x0000000000010ada
- (id)connection;	// IMP=0x0000000000010698
- (void)dealloc;	// IMP=0x0000000000010656
- (id)init;	// IMP=0x0000000000010600

@end
