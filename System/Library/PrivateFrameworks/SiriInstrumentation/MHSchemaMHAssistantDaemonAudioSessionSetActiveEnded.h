//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioSessionSetActiveEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d1f47
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d1e89
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d1d59
- (unsigned long long)hash;	// IMP=0x00000000001d1d2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d1c89
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d1c5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d1c50
- (void)deleteExists;	// IMP=0x00000000001d1c26
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032ad1b

@end

