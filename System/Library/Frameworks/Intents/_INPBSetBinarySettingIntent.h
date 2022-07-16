//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetBinarySettingIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetBinarySettingIntent : PBCodable <_INPBSetBinarySettingIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int binaryValue:1;
    } _has;	// 8 = 0x8
    int _binaryValue;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    _INPBSettingMetadata *_settingMetadata;	// 24 = 0x18
    _INPBTemporalEventTrigger *_temporalEventTrigger;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000046ab98
- (void).cxx_destruct;	// IMP=0x000000000046a83d
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata; // @synthesize settingMetadata=_settingMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int binaryValue; // @synthesize binaryValue=_binaryValue;
- (id)dictionaryRepresentation;	// IMP=0x000000000046a5f0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046a10c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000469ff2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000469f60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000469e61
- (void)writeTo:(id)arg1;	// IMP=0x0000000000469cf6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000469ce9
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsBinaryValue:(id)arg1;	// IMP=0x0000000000469bd1
- (id)binaryValueAsString:(int)arg1;	// IMP=0x0000000000469b6a
@property(nonatomic) _Bool hasBinaryValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
