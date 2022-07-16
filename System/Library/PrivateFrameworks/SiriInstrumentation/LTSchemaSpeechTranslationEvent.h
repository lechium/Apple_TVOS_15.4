//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LTSchemaError, LTSchemaTask, NSData, NSString;

@interface LTSchemaSpeechTranslationEvent
{
    LTSchemaTask *_task;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    NSString *_requestID;	// 24 = 0x18
    _Bool _inRestrictedMode;	// 32 = 0x20
    _Bool _isAutomaticLID;	// 33 = 0x21
    LTSchemaError *_error;	// 40 = 0x28
    int _uiMode;	// 48 = 0x30
    NSString *_mobileAssetConfigVersion;	// 56 = 0x38
    unsigned int _timeToFirstPartialDisplayed;	// 64 = 0x40
    unsigned int _timeToRecordingDialogDismissed;	// 68 = 0x44
    unsigned int _timeToShowTranslationCard;	// 72 = 0x48
    unsigned int _timeToCancel;	// 76 = 0x4c
    int _status;	// 80 = 0x50
    struct {
        unsigned int inRestrictedMode:1;
        unsigned int isAutomaticLID:1;
        unsigned int uiMode:1;
        unsigned int timeToFirstPartialDisplayed:1;
        unsigned int timeToRecordingDialogDismissed:1;
        unsigned int timeToShowTranslationCard:1;
        unsigned int timeToCancel:1;
        unsigned int status:1;
    } _has;	// 84 = 0x54
    _Bool _hasTask;	// 88 = 0x58
    _Bool _hasSessionID;	// 89 = 0x59
    _Bool _hasRequestID;	// 90 = 0x5a
    _Bool _hasError;	// 91 = 0x5b
    _Bool _hasMobileAssetConfigVersion;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x00000000002cc4a4
@property(nonatomic) _Bool hasMobileAssetConfigVersion; // @synthesize hasMobileAssetConfigVersion=_hasMobileAssetConfigVersion;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(nonatomic) _Bool hasSessionID; // @synthesize hasSessionID=_hasSessionID;
@property(nonatomic) _Bool hasTask; // @synthesize hasTask=_hasTask;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned int timeToCancel; // @synthesize timeToCancel=_timeToCancel;
@property(nonatomic) unsigned int timeToShowTranslationCard; // @synthesize timeToShowTranslationCard=_timeToShowTranslationCard;
@property(nonatomic) unsigned int timeToRecordingDialogDismissed; // @synthesize timeToRecordingDialogDismissed=_timeToRecordingDialogDismissed;
@property(nonatomic) unsigned int timeToFirstPartialDisplayed; // @synthesize timeToFirstPartialDisplayed=_timeToFirstPartialDisplayed;
@property(copy, nonatomic) NSString *mobileAssetConfigVersion; // @synthesize mobileAssetConfigVersion=_mobileAssetConfigVersion;
@property(nonatomic) int uiMode; // @synthesize uiMode=_uiMode;
@property(retain, nonatomic) LTSchemaError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isAutomaticLID; // @synthesize isAutomaticLID=_isAutomaticLID;
@property(nonatomic) _Bool inRestrictedMode; // @synthesize inRestrictedMode=_inRestrictedMode;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) LTSchemaTask *task; // @synthesize task=_task;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002cbce2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002cbc24
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002cb5b6
- (unsigned long long)hash;	// IMP=0x00000000002cb3db
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002cabd1
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ca91a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ca90d
- (void)deleteStatus;	// IMP=0x00000000002ca8e3
@property(nonatomic) _Bool hasStatus;
- (void)deleteTimeToCancel;	// IMP=0x00000000002ca870
@property(nonatomic) _Bool hasTimeToCancel;
- (void)deleteTimeToShowTranslationCard;	// IMP=0x00000000002ca7fb
@property(nonatomic) _Bool hasTimeToShowTranslationCard;
- (void)deleteTimeToRecordingDialogDismissed;	// IMP=0x00000000002ca786
@property(nonatomic) _Bool hasTimeToRecordingDialogDismissed;
- (void)deleteTimeToFirstPartialDisplayed;	// IMP=0x00000000002ca711
@property(nonatomic) _Bool hasTimeToFirstPartialDisplayed;
- (void)deleteMobileAssetConfigVersion;	// IMP=0x00000000002ca6b2
- (void)deleteUiMode;	// IMP=0x00000000002ca673
@property(nonatomic) _Bool hasUiMode;
- (void)deleteError;	// IMP=0x00000000002ca614
- (void)deleteIsAutomaticLID;	// IMP=0x00000000002ca5d5
@property(nonatomic) _Bool hasIsAutomaticLID;
- (void)deleteInRestrictedMode;	// IMP=0x00000000002ca562
@property(nonatomic) _Bool hasInRestrictedMode;
- (void)deleteRequestID;	// IMP=0x00000000002ca509
- (void)deleteSessionID;	// IMP=0x00000000002ca4e0
- (void)deleteTask;	// IMP=0x00000000002ca4b7
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000339f16
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000339ede

@end

