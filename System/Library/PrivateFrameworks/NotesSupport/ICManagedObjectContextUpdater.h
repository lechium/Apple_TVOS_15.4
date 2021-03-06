//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSelectorDelayer, NSDate, NSManagedObjectContext, NSPersistentHistoryToken, NSPersistentStore;
@protocol ICManagedObjectContextUpdaterDelegate, OS_dispatch_queue;

@interface ICManagedObjectContextUpdater : NSObject
{
    _Bool _listening;	// 8 = 0x8
    NSPersistentStore *_store;	// 16 = 0x10
    NSManagedObjectContext *_context;	// 24 = 0x18
    id <ICManagedObjectContextUpdaterDelegate> _delegate;	// 32 = 0x20
    NSPersistentHistoryToken *_previousHistoryToken;	// 40 = 0x28
    NSDate *_previousHistoryDate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    unsigned long long _numberOfCoalescedNotifications;	// 64 = 0x40
    ICSelectorDelayer *_delayer;	// 72 = 0x48
}

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id *)arg4 latestTimestamp:(id *)arg5;	// IMP=0x000000000002738c
- (void).cxx_destruct;	// IMP=0x00000000000281d7
@property(retain, nonatomic) ICSelectorDelayer *delayer; // @synthesize delayer=_delayer;
@property(nonatomic) unsigned long long numberOfCoalescedNotifications; // @synthesize numberOfCoalescedNotifications=_numberOfCoalescedNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isListening) _Bool listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSDate *previousHistoryDate; // @synthesize previousHistoryDate=_previousHistoryDate;
@property(retain, nonatomic) NSPersistentHistoryToken *previousHistoryToken; // @synthesize previousHistoryToken=_previousHistoryToken;
@property(nonatomic) __weak id <ICManagedObjectContextUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) __weak NSPersistentStore *store; // @synthesize store=_store;
- (void)processObjectsInChangeDictionary:(id)arg1;	// IMP=0x0000000000027da2
- (void)fetchChangeHistory;	// IMP=0x00000000000268e1
- (void)handlePersistentStoreRemoteChangeNotification:(id)arg1;	// IMP=0x00000000000266d0
- (void)requestUpdate;	// IMP=0x0000000000026693
- (void)stopListeningForRemoteContextDidChangeNotifications;	// IMP=0x0000000000026532
- (void)startListeningForRemoteContextDidChangeNotifications;	// IMP=0x0000000000026223
- (id)persistentStoreCoordinator;	// IMP=0x0000000000026182
- (void)dealloc;	// IMP=0x00000000000260ec
- (id)initWithStore:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025f72
- (id)init;	// IMP=0x0000000000025f64

@end

