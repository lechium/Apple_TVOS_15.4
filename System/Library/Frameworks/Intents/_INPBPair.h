//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPair-Protocol.h>

@class NSArray, NSString;

@interface _INPBPair : PBCodable <_INPBPair, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int repeated:1;
    } _has;	// 8 = 0x8
    _Bool _repeated;	// 12 = 0xc
    NSString *_key;	// 16 = 0x10
    NSArray *_pairCurrencyAmountValues;	// 24 = 0x18
    NSArray *_pairCustomObjects;	// 32 = 0x20
    NSArray *_pairDataStrings;	// 40 = 0x28
    NSArray *_pairDataValues;	// 48 = 0x30
    NSArray *_pairDistanceValues;	// 56 = 0x38
    NSArray *_pairDoubleValues;	// 64 = 0x40
    NSArray *_pairImageValues;	// 72 = 0x48
    NSArray *_pairIntegerValues;	// 80 = 0x50
    NSArray *_pairLocationValues;	// 88 = 0x58
    NSArray *_pairPaymentMethodValues;	// 96 = 0x60
    NSArray *_pairPersonValues;	// 104 = 0x68
    NSArray *_pairStringValues;	// 112 = 0x70
    NSArray *_pairTemperatureValues;	// 120 = 0x78
    NSArray *_pairUrlValues;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000354522
