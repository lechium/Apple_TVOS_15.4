//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDNotificationServiceProtocol-Protocol.h>
#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString;
@protocol ASDNotificationCenterDialogObserver, OS_dispatch_queue;

@interface ASDNotificationCenter : NSObject <ASDServiceProvider, ASDNotificationServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_notificationObservers;	// 16 = 0x10
    struct os_unfair_lock_s _observerLock;	// 24 = 0x18
    NSHashTable *_progressObservers;	// 32 = 0x20
    id <ASDNotificationCenterDialogObserver> _dialogObserver;	// 40 = 0x28
}

+ (id)interface;	// IMP=0x0000000000046944
+ (id)defaultCenter;	// IMP=0x000000000004679c
- (void).cxx_destruct;	// IMP=0x0000000000047cdb
- (id)_copyProgressObservers;	// IMP=0x0000000000047ca1
- (id)_copyNotificationObserversForName:(id)arg1;	// IMP=0x0000000000047c18
- (void)isDialogObserverAvailableWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047bac
- (void)deliverProgress:(id)arg1;	// IMP=0x0000000000047839
- (void)deliverNotifications:(id)arg1;	// IMP=0x00000000000471f1
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047070
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046eef
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046d6e
- (void)removeProgressObserver:(id)arg1;	// IMP=0x0000000000046d1a
- (void)removeNotificationObserver:(id)arg1 forName:(id)arg2;	// IMP=0x0000000000046c7b
- (void)addProgressObserver:(id)arg1;	// IMP=0x0000000000046c27
- (void)addNotificationObserver:(id)arg1 forName:(id)arg2;	// IMP=0x0000000000046b4d
@property __weak id <ASDNotificationCenterDialogObserver> dialogObserver; // @synthesize dialogObserver=_dialogObserver;
- (id)init;	// IMP=0x00000000000467f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

