//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHVoiceTriggerEventInfo, NSData;

@interface MHSchemaMHVoiceTriggerSecondPassCancelled
{
    MHSchemaMHVoiceTriggerEventInfo *_voiceTriggerEventInfo;	// 8 = 0x8
    _Bool _hasVoiceTriggerEventInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002186fd
@property(nonatomic) _Bool hasVoiceTriggerEventInfo; // @synthesize hasVoiceTriggerEventInfo=_hasVoiceTriggerEventInfo;
@property(retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002185cb
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000021850d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000218388
- (unsigned long long)hash;	// IMP=0x000000000021836b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002181e9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000218162
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000218155
- (void)deleteVoiceTriggerEventInfo;	// IMP=0x0000000000218141
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032e491
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032e459

@end
