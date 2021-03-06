//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMInternalSpanData, NSArray, NSData, NSString, SISchemaUUID, USOSchemaUSOGraph;

@interface NLXSchemaCDMMatchingSpan
{
    NSString *_label;	// 8 = 0x8
    SISchemaUUID *_linkId;	// 16 = 0x10
    unsigned int _startTokenIndex;	// 24 = 0x18
    unsigned int _endTokenIndex;	// 28 = 0x1c
    USOSchemaUSOGraph *_usoGraph;	// 32 = 0x20
    NSArray *_matcherNames;	// 40 = 0x28
    NLXSchemaCDMInternalSpanData *_internalSpanData;	// 48 = 0x30
    struct {
        unsigned int startTokenIndex:1;
        unsigned int endTokenIndex:1;
    } _has;	// 56 = 0x38
    _Bool _hasLabel;	// 60 = 0x3c
    _Bool _hasLinkId;	// 61 = 0x3d
    _Bool _hasUsoGraph;	// 62 = 0x3e
    _Bool _hasInternalSpanData;	// 63 = 0x3f
}

- (void).cxx_destruct;	// IMP=0x0000000000073bdf
@property(nonatomic) _Bool hasInternalSpanData; // @synthesize hasInternalSpanData=_hasInternalSpanData;
@property(nonatomic) _Bool hasUsoGraph; // @synthesize hasUsoGraph=_hasUsoGraph;
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(nonatomic) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
@property(retain, nonatomic) NLXSchemaCDMInternalSpanData *internalSpanData; // @synthesize internalSpanData=_internalSpanData;
@property(copy, nonatomic) NSArray *matcherNames; // @synthesize matcherNames=_matcherNames;
@property(retain, nonatomic) USOSchemaUSOGraph *usoGraph; // @synthesize usoGraph=_usoGraph;
@property(nonatomic) unsigned int endTokenIndex; // @synthesize endTokenIndex=_endTokenIndex;
@property(nonatomic) unsigned int startTokenIndex; // @synthesize startTokenIndex=_startTokenIndex;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000073582
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000734c4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007303c
- (unsigned long long)hash;	// IMP=0x0000000000072f42
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000728e8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000725e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000072149
- (void)deleteInternalSpanData;	// IMP=0x0000000000072135
- (int)matcherNamesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000720d1
- (unsigned long long)matcherNamesCount;	// IMP=0x00000000000720b4
- (void)addMatcherNames:(int)arg1;	// IMP=0x000000000007201e
- (void)deleteMatcherNames;	// IMP=0x000000000007200c
- (void)clearMatcherNames;	// IMP=0x0000000000071fef
- (void)deleteUsoGraph;	// IMP=0x0000000000071fdb
- (void)deleteEndTokenIndex;	// IMP=0x0000000000071f9c
@property(nonatomic) _Bool hasEndTokenIndex;
- (void)deleteStartTokenIndex;	// IMP=0x0000000000071f29
@property(nonatomic) _Bool hasStartTokenIndex;
- (void)deleteLinkId;	// IMP=0x0000000000071ed0
- (void)deleteLabel;	// IMP=0x0000000000071ea7
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000313a80
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000313a48

@end

