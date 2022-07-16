//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext
{
    NSArray *_voiceShortcutActions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000166dca
@property(copy, nonatomic) NSArray *voiceShortcutActions; // @synthesize voiceShortcutActions=_voiceShortcutActions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000166b3c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000166a7e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000166767
- (unsigned long long)hash;	// IMP=0x000000000016674a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001665c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000166498
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016648b
- (id)voiceShortcutActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016646e
- (unsigned long long)voiceShortcutActionCount;	// IMP=0x0000000000166451
- (void)addVoiceShortcutAction:(id)arg1;	// IMP=0x00000000001663d7
- (void)deleteVoiceShortcutAction;	// IMP=0x00000000001663c5
- (void)clearVoiceShortcutAction;	// IMP=0x00000000001663a8
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032437a
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000324342

@end

