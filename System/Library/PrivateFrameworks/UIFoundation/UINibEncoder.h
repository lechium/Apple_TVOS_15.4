//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface UINibEncoder : NSCoder
{
    struct __CFDictionary *objectsToObjectIDs;	// 8 = 0x8
    struct __CFDictionary *objectIDsToObjects;	// 16 = 0x10
    struct __CFArray *values;	// 24 = 0x18
    struct __CFSet *encodedObjects;	// 32 = 0x20
    NSMutableData *data;	// 40 = 0x28
    struct __CFDictionary *replacements;	// 48 = 0x30
    unsigned int nextObjectID;	// 56 = 0x38
    struct {
        unsigned int currentObjectID;
        unsigned int nextAnonymousKey;
    } recursiveState;	// 60 = 0x3c
    struct __CFSet *objectsReplacedWithNil;	// 72 = 0x48
    id delegate;	// 80 = 0x50
    struct __CFArray *encodedOrderedObjects;	// 88 = 0x58
    struct __CFSet *objectsUniquedByValue;	// 96 = 0x60
}

+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000000d3a07
+ (id)archivedDataWithRootObject:(id)arg1;	// IMP=0x00000000000d3988
@property id delegate; // @synthesize delegate;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x00000000000d4aeb
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000d4aa6
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;	// IMP=0x00000000000d4a46
- (void)encodeValuesOfObjCTypes:(const char *)arg1;	// IMP=0x00000000000d49e6
- (void)encodeConditionalObject:(id)arg1;	// IMP=0x00000000000d49a6
- (void)encodeByrefObject:(id)arg1;	// IMP=0x00000000000d4966
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x00000000000d4926
- (void)encodeRootObject:(id)arg1;	// IMP=0x00000000000d48e6
- (void)encodeObject:(id)arg1;	// IMP=0x00000000000d48a6
- (id)nextGenericKey;	// IMP=0x00000000000d486f
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4816
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x00000000000d47b5
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x00000000000d475c
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4709
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x00000000000d46b6
- (void)encodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d46a4
- (void)encodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d45d2
- (void)encodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d44ff
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d44bc
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x00000000000d447a
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4438
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000d43f5
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000d43b2
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000000d436c
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4326
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000d42e3
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4148
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d3f50
- (_Bool)allowsKeyedCoding;	// IMP=0x00000000000d3f48
- (long long)versionForClassName:(id)arg1;	// IMP=0x00000000000d3f1a
- (unsigned int)systemVersion;	// IMP=0x00000000000d3f0f
- (void)finishEncoding;	// IMP=0x00000000000d3a3d
- (void)serializeObject:(id)arg1;	// IMP=0x00000000000d38cd
- (void)serializeSet:(id)arg1;	// IMP=0x00000000000d3792
- (void)serializeDictionary:(id)arg1;	// IMP=0x00000000000d35e7
- (void)serializeArray:(id)arg1;	// IMP=0x00000000000d34ac
- (id)replacementObjectForObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d32d4
- (_Bool)shouldUniqueObjectByValue:(id)arg1;	// IMP=0x00000000000d3266
- (_Bool)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;	// IMP=0x00000000000d3211
- (_Bool)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;	// IMP=0x00000000000d31b3
- (id)encodedClassNameForObject:(id)arg1;	// IMP=0x00000000000d3182
- (id)encodedClassNameForClass:(Class)arg1;	// IMP=0x00000000000d3175
- (Class)encodedClassForObject:(id)arg1;	// IMP=0x00000000000d3142
- (void)appendValue:(id)arg1;	// IMP=0x00000000000d312a
- (_Bool)previouslyCodedObject:(id)arg1;	// IMP=0x00000000000d3111
- (id)assignObjectIDForObject:(id)arg1;	// IMP=0x00000000000d30a2
- (id)objectIDForObject:(id)arg1;	// IMP=0x00000000000d308a
- (void)dealloc;	// IMP=0x00000000000d2fc8
- (id)initForWritingWithMutableData:(id)arg1;	// IMP=0x00000000000d2df1

@end

