//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface DUSchemaDUSpeechAudioRecord
{
    NSString *_language;	// 8 = 0x8
    NSString *_codec;	// 16 = 0x10
    SISchemaUUID *_interactionId;	// 24 = 0x18
    SISchemaUUID *_speechId;	// 32 = 0x20
    NSString *_speechIdString;	// 40 = 0x28
    unsigned long long _audioCreatedTimestampMs;	// 48 = 0x30
    struct {
        unsigned int audioCreatedTimestampMs:1;
    } _has;	// 56 = 0x38
    _Bool _hasLanguage;	// 60 = 0x3c
    _Bool _hasCodec;	// 61 = 0x3d
    _Bool _hasInteractionId;	// 62 = 0x3e
    _Bool _hasSpeechId;	// 63 = 0x3f
    _Bool _hasSpeechIdString;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000117077
@property(nonatomic) _Bool hasSpeechIdString; // @synthesize hasSpeechIdString=_hasSpeechIdString;
@property(nonatomic) _Bool hasSpeechId; // @synthesize hasSpeechId=_hasSpeechId;
@property(nonatomic) _Bool hasInteractionId; // @synthesize hasInteractionId=_hasInteractionId;
@property(nonatomic) _Bool hasCodec; // @synthesize hasCodec=_hasCodec;
@property(nonatomic) _Bool hasLanguage; // @synthesize hasLanguage=_hasLanguage;
@property(nonatomic) unsigned long long audioCreatedTimestampMs; // @synthesize audioCreatedTimestampMs=_audioCreatedTimestampMs;
@property(copy, nonatomic) NSString *speechIdString; // @synthesize speechIdString=_speechIdString;
@property(retain, nonatomic) SISchemaUUID *speechId; // @synthesize speechId=_speechId;
@property(retain, nonatomic) SISchemaUUID *interactionId; // @synthesize interactionId=_interactionId;
@property(copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000116c05
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000116b47
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000116779
- (unsigned long long)hash;	// IMP=0x00000000001166ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001160c7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000115efb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000115eee
- (void)deleteAudioCreatedTimestampMs;	// IMP=0x0000000000115ec4
@property(nonatomic) _Bool hasAudioCreatedTimestampMs;
- (void)deleteSpeechIdString;	// IMP=0x0000000000115e6a
- (void)deleteSpeechId;	// IMP=0x0000000000115e41
- (void)deleteInteractionId;	// IMP=0x0000000000115e18
- (void)deleteCodec;	// IMP=0x0000000000115def
- (void)deleteLanguage;	// IMP=0x0000000000115dc6
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031f4db
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031f4a3

@end
