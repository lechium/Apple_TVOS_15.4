//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, VUISyncingKeyValueStore;
@protocol OS_dispatch_queue;

@interface VUIBookmarkService : NSObject
{
    NSMutableDictionary *_pending;	// 8 = 0x8
    _Bool _scheduledUpdate;	// 16 = 0x10
    _Bool _syncAfterUpdate;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_updateQueue;	// 24 = 0x18
    VUISyncingKeyValueStore *_keyValueStore;	// 32 = 0x20
    _Bool _syncInProgress;	// 40 = 0x28
    NSDate *_dateOfLastSyncCompletion;	// 48 = 0x30
    unsigned long long _numSyncsInProgress;	// 56 = 0x38
}

+ (id)bookmarkKeyForKeyValueStoreKey:(id)arg1;	// IMP=0x00000000000a5247
+ (id)_keyValueStoreKeyForBookmarkKey:(id)arg1;	// IMP=0x00000000000a514c
+ (id)_kvsDictionaryFromBookmark:(id)arg1;	// IMP=0x00000000000a4ebc
+ (id)_bookmarkFromKey:(id)arg1 kvsDictionary:(id)arg2;	// IMP=0x00000000000a4c2b
+ (id)sharedInstance;	// IMP=0x00000000000a47cc
+ (void)setupBookmarkService:(id)arg1;	// IMP=0x00000000000a46b6
- (void).cxx_destruct;	// IMP=0x00000000000a791c
@property(nonatomic) unsigned long long numSyncsInProgress; // @synthesize numSyncsInProgress=_numSyncsInProgress;
@property(retain, nonatomic) NSDate *dateOfLastSyncCompletion; // @synthesize dateOfLastSyncCompletion=_dateOfLastSyncCompletion;
@property(nonatomic) _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x00000000000a7855
- (void)_batchUpdate;	// IMP=0x00000000000a766a
- (void)_writePendingToAppleTVKeyValueStore:(id)arg1;	// IMP=0x00000000000a74f0
- (void)resetForRetailWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a73d3
@property(readonly, nonatomic) _Bool syncHasFinishedRecently;
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a6bc0
- (void)updateBookmark:(id)arg1 sync:(_Bool)arg2;	// IMP=0x00000000000a690b
- (void)updateBookmark:(id)arg1;	// IMP=0x00000000000a68f7
- (id)pendingBookmarkForKey:(id)arg1;	// IMP=0x00000000000a6820
- (id)bookmarkForKey:(id)arg1;	// IMP=0x00000000000a6738
- (void)fetchAllBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a5d2a
- (void)_updateBookmarks:(id)arg1 withBookmark:(id)arg2;	// IMP=0x00000000000a5bea
- (id)bookmarksForKeys:(id)arg1;	// IMP=0x00000000000a53ba
- (void)_nukePendingChangesAndNotify;	// IMP=0x00000000000a4b70
- (void)_handleUPPClientDidResetNotification;	// IMP=0x00000000000a4b5e
- (void)_handleUPPRecordsDidChangeNotification;	// IMP=0x00000000000a4b04
- (void)_handleKeyValueStoreDidResetNotification;	// IMP=0x00000000000a4af2
- (void)_handleKeyValueStoreVersionDidChangeNotification;	// IMP=0x00000000000a4a38
- (void)dealloc;	// IMP=0x00000000000a49c3
- (id)initWithKeyValueStore:(id)arg1;	// IMP=0x00000000000a47dd

@end

