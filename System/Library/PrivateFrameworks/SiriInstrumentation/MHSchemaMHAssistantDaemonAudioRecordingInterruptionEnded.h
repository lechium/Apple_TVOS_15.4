//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001cc4e4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001cc426
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001cc2f6
- (unsigned long long)hash;	// IMP=0x00000000001cc2cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cc226
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cc1fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cc1ed
- (void)deleteExists;	// IMP=0x00000000001cc1c3
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032a682

@end

