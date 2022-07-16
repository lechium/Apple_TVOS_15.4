//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSFastEnumeration-Protocol.h>
#import <CoreFoundation/NSMutableCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000126eeb
+ (id)setWithSet:(id)arg1;	// IMP=0x00000000001266ca
+ (id)setWithSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000126696
+ (id)setWithOrderedSet:(id)arg1;	// IMP=0x0000000000126643
+ (id)setWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00000000001265ee
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000001265a8
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;	// IMP=0x0000000000126560
+ (id)setWithArray:(id)arg1;	// IMP=0x000000000012650d
+ (id)setWithArray:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00000000001264b8
+ (id)setWithArray:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000126472
+ (id)setWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;	// IMP=0x000000000012642a
+ (id)setWithObjects:(id)arg1;	// IMP=0x000000000012618d
+ (id)newSetWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001260ac
+ (id)set;	// IMP=0x0000000000126086
+ (id)setWithObject:(id)arg1;	// IMP=0x0000000000126015
+ (id)setWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000125fe1
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012532c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000126ef1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000126eee
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000126e7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000126e09
- (id)setByAddingObjectsFromSet:(id)arg1;	// IMP=0x0000000000126aa9
- (id)setByAddingObjectsFromArray:(id)arg1;	// IMP=0x00000000001268ba
- (id)setByAddingObject:(id)arg1;	// IMP=0x00000000001266fb
- (id)initWithSet:(id)arg1;	// IMP=0x0000000000125fd2
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000125c78
- (id)initWithOrderedSet:(id)arg1;	// IMP=0x0000000000125c30
- (id)initWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x0000000000125be6
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000125bd6
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;	// IMP=0x000000000012598d
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000125945
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00000000001258fb
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000001258eb
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;	// IMP=0x00000000001256a2
- (id)initWithObjects:(id)arg1;	// IMP=0x0000000000125414
- (id)initWithObject:(id)arg1;	// IMP=0x00000000001253c7
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001981a5
- (_Bool)__getValue:(id *)arg1 forObj:(id)arg2;	// IMP=0x00000000001252f9
- (void)__applyValues:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x00000000001251a0
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000012514c
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124e3f
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000124deb
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124c7d
- (id)objectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000124c29
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124b08
- (id)members:(id)arg1 notFoundMarker:(id)arg2;	// IMP=0x0000000000124801
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x00000000001246a4
- (void)makeObjectsPerformSelector:(SEL)arg1;	// IMP=0x0000000000124555
- (_Bool)isSubsetOfSet:(id)arg1;	// IMP=0x000000000012421e
- (_Bool)isSubsetOfOrderedSet:(id)arg1;	// IMP=0x0000000000124064
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000123ffb
- (_Bool)isEqualToSet:(id)arg1;	// IMP=0x0000000000123c83
- (_Bool)intersectsSet:(id)arg1;	// IMP=0x000000000012397f
- (_Bool)intersectsOrderedSet:(id)arg1;	// IMP=0x0000000000123801
- (unsigned long long)hash;	// IMP=0x00000000001237be
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000123712
- (void)getObjects:(id *)arg1;	// IMP=0x000000000012367d
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000012351f
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001234cb
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012346e
- (id)description;	// IMP=0x0000000000123427
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x00000000001233dd
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x00000000001230a1
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000012304d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000122ee8
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000122e90
- (id)anyObject;	// IMP=0x0000000000122ded
- (id)allObjects;	// IMP=0x0000000000122c56
- (_Bool)isNSSet__;	// IMP=0x0000000000122c53
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000122c4e
- (id)objectEnumerator;	// IMP=0x0000000000198177
- (id)member:(id)arg1;	// IMP=0x0000000000198149
@property(readonly) unsigned long long count;

@end
