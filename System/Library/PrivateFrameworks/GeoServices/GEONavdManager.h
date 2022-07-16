//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONavdServerProxy, NSMutableArray;

@interface GEONavdManager : NSObject
{
    GEONavdServerProxy *_proxy;	// 8 = 0x8
    NSMutableArray *_openers;	// 16 = 0x10
    struct os_unfair_lock_s _openersLock;	// 24 = 0x18
}

+ (id)navdManagerClientIdentifier:(id)arg1;	// IMP=0x000000000120113a
+ (void)setProxyClass:(Class)arg1;	// IMP=0x000000000120112d
+ (id)navdManager;	// IMP=0x00000000012010d8
- (void).cxx_destruct;	// IMP=0x00000000012014cd
- (void)forceCacheRefresh;	// IMP=0x00000000012014b7
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;	// IMP=0x00000000012014a1
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;	// IMP=0x000000000120148b
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x0000000001201475
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x000000000120145f
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000001201449
- (void)statusWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000001201433
- (void)closeForClient:(id)arg1;	// IMP=0x00000000012013a7
- (void)openForClient:(id)arg1;	// IMP=0x0000000001201265
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x000000000120124f
- (id)init;	// IMP=0x00000000012011ba

@end

