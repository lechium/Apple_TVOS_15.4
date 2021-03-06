//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCurrencyAmount-Protocol.h>

@class NSArray, NSString;

@interface _INPBCurrencyAmount : PBCodable <_INPBCurrencyAmount, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a93c5
+ (Class)valueType;	// IMP=0x00000000001a93b4
- (void).cxx_destruct;	// IMP=0x00000000001a91f2
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a8fc5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8e26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a8da4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a8d12
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a8c13
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a8ae3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a8ad6
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a8ab9
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x00000000001a8a22
- (void)clearValues;	// IMP=0x00000000001a8a05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

