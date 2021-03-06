//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CDPDNetworkObserver : NSObject
{
    _Bool _networkIsReachable;	// 8 = 0x8
    NSLock *_clientsLock;	// 16 = 0x10
    NSMutableDictionary *_clientsByUUID;	// 24 = 0x18
    struct __SCNetworkReachability *_networkReach;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_eventQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000003544a
- (void).cxx_destruct;	// IMP=0x0000000000035950
- (void)removeObserverWithToken:(id)arg1;	// IMP=0x00000000000358e0
- (id)addNetworkObserverWithEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035785
- (void)_networkReachabilityDidChangeWithFlags:(unsigned int)arg1;	// IMP=0x000000000003565f
- (void)startObservingNetwork;	// IMP=0x000000000003553d
- (id)init;	// IMP=0x000000000003549f

@end

