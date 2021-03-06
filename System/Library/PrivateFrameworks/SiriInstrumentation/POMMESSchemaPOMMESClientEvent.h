//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESOnDeviceIndexSearchContext, POMMESSchemaPOMMESPegasusRequestContext, POMMESSchemaPOMMESServiceClassifierScoreReported;

@interface POMMESSchemaPOMMESClientEvent
{
    POMMESSchemaPOMMESClientEventMetadata *_eventMetadata;	// 8 = 0x8
    POMMESSchemaPOMMESPegasusRequestContext *_pegasusRequestContext;	// 16 = 0x10
    POMMESSchemaPOMMESOnDeviceIndexSearchContext *_onDeviceIndexSearchContext;	// 24 = 0x18
    POMMESSchemaPOMMESServiceClassifierScoreReported *_pommesServiceClassifierScoreReported;	// 32 = 0x20
    _Bool _hasEventMetadata;	// 40 = 0x28
    _Bool _hasPegasusRequestContext;	// 41 = 0x29
    _Bool _hasOnDeviceIndexSearchContext;	// 42 = 0x2a
    _Bool _hasPommesServiceClassifierScoreReported;	// 43 = 0x2b
    unsigned long long _whichEvent_Type;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002a68e6
@property(nonatomic) _Bool hasPommesServiceClassifierScoreReported; // @synthesize hasPommesServiceClassifierScoreReported=_hasPommesServiceClassifierScoreReported;
@property(nonatomic) _Bool hasOnDeviceIndexSearchContext; // @synthesize hasOnDeviceIndexSearchContext=_hasOnDeviceIndexSearchContext;
@property(nonatomic) _Bool hasPegasusRequestContext; // @synthesize hasPegasusRequestContext=_hasPegasusRequestContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002a65ae
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002a64f0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002a615b
- (unsigned long long)hash;	// IMP=0x00000000002a60d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a5bb3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a5a18
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a4dff
- (void)deletePommesServiceClassifierScoreReported;	// IMP=0x00000000002a4dcc
@property(retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported; // @synthesize pommesServiceClassifierScoreReported=_pommesServiceClassifierScoreReported;
- (void)deleteOnDeviceIndexSearchContext;	// IMP=0x00000000002a4cee
@property(retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext; // @synthesize onDeviceIndexSearchContext=_onDeviceIndexSearchContext;
- (void)deletePegasusRequestContext;	// IMP=0x00000000002a4c10
@property(retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext; // @synthesize pegasusRequestContext=_pegasusRequestContext;
- (void)deleteEventMetadata;	// IMP=0x00000000002a4b51
- (id)qualifiedMessageName;	// IMP=0x00000000002a4af5
- (int)getAnyEventType;	// IMP=0x00000000002a4aea
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000337445
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033740d

@end

