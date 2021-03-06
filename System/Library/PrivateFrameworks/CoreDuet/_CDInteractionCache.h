//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSPredicate, _CDInteractionStore;

@interface _CDInteractionCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _CDInteractionStore *_interactionStore;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
    CDUnknownBlockType _filterBlock;	// 40 = 0x28
    NSMutableOrderedSet *_mutableInteractions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000047b6
@property(readonly, nonatomic) NSMutableOrderedSet *mutableInteractions; // @synthesize mutableInteractions=_mutableInteractions;
@property(readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, copy, nonatomic) NSArray *interactions;
- (void)_cacheInteractions:(id)arg1;	// IMP=0x00000000000041b1
- (void)interactionsRecorded:(id)arg1;	// IMP=0x00000000000040ee
- (void)_refetch;	// IMP=0x0000000000003ec6
- (void)refetch;	// IMP=0x0000000000003e94
- (id)initWithInteractionStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003d32

@end

