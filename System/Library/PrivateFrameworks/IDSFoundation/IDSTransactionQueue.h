//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDSTransactionQueue : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_transactions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000210df
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void)executeReadyItemsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020ea0
- (void)_removeTransaction:(id)arg1;	// IMP=0x0000000000020e28
- (void)_readyTransaction:(id)arg1;	// IMP=0x0000000000020ddc
- (void)_appendTransaction:(id)arg1;	// IMP=0x0000000000020d64
- (void)_prependTransaction:(id)arg1;	// IMP=0x0000000000020cea
- (CDUnknownBlockType)appendPendingItem:(id)arg1;	// IMP=0x0000000000020be8
- (void)appendItem:(id)arg1;	// IMP=0x0000000000020b6f
- (void)prependItem:(id)arg1;	// IMP=0x0000000000020af6
- (id)init;	// IMP=0x0000000000020a99

@end

