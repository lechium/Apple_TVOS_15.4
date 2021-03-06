//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEnded
{
    NSArray *_mentionResolverSpans;	// 8 = 0x8
    SISchemaUUID *_linkId;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001af13d
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSArray *mentionResolverSpans; // @synthesize mentionResolverSpans=_mentionResolverSpans;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001aeddd
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001aed1f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001ae962
- (unsigned long long)hash;	// IMP=0x00000000001ae915
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ae658
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ae4b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ae27e
- (void)deleteLinkId;	// IMP=0x00000000001ae26a
- (id)mentionResolverSpansAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001ae238
- (unsigned long long)mentionResolverSpansCount;	// IMP=0x00000000001ae21b
- (void)addMentionResolverSpans:(id)arg1;	// IMP=0x00000000001ae1a1
- (void)deleteMentionResolverSpans;	// IMP=0x00000000001ae18f
- (void)clearMentionResolverSpans;	// IMP=0x00000000001ae172
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032858f
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000328557

@end

