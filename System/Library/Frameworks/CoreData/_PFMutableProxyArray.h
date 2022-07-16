//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

#import <CoreData/PFObjectIDCollection-Protocol.h>

@class NSString, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray <PFObjectIDCollection>
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _editCount;	// 12 = 0xc
    unsigned int _offset;	// 16 = 0x10
    unsigned int _limit;	// 20 = 0x14
    _PFArray *_originalArray;	// 24 = 0x18
    NSMutableArray *_updatedObjectsArray;	// 32 = 0x20
    struct __CFArray *_indicesVeneer;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x000000000005e338
- (Class)classForCoder;	// IMP=0x000000000005e327
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000005e2b4
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005e232
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005e1bf
- (void)removeLastObject;	// IMP=0x000000000005e129
- (void)addObject:(id)arg1;	// IMP=0x000000000005e0be
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005e01d
- (id)newArrayFromObjectIDs;	// IMP=0x000000000005df13
- (id)arrayFromObjectIDs;	// IMP=0x000000000005def9
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;	// IMP=0x000000000005de53
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000005dd9a
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x000000000005dd58
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000005dd16
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000005dcd4
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005dc52
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005dbec
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005da29
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d8ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d7d5
- (id)mutableCopy;	// IMP=0x000000000005d7c1
- (id)copy;	// IMP=0x000000000005d7ad
- (unsigned long long)count;	// IMP=0x000000000005d798
- (_Bool)_isDeallocating;	// IMP=0x000000000005d775
- (_Bool)_tryRetain;	// IMP=0x000000000005d737
- (unsigned long long)retainCount;	// IMP=0x000000000005d71f
- (oneway void)release;	// IMP=0x000000000005d6e1
- (id)retain;	// IMP=0x000000000005d6c0
- (void)dealloc;	// IMP=0x000000000005d65a
- (id)subarrayWithRange:(struct _NSRange)arg1;	// IMP=0x000000000005d502
- (id)initWithPFArray:(id)arg1;	// IMP=0x000000000005d4bd
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000005d3c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

