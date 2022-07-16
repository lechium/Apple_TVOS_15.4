//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSIntent
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    int _intentCategory;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    int _source;	// 32 = 0x20
    float _confidence;	// 36 = 0x24
    struct {
        unsigned int intentCategory:1;
        unsigned int source:1;
        unsigned int confidence:1;
    } _has;	// 40 = 0x28
    _Bool _hasLinkId;	// 44 = 0x2c
    _Bool _hasName;	// 45 = 0x2d
}

- (void).cxx_destruct;	// IMP=0x000000000028164a
@property(nonatomic) _Bool hasName; // @synthesize hasName=_hasName;
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002812fa
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000028123c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000280ef3
- (unsigned long long)hash;	// IMP=0x0000000000280d48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002809a0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000280870
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000280863
- (void)deleteConfidence;	// IMP=0x0000000000280838
@property(nonatomic) _Bool hasConfidence;
- (void)deleteSource;	// IMP=0x00000000002807c1
@property(nonatomic) _Bool hasSource;
- (void)deleteName;	// IMP=0x0000000000280764
- (void)deleteIntentCategory;	// IMP=0x0000000000280725
@property(nonatomic) _Bool hasIntentCategory;
- (void)deleteLinkId;	// IMP=0x00000000002806cc
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000334c80
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000334c48

@end
