//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPower-Protocol.h>

@class NSArray, NSString;

@interface _INPBPower : PBCodable <_INPBPower, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b457a
+ (Class)valueType;	// IMP=0x00000000004b4569
- (void).cxx_destruct;	// IMP=0x00000000004b43a7
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x00000000004b417a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b3fdb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b3f59
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b3ec7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b3dc8
- (void)writeTo:(id)arg1;	// IMP=0x00000000004b3c98
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004b3c8b
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004b3c6e
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x00000000004b3bd7
- (void)clearValues;	// IMP=0x00000000004b3bba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

