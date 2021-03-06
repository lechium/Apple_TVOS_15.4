//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PLJournalManagerCore : NSObject
{
    NSURL *_baseURL;	// 8 = 0x8
    NSURL *_historyTokenURL;	// 16 = 0x10
}

+ (id)_objectEnumeratorForJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021e05c
+ (_Bool)appendSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 changedKeys:(id)arg3 error:(id *)arg4;	// IMP=0x000000000021def0
+ (_Bool)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021dda9
+ (id)_nextValidPayloadWithObjectEnumerator:(id)arg1 changedKeys:(id)arg2;	// IMP=0x000000000021dbad
+ (void)validatePayloadClassesForManagedObjectModel:(id)arg1;	// IMP=0x000000000021daf1
+ (id)payloadClasses;	// IMP=0x000000000021dacc
- (void).cxx_destruct;	// IMP=0x000000000021daa4
- (void)removeHistoryToken;	// IMP=0x000000000021da82
- (_Bool)saveHistoryToken:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021d87c
- (id)initWithBaseURL:(id)arg1;	// IMP=0x000000000021d7b2
- (id)init;	// IMP=0x000000000021d78d

@end

