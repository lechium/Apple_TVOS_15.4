//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(long long)arg2;	// IMP=0x0000000000042829
- (void)removeAll;	// IMP=0x0000000000042813
- (void)removeEnumForKey:(long long)arg1;	// IMP=0x00000000000427da
- (void)setRawValue:(int)arg1 forKey:(long long)arg2;	// IMP=0x0000000000042752
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000042711
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004263e
- (_Bool)getRawValue:(int *)arg1 forKey:(long long)arg2;	// IMP=0x00000000000425d1
- (_Bool)getEnum:(int *)arg1 forKey:(long long)arg2;	// IMP=0x000000000004254e
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004249b
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004243b
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_a49d1a5a *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x0000000000042381
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000000000421f6
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000042086
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041fc7
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000041f70
- (unsigned long long)hash;	// IMP=0x0000000000041f5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041f09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041ed1
- (void)dealloc;	// IMP=0x0000000000041e1d
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000041e03
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000041d97
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000041c80
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000041c66
- (id)init;	// IMP=0x0000000000041c4a

@end
