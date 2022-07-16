//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntegerList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBIntegerList : PBCodable <_INPBIntegerList, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBCondition *_conditionType;	// 8 = 0x8
    NSArray *_dataStrings;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016ddfb
+ (Class)dataStringType;	// IMP=0x000000000016ddea
- (void).cxx_destruct;	// IMP=0x000000000016dba3
@property(copy, nonatomic) NSArray *dataStrings; // @synthesize dataStrings=_dataStrings;
@property(retain, nonatomic) _INPBCondition *conditionType; // @synthesize conditionType=_conditionType;
- (id)dictionaryRepresentation;	// IMP=0x000000000016d90c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016d602
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016d543
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016d4b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016d3b2
- (void)writeTo:(id)arg1;	// IMP=0x000000000016d227
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016d21a
- (id)dataStringAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016d1fd
@property(readonly, nonatomic) unsigned long long dataStringsCount;
- (void)addDataString:(id)arg1;	// IMP=0x000000000016d166
- (void)clearDataStrings;	// IMP=0x000000000016d149
@property(readonly, nonatomic) _Bool hasConditionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

