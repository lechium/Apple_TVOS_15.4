//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, PBDataReader;

@interface GEOLPRRoot : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableDictionary *_powerTypes;	// 16 = 0x10
    NSMutableArray *_regions;	// 24 = 0x18
    NSMutableDictionary *_vehicleTypes;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    CDStruct_4ca0835f _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000fb85af
+ (Class)vehicleTypesType;	// IMP=0x0000000000fb755e
+ (Class)powerTypesType;	// IMP=0x0000000000fb7241
+ (Class)regionsType;	// IMP=0x0000000000fb6f24
- (void).cxx_destruct;	// IMP=0x0000000000fb9de9
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000fb9bed
- (unsigned long long)hash;	// IMP=0x0000000000fb9b71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fb9a4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fb94d7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000fb915a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fb8a7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fb8a70
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fb82fc
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fb82ea
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fb7bf1
- (id)jsonRepresentation;	// IMP=0x0000000000fb7ac8
- (id)dictionaryRepresentation;	// IMP=0x0000000000fb761e
- (id)description;	// IMP=0x0000000000fb756f
- (unsigned long long)vehicleTypesCount;	// IMP=0x0000000000fb7532
- (void)enumerateVehicleTypesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000fb74ec
- (id)vehicleTypesForKey:(id)arg1;	// IMP=0x0000000000fb7493
- (void)setVehicleTypesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000fb7395
- (void)clearVehicleTypes;	// IMP=0x0000000000fb736d
@property(retain, nonatomic) NSMutableDictionary *vehicleTypes;
- (unsigned long long)powerTypesCount;	// IMP=0x0000000000fb7215
- (void)enumeratePowerTypesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000fb71cf
- (id)powerTypesForKey:(id)arg1;	// IMP=0x0000000000fb7176
- (void)setPowerTypesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000fb7078
- (void)clearPowerTypes;	// IMP=0x0000000000fb7050
@property(retain, nonatomic) NSMutableDictionary *powerTypes;
- (id)regionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fb6ef3
- (unsigned long long)regionsCount;	// IMP=0x0000000000fb6ec7
- (void)addRegions:(id)arg1;	// IMP=0x0000000000fb6e13
- (void)clearRegions;	// IMP=0x0000000000fb6deb
@property(retain, nonatomic) NSMutableArray *regions;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000fb5eb4
- (id)init;	// IMP=0x0000000000fb5e58

@end

