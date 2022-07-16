//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMSchemaCAMResponse, NSData;

@interface CAMSchemaCAMResponseGenerated
{
    CAMSchemaCAMResponse *_response;	// 8 = 0x8
    _Bool _hasResponse;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000573b8
@property(nonatomic) _Bool hasResponse; // @synthesize hasResponse=_hasResponse;
@property(retain, nonatomic) CAMSchemaCAMResponse *response; // @synthesize response=_response;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000057286
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000571c8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000057043
- (unsigned long long)hash;	// IMP=0x0000000000057026
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056ea4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000056e1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000056e10
- (void)deleteResponse;	// IMP=0x0000000000056dfc
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000311c5c
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000311c24

@end

