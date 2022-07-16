//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBInteger-Protocol.h>

@class NSArray, NSString;

@interface _INPBInteger : PBCodable <_INPBInteger, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_values;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000149d78
+ (Class)valueType;	// IMP=0x0000000000149d67
- (void).cxx_destruct;	// IMP=0x0000000000149ba5
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x0000000000149978
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001497d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000149757
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001496c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001495c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000149496
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000149489
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014946c
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;	// IMP=0x00000000001493d5
- (void)clearValues;	// IMP=0x00000000001493b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

