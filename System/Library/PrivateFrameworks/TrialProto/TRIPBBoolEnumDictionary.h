//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolEnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    CDUnknownFunctionPointerType _validationFunc;	// 16 = 0x10
    int _values[2];	// 24 = 0x18
    _Bool _valueSet[2];	// 32 = 0x20
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)removeAll;	// IMP=0x000000000004bf26
- (void)removeEnumForKey:(_Bool)arg1;	// IMP=0x000000000004bf19
- (void)setRawValue:(int)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004bef6
- (void)setEnum:(int)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004be7c
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x000000000004be36
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004be22
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bdae
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004bc89
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004bbaf
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_a49d1a5a *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x000000000004baf4
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ba71
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ba1a
- (_Bool)getRawValue:(int *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004b9fc
- (_Bool)getEnum:(int *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004b9b4
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004b908
- (unsigned long long)hash;	// IMP=0x000000000004b8f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b887
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b84f
- (void)dealloc;	// IMP=0x000000000004b7a5
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000004b78b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004b70e
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const _Bool *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000004b68d
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000004b673
- (id)init;	// IMP=0x000000000004b657

@end

