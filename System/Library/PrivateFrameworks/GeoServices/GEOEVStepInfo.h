//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOEVStepInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _remainingBatteryPercentage;	// 16 = 0x10
    unsigned int _remainingTravelRange;	// 24 = 0x18
    struct {
        unsigned int has_remainingBatteryPercentage:1;
        unsigned int has_remainingTravelRange:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000086abc5
- (void).cxx_destruct;	// IMP=0x000000000086b28f
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000086b249
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000086b1be
- (unsigned long long)hash;	// IMP=0x000000000086b06c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000086af79
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000086aed8
- (void)copyTo:(id)arg1;	// IMP=0x000000000086ae62
- (void)writeTo:(id)arg1;	// IMP=0x000000000086add4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000086adc5
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000086a872
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000086a860
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000086a6fa
- (id)jsonRepresentation;	// IMP=0x000000000086a5e8
- (id)dictionaryRepresentation;	// IMP=0x000000000086a3af
- (id)description;	// IMP=0x000000000086a300
@property(nonatomic) _Bool hasRemainingTravelRange;
@property(nonatomic) unsigned int remainingTravelRange;
@property(nonatomic) _Bool hasRemainingBatteryPercentage;
@property(nonatomic) double remainingBatteryPercentage;

@end
