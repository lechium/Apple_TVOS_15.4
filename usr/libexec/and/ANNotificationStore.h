//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ANNotificationStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x004000000000177f
- (void).cxx_destruct;	// IMP=0x0020000000003bde
- (id)_copyPersistentStoreFilePath;	// IMP=0x0010000000003b1b
- (id)_managedObjectModel;	// IMP=0x0010000000003a16
- (void)_createManagedObjectContext;	// IMP=0x001000000000375e
- (_Bool)_unsafe_commitChangesInManagedObjectContext;	// IMP=0x00100000000036b5
- (_Bool)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000003245
- (_Bool)removeAllNotificationsForAccountTypeID:(id)arg1;	// IMP=0x0010000000002e24
- (_Bool)limitPendingNotificationsForAccountTypeID:(id)arg1 toMaximumCount:(unsigned long long)arg2;	// IMP=0x00100000000026ba
- (_Bool)saveNotification:(id)arg1;	// IMP=0x00100000000021e8
- (id)_notificationsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0010000000001e13
- (id)_notificationsMatchingPredicate:(id)arg1;	// IMP=0x0010000000001dff
- (id)typeIdentifiersOfAccountsWithPendingNotifications;	// IMP=0x001000000000199c
- (id)pendingNotificationsWithEventID:(id)arg1;	// IMP=0x001000000000192a
- (id)notificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001892
- (id)pendingNotificationsForAccountsWithTypeID:(id)arg1;	// IMP=0x0010000000001820
- (id)init;	// IMP=0x00100000000017d4

@end

