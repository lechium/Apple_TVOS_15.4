//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown, FLOWSchemaFLOWEntityContextTier1, FLOWSchemaFLOWEventMetadata, FLOWSchemaFLOWPegasusContextTier1, FLOWSchemaFLOWSmsAttachmentMetadataTier1, FLOWSchemaFLOWStep, NSData;

@interface FLOWSchemaFLOWClientEvent
{
    FLOWSchemaFLOWEventMetadata *_eventMetadata;	// 8 = 0x8
    FLOWSchemaFLOWStep *_flowStep;	// 16 = 0x10
    FLOWSchemaFLOWEntityContextTier1 *_flowEntityContextTier1;	// 24 = 0x18
    FLOWSchemaFLOWSmsAttachmentMetadataTier1 *_smsAttachmentMetadataTier1;	// 32 = 0x20
    FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *_appleMusicVoicePreviewOfferNotShown;	// 40 = 0x28
    FLOWSchemaFLOWPegasusContextTier1 *_pegasusContextTier1;	// 48 = 0x30
    _Bool _hasEventMetadata;	// 56 = 0x38
    _Bool _hasFlowStep;	// 57 = 0x39
    _Bool _hasFlowEntityContextTier1;	// 58 = 0x3a
    _Bool _hasSmsAttachmentMetadataTier1;	// 59 = 0x3b
    _Bool _hasAppleMusicVoicePreviewOfferNotShown;	// 60 = 0x3c
    _Bool _hasPegasusContextTier1;	// 61 = 0x3d
    unsigned long long _whichEvent_Type;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000139eb2
@property(nonatomic) _Bool hasPegasusContextTier1; // @synthesize hasPegasusContextTier1=_hasPegasusContextTier1;
@property(nonatomic) _Bool hasAppleMusicVoicePreviewOfferNotShown; // @synthesize hasAppleMusicVoicePreviewOfferNotShown=_hasAppleMusicVoicePreviewOfferNotShown;
@property(nonatomic) _Bool hasSmsAttachmentMetadataTier1; // @synthesize hasSmsAttachmentMetadataTier1=_hasSmsAttachmentMetadataTier1;
@property(nonatomic) _Bool hasFlowEntityContextTier1; // @synthesize hasFlowEntityContextTier1=_hasFlowEntityContextTier1;
@property(nonatomic) _Bool hasFlowStep; // @synthesize hasFlowStep=_hasFlowStep;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000139a20
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000139962
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000013946d
- (unsigned long long)hash;	// IMP=0x00000000001393af
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000138cbb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000138a68
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001377cb
- (void)deletePegasusContextTier1;	// IMP=0x0000000000137798
@property(retain, nonatomic) FLOWSchemaFLOWPegasusContextTier1 *pegasusContextTier1; // @synthesize pegasusContextTier1=_pegasusContextTier1;
- (void)deleteAppleMusicVoicePreviewOfferNotShown;	// IMP=0x0000000000137696
@property(retain, nonatomic) FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *appleMusicVoicePreviewOfferNotShown; // @synthesize appleMusicVoicePreviewOfferNotShown=_appleMusicVoicePreviewOfferNotShown;
- (void)deleteSmsAttachmentMetadataTier1;	// IMP=0x0000000000137594
@property(retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1; // @synthesize smsAttachmentMetadataTier1=_smsAttachmentMetadataTier1;
- (void)deleteFlowEntityContextTier1;	// IMP=0x0000000000137492
@property(retain, nonatomic) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1; // @synthesize flowEntityContextTier1=_flowEntityContextTier1;
- (void)deleteFlowStep;	// IMP=0x0000000000137390
@property(retain, nonatomic) FLOWSchemaFLOWStep *flowStep; // @synthesize flowStep=_flowStep;
- (void)deleteEventMetadata;	// IMP=0x00000000001372ad
- (id)qualifiedMessageName;	// IMP=0x0000000000137222
- (int)getAnyEventType;	// IMP=0x0000000000137217
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032148a
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000321452

@end
