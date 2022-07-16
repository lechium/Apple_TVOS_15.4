//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface TTSSchemaTTSClientEventMetadata
{
    SISchemaUUID *_ttsId;	// 8 = 0x8
    _Bool _hasTtsId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002cf08e
@property(nonatomic) _Bool hasTtsId; // @synthesize hasTtsId=_hasTtsId;
@property(retain, nonatomic) SISchemaUUID *ttsId; // @synthesize ttsId=_ttsId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002cef5c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002cee9e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ced19
- (unsigned long long)hash;	// IMP=0x00000000002cecfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ceb7a
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ceaf3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ceae6
- (void)deleteTtsId;	// IMP=0x00000000002cead2
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033a3a0
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033a368

@end
