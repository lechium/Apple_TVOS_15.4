//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLPRVehicle : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_licensePlate;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_powerTypeKey;	// 32 = 0x20
    NSString *_vehicleTypeKey;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_licensePlate:1;
        unsigned int read_name:1;
        unsigned int read_powerTypeKey:1;
        unsigned int read_vehicleTypeKey:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000122977e
- (void).cxx_destruct;	// IMP=0x0000000001229f36
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001229e81
- (unsigned long long)hash;	// IMP=0x0000000001229dee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001229c99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001229a98
- (void)copyTo:(id)arg1;	// IMP=0x000000000122998f
- (void)writeTo:(id)arg1;	// IMP=0x000000000122979a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000122978b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001229672
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001229660
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000012293d4
- (id)jsonRepresentation;	// IMP=0x00000000012293c5
- (id)dictionaryRepresentation;	// IMP=0x0000000001229228
- (id)description;	// IMP=0x0000000001229179
@property(retain, nonatomic) NSString *licensePlate;
@property(readonly, nonatomic) _Bool hasLicensePlate;
@property(retain, nonatomic) NSString *vehicleTypeKey;
@property(readonly, nonatomic) _Bool hasVehicleTypeKey;
@property(retain, nonatomic) NSString *powerTypeKey;
@property(readonly, nonatomic) _Bool hasPowerTypeKey;
@property(retain, nonatomic) NSString *name;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001228747
- (id)init;	// IMP=0x00000000012286eb

@end

