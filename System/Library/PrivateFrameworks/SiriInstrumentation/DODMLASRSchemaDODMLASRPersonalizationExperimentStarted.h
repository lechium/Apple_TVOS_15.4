//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface DODMLASRSchemaDODMLASRPersonalizationExperimentStarted
{
    _Bool _exists;	// 8 = 0x8
    int _deviceThermalState;	// 12 = 0xc
    struct {
        unsigned int exists:1;
        unsigned int deviceThermalState:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int deviceThermalState; // @synthesize deviceThermalState=_deviceThermalState;
@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000103912
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000103854
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000103697
- (unsigned long long)hash;	// IMP=0x0000000000103651
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000103562
- (void)writeTo:(id)arg1;	// IMP=0x00000000001034f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001034e3
- (void)deleteDeviceThermalState;	// IMP=0x00000000001034b9
@property(nonatomic) _Bool hasDeviceThermalState;
- (void)deleteExists;	// IMP=0x0000000000103446
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031dbe2

@end

