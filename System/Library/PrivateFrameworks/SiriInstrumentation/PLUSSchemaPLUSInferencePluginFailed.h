//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PLUSSchemaPLUSInferencePluginFailed
{
    int _reason;	// 8 = 0x8
    CDStruct_6555f803 _has;	// 12 = 0xc
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000029c792
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000029c6d4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000029c56d
- (unsigned long long)hash;	// IMP=0x000000000029c542
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029c49d
- (void)writeTo:(id)arg1;	// IMP=0x000000000029c472
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029c29a
- (void)deleteReason;	// IMP=0x000000000029c270
@property(nonatomic) _Bool hasReason;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003368f6

@end

