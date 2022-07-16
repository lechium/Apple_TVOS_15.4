//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>
{
}

+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00000000000f43e3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f43ca
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f4337
+ (id)pointerArrayWithPointerFunctions:(id)arg1;	// IMP=0x00000000000f42f5
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000f42b3
+ (id)weakObjectsPointerArray;	// IMP=0x00000000000f44b7
+ (id)strongObjectsPointerArray;	// IMP=0x00000000000f449e
+ (id)pointerArrayWithWeakObjects;	// IMP=0x00000000000f4470
+ (id)pointerArrayWithStrongObjects;	// IMP=0x00000000000f4457
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f444e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f4445
@property unsigned long long count;
- (void)compact;	// IMP=0x00000000000f442a
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;	// IMP=0x00000000000f4421
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000f4418
- (void)removePointerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f440f
- (void)addPointer:(void *)arg1;	// IMP=0x00000000000f4406
- (void *)pointerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f43fd
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000f43f4
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (Class)classForCoder;	// IMP=0x00000000000f43d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f4354
- (id)initWithPointerFunctions:(id)arg1;	// IMP=0x00000000000f42aa
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000f42a1
- (id)init;	// IMP=0x00000000000f4219
- (id)allObjects;	// IMP=0x00000000000f44ee
- (id)mutableArray;	// IMP=0x00000000000f44e5

@end
