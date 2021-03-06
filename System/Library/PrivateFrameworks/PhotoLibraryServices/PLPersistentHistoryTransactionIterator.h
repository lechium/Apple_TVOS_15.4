//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken;

@interface PLPersistentHistoryTransactionIterator : NSObject
{
    NSArray *_transactions;	// 8 = 0x8
    unsigned long long _transactionIndex;	// 16 = 0x10
    NSPersistentHistoryToken *_lastIteratedToken;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
    NSManagedObjectContext *_context;	// 40 = 0x28
}

+ (id)iteratorSinceMarker:(id)arg1 withFetchRequest:(id)arg2 managedObjectObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000222c53
+ (id)iteratorSinceToken:(id)arg1 withManagedObjectObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000222bb9
- (void).cxx_destruct;	// IMP=0x0000000000222a7a
@property(readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken; // @synthesize lastIteratedToken=_lastIteratedToken;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)_safeTransactionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000222956
- (_Bool)_enumerateOneTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002227cb
- (void)enumerateRemainingTransactionsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000222751
- (_Bool)_hasMoreTransactions;	// IMP=0x0000000000222740
- (id)initWithTransactions:(id)arg1 managedObjectObjectContext:(id)arg2;	// IMP=0x000000000022261b

@end

