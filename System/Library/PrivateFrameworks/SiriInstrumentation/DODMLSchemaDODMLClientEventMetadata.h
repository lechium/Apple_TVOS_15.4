//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface DODMLSchemaDODMLClientEventMetadata
{
    SISchemaUUID *_dodMlId;	// 8 = 0x8
    NSString *_experimentName;	// 16 = 0x10
    _Bool _hasDodMlId;	// 24 = 0x18
    _Bool _hasExperimentName;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000112263
@property(nonatomic) _Bool hasExperimentName; // @synthesize hasExperimentName=_hasExperimentName;
@property(nonatomic) _Bool hasDodMlId; // @synthesize hasDodMlId=_hasDodMlId;
@property(copy, nonatomic) NSString *experimentName; // @synthesize experimentName=_experimentName;
@property(retain, nonatomic) SISchemaUUID *dodMlId; // @synthesize dodMlId=_dodMlId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000112081
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000111fc3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000111dd7
- (unsigned long long)hash;	// IMP=0x0000000000111d8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000111acd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000111a05
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001119f8
- (void)deleteExperimentName;	// IMP=0x00000000001119e4
- (void)deleteDodMlId;	// IMP=0x00000000001119bb
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031ed0e
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031ecd6

@end
