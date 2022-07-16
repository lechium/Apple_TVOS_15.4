//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLong-Protocol.h>

@class NSArray, NSString;

@interface _INPBLong : PBCodable <_INPBLong, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028fe64
+ (Class)valueType;	// IMP=0x000000000028fe53
- (void).cxx_destruct;	// IMP=0x000000000028fc91
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x000000000028fa64
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028f8c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028f843
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028f7b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028f6b2
- (void)writeTo:(id)arg1;	// IMP=0x000000000028f582
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000028f575
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000028f558
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x000000000028f4c1
- (void)clearValues;	// IMP=0x000000000028f4a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
