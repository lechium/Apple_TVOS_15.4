//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface USOSchemaUSONode
{
    unsigned int _usoElementId;	// 8 = 0x8
    unsigned int _usoVerbElementId;	// 12 = 0xc
    NSString *_entityLabel;	// 16 = 0x10
    NSString *_verbLabel;	// 24 = 0x18
    struct {
        unsigned int usoElementId:1;
        unsigned int usoVerbElementId:1;
    } _has;	// 32 = 0x20
    _Bool _hasEntityLabel;	// 36 = 0x24
    _Bool _hasVerbLabel;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000002f5c5b
@property(nonatomic) _Bool hasVerbLabel; // @synthesize hasVerbLabel=_hasVerbLabel;
@property(nonatomic) _Bool hasEntityLabel; // @synthesize hasEntityLabel=_hasEntityLabel;
@property(copy, nonatomic) NSString *verbLabel; // @synthesize verbLabel=_verbLabel;
@property(copy, nonatomic) NSString *entityLabel; // @synthesize entityLabel=_entityLabel;
@property(nonatomic) unsigned int usoVerbElementId; // @synthesize usoVerbElementId=_usoVerbElementId;
@property(nonatomic) unsigned int usoElementId; // @synthesize usoElementId=_usoElementId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002f59a6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002f58e8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002f5684
- (unsigned long long)hash;	// IMP=0x00000000002f55e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f52c0
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f51cb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f51be
- (void)deleteVerbLabel;	// IMP=0x00000000002f51aa
- (void)deleteEntityLabel;	// IMP=0x00000000002f5181
- (void)deleteUsoVerbElementId;	// IMP=0x00000000002f5142
@property(nonatomic) _Bool hasUsoVerbElementId;
- (void)deleteUsoElementId;	// IMP=0x00000000002f50cf
@property(nonatomic) _Bool hasUsoElementId;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033cf55

@end

