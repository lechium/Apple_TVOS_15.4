//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOEVChargeInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _gainedBatteryPercentage;	// 16 = 0x10
    unsigned int _chargingTime;	// 24 = 0x18
    unsigned int _gainedBatteryCharge;	// 28 = 0x1c
    unsigned int _gainedTravelRange;	// 32 = 0x20
    struct {
        unsigned int has_gainedBatteryPercentage:1;
        unsigned int has_chargingTime:1;
        unsigned int has_gainedBatteryCharge:1;
        unsigned int has_gainedTravelRange:1;
    } _flags;	// 36 = 0x24
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000086382e
- (void).cxx_destruct;	// IMP=0x0000000000864122
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008640dc
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000086401b
- (unsigned long long)hash;	// IMP=0x0000000000863e8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000863d56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000863c7f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000863bd3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000863b07
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000863af8
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008633c0
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008633ae
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000863154
- (id)jsonRepresentation;	// IMP=0x0000000000863042
- (id)dictionaryRepresentation;	// IMP=0x0000000000862d45
- (id)description;	// IMP=0x0000000000862c96
@property(nonatomic) _Bool hasGainedBatteryCharge;
@property(nonatomic) unsigned int gainedBatteryCharge;
@property(nonatomic) _Bool hasGainedTravelRange;
@property(nonatomic) unsigned int gainedTravelRange;
@property(nonatomic) _Bool hasGainedBatteryPercentage;
@property(nonatomic) double gainedBatteryPercentage;
@property(nonatomic) _Bool hasChargingTime;
@property(nonatomic) unsigned int chargingTime;

@end

