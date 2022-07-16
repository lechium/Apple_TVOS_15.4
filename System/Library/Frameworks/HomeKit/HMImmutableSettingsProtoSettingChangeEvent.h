//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMImmutableSettingsProtoAvailableLanguageListEvent, HMImmutableSettingsProtoBoolSettingEvent, HMImmutableSettingsProtoBoundedIntegerSettingEvent, HMImmutableSettingsProtoLanguageSettingEvent, HMImmutableSettingsProtoStringSettingEvent, NSString;

@interface HMImmutableSettingsProtoSettingChangeEvent : PBCodable <NSCopying>
{
    HMImmutableSettingsProtoAvailableLanguageListEvent *_availableLanguages;	// 8 = 0x8
    HMImmutableSettingsProtoBoolSettingEvent *_boolSetting;	// 16 = 0x10
    HMImmutableSettingsProtoBoundedIntegerSettingEvent *_boundedIntegerSetting;	// 24 = 0x18
    NSString *_keyPath;	// 32 = 0x20
    HMImmutableSettingsProtoLanguageSettingEvent *_languageSetting;	// 40 = 0x28
    int _settingChangeEvent;	// 48 = 0x30
    HMImmutableSettingsProtoStringSettingEvent *_stringSetting;	// 56 = 0x38
    _Bool _readOnly;	// 64 = 0x40
    struct {
        unsigned int settingChangeEvent:1;
        unsigned int readOnly:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000002254d6
@property(retain, nonatomic) HMImmutableSettingsProtoAvailableLanguageListEvent *availableLanguages; // @synthesize availableLanguages=_availableLanguages;
@property(retain, nonatomic) HMImmutableSettingsProtoLanguageSettingEvent *languageSetting; // @synthesize languageSetting=_languageSetting;
@property(retain, nonatomic) HMImmutableSettingsProtoBoolSettingEvent *boolSetting; // @synthesize boolSetting=_boolSetting;
@property(retain, nonatomic) HMImmutableSettingsProtoBoundedIntegerSettingEvent *boundedIntegerSetting; // @synthesize boundedIntegerSetting=_boundedIntegerSetting;
@property(retain, nonatomic) HMImmutableSettingsProtoStringSettingEvent *stringSetting; // @synthesize stringSetting=_stringSetting;
@property(nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002252b2
- (unsigned long long)hash;	// IMP=0x00000000002251b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000224fa3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000224e2a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000224d03
- (void)writeTo:(id)arg1;	// IMP=0x0000000000224c0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000224c00
- (id)dictionaryRepresentation;	// IMP=0x00000000002248f8
- (id)description;	// IMP=0x0000000000224849
- (void)clearOneofValuesForSettingChangeEvent;	// IMP=0x00000000002247b3
- (int)StringAsSettingChangeEvent:(id)arg1;	// IMP=0x00000000002246c4
- (id)settingChangeEventAsString:(int)arg1;	// IMP=0x000000000022462a
@property(nonatomic) _Bool hasSettingChangeEvent;
@property(nonatomic) int settingChangeEvent; // @synthesize settingChangeEvent=_settingChangeEvent;
@property(readonly, nonatomic) _Bool hasAvailableLanguages;
@property(readonly, nonatomic) _Bool hasLanguageSetting;
@property(readonly, nonatomic) _Bool hasBoolSetting;
@property(readonly, nonatomic) _Bool hasBoundedIntegerSetting;
@property(readonly, nonatomic) _Bool hasStringSetting;
@property(nonatomic) _Bool hasReadOnly;
@property(readonly, nonatomic) _Bool hasKeyPath;

@end
