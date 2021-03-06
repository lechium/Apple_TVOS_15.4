//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaAdaptiveVolumeUserPreferences, SISchemaAnnounceEnabledStatus;

@interface SISchemaEnabledStatus
{
    _Bool _assistantEnabled;	// 8 = 0x8
    _Bool _dictationEnabled;	// 9 = 0x9
    _Bool _hardwareButtonEnabled;	// 10 = 0xa
    _Bool _heySiriEnabled;	// 11 = 0xb
    _Bool _assistantOnLockscreen;	// 12 = 0xc
    _Bool _raiseToSpeakEnabled;	// 13 = 0xd
    _Bool _spokenNotificationsEnabled;	// 14 = 0xe
    _Bool _hasHomekitHome;	// 15 = 0xf
    int _shortcutsAvailable;	// 16 = 0x10
    int _dataSharingOptInStatus;	// 20 = 0x14
    _Bool _typeToSiriEnabled;	// 24 = 0x18
    _Bool _isPreciseLocationEnabled;	// 25 = 0x19
    int _voiceFeedback;	// 28 = 0x1c
    SISchemaAnnounceEnabledStatus *_announceEnabledStatus;	// 32 = 0x20
    _Bool _isAdaptiveVolumeEnabled;	// 40 = 0x28
    SISchemaAdaptiveVolumeUserPreferences *_adaptiveVolumeUserPreferences;	// 48 = 0x30
    _Bool _isRemoteDarwinHeySiriEnabled;	// 56 = 0x38
    NSArray *_gradingOptInStateChanges;	// 64 = 0x40
    struct {
        unsigned int assistantEnabled:1;
        unsigned int dictationEnabled:1;
        unsigned int hardwareButtonEnabled:1;
        unsigned int heySiriEnabled:1;
        unsigned int assistantOnLockscreen:1;
        unsigned int raiseToSpeakEnabled:1;
        unsigned int spokenNotificationsEnabled:1;
        unsigned int hasHomekitHome:1;
        unsigned int shortcutsAvailable:1;
        unsigned int dataSharingOptInStatus:1;
        unsigned int typeToSiriEnabled:1;
        unsigned int isPreciseLocationEnabled:1;
        unsigned int voiceFeedback:1;
        unsigned int isAdaptiveVolumeEnabled:1;
        unsigned int isRemoteDarwinHeySiriEnabled:1;
    } _has;	// 72 = 0x48
    _Bool _hasAnnounceEnabledStatus;	// 76 = 0x4c
    _Bool _hasAdaptiveVolumeUserPreferences;	// 77 = 0x4d
}

