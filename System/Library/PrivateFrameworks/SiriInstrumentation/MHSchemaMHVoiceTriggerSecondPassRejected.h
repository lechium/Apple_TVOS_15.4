//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHVoiceTriggerEventInfo, NSData;

@interface MHSchemaMHVoiceTriggerSecondPassRejected
{
    MHSchemaMHVoiceTriggerEventInfo *_voiceTriggerEventInfo;	// 8 = 0x8
    int _reason;	// 16 = 0x10
    CDStruct_6555f803 _has;	// 20 = 0x14
    _Bool _hasVoiceTriggerEventInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000218f4b
@property(nonatomic) _Bool hasVoiceTriggerEventInfo; // @synthesize hasVoiceTriggerEventInfo=_hasVoiceTriggerEventInfo;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000218d96
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000218cd8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000218a86
- (unsigned long long)hash;	// IMP=0x0000000000218a33
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000218862
- (void)writeTo:(id)arg1;	// IMP=0x00000000002187b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002187a8
- (void)deleteReason;	// IMP=0x000000000021877e
@property(nonatomic) _Bool hasReason;
- (void)deleteVoiceTriggerEventInfo;	// IMP=0x0000000000218725
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032e5ac
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032e574

@end

