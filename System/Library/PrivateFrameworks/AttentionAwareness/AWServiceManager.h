//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWServiceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_serviceObservers;	// 24 = 0x18
}

+ (void)removeObserver:(id)arg1;	// IMP=0x000000000000eef5
+ (void)addObserver:(id)arg1;	// IMP=0x000000000000ee83
+ (id)invokeWithService:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ee00
+ (id)sharedManager;	// IMP=0x000000000000edd0
- (void).cxx_destruct;	// IMP=0x000000000000e7f6
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000e74a
- (void)addObserver:(id)arg1;	// IMP=0x000000000000e69e
- (id)invokeWithService:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e3db
- (id)init;	// IMP=0x000000000000e246

@end
