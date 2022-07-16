//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventThermalPressure : PBCodable <NSCopying>
{
    CDStruct_95bda58d _disableMapFeatures;	// 8 = 0x8
    int _chargingState;	// 32 = 0x20
    int _collectionTrigger;	// 36 = 0x24
    int _navMapType;	// 40 = 0x28
    unsigned int _thermalPressure;	// 44 = 0x2c
    struct {
        unsigned int has_chargingState:1;
        unsigned int has_collectionTrigger:1;
        unsigned int has_navMapType:1;
        unsigned int has_thermalPressure:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000138820d
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001388732
- (unsigned long long)hash;	// IMP=0x000000000138867a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000138851f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000138844e
- (void)copyTo:(id)arg1;	// IMP=0x0000000001388312
- (void)writeTo:(id)arg1;	// IMP=0x0000000001388229
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000138821a
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013881ad
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000138819b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001387a6b
- (id)jsonRepresentation;	// IMP=0x0000000001387a5c
- (id)dictionaryRepresentation;	// IMP=0x000000000138760e
- (id)description;	// IMP=0x000000000138755f
- (int)StringAsChargingState:(id)arg1;	// IMP=0x00000000013874b0
- (id)chargingStateAsString:(int)arg1;	// IMP=0x0000000001387433
@property(nonatomic) _Bool hasChargingState;
@property(nonatomic) int chargingState;
- (int)StringAsCollectionTrigger:(id)arg1;	// IMP=0x0000000001387304
- (id)collectionTriggerAsString:(int)arg1;	// IMP=0x0000000001387277
@property(nonatomic) _Bool hasCollectionTrigger;
@property(nonatomic) int collectionTrigger;
- (int)StringAsNavMapType:(id)arg1;	// IMP=0x0000000001387160
- (id)navMapTypeAsString:(int)arg1;	// IMP=0x00000000013870e3
@property(nonatomic) _Bool hasNavMapType;
@property(nonatomic) int navMapType;
- (int)StringAsDisableMapFeatures:(id)arg1;	// IMP=0x0000000001386fe7
- (id)disableMapFeaturesAsString:(int)arg1;	// IMP=0x0000000001386f81
- (void)setDisableMapFeatures:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001386f6a
- (int)disableMapFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001386e9d
- (void)addDisableMapFeatures:(int)arg1;	// IMP=0x0000000001386e8a
- (void)clearDisableMapFeatures;	// IMP=0x0000000001386e79
@property(readonly, nonatomic) int *disableMapFeatures;
@property(readonly, nonatomic) unsigned long long disableMapFeaturesCount;
@property(nonatomic) _Bool hasThermalPressure;
@property(nonatomic) unsigned int thermalPressure;
- (void)dealloc;	// IMP=0x0000000001386dbb

@end
