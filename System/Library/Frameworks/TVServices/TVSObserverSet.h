//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TVSObserverSet : NSObject
{
    struct os_unfair_lock_s _table_lock;	// 8 = 0x8
    Class _handleClass;	// 16 = 0x10
    NSMapTable *_table;	// 24 = 0x18
}

+ (Class)_defaultHandleClass;	// IMP=0x0000000000047b8b
- (void).cxx_destruct;	// IMP=0x00000000000484a2
@property(readonly, nonatomic) struct os_unfair_lock_s table_lock; // @synthesize table_lock=_table_lock;
@property(readonly, nonatomic) NSMapTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) Class handleClass; // @synthesize handleClass=_handleClass;
- (void)_mutateObservers:(CDUnknownBlockType)arg1 withPreflight:(CDUnknownBlockType)arg2;	// IMP=0x00000000000483dc
- (id)_getTable;	// IMP=0x00000000000483a5
- (id)_newHandleForObject:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x000000000004832b
- (void)_removeObserverForHandle:(id)arg1;	// IMP=0x00000000000481b4
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047f3d
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000047ef2
- (id)addObserver:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000047de8
- (id)addObserver:(id)arg1;	// IMP=0x0000000000047dd4
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0000000000047d57
- (id)initWithHandleClass:(Class)arg1;	// IMP=0x0000000000047d3d
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000047cf5
- (id)initWithOptions:(unsigned long long)arg1 handleClass:(Class)arg2;	// IMP=0x0000000000047b9c

@end
