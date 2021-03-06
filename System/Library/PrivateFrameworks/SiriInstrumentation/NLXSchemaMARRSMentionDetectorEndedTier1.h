//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionDetectorEndedTier1
{
    NSArray *_mentionDetectorSpansTier1s;	// 8 = 0x8
    SISchemaUUID *_linkId;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ae141
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSArray *mentionDetectorSpansTier1s; // @synthesize mentionDetectorSpansTier1s=_mentionDetectorSpansTier1s;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001adde1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001add23
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001ad966
- (unsigned long long)hash;	// IMP=0x00000000001ad919
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ad65c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ad4bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ad282
- (void)deleteLinkId;	// IMP=0x00000000001ad26e
- (id)mentionDetectorSpansTier1AtIndex:(unsigned long long)arg1;	// IMP=0x00000000001ad23c
- (unsigned long long)mentionDetectorSpansTier1Count;	// IMP=0x00000000001ad21f
- (void)addMentionDetectorSpansTier1:(id)arg1;	// IMP=0x00000000001ad1a5
- (void)deleteMentionDetectorSpansTier1;	// IMP=0x00000000001ad193
- (void)clearMentionDetectorSpansTier1;	// IMP=0x00000000001ad176
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032841b
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003283e3

@end

