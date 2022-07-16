//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface GRRSchemaGRRClientEventMetadata
{
    SISchemaUUID *_grrId;	// 8 = 0x8
    NSString *_resultCandidateId;	// 16 = 0x10
    _Bool _hasGrrId;	// 24 = 0x18
    _Bool _hasResultCandidateId;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000016b86b
@property(nonatomic) _Bool hasResultCandidateId; // @synthesize hasResultCandidateId=_hasResultCandidateId;
@property(nonatomic) _Bool hasGrrId; // @synthesize hasGrrId=_hasGrrId;
@property(copy, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(retain, nonatomic) SISchemaUUID *grrId; // @synthesize grrId=_grrId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000016b689
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000016b5cb
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000016b3df
- (unsigned long long)hash;	// IMP=0x000000000016b392
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016b0d5
- (void)writeTo:(id)arg1;	// IMP=0x000000000016b00d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016b000
- (void)deleteResultCandidateId;	// IMP=0x000000000016afec
- (void)deleteGrrId;	// IMP=0x000000000016afc3
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000324878
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000324840

@end
