//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BSXPCConnectionListenerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_listeningQueue;	// 8 = 0x8
    NSMutableDictionary *_services;	// 16 = 0x10
    NSLock *_servicesLock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;	// 32 = 0x20
}

+ (void)stopListeningForService:(id)arg1;	// IMP=0x0000000000026b33
+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;	// IMP=0x0000000000026435
+ (id)defaultHandlerQueue;	// IMP=0x00000000000263eb
- (void).cxx_destruct;	// IMP=0x0000000000026c5f
- (void)dealloc;	// IMP=0x0000000000026013
- (id)init;	// IMP=0x0000000000025f72

@end

