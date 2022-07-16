//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBInt64EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(long long)arg2;	// IMP=0x000000000002528e
- (void)removeAll;	// IMP=0x0000000000025278
- (void)removeEnumForKey:(long long)arg1;	// IMP=0x000000000002523f
- (void)setRawValue:(int)arg1 forKey:(long long)arg2;	// IMP=0x00000000000251b7
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000025176
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000250a3
- (_Bool)getRawValue:(int *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000025036
- (_Bool)getEnum:(int *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000024fb3
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024f00
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000024ea0
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x0000000000024db9
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000024c0d
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000024ab0
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000249f1
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002499a
- (unsigned long long)hash;	// IMP=0x0000000000024984
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024933
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000248fb
- (void)dealloc;	// IMP=0x00000000000248c0
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000000248a6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002483a
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000024723
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000024709
- (id)init;	// IMP=0x00000000000246ed

@end
