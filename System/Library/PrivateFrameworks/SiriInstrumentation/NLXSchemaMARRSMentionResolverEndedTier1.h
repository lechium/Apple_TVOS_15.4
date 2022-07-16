//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEndedTier1
{
    NSArray *_mentionResolverSpansTier1s;	// 8 = 0x8
    SISchemaUUID *_linkId;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b0139
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSArray *mentionResolverSpansTier1s; // @synthesize mentionResolverSpansTier1s=_mentionResolverSpansTier1s;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001afdd9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001afd1b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001af95e
- (unsigned long long)hash;	// IMP=0x00000000001af911
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001af654
- (void)writeTo:(id)arg1;	// IMP=0x00000000001af4b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001af27a
- (void)deleteLinkId;	// IMP=0x00000000001af266
- (id)mentionResolverSpansTier1AtIndex:(unsigned long long)arg1;	// IMP=0x00000000001af234
- (unsigned long long)mentionResolverSpansTier1Count;	// IMP=0x00000000001af217
- (void)addMentionResolverSpansTier1:(id)arg1;	// IMP=0x00000000001af19d
- (void)deleteMentionResolverSpansTier1;	// IMP=0x00000000001af18b
- (void)clearMentionResolverSpansTier1;	// IMP=0x00000000001af16e
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000328703
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003286cb

@end
