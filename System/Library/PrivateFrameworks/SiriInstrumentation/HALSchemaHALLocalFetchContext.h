//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HALSchemaHALLocalFetchEnded, HALSchemaHALLocalFetchFailed, HALSchemaHALLocalFetchStarted, NSData;

@interface HALSchemaHALLocalFetchContext
{
    HALSchemaHALLocalFetchStarted *_startedOrChanged;	// 8 = 0x8
    HALSchemaHALLocalFetchEnded *_ended;	// 16 = 0x10
    HALSchemaHALLocalFetchFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019198b
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019170f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000191651
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000019136c
- (unsigned long long)hash;	// IMP=0x00000000001912ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000190f26
- (void)writeTo:(id)arg1;	// IMP=0x0000000000190de7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019086d
- (void)deleteFailed;	// IMP=0x000000000019083a
@property(retain, nonatomic) HALSchemaHALLocalFetchFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x000000000019075c
@property(retain, nonatomic) HALSchemaHALLocalFetchEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x0000000000190674
@property(retain, nonatomic) HALSchemaHALLocalFetchStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000326796
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032675e

@end
