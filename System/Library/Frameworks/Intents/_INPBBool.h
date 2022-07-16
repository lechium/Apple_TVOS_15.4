//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBool-Protocol.h>

@class NSArray, NSString;

@interface _INPBBool : PBCodable <_INPBBool, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006256d
+ (Class)valueType;	// IMP=0x000000000006255c
- (void).cxx_destruct;	// IMP=0x000000000006239a
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x000000000006216d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061fce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000061f4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000061eba
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061dbb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000061c8b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000061c7e
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000061c61
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x0000000000061bca
- (void)clearValues;	// IMP=0x0000000000061bad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
