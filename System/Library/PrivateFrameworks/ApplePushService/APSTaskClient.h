//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface APSTaskClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_outstandingDNSRequests;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSString *_environment;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002319
- (id)resolveDNS:(id)arg1;	// IMP=0x0000000000001c02
- (void)_timeoutOutstandingRequests;	// IMP=0x00000000000018bf
- (id)_findDNSRequestForHostname:(id)arg1;	// IMP=0x00000000000016fa
- (void)_clearOutstandingTasks:(long long)arg1;	// IMP=0x00000000000014e1
- (void)dealloc;	// IMP=0x0000000000001463
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000010ed

@end

