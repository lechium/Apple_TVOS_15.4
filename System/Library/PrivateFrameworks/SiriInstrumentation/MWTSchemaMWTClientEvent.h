//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MWTSchemaMWTCheckpointReported, MWTSchemaMWTEventMetadata, MWTSchemaMWTMusicMetadataReported, MWTSchemaMWTVMCPUStatsReported, NSData;

@interface MWTSchemaMWTClientEvent
{
    MWTSchemaMWTEventMetadata *_eventMetadata;	// 8 = 0x8
    MWTSchemaMWTCheckpointReported *_mwtCheckpointReported;	// 16 = 0x10
    MWTSchemaMWTMusicMetadataReported *_mwtMusicMetadataReported;	// 24 = 0x18
    MWTSchemaMWTVMCPUStatsReported *_mwtVMCpuStatsReported;	// 32 = 0x20
    _Bool _hasEventMetadata;	// 40 = 0x28
    _Bool _hasMwtCheckpointReported;	// 41 = 0x29
    _Bool _hasMwtMusicMetadataReported;	// 42 = 0x2a
    _Bool _hasMwtVMCpuStatsReported;	// 43 = 0x2b
    unsigned long long _whichEvent_Type;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000023192a
@property(nonatomic) _Bool hasMwtVMCpuStatsReported; // @synthesize hasMwtVMCpuStatsReported=_hasMwtVMCpuStatsReported;
@property(nonatomic) _Bool hasMwtMusicMetadataReported; // @synthesize hasMwtMusicMetadataReported=_hasMwtMusicMetadataReported;
@property(nonatomic) _Bool hasMwtCheckpointReported; // @synthesize hasMwtCheckpointReported=_hasMwtCheckpointReported;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) MWTSchemaMWTEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002315f2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000231534
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000023119f
- (unsigned long long)hash;	// IMP=0x000000000023111b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000230bf7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000230a5c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022ea10
- (void)deleteMwtVMCpuStatsReported;	// IMP=0x000000000022e9dd
@property(retain, nonatomic) MWTSchemaMWTVMCPUStatsReported *mwtVMCpuStatsReported; // @synthesize mwtVMCpuStatsReported=_mwtVMCpuStatsReported;
- (void)deleteMwtMusicMetadataReported;	// IMP=0x000000000022e8ff
@property(retain, nonatomic) MWTSchemaMWTMusicMetadataReported *mwtMusicMetadataReported; // @synthesize mwtMusicMetadataReported=_mwtMusicMetadataReported;
- (void)deleteMwtCheckpointReported;	// IMP=0x000000000022e821
@property(retain, nonatomic) MWTSchemaMWTCheckpointReported *mwtCheckpointReported; // @synthesize mwtCheckpointReported=_mwtCheckpointReported;
- (void)deleteEventMetadata;	// IMP=0x000000000022e762
- (id)qualifiedMessageName;	// IMP=0x000000000022e706
- (int)getAnyEventType;	// IMP=0x000000000022e6fb
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032ff90
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032ff58

@end
