//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOStopStepEVInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _gainedBatteryPercentage;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    double _remainingBatteryPercentage;	// 32 = 0x20
    unsigned int _chargingTime;	// 40 = 0x28
    unsigned int _gainedBatteryCharge;	// 44 = 0x2c
    unsigned int _gainedTravelRange;	// 48 = 0x30
    unsigned int _zilchPathIndex;	// 52 = 0x34
    struct {
        unsigned int has_gainedBatteryPercentage:1;
        unsigned int has_muid:1;
        unsigned int has_remainingBatteryPercentage:1;
        unsigned int has_chargingTime:1;
        unsigned int has_gainedBatteryCharge:1;
        unsigned int has_gainedTravelRange:1;
        unsigned int has_zilchPathIndex:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000093698e
- (void).cxx_destruct;	// IMP=0x0000000000937668
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000937622
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000093750b
- (unsigned long long)hash;	// IMP=0x0000000000937220
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000093706e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000936f41
- (void)copyTo:(id)arg1;	// IMP=0x0000000000936e3f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000936d13
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000936d04
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009363a8
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000936396
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000935fdd
- (id)jsonRepresentation;	// IMP=0x0000000000935ecb
- (id)dictionaryRepresentation;	// IMP=0x0000000000935aa6
- (id)description;	// IMP=0x00000000009359f7
@property(nonatomic) _Bool hasRemainingBatteryPercentage;
@property(nonatomic) double remainingBatteryPercentage;
@property(nonatomic) _Bool hasZilchPathIndex;
@property(nonatomic) unsigned int zilchPathIndex;
@property(nonatomic) _Bool hasGainedBatteryCharge;
@property(nonatomic) unsigned int gainedBatteryCharge;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(nonatomic) _Bool hasGainedTravelRange;
@property(nonatomic) unsigned int gainedTravelRange;
@property(nonatomic) _Bool hasGainedBatteryPercentage;
@property(nonatomic) double gainedBatteryPercentage;
@property(nonatomic) _Bool hasChargingTime;
@property(nonatomic) unsigned int chargingTime;

@end

