//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBString-Protocol.h>

@class NSArray, NSString;

@interface _INPBString : PBCodable <_INPBString, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f663f
+ (Class)valueType;	// IMP=0x00000000000f662e
- (void).cxx_destruct;	// IMP=0x00000000000f646c
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f623f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f60a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f601e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f5f8c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f5e8d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f5d5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f5d50
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f5d33
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x00000000000f5c9c
- (void)clearValues;	// IMP=0x00000000000f5c7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
