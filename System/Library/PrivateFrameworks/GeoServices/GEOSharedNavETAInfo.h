//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _etaTimestamp;	// 16 = 0x10
    double _latitude;	// 24 = 0x18
    double _longitude;	// 32 = 0x20
    double _remainingDistance;	// 40 = 0x28
    double _remainingTime;	// 48 = 0x30
    struct {
        unsigned int has_etaTimestamp:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_remainingDistance:1;
        unsigned int has_remainingTime:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f5512a
- (void).cxx_destruct;	// IMP=0x0000000000f55df9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f55db3
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f55cc7
- (unsigned long long)hash;	// IMP=0x0000000000f5577f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f555fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f554f9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f55422
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f5532f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f55320
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f54cac
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f54c9a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f549ea
- (id)jsonRepresentation;	// IMP=0x0000000000f548d8
- (id)dictionaryRepresentation;	// IMP=0x0000000000f5458d
- (id)description;	// IMP=0x0000000000f544de
@property(nonatomic) _Bool hasEtaTimestamp;
@property(nonatomic) double etaTimestamp;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) double latitude;
@property(nonatomic) _Bool hasRemainingTime;
@property(nonatomic) double remainingTime;
@property(nonatomic) _Bool hasRemainingDistance;
@property(nonatomic) double remainingDistance;

@end

