//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TransactionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _handle;	// 16 = 0x10
    long long _holdTime;	// 24 = 0x18
    NSCountedSet *_transactionCount;	// 32 = 0x20
    NSMutableDictionary *_transactionStore;	// 40 = 0x28
}

+ (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x004000000017b29c
+ (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x001000000017b22a
+ (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000017b1a4
+ (id)globalStore;	// IMP=0x001000000017ac67
- (void).cxx_destruct;	// IMP=0x002000000017b760
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x001000000017b584
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x001000000017b399
- (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000017b30e
@property(readonly) unsigned long long transactionCount;
@property(readonly, copy) NSCountedSet *activeTransactions;
- (void)dealloc;	// IMP=0x001000000017af95
- (id)initWithHoldTime:(double)arg1;	// IMP=0x001000000017acee
- (id)init;	// IMP=0x001000000017acd4

@end

