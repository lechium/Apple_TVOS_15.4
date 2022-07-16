//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNSKeyedDictionaryRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationScheduleRepository : NSObject
{
    UNSKeyedDictionaryRepository *_repository;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002cbdb
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;	// IMP=0x000000000002ca82
- (void)_queue_performMigration;	// IMP=0x000000000002c8fe
- (void)_queue_removeScheduleForBundleIdentifier:(id)arg1;	// IMP=0x000000000002c8e8
- (void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002c86c
- (id)_queue_scheduleForBundleIdentifier:(id)arg1;	// IMP=0x000000000002c6d6
- (void)performMigration;	// IMP=0x000000000002c675
- (void)notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000002c45b
- (void)removeScheduleForBundleIdentifier:(id)arg1;	// IMP=0x000000000002c3b3
- (void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002c2da
- (id)scheduleForBundleIdentifier:(id)arg1;	// IMP=0x000000000002c19d
- (id)allBundleIdentifiers;	// IMP=0x000000000002c07d
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2;	// IMP=0x000000000002bf7f
- (id)_dateFormatter;	// IMP=0x000000000002bf0f

@end

