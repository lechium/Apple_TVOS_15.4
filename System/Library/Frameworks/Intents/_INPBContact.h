//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBContact-Protocol.h>

@class NSArray, NSString;

@interface _INPBContact : PBCodable <_INPBContact, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a9058
+ (Class)valueType;	// IMP=0x00000000000a9047
- (void).cxx_destruct;	// IMP=0x00000000000a8e85
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a8c58
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a8ab9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a8a37
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a89a5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a88a6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a8776
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a8769
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a874c
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x00000000000a86b5
- (void)clearValues;	// IMP=0x00000000000a8698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

