//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetLabeledSettingIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetLabeledSettingIntent : PBCodable <_INPBSetLabeledSettingIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    NSString *_labeledValue;	// 16 = 0x10
    _INPBSettingMetadata *_settingMetadata;	// 24 = 0x18
    _INPBTemporalEventTrigger *_temporalEventTrigger;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000046fb2c
- (void).cxx_destruct;	// IMP=0x000000000046f82a
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata; // @synthesize settingMetadata=_settingMetadata;
@property(copy, nonatomic) NSString *labeledValue; // @synthesize labeledValue=_labeledValue;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000046f626
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046f0e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046efbb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000046ef29
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000046ee2a
- (void)writeTo:(id)arg1;	// IMP=0x000000000046ecaa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000046ec9d
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(readonly, nonatomic) _Bool hasLabeledValue;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

