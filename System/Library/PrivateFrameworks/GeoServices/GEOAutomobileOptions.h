//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOUserPreferences, GEOVehicleSpecifications, PBDataReader, PBUnknownFields;

@interface GEOAutomobileOptions : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOUserPreferences *_userPreferences;	// 24 = 0x18
    GEOVehicleSpecifications *_vehicleSpecifications;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _trafficType;	// 52 = 0x34
    _Bool _includeHistoricTravelTime;	// 56 = 0x38
    _Bool _includeStaticTravelTime;	// 57 = 0x39
    struct {
        unsigned int has_trafficType:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeStaticTravelTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_userPreferences:1;
        unsigned int read_vehicleSpecifications:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000841c36
- (void).cxx_destruct;	// IMP=0x0000000000842ef4
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000842e5b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000842c6a
- (unsigned long long)hash;	// IMP=0x0000000000842b9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000842a0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008427d2
- (void)copyTo:(id)arg1;	// IMP=0x00000000008426a6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000842403
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008423f4
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008414ae
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000084149c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008410dd
- (id)jsonRepresentation;	// IMP=0x0000000000840fcb
- (id)dictionaryRepresentation;	// IMP=0x0000000000840bd5
- (id)description;	// IMP=0x0000000000840b26
@property(retain, nonatomic) GEOVehicleSpecifications *vehicleSpecifications;
@property(readonly, nonatomic) _Bool hasVehicleSpecifications;
@property(retain, nonatomic) GEOUserPreferences *userPreferences;
@property(readonly, nonatomic) _Bool hasUserPreferences;
@property(nonatomic) _Bool hasIncludeStaticTravelTime;
@property(nonatomic) _Bool includeStaticTravelTime;
- (int)StringAsTrafficType:(id)arg1;	// IMP=0x000000000083fe96
- (id)trafficTypeAsString:(int)arg1;	// IMP=0x000000000083fe2f
@property(nonatomic) _Bool hasTrafficType;
@property(nonatomic) int trafficType;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
@property(nonatomic) _Bool includeHistoricTravelTime;
- (id)initWithData:(id)arg1;	// IMP=0x000000000083fd0d
- (id)init;	// IMP=0x000000000083fcb1

@end

