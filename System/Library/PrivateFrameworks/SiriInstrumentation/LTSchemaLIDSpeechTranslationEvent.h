//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LTSchemaLocaleConfidence, NSData, NSString;

@interface LTSchemaLIDSpeechTranslationEvent
{
    NSString *_requestID;	// 8 = 0x8
    LTSchemaLocaleConfidence *_selectedLocale;	// 16 = 0x10
    LTSchemaLocaleConfidence *_alternateLocale;	// 24 = 0x18
    NSString *_userSelectedLocale;	// 32 = 0x20
    unsigned int _responseTimeMs;	// 40 = 0x28
    unsigned int _speechElapsedTime;	// 44 = 0x2c
    struct {
        unsigned int responseTimeMs:1;
        unsigned int speechElapsedTime:1;
    } _has;	// 48 = 0x30
    _Bool _hasRequestID;	// 52 = 0x34
    _Bool _hasSelectedLocale;	// 53 = 0x35
    _Bool _hasAlternateLocale;	// 54 = 0x36
    _Bool _hasUserSelectedLocale;	// 55 = 0x37
}

- (void).cxx_destruct;	// IMP=0x00000000001a5f7a
@property(nonatomic) _Bool hasUserSelectedLocale; // @synthesize hasUserSelectedLocale=_hasUserSelectedLocale;
@property(nonatomic) _Bool hasAlternateLocale; // @synthesize hasAlternateLocale=_hasAlternateLocale;
@property(nonatomic) _Bool hasSelectedLocale; // @synthesize hasSelectedLocale=_hasSelectedLocale;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(nonatomic) unsigned int speechElapsedTime; // @synthesize speechElapsedTime=_speechElapsedTime;
@property(nonatomic) unsigned int responseTimeMs; // @synthesize responseTimeMs=_responseTimeMs;
@property(copy, nonatomic) NSString *userSelectedLocale; // @synthesize userSelectedLocale=_userSelectedLocale;
@property(retain, nonatomic) LTSchemaLocaleConfidence *alternateLocale; // @synthesize alternateLocale=_alternateLocale;
@property(retain, nonatomic) LTSchemaLocaleConfidence *selectedLocale; // @synthesize selectedLocale=_selectedLocale;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001a5b42
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001a5a84
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a56bb
- (unsigned long long)hash;	// IMP=0x00000000001a55e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a50ba
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a4f0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a4937
- (void)deleteSpeechElapsedTime;	// IMP=0x00000000001a490d
@property(nonatomic) _Bool hasSpeechElapsedTime;
- (void)deleteResponseTimeMs;	// IMP=0x00000000001a489a
@property(nonatomic) _Bool hasResponseTimeMs;
- (void)deleteUserSelectedLocale;	// IMP=0x00000000001a4841
- (void)deleteAlternateLocale;	// IMP=0x00000000001a4818
- (void)deleteSelectedLocale;	// IMP=0x00000000001a47ef
- (void)deleteRequestID;	// IMP=0x00000000001a47c6
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000327c50
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000327c18

@end
