//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface LTSchemaASRSpeechTranslationEvent
{
    NSString *_requestID;	// 8 = 0x8
    NSString *_selectedLocale;	// 16 = 0x10
    unsigned int _timeToFirstPartialMs;	// 24 = 0x18
    unsigned int _timeToFinalResultMs;	// 28 = 0x1c
    unsigned int _latencyFinalResultMs;	// 32 = 0x20
    unsigned int _timeToSendFirstAudioPacket;	// 36 = 0x24
    unsigned int _timeToReceiveFirstAudioPacket;	// 40 = 0x28
    unsigned int _numAudioPacket;	// 44 = 0x2c
    unsigned int _timeToSendFinishAudio;	// 48 = 0x30
    struct {
        unsigned int timeToFirstPartialMs:1;
        unsigned int timeToFinalResultMs:1;
        unsigned int latencyFinalResultMs:1;
        unsigned int timeToSendFirstAudioPacket:1;
        unsigned int timeToReceiveFirstAudioPacket:1;
        unsigned int numAudioPacket:1;
        unsigned int timeToSendFinishAudio:1;
    } _has;	// 52 = 0x34
    _Bool _hasRequestID;	// 56 = 0x38
    _Bool _hasSelectedLocale;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x000000000003c20a
@property(nonatomic) _Bool hasSelectedLocale; // @synthesize hasSelectedLocale=_hasSelectedLocale;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(nonatomic) unsigned int timeToSendFinishAudio; // @synthesize timeToSendFinishAudio=_timeToSendFinishAudio;
@property(nonatomic) unsigned int numAudioPacket; // @synthesize numAudioPacket=_numAudioPacket;
@property(nonatomic) unsigned int timeToReceiveFirstAudioPacket; // @synthesize timeToReceiveFirstAudioPacket=_timeToReceiveFirstAudioPacket;
@property(nonatomic) unsigned int timeToSendFirstAudioPacket; // @synthesize timeToSendFirstAudioPacket=_timeToSendFirstAudioPacket;
@property(nonatomic) unsigned int latencyFinalResultMs; // @synthesize latencyFinalResultMs=_latencyFinalResultMs;
@property(nonatomic) unsigned int timeToFinalResultMs; // @synthesize timeToFinalResultMs=_timeToFinalResultMs;
@property(nonatomic) unsigned int timeToFirstPartialMs; // @synthesize timeToFirstPartialMs=_timeToFirstPartialMs;
@property(copy, nonatomic) NSString *selectedLocale; // @synthesize selectedLocale=_selectedLocale;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003bcf8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000003bc3a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000003b7f0
- (unsigned long long)hash;	// IMP=0x000000000003b6ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b239
- (void)writeTo:(id)arg1;	// IMP=0x000000000003b0a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003aaed
- (void)deleteTimeToSendFinishAudio;	// IMP=0x000000000003aac3
@property(nonatomic) _Bool hasTimeToSendFinishAudio;
- (void)deleteNumAudioPacket;	// IMP=0x000000000003aa4e
@property(nonatomic) _Bool hasNumAudioPacket;
- (void)deleteTimeToReceiveFirstAudioPacket;	// IMP=0x000000000003a9d9
@property(nonatomic) _Bool hasTimeToReceiveFirstAudioPacket;
- (void)deleteTimeToSendFirstAudioPacket;	// IMP=0x000000000003a964
@property(nonatomic) _Bool hasTimeToSendFirstAudioPacket;
- (void)deleteLatencyFinalResultMs;	// IMP=0x000000000003a8ef
@property(nonatomic) _Bool hasLatencyFinalResultMs;
- (void)deleteTimeToFinalResultMs;	// IMP=0x000000000003a87a
@property(nonatomic) _Bool hasTimeToFinalResultMs;
- (void)deleteTimeToFirstPartialMs;	// IMP=0x000000000003a807
@property(nonatomic) _Bool hasTimeToFirstPartialMs;
- (void)deleteSelectedLocale;	// IMP=0x000000000003a7ae
- (void)deleteRequestID;	// IMP=0x000000000003a785
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000310578

@end
