//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaAdaptiveVolumeUserPreferences
{
    int _mostRecentIntent;	// 8 = 0x8
    _Bool _isPermanentOffsetEnabled;	// 12 = 0xc
    float _permanentOffsetFactor;	// 16 = 0x10
    struct {
        unsigned int mostRecentIntent:1;
        unsigned int isPermanentOffsetEnabled:1;
        unsigned int permanentOffsetFactor:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float permanentOffsetFactor; // @synthesize permanentOffsetFactor=_permanentOffsetFactor;
@property(nonatomic) _Bool isPermanentOffsetEnabled; // @synthesize isPermanentOffsetEnabled=_isPermanentOffsetEnabled;
@property(nonatomic) int mostRecentIntent; // @synthesize mostRecentIntent=_mostRecentIntent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000042c6a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000042bac
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000004298e
- (unsigned long long)hash;	// IMP=0x0000000000042840
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004270d
- (void)writeTo:(id)arg1;	// IMP=0x000000000004267a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000042380
- (void)deletePermanentOffsetFactor;	// IMP=0x0000000000042355
@property(nonatomic) _Bool hasPermanentOffsetFactor;
- (void)deleteIsPermanentOffsetEnabled;	// IMP=0x00000000000422de
@property(nonatomic) _Bool hasIsPermanentOffsetEnabled;
- (void)deleteMostRecentIntent;	// IMP=0x000000000004226b
@property(nonatomic) _Bool hasMostRecentIntent;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003109a5

@end

