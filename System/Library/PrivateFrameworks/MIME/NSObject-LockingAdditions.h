//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;	// IMP=0x000000000002a993
- (id)mf_exclusiveLocks;	// IMP=0x000000000002c1ef
- (id)mf_lockOrdering;	// IMP=0x000000000002c1e7
- (id)mf_strictLockOrdering;	// IMP=0x000000000002c1df
- (_Bool)_mf_ntsIsLocked;	// IMP=0x000000000002c197
- (void)mf_unlock;	// IMP=0x000000000002bec5
- (_Bool)mf_tryLockWithPriority;	// IMP=0x000000000002be95
- (void)mf_lockWithPriority;	// IMP=0x000000000002be65
- (_Bool)mf_tryLock;	// IMP=0x000000000002bb83
- (void)mf_lock;	// IMP=0x000000000002b75b
- (void)_mf_checkToAllowLock:(id)arg1;	// IMP=0x000000000002b70e
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;	// IMP=0x000000000002b52e
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;	// IMP=0x000000000002b404
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;	// IMP=0x000000000002b2bf
- (void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2;	// IMP=0x000000000002af6e
- (id)_mf_lockOrderingForType:(int)arg1;	// IMP=0x000000000002ae3d
@end
