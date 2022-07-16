//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACDDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACDDatabaseBackupActivity : NSObject
{
    _Bool _xpcActivityPending;	// 8 = 0x8
    NSObject<OS_xpc_object> *_activityExecutionCriteria;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ACDDatabase *_database;	// 32 = 0x20
}

+ (id)new;	// IMP=0x0000000000064316
- (void).cxx_destruct;	// IMP=0x0000000000064b7d
@property(readonly, nonatomic) ACDDatabase *database; // @synthesize database=_database;
- (void)scheduleBackupIfNonexistent;	// IMP=0x0000000000064a52
- (void)scheduleBackup;	// IMP=0x0000000000064a3b
- (void)_registerActivitySchedulingBackup:(_Bool)arg1;	// IMP=0x0000000000064584
- (void)_registerActivityIfNeededSchedulingBackup:(_Bool)arg1;	// IMP=0x00000000000644c7
- (void)registerActivityIfNeeded;	// IMP=0x00000000000644b3
- (id)activityCriteria;	// IMP=0x0000000000064406
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000000064359
- (id)init;	// IMP=0x000000000006432e

@end

