//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSPointerFunctions, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0000000000072e7b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000072e62
+ (id)hashTableWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000072df6
+ (id)weakObjectsHashTable;	// IMP=0x0000000000072dc6
+ (id)hashTableWithWeakObjects;	// IMP=0x0000000000072d96
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000072d79
+ (id)alloc;	// IMP=0x0000000000072d5c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073ad4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073ac2
@property(readonly, copy) NSSet *setRepresentation;
- (id)mutableSet;	// IMP=0x000000000007388a
- (void)minusHashTable:(id)arg1;	// IMP=0x000000000007374f
- (void)unionHashTable:(id)arg1;	// IMP=0x0000000000073641
- (void)intersectHashTable:(id)arg1;	// IMP=0x00000000000733d8
- (_Bool)isSubsetOfHashTable:(id)arg1;	// IMP=0x00000000000732cd
- (_Bool)isEqualToHashTable:(id)arg1;	// IMP=0x000000000007317c
- (_Bool)intersectsHashTable:(id)arg1;	// IMP=0x0000000000073073
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000007305a
@property(readonly, nonatomic) id anyObject;
- (void)removeAllObjects;	// IMP=0x0000000000072fd1
- (void)removeObject:(id)arg1;	// IMP=0x0000000000072fbf
- (id)member:(id)arg1;	// IMP=0x0000000000072fad
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000072f9b
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x0000000000072f92
- (void)removeAllItems;	// IMP=0x0000000000072f89
- (id)copy;	// IMP=0x0000000000072f80
- (void)removeItem:(const void *)arg1;	// IMP=0x0000000000072f77
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x0000000000072f6e
- (void)addObject:(id)arg1;	// IMP=0x0000000000072f65
- (void *)getItem:(const void *)arg1;	// IMP=0x0000000000072f5c
- (unsigned long long)weakCount;	// IMP=0x0000000000072f4a
@property(readonly, copy) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000072f2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072f26
- (id)objectEnumerator;	// IMP=0x0000000000072f1d
- (id)description;	// IMP=0x0000000000072f14
- (id)init;	// IMP=0x0000000000072f0b
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000072e83
- (Class)classForCoder;	// IMP=0x0000000000072e6a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072e2e

@end
