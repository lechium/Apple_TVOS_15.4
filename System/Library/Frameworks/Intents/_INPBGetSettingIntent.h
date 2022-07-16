//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetSettingIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata;

@interface _INPBGetSettingIntent : PBCodable <_INPBGetSettingIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int confirmationValue:1;
    } _has;	// 8 = 0x8
    int _confirmationValue;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    _INPBSettingMetadata *_settingMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000465ad2
- (void).cxx_destruct;	// IMP=0x00000000004657f9
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata; // @synthesize settingMetadata=_settingMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int confirmationValue; // @synthesize confirmationValue=_confirmationValue;
- (id)dictionaryRepresentation;	// IMP=0x0000000000465618
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046528f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004651a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000465111
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000465012
- (void)writeTo:(id)arg1;	// IMP=0x0000000000464f03
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000464ef6
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsConfirmationValue:(id)arg1;	// IMP=0x0000000000464e07
- (id)confirmationValueAsString:(int)arg1;	// IMP=0x0000000000464da0
@property(nonatomic) _Bool hasConfirmationValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

