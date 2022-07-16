//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUTResult, NSMutableArray, NSRecursiveLock;

@interface _CUTLockingPromise
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    _Bool _done;	// 16 = 0x10
    CUTResult *_result;	// 24 = 0x18
    NSMutableArray *_resultBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000009a46
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *resultBlocks; // @synthesize resultBlocks=_resultBlocks;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool done; // @synthesize done=_done;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000098eb
- (void)_fulfillWithResult:(id)arg1;	// IMP=0x00000000000096cc
- (id)init;	// IMP=0x000000000000963e

@end

