//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioConfigureStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c057d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001c04bf
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001c038f
- (unsigned long long)hash;	// IMP=0x00000000001c0364
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c02bf
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c0293
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c0286
- (void)deleteExists;	// IMP=0x00000000001c025c
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032987b

@end

