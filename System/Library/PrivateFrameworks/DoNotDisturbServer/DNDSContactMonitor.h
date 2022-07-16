//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSContactMonitoring-Protocol.h>

@class CNContactStore, NSHashTable, NSString;
@protocol DNDSContactProviding, OS_dispatch_queue;

@interface DNDSContactMonitor : NSObject <DNDSContactMonitoring>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSHashTable *_listeners;	// 16 = 0x10
    id <DNDSContactProviding> _contactProvider;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000016151
- (id)_lock_monitoredContactsByContactHistoryToken;	// IMP=0x0000000000015e9b
- (id)_lock_listenersByContactHistoryToken;	// IMP=0x0000000000015c05
- (void)_queue_fetchUpdatesWithContactHistoryToken:(id)arg1 monitoredContacts:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001593e
- (void)_fetchUpdatesWithContactHistoryToken:(id)arg1 monitoredContacts:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000157b6
- (_Bool)_fetchContactHistoryWithToken:(id)arg1 monitoredContacts:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000151d2
- (void)_fetchContactsForMonitoredContacts:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014b3f
- (void)_updateContactsWithoutIdentifiers;	// IMP=0x0000000000014776
- (void)_updateContactsWithIdentifiers;	// IMP=0x000000000001419f
- (void)_contactStoreChanged:(id)arg1;	// IMP=0x00000000000140dc
- (id)_contactsWithCNContacts:(id)arg1;	// IMP=0x0000000000013f1a
- (void)removeListener:(id)arg1;	// IMP=0x0000000000013ec6
- (void)addListener:(id)arg1;	// IMP=0x0000000000013d2b
- (id)initWithContactStore:(id)arg1 contactProvider:(id)arg2;	// IMP=0x0000000000013bd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

