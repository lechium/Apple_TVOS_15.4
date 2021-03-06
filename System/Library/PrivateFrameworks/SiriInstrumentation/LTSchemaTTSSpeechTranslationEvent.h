//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface LTSchemaTTSSpeechTranslationEvent
{
    NSString *_requestID;	// 8 = 0x8
    NSString *_selectedLocale;	// 16 = 0x10
    unsigned int _responseTimeMs;	// 24 = 0x18
    unsigned int _playbackBeginTimeMs;	// 28 = 0x1c
    struct {
        unsigned int responseTimeMs:1;
        unsigned int playbackBeginTimeMs:1;
    } _has;	// 32 = 0x20
    _Bool _hasRequestID;	// 36 = 0x24
    _Bool _hasSelectedLocale;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000002d642a
@property(nonatomic) _Bool hasSelectedLocale; // @synthesize hasSelectedLocale=_hasSelectedLocale;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(nonatomic) unsigned int playbackBeginTimeMs; // @synthesize playbackBeginTimeMs=_playbackBeginTimeMs;
@property(nonatomic) unsigned int responseTimeMs; // @synthesize responseTimeMs=_responseTimeMs;
@property(copy, nonatomic) NSString *selectedLocale; // @synthesize selectedLocale=_selectedLocale;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d6170
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d60b2
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d5e49
- (unsigned long long)hash;	// IMP=0x00000000002d5daf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d5a57
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d5962
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d5955
- (void)deletePlaybackBeginTimeMs;	// IMP=0x00000000002d592b
@property(nonatomic) _Bool hasPlaybackBeginTimeMs;
- (void)deleteResponseTimeMs;	// IMP=0x00000000002d58b8
@property(nonatomic) _Bool hasResponseTimeMs;
- (void)deleteSelectedLocale;	// IMP=0x00000000002d585f
- (void)deleteRequestID;	// IMP=0x00000000002d5836
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033ac04

@end

