//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface SISchemaUUFRShownTier1
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    NSString *_displayedSiriDialogOutput;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
    _Bool _hasDisplayedSiriDialogOutput;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000306c97
@property(nonatomic) _Bool hasDisplayedSiriDialogOutput; // @synthesize hasDisplayedSiriDialogOutput=_hasDisplayedSiriDialogOutput;
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(copy, nonatomic) NSString *displayedSiriDialogOutput; // @synthesize displayedSiriDialogOutput=_displayedSiriDialogOutput;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000306ab5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003069f7
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000030680b
- (unsigned long long)hash;	// IMP=0x00000000003067be
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000306501
- (void)writeTo:(id)arg1;	// IMP=0x0000000000306439
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030642c
- (void)deleteDisplayedSiriDialogOutput;	// IMP=0x0000000000306418
- (void)deleteLinkId;	// IMP=0x00000000003063ef
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033e28a
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033e252

@end

