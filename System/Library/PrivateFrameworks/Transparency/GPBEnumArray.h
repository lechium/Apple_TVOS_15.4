//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBEnumArray : NSObject <NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    CDUnknownFunctionPointerType _validationFunc;	// 16 = 0x10
    int *_values;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
    unsigned long long _capacity;	// 40 = 0x28
}

+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000081f71
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x0000000000081f42
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2;	// IMP=0x0000000000081efb
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000081ecc
+ (id)array;	// IMP=0x0000000000081ea8
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2;	// IMP=0x0000000000082b0e
- (void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000829f3
- (void)addValues:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000828ec
- (void)addValue:(int)arg1;	// IMP=0x00000000000828c3
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008282d
- (void)removeAll;	// IMP=0x0000000000082805
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008275b
- (void)addRawValuesFromArray:(id)arg1;	// IMP=0x000000000008273e
- (void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2;	// IMP=0x00000000000826e5
- (void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008260d
- (void)addRawValues:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008257a
- (void)addRawValue:(int)arg1;	// IMP=0x0000000000082551
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x00000000000824e4
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082411
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000823fa
- (int)rawValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000823ae
- (int)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000082348
- (void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000822b9
- (void)enumerateRawValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000822a2
- (id)description;	// IMP=0x00000000000821f6
- (unsigned long long)hash;	// IMP=0x00000000000821ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000082192
- (void)dealloc;	// IMP=0x0000000000082158
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082117
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000000820d8
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000082034
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000081fda
- (id)initWithValueArray:(id)arg1;	// IMP=0x0000000000081fb9
- (id)init;	// IMP=0x0000000000081fa5

@end

