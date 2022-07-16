//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <CoreData/PFObjectIDCollection-Protocol.h>

@class NSCachingFetchRequest, NSManagedObjectContext, NSString, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray <PFObjectIDCollection>
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    _PFArray *_array;	// 16 = 0x10
    unsigned int *_entryFlags;	// 24 = 0x18
    NSManagedObjectContext *_moc;	// 32 = 0x20
    NSCachingFetchRequest *_request;	// 40 = 0x28
    unsigned int _batchSize;	// 48 = 0x30
    unsigned int *_LRUBatches;	// 56 = 0x38
    struct _PFBatchFaultingArrayFlags _flags;	// 64 = 0x40
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059b5f
+ (id)alloc;	// IMP=0x0000000000059b53
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0000000000059b4b
+ (void)initialize;	// IMP=0x0000000000059ae7
+ (Class)classForKeyedUnarchiver;	// IMP=0x00000000000595d8
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005d2b8
- (unsigned long long)count;	// IMP=0x000000000005d280
@property(readonly, copy) NSString *description;
- (id)newArrayFromObjectIDs;	// IMP=0x000000000005cff5
- (id)arrayFromObjectIDs;	// IMP=0x000000000005cfdb
- (id)subarrayWithRange:(struct _NSRange)arg1;	// IMP=0x000000000005cf64
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005cee5
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;	// IMP=0x000000000005cd60
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000005cbb3
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x000000000005cb64
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000005cb15
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000005cac6
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000005c9d1
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000005c802
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000005c7a1
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005c6bf
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x000000000005c65e
- (id)filteredArrayUsingPredicate:(id)arg1;	// IMP=0x000000000005c5fd
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c592
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c531
- (id)sortedArrayUsingSelector:(SEL)arg1;	// IMP=0x000000000005c4d0
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;	// IMP=0x000000000005c45b
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000005c3f0
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c34f
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c2ae
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c214
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c030
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005be6f
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005bbc3
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000005bae2
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005b9c0
- (void)getObjects:(id *)arg1;	// IMP=0x000000000005b971
- (_Bool)_isDeallocating;	// IMP=0x000000000005a853
- (_Bool)_tryRetain;	// IMP=0x000000000005a815
- (unsigned long long)retainCount;	// IMP=0x000000000005a7fd
- (oneway void)release;	// IMP=0x000000000005a7bf
- (id)retain;	// IMP=0x000000000005a79e
- (void)dealloc;	// IMP=0x000000000005a6fe
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a6b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a682
- (_Bool)isEqualToArray:(id)arg1;	// IMP=0x0000000000059f83
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;	// IMP=0x0000000000059b6b
- (Class)classForCoder;	// IMP=0x00000000000595c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
