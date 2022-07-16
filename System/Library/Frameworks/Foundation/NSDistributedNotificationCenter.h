//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSDistributedNotificationCenter
{
}

+ (id)notificationCenterForType:(id)arg1;	// IMP=0x00000000000d1590
+ (id)defaultCenter;	// IMP=0x00000000000d1577
@property _Bool suspended;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000d1acb
- (void)postNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x00000000000d1ab3
- (void)postNotification:(id)arg1;	// IMP=0x00000000000d1a40
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(_Bool)arg4;	// IMP=0x00000000000d1a2b
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000d19c0
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;	// IMP=0x00000000000d196e
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d1943
- (id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d17c3
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;	// IMP=0x00000000000d17a0
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5;	// IMP=0x00000000000d167b
- (id)init;	// IMP=0x00000000000d164e

@end
