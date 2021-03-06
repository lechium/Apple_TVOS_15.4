//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSaveHealthSampleIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBString;

@interface _INPBSaveHealthSampleIntentResponse : PBCodable <_INPBSaveHealthSampleIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBString *_defaultUnit;	// 8 = 0x8
    _INPBString *_punchoutUrl;	// 16 = 0x10
    _INPBDateTimeRange *_recordDate;	// 24 = 0x18
    NSArray *_sampleUuids;	// 32 = 0x20
    _INPBString *_userProvidedUnit;	// 40 = 0x28
    NSArray *_valuesDefaultUnits;	// 48 = 0x30
    NSArray *_valuesUserProvidedUnits;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001fe6ab
+ (Class)valuesUserProvidedUnitType;	// IMP=0x00000000001fe69a
+ (Class)valuesDefaultUnitType;	// IMP=0x00000000001fe689
+ (Class)sampleUuidsType;	// IMP=0x00000000001fe678
- (void).cxx_destruct;	// IMP=0x00000000001fe1e0
@property(copy, nonatomic) NSArray *valuesUserProvidedUnits; // @synthesize valuesUserProvidedUnits=_valuesUserProvidedUnits;
@property(copy, nonatomic) NSArray *valuesDefaultUnits; // @synthesize valuesDefaultUnits=_valuesDefaultUnits;
@property(retain, nonatomic) _INPBString *userProvidedUnit; // @synthesize userProvidedUnit=_userProvidedUnit;
@property(copy, nonatomic) NSArray *sampleUuids; // @synthesize sampleUuids=_sampleUuids;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate; // @synthesize recordDate=_recordDate;
@property(retain, nonatomic) _INPBString *punchoutUrl; // @synthesize punchoutUrl=_punchoutUrl;
@property(retain, nonatomic) _INPBString *defaultUnit; // @synthesize defaultUnit=_defaultUnit;
- (id)dictionaryRepresentation;	// IMP=0x00000000001fdaaf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fd20b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fd041
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001fcfaf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001fceb0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fca5e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fca51
- (id)valuesUserProvidedUnitAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001fca34
@property(readonly, nonatomic) unsigned long long valuesUserProvidedUnitsCount;
- (void)addValuesUserProvidedUnit:(id)arg1;	// IMP=0x00000000001fc99d
- (void)clearValuesUserProvidedUnits;	// IMP=0x00000000001fc980
- (id)valuesDefaultUnitAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001fc92f
@property(readonly, nonatomic) unsigned long long valuesDefaultUnitsCount;
- (void)addValuesDefaultUnit:(id)arg1;	// IMP=0x00000000001fc898
- (void)clearValuesDefaultUnits;	// IMP=0x00000000001fc87b
@property(readonly, nonatomic) _Bool hasUserProvidedUnit;
- (id)sampleUuidsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001fc801
@property(readonly, nonatomic) unsigned long long sampleUuidsCount;
- (void)addSampleUuids:(id)arg1;	// IMP=0x00000000001fc76a
- (void)clearSampleUuids;	// IMP=0x00000000001fc74d
@property(readonly, nonatomic) _Bool hasRecordDate;
@property(readonly, nonatomic) _Bool hasPunchoutUrl;
@property(readonly, nonatomic) _Bool hasDefaultUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

