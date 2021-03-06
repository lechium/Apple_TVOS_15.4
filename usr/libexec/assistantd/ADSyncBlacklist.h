//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface ADSyncBlacklist : NSObject
{
    NSDictionary *_cachedTimeoutTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000098653
- (void).cxx_destruct;	// IMP=0x002000000009a3aa
- (void)_saveTimeouts:(id)arg1;	// IMP=0x001000000009a29a
- (void)saveTimeouts:(id)arg1;	// IMP=0x001000000009a1f2
- (id)_timeouts:(id)arg1 expiringAfter:(id)arg2;	// IMP=0x001000000009a0bb
- (id)_timeoutsExpiringAfter:(id)arg1;	// IMP=0x001000000009a0a2
- (id)timeoutsExpiringAfter:(id)arg1;	// IMP=0x0010000000099f40
- (void)filterBlacklistedKeys:(id)arg1 appSources:(id)arg2;	// IMP=0x0010000000099a89
- (void)filterBlacklistedKeys:(id)arg1 vocabSources:(id)arg2;	// IMP=0x0010000000099536
- (void)filterBlacklistedAnchorsFrom:(id)arg1 includingNewRestrictionsFromResponse:(id)arg2;	// IMP=0x0010000000098efb
- (void)checkPermissionToSyncSlot:(id)arg1 forApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098c7e
- (void)checkIfAnyUserVocabularyIsBlacklistedForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098929
- (id)_storePath;	// IMP=0x00100000000988db
- (id)init;	// IMP=0x00100000000986d8

@end

