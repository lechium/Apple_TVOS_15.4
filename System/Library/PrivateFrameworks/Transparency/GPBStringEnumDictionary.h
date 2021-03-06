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
@interface GPBStringEnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000002a2d2
- (void)removeAll;	// IMP=0x000000000002a2bc
- (void)removeEnumForKey:(id)arg1;	// IMP=0x000000000002a2a6
- (void)setRawValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000002a201
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002a1c0
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a102
- (_Bool)getRawValue:(int *)arg1 forKey:(id)arg2;	// IMP=0x000000000002a0b9
- (_Bool)getEnum:(int *)arg1 forKey:(id)arg2;	// IMP=0x000000000002a051
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029fcd
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000029f83
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x0000000000029ecf
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000029d71
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000029c3a
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029ba1
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000029b4a
- (unsigned long long)hash;	// IMP=0x0000000000029b34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029ae3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029aab
- (void)dealloc;	// IMP=0x0000000000029a70
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000029a56
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000299ea
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(id *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000298b7
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000002989d
- (id)init;	// IMP=0x0000000000029881

@end

