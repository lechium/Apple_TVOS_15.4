//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioSessionSetActiveStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d2397
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d22d9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d21a9
- (unsigned long long)hash;	// IMP=0x00000000001d217e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d20d9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d20ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d20a0
- (void)deleteExists;	// IMP=0x00000000001d2076
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032ad53

@end