+ (Class)pairUrlValueType;	// IMP=0x0000000000354511
+ (Class)pairTemperatureValueType;	// IMP=0x0000000000354500
+ (Class)pairStringValueType;	// IMP=0x00000000003544ef
+ (Class)pairPersonValueType;	// IMP=0x00000000003544de
+ (Class)pairPaymentMethodValueType;	// IMP=0x00000000003544cd
+ (Class)pairLocationValueType;	// IMP=0x00000000003544bc
+ (Class)pairIntegerValueType;	// IMP=0x00000000003544ab
+ (Class)pairImageValueType;	// IMP=0x000000000035449a
+ (Class)pairDoubleValueType;	// IMP=0x0000000000354489
+ (Class)pairDistanceValueType;	// IMP=0x0000000000354478
+ (Class)pairDataValueType;	// IMP=0x0000000000354467
+ (Class)pairDataStringType;	// IMP=0x0000000000354456
+ (Class)pairCustomObjectType;	// IMP=0x0000000000354445
+ (Class)pairCurrencyAmountValueType;	// IMP=0x0000000000354434
- (void).cxx_destruct;	// IMP=0x0000000000353b11
@property(nonatomic) _Bool repeated; // @synthesize repeated=_repeated;
@property(copy, nonatomic) NSArray *pairUrlValues; // @synthesize pairUrlValues=_pairUrlValues;
@property(copy, nonatomic) NSArray *pairTemperatureValues; // @synthesize pairTemperatureValues=_pairTemperatureValues;
@property(copy, nonatomic) NSArray *pairStringValues; // @synthesize pairStringValues=_pairStringValues;
@property(copy, nonatomic) NSArray *pairPersonValues; // @synthesize pairPersonValues=_pairPersonValues;
@property(copy, nonatomic) NSArray *pairPaymentMethodValues; // @synthesize pairPaymentMethodValues=_pairPaymentMethodValues;
@property(copy, nonatomic) NSArray *pairLocationValues; // @synthesize pairLocationValues=_pairLocationValues;
@property(copy, nonatomic) NSArray *pairIntegerValues; // @synthesize pairIntegerValues=_pairIntegerValues;
@property(copy, nonatomic) NSArray *pairImageValues; // @synthesize pairImageValues=_pairImageValues;
@property(copy, nonatomic) NSArray *pairDoubleValues; // @synthesize pairDoubleValues=_pairDoubleValues;
@property(copy, nonatomic) NSArray *pairDistanceValues; // @synthesize pairDistanceValues=_pairDistanceValues;
@property(copy, nonatomic) NSArray *pairDataValues; // @synthesize pairDataValues=_pairDataValues;
@property(copy, nonatomic) NSArray *pairDataStrings; // @synthesize pairDataStrings=_pairDataStrings;
@property(copy, nonatomic) NSArray *pairCustomObjects; // @synthesize pairCustomObjects=_pairCustomObjects;
@property(copy, nonatomic) NSArray *pairCurrencyAmountValues; // @synthesize pairCurrencyAmountValues=_pairCurrencyAmountValues;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)dictionaryRepresentation;	// IMP=0x000000000035215f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000350fca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000350c28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000350b96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000350a97
- (void)writeTo:(id)arg1;	// IMP=0x000000000034fe0f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000034fe02
@property(nonatomic) _Bool hasRepeated;
- (id)pairUrlValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034fda0
@property(readonly, nonatomic) unsigned long long pairUrlValuesCount;
- (void)addPairUrlValue:(id)arg1;	// IMP=0x000000000034fd09
- (void)clearPairUrlValues;	// IMP=0x000000000034fcec
- (id)pairTemperatureValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034fc9b
@property(readonly, nonatomic) unsigned long long pairTemperatureValuesCount;
- (void)addPairTemperatureValue:(id)arg1;	// IMP=0x000000000034fc04
- (void)clearPairTemperatureValues;	// IMP=0x000000000034fbe7
- (id)pairStringValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034fb96
@property(readonly, nonatomic) unsigned long long pairStringValuesCount;
- (void)addPairStringValue:(id)arg1;	// IMP=0x000000000034faff
- (void)clearPairStringValues;	// IMP=0x000000000034fae2
- (id)pairPersonValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034fa91
@property(readonly, nonatomic) unsigned long long pairPersonValuesCount;
- (void)addPairPersonValue:(id)arg1;	// IMP=0x000000000034f9fa
- (void)clearPairPersonValues;	// IMP=0x000000000034f9dd
- (id)pairPaymentMethodValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f98c
@property(readonly, nonatomic) unsigned long long pairPaymentMethodValuesCount;
- (void)addPairPaymentMethodValue:(id)arg1;	// IMP=0x000000000034f8f5
- (void)clearPairPaymentMethodValues;	// IMP=0x000000000034f8d8
- (id)pairLocationValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f887
@property(readonly, nonatomic) unsigned long long pairLocationValuesCount;
- (void)addPairLocationValue:(id)arg1;	// IMP=0x000000000034f7f0
- (void)clearPairLocationValues;	// IMP=0x000000000034f7d3
- (id)pairIntegerValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f782
@property(readonly, nonatomic) unsigned long long pairIntegerValuesCount;
- (void)addPairIntegerValue:(id)arg1;	// IMP=0x000000000034f6eb
- (void)clearPairIntegerValues;	// IMP=0x000000000034f6ce
- (id)pairImageValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f67d
@property(readonly, nonatomic) unsigned long long pairImageValuesCount;
- (void)addPairImageValue:(id)arg1;	// IMP=0x000000000034f5e6
- (void)clearPairImageValues;	// IMP=0x000000000034f5c9
- (id)pairDoubleValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f578
@property(readonly, nonatomic) unsigned long long pairDoubleValuesCount;
- (void)addPairDoubleValue:(id)arg1;	// IMP=0x000000000034f4e1
- (void)clearPairDoubleValues;	// IMP=0x000000000034f4c4
- (id)pairDistanceValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f473
@property(readonly, nonatomic) unsigned long long pairDistanceValuesCount;
- (void)addPairDistanceValue:(id)arg1;	// IMP=0x000000000034f3dc
- (void)clearPairDistanceValues;	// IMP=0x000000000034f3bf
- (id)pairDataValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f36e
@property(readonly, nonatomic) unsigned long long pairDataValuesCount;
- (void)addPairDataValue:(id)arg1;	// IMP=0x000000000034f2d7
- (void)clearPairDataValues;	// IMP=0x000000000034f2ba
- (id)pairDataStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f269
@property(readonly, nonatomic) unsigned long long pairDataStringsCount;
- (void)addPairDataString:(id)arg1;	// IMP=0x000000000034f1d2
- (void)clearPairDataStrings;	// IMP=0x000000000034f1b5
- (id)pairCustomObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f164
@property(readonly, nonatomic) unsigned long long pairCustomObjectsCount;
- (void)addPairCustomObject:(id)arg1;	// IMP=0x000000000034f0cd
- (void)clearPairCustomObjects;	// IMP=0x000000000034f0b0
- (id)pairCurrencyAmountValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034f05f
@property(readonly, nonatomic) unsigned long long pairCurrencyAmountValuesCount;
- (void)addPairCurrencyAmountValue:(id)arg1;	// IMP=0x000000000034efc8
- (void)clearPairCurrencyAmountValues;	// IMP=0x000000000034efab
@property(readonly, nonatomic) _Bool hasKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

