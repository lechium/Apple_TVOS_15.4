//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface DHTSchemaDHTDeleteTrigger
{
    SISchemaUUID *_id;	// 8 = 0x8
    SISchemaUUID *_speechId;	// 16 = 0x10
    SISchemaUUID *_siriDeviceId;	// 24 = 0x18
    unsigned long long _deleteTimestampMs;	// 32 = 0x20
    int _deletionTriggerEvent;	// 40 = 0x28
    struct {
        unsigned int deleteTimestampMs:1;
        unsigned int deletionTriggerEvent:1;
    } _has;	// 44 = 0x2c
    _Bool _hasId;	// 48 = 0x30
    _Bool _hasSpeechId;	// 49 = 0x31
    _Bool _hasSiriDeviceId;	// 50 = 0x32
}

- (void).cxx_destruct;	// IMP=0x00000000000e7089
@property(nonatomic) _Bool hasSiriDeviceId; // @synthesize hasSiriDeviceId=_hasSiriDeviceId;
@property(nonatomic) _Bool hasSpeechId; // @synthesize hasSpeechId=_hasSpeechId;
@property(nonatomic) _Bool hasId; // @synthesize hasId=_hasId;
@property(nonatomic) int deletionTriggerEvent; // @synthesize deletionTriggerEvent=_deletionTriggerEvent;
@property(nonatomic) unsigned long long deleteTimestampMs; // @synthesize deleteTimestampMs=_deleteTimestampMs;
@property(retain, nonatomic) SISchemaUUID *siriDeviceId; // @synthesize siriDeviceId=_siriDeviceId;
@property(retain, nonatomic) SISchemaUUID *speechId; // @synthesize speechId=_speechId;
@property(retain, nonatomic) SISchemaUUID *id; // @synthesize id=_id;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e6ce2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e6c24
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e6888
- (unsigned long long)hash;	// IMP=0x00000000000e67cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e639a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e6214
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e5e57
- (void)deleteDeletionTriggerEvent;	// IMP=0x00000000000e5e2d
@property(nonatomic) _Bool hasDeletionTriggerEvent;
- (void)deleteDeleteTimestampMs;	// IMP=0x00000000000e5dba
@property(nonatomic) _Bool hasDeleteTimestampMs;
- (void)deleteSiriDeviceId;	// IMP=0x00000000000e5d60
- (void)deleteSpeechId;	// IMP=0x00000000000e5d37
- (void)deleteId;	// IMP=0x00000000000e5d0e
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031c2cc
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031c294

@end

