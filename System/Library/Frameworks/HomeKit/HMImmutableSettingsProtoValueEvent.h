//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMImmutableSettingsProtoBoolValueEvent, HMImmutableSettingsProtoIntegerValueEvent, HMImmutableSettingsProtoLanguageValueEvent, HMImmutableSettingsProtoStringValueEvent;

@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying>
{
    HMImmutableSettingsProtoBoolValueEvent *_boolValueEvent;	// 8 = 0x8
    HMImmutableSettingsProtoIntegerValueEvent *_integerValueEvent;	// 16 = 0x10
    HMImmutableSettingsProtoLanguageValueEvent *_languageValueEvent;	// 24 = 0x18
    int _settingValueEvent;	// 32 = 0x20
    HMImmutableSettingsProtoStringValueEvent *_stringValueEvent;	// 40 = 0x28
    struct {
        unsigned int settingValueEvent:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000205b93
@property(retain, nonatomic) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent; // @synthesize languageValueEvent=_languageValueEvent;
@property(retain, nonatomic) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent; // @synthesize boolValueEvent=_boolValueEvent;
@property(retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent; // @synthesize integerValueEvent=_integerValueEvent;
@property(retain, nonatomic) HMImmutableSettingsProtoStringValueEvent *stringValueEvent; // @synthesize stringValueEvent=_stringValueEvent;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000205a30
- (unsigned long long)hash;	// IMP=0x0000000000205978
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000205814
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000205707
- (void)copyTo:(id)arg1;	// IMP=0x0000000000205644
- (void)writeTo:(id)arg1;	// IMP=0x00000000002055ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002055a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000205376
- (id)description;	// IMP=0x00000000002052c7
- (void)clearOneofValuesForSettingValueEvent;	// IMP=0x0000000000205243
- (int)StringAsSettingValueEvent:(id)arg1;	// IMP=0x0000000000205178
- (id)settingValueEventAsString:(int)arg1;	// IMP=0x00000000002050ed
@property(nonatomic) _Bool hasSettingValueEvent;
@property(nonatomic) int settingValueEvent; // @synthesize settingValueEvent=_settingValueEvent;
@property(readonly, nonatomic) _Bool hasLanguageValueEvent;
@property(readonly, nonatomic) _Bool hasBoolValueEvent;
@property(readonly, nonatomic) _Bool hasIntegerValueEvent;
@property(readonly, nonatomic) _Bool hasStringValueEvent;

@end
