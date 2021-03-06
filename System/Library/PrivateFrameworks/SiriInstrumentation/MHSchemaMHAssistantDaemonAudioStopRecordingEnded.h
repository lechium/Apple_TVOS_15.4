//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingEnded
{
    NSArray *_fanInfos;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d7c7f
@property(copy, nonatomic) NSArray *fanInfos; // @synthesize fanInfos=_fanInfos;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d79f1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d7933
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d761c
- (unsigned long long)hash;	// IMP=0x00000000001d75ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d747d
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d734d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d7340
- (id)fanInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d7323
- (unsigned long long)fanInfoCount;	// IMP=0x00000000001d7306
- (void)addFanInfo:(id)arg1;	// IMP=0x00000000001d728c
- (void)deleteFanInfo;	// IMP=0x00000000001d727a
- (void)clearFanInfo;	// IMP=0x00000000001d725d
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032b429
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032b3f1

@end

