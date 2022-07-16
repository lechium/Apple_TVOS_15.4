//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetSeatSettingsInCarIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int enableCooling:1;
        unsigned int enableHeating:1;
        unsigned int enableMassage:1;
        unsigned int relativeLevelSetting:1;
        unsigned int seat:1;
    } _has;	// 8 = 0x8
    _Bool _enableCooling;	// 12 = 0xc
    _Bool _enableHeating;	// 13 = 0xd
    _Bool _enableMassage;	// 14 = 0xe
    int _relativeLevelSetting;	// 16 = 0x10
    int _seat;	// 20 = 0x14
    _INPBDataString *_carName;	// 24 = 0x18
    _INPBIntentMetadata *_intentMetadata;	// 32 = 0x20
    _INPBInteger *_level;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000357d2c
- (void).cxx_destruct;	// IMP=0x000000000035778f
@property(nonatomic) int seat; // @synthesize seat=_seat;
@property(nonatomic) int relativeLevelSetting; // @synthesize relativeLevelSetting=_relativeLevelSetting;
@property(retain, nonatomic) _INPBInteger *level; // @synthesize level=_level;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) _Bool enableMassage; // @synthesize enableMassage=_enableMassage;
@property(nonatomic) _Bool enableHeating; // @synthesize enableHeating=_enableHeating;
@property(nonatomic) _Bool enableCooling; // @synthesize enableCooling=_enableCooling;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (id)dictionaryRepresentation;	// IMP=0x0000000000357256
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000356b3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000356956
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003568c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003567c5
- (void)writeTo:(id)arg1;	// IMP=0x00000000003565a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000035659a
- (int)StringAsSeat:(id)arg1;	// IMP=0x00000000003563d8
- (id)seatAsString:(int)arg1;	// IMP=0x00000000003562c4
@property(nonatomic) _Bool hasSeat;
- (int)StringAsRelativeLevelSetting:(id)arg1;	// IMP=0x00000000003561b0
- (id)relativeLevelSettingAsString:(int)arg1;	// IMP=0x0000000000356130
@property(nonatomic) _Bool hasRelativeLevelSetting;
@property(readonly, nonatomic) _Bool hasLevel;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(nonatomic) _Bool hasEnableMassage;
@property(nonatomic) _Bool hasEnableHeating;
@property(nonatomic) _Bool hasEnableCooling;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
