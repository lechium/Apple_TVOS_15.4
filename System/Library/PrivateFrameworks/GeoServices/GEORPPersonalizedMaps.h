//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying>
{
    GEORPAddress *_address;	// 8 = 0x8
    int _addressType;	// 16 = 0x10
    int _placeType;	// 20 = 0x14
    CDStruct_2d9f5d20 _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e0e058
- (void).cxx_destruct;	// IMP=0x0000000000e0e726
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e0e67d
- (unsigned long long)hash;	// IMP=0x0000000000e0e5f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e0e4d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e0e425
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e0e393
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e0e305
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e0e2f6
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e0dc79
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e0dc67
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e0d807
- (id)jsonRepresentation;	// IMP=0x0000000000e0d7f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000e0d538
- (id)description;	// IMP=0x0000000000e0d489
@property(retain, nonatomic) GEORPAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
- (int)StringAsPlaceType:(id)arg1;	// IMP=0x0000000000e0d39c
- (id)placeTypeAsString:(int)arg1;	// IMP=0x0000000000e0d31f
@property(nonatomic) _Bool hasPlaceType;
@property(nonatomic) int placeType;
- (int)StringAsAddressType:(id)arg1;	// IMP=0x0000000000e0d144
- (id)addressTypeAsString:(int)arg1;	// IMP=0x0000000000e0d078
@property(nonatomic) _Bool hasAddressType;
@property(nonatomic) int addressType;

@end