- (void).cxx_destruct;	// IMP=0x000000000013278b
@property(nonatomic) _Bool hasAdaptiveVolumeUserPreferences; // @synthesize hasAdaptiveVolumeUserPreferences=_hasAdaptiveVolumeUserPreferences;
@property(nonatomic) _Bool hasAnnounceEnabledStatus; // @synthesize hasAnnounceEnabledStatus=_hasAnnounceEnabledStatus;
@property(copy, nonatomic) NSArray *gradingOptInStateChanges; // @synthesize gradingOptInStateChanges=_gradingOptInStateChanges;
@property(nonatomic) _Bool isRemoteDarwinHeySiriEnabled; // @synthesize isRemoteDarwinHeySiriEnabled=_isRemoteDarwinHeySiriEnabled;
@property(retain, nonatomic) SISchemaAdaptiveVolumeUserPreferences *adaptiveVolumeUserPreferences; // @synthesize adaptiveVolumeUserPreferences=_adaptiveVolumeUserPreferences;
@property(nonatomic) _Bool isAdaptiveVolumeEnabled; // @synthesize isAdaptiveVolumeEnabled=_isAdaptiveVolumeEnabled;
@property(retain, nonatomic) SISchemaAnnounceEnabledStatus *announceEnabledStatus; // @synthesize announceEnabledStatus=_announceEnabledStatus;
@property(nonatomic) int voiceFeedback; // @synthesize voiceFeedback=_voiceFeedback;
@property(nonatomic) _Bool isPreciseLocationEnabled; // @synthesize isPreciseLocationEnabled=_isPreciseLocationEnabled;
@property(nonatomic) _Bool typeToSiriEnabled; // @synthesize typeToSiriEnabled=_typeToSiriEnabled;
@property(nonatomic) int dataSharingOptInStatus; // @synthesize dataSharingOptInStatus=_dataSharingOptInStatus;
@property(nonatomic) int shortcutsAvailable; // @synthesize shortcutsAvailable=_shortcutsAvailable;
@property(nonatomic) _Bool hasHomekitHome; // @synthesize hasHomekitHome=_hasHomekitHome;
@property(nonatomic) _Bool spokenNotificationsEnabled; // @synthesize spokenNotificationsEnabled=_spokenNotificationsEnabled;
@property(nonatomic) _Bool raiseToSpeakEnabled; // @synthesize raiseToSpeakEnabled=_raiseToSpeakEnabled;
@property(nonatomic) _Bool assistantOnLockscreen; // @synthesize assistantOnLockscreen=_assistantOnLockscreen;
@property(nonatomic) _Bool heySiriEnabled; // @synthesize heySiriEnabled=_heySiriEnabled;
@property(nonatomic) _Bool hardwareButtonEnabled; // @synthesize hardwareButtonEnabled=_hardwareButtonEnabled;
@property(nonatomic) _Bool dictationEnabled; // @synthesize dictationEnabled=_dictationEnabled;
@property(nonatomic) _Bool assistantEnabled; // @synthesize assistantEnabled=_assistantEnabled;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000131c07
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000131b49
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000131119
- (unsigned long long)hash;	// IMP=0x0000000000130e7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001306f1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000130300
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012fee2
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012fec5
- (unsigned long long)gradingOptInStateChangesCount;	// IMP=0x000000000012fea8
- (void)addGradingOptInStateChanges:(id)arg1;	// IMP=0x000000000012fe2e
- (void)deleteGradingOptInStateChanges;	// IMP=0x000000000012fe1c
- (void)clearGradingOptInStateChanges;	// IMP=0x000000000012fdff
- (void)deleteIsRemoteDarwinHeySiriEnabled;	// IMP=0x000000000012fdd4
@property(nonatomic) _Bool hasIsRemoteDarwinHeySiriEnabled;
- (void)deleteAdaptiveVolumeUserPreferences;	// IMP=0x000000000012fd70
- (void)deleteIsAdaptiveVolumeEnabled;	// IMP=0x000000000012fd30
@property(nonatomic) _Bool hasIsAdaptiveVolumeEnabled;
- (void)deleteAnnounceEnabledStatus;	// IMP=0x000000000012fccc
- (void)deleteVoiceFeedback;	// IMP=0x000000000012fc8c
@property(nonatomic) _Bool hasVoiceFeedback;
- (void)deleteIsPreciseLocationEnabled;	// IMP=0x000000000012fc11
@property(nonatomic) _Bool hasIsPreciseLocationEnabled;
- (void)deleteTypeToSiriEnabled;	// IMP=0x000000000012fb96
@property(nonatomic) _Bool hasTypeToSiriEnabled;
- (void)deleteDataSharingOptInStatus;	// IMP=0x000000000012fb1b
@property(nonatomic) _Bool hasDataSharingOptInStatus;
- (void)deleteShortcutsAvailable;	// IMP=0x000000000012faa1
@property(nonatomic) _Bool hasShortcutsAvailable;
- (void)deleteHasHomekitHome;	// IMP=0x000000000012fa2a
@property(nonatomic) _Bool hasHasHomekitHome;
- (void)deleteSpokenNotificationsEnabled;	// IMP=0x000000000012f9b4
@property(nonatomic) _Bool hasSpokenNotificationsEnabled;
- (void)deleteRaiseToSpeakEnabled;	// IMP=0x000000000012f93e
@property(nonatomic) _Bool hasRaiseToSpeakEnabled;
- (void)deleteAssistantOnLockscreen;	// IMP=0x000000000012f8c8
@property(nonatomic) _Bool hasAssistantOnLockscreen;
- (void)deleteHeySiriEnabled;	// IMP=0x000000000012f852
@property(nonatomic) _Bool hasHeySiriEnabled;
- (void)deleteHardwareButtonEnabled;	// IMP=0x000000000012f7de
@property(nonatomic) _Bool hasHardwareButtonEnabled;
- (void)deleteDictationEnabled;	// IMP=0x000000000012f76a
@property(nonatomic) _Bool hasDictationEnabled;
- (void)deleteAssistantEnabled;	// IMP=0x000000000012f6f7
@property(nonatomic) _Bool hasAssistantEnabled;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000320f8e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000320f56

@end

