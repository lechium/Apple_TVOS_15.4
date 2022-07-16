//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSKeychainCredentialNotificationMonitor-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
    int _keychainChangedNotificationToken;	// 24 = 0x18
    double _coalescingInterval;	// 32 = 0x20
    NSDate *_lastNotificationTime;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_coalescingTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003a85b
- (void)_notifyObservers;	// IMP=0x000000000003a6f2
- (void)_cancelCoalescingTimer;	// IMP=0x000000000003a6c8
- (void)_notifyKeychainUpdated;	// IMP=0x000000000003a2ce
- (void)notifyModernKeychainUpdated;	// IMP=0x000000000003a2bc
- (void)triggerExternalNotification;	// IMP=0x000000000003a21b
- (void)removeObserverForToken:(id)arg1;	// IMP=0x000000000003a109
- (id)addObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039f8b
- (void)dealloc;	// IMP=0x0000000000039f09
- (id)init;	// IMP=0x0000000000039ef3
- (id)initWithCoalescingInterval:(double)arg1;	// IMP=0x0000000000039cf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

