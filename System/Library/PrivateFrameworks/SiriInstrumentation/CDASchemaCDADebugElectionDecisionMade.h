//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface CDASchemaCDADebugElectionDecisionMade
{
    _Bool _isCrossDeviceArbitrationAllowed;	// 8 = 0x8
    NSArray *_advertisementDatas;	// 16 = 0x10
    unsigned int _deviceGroup;	// 24 = 0x18
    struct {
        unsigned int isCrossDeviceArbitrationAllowed:1;
        unsigned int deviceGroup:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000005d6e0
@property(nonatomic) unsigned int deviceGroup; // @synthesize deviceGroup=_deviceGroup;
@property(copy, nonatomic) NSArray *advertisementDatas; // @synthesize advertisementDatas=_advertisementDatas;
@property(nonatomic) _Bool isCrossDeviceArbitrationAllowed; // @synthesize isCrossDeviceArbitrationAllowed=_isCrossDeviceArbitrationAllowed;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005d35d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000005d29f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000005ced5
- (unsigned long long)hash;	// IMP=0x000000000005ce5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005cc4e
- (void)writeTo:(id)arg1;	// IMP=0x000000000005cac1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005cab4
- (void)deleteDeviceGroup;	// IMP=0x000000000005ca8a
@property(nonatomic) _Bool hasDeviceGroup;
- (id)advertisementDataAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005ca24
- (unsigned long long)advertisementDataCount;	// IMP=0x000000000005ca07
- (void)addAdvertisementData:(id)arg1;	// IMP=0x000000000005c98d
- (void)deleteAdvertisementData;	// IMP=0x000000000005c97b
- (void)clearAdvertisementData;	// IMP=0x000000000005c95e
- (void)deleteIsCrossDeviceArbitrationAllowed;	// IMP=0x000000000005c934
@property(nonatomic) _Bool hasIsCrossDeviceArbitrationAllowed;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000312297
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031225f

@end

