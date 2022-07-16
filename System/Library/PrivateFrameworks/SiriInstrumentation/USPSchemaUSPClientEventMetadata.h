//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID, USPSchemaUSPMeasurementContext;

@interface USPSchemaUSPClientEventMetadata
{
    SISchemaUUID *_uspId;	// 8 = 0x8
    USPSchemaUSPMeasurementContext *_context;	// 16 = 0x10
    SISchemaUUID *_sutFingerprint;	// 24 = 0x18
    _Bool _hasUspId;	// 32 = 0x20
    _Bool _hasContext;	// 33 = 0x21
    _Bool _hasSutFingerprint;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x00000000002fc80a
@property(nonatomic) _Bool hasSutFingerprint; // @synthesize hasSutFingerprint=_hasSutFingerprint;
@property(nonatomic) _Bool hasContext; // @synthesize hasContext=_hasContext;
@property(nonatomic) _Bool hasUspId; // @synthesize hasUspId=_hasUspId;
@property(retain, nonatomic) SISchemaUUID *sutFingerprint; // @synthesize sutFingerprint=_sutFingerprint;
@property(retain, nonatomic) USPSchemaUSPMeasurementContext *context; // @synthesize context=_context;
@property(retain, nonatomic) SISchemaUUID *uspId; // @synthesize uspId=_uspId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002fc560
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002fc4a2
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002fc1bd
- (unsigned long long)hash;	// IMP=0x00000000002fc150
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fbd61
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fbc22
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fba03
- (void)deleteSutFingerprint;	// IMP=0x00000000002fb9ef
- (void)deleteContext;	// IMP=0x00000000002fb9c6
- (void)deleteUspId;	// IMP=0x00000000002fb99d
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033d5c4
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033d58c

@end

