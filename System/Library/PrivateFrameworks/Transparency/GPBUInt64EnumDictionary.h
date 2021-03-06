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
@interface GPBUInt64EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001fa93
- (void)removeAll;	// IMP=0x000000000001fa7d
- (void)removeEnumForKey:(unsigned long long)arg1;	// IMP=0x000000000001fa44
- (void)setRawValue:(int)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001f9bc
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x000000000001f97b
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f8a8
- (_Bool)getRawValue:(int *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001f83b
- (_Bool)getEnum:(int *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001f7b8
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f705
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000001f6a5
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x000000000001f5ce
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000001f440
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001f2e3
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f224
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000001f1cd
- (unsigned long long)hash;	// IMP=0x000000000001f1b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f166
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f12e
- (void)dealloc;	// IMP=0x000000000001f0f3
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000001f0d9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001f06d
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const unsigned long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000001ef56
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000001ef3c
- (id)init;	// IMP=0x000000000001ef20

@end

