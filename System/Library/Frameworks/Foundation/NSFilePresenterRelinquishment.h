//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSCountedSet *_blockingAccessClaimIDs;	// 16 = 0x10
    NSMutableArray *_relinquishReplies;	// 24 = 0x18
    CDUnknownBlockType _reacquirer;	// 32 = 0x20
    NSMutableArray *_blockingPrerelinquishReplies;	// 40 = 0x28
    _Bool _prerelinquishInProgress;	// 48 = 0x30
}

- (void)didRelinquish;	// IMP=0x000000000020c4db
- (void)_locked_addPrerelinquishReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000020c42c
- (_Bool)_locked_addRelinquishReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000020c3c9
- (void)removeAllBlockingAccessClaimIDs;	// IMP=0x000000000020c2c3
- (void)removeBlockingAccessClaimID:(id)arg1;	// IMP=0x000000000020c2a4
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;	// IMP=0x000000000020c19b
- (void)setReacquirer:(CDUnknownBlockType)arg1;	// IMP=0x000000000020c09a
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000020bd41
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000020b8da
- (void)dealloc;	// IMP=0x000000000020b85f

@end

