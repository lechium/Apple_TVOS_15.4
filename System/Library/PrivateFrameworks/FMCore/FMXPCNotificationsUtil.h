//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FMXPCNotificationsUtil : NSObject
{
    NSMutableDictionary *_darwinNotificationHandlers;	// 8 = 0x8
    NSMutableDictionary *_distributedNotificationHandlers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_modificationQueue;	// 24 = 0x18
}

+ (void)handleDistributedNotificationsWithHandlers:(id)arg1;	// IMP=0x0000000000010127
+ (void)handleDarwinNotificationsWithHandlers:(id)arg1;	// IMP=0x000000000000fe0e
+ (id)sharedInstance;	// IMP=0x000000000000fdb9
- (void).cxx_destruct;	// IMP=0x00000000000117aa
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue; // @synthesize modificationQueue=_modificationQueue;
@property(retain, nonatomic) NSMutableDictionary *distributedNotificationHandlers; // @synthesize distributedNotificationHandlers=_distributedNotificationHandlers;
@property(retain, nonatomic) NSMutableDictionary *darwinNotificationHandlers; // @synthesize darwinNotificationHandlers=_darwinNotificationHandlers;
- (void)_didReceiveDistributedNotification:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000011450
- (void)_didReceiveDarwinNotification:(id)arg1;	// IMP=0x00000000000111d1
- (void)deregisterHandlerForDistributedNotification:(id)arg1;	// IMP=0x0000000000010ff3
- (void)registerHandler:(CDUnknownBlockType)arg1 forDistributedNotification:(id)arg2;	// IMP=0x0000000000010cfd
- (_Bool)isHandlerRegisteredForDistributedNotification:(id)arg1;	// IMP=0x0000000000010c73
- (void)deregisterHandlerForDarwinNotification:(id)arg1;	// IMP=0x0000000000010a45
- (void)registerHandler:(CDUnknownBlockType)arg1 forDarwinNotification:(id)arg2;	// IMP=0x00000000000106e1
- (_Bool)isHandlerRegisteredForDarwinNotification:(id)arg1;	// IMP=0x00000000000104ef
- (id)init;	// IMP=0x0000000000010461

@end
