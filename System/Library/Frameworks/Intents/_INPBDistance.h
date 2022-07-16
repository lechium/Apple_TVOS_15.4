//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDistance-Protocol.h>

@class NSArray, NSString;

@interface _INPBDistance : PBCodable <_INPBDistance, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016fe21
+ (Class)valueType;	// IMP=0x000000000016fe10
- (void).cxx_destruct;	// IMP=0x000000000016fc4e
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x000000000016fa21
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016f882
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016f800
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016f76e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016f66f
- (void)writeTo:(id)arg1;	// IMP=0x000000000016f53f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016f532
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016f515
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x000000000016f47e
- (void)clearValues;	// IMP=0x000000000016f461

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
