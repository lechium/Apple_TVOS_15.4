//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRAudioFileResult
{
    SISchemaUUID *_asrId;	// 8 = 0x8
    NSArray *_decodingResults;	// 16 = 0x10
    SISchemaUUID *_linkId;	// 24 = 0x18
    _Bool _hasAsrId;	// 32 = 0x20
    _Bool _hasLinkId;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000000f088e
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(nonatomic) _Bool hasAsrId; // @synthesize hasAsrId=_hasAsrId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSArray *decodingResults; // @synthesize decodingResults=_decodingResults;
@property(retain, nonatomic) SISchemaUUID *asrId; // @synthesize asrId=_asrId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f047e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000f03c0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000eff4f
- (unsigned long long)hash;	// IMP=0x00000000000efee2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000efaf3
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ef8f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ef2e7
- (void)deleteLinkId;	// IMP=0x00000000000ef2d3
- (id)decodingResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ef2a1
- (unsigned long long)decodingResultsCount;	// IMP=0x00000000000ef284
- (void)addDecodingResults:(id)arg1;	// IMP=0x00000000000ef20a
- (void)deleteDecodingResults;	// IMP=0x00000000000ef1f8
- (void)clearDecodingResults;	// IMP=0x00000000000ef1db
- (void)deleteAsrId;	// IMP=0x00000000000ef1c7
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031cbae
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031cb76

@end

