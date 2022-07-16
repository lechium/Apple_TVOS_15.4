//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOInterpolationParameters, GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExtendedGeoLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _intersectingFeatureGeoIds;	// 24 = 0x18
    NSString *_dataSourceId;	// 48 = 0x30
    GEOInterpolationParameters *_interpolationParameter;	// 56 = 0x38
    GEOAddress *_preserveFields;	// 64 = 0x40
    unsigned long long _primaryFeatureGeoId;	// 72 = 0x48
    GEOLatLng *_primaryFeatureLocation;	// 80 = 0x50
    unsigned long long _streetSubPostalGeoId;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    _Bool _dataSourceIdRequired;	// 108 = 0x6c
    _Bool _isLatlngRequest;	// 109 = 0x6d
    struct {
        unsigned int has_primaryFeatureGeoId:1;
        unsigned int has_streetSubPostalGeoId:1;
        unsigned int has_dataSourceIdRequired:1;
        unsigned int has_isLatlngRequest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_intersectingFeatureGeoIds:1;
        unsigned int read_dataSourceId:1;
        unsigned int read_interpolationParameter:1;
        unsigned int read_preserveFields:1;
        unsigned int read_primaryFeatureLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000005087be
- (unsigned long long)hash;	// IMP=0x0000000000508676
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000508440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000508180
- (void)writeTo:(id)arg1;	// IMP=0x0000000000507e7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000507e6d
- (id)jsonRepresentation;	// IMP=0x0000000000507aec
- (id)dictionaryRepresentation;	// IMP=0x000000000050739b
- (id)description;	// IMP=0x00000000005072ec
- (void)dealloc;	// IMP=0x00000000005060e5
- (id)initWithData:(id)arg1;	// IMP=0x0000000000506089
- (id)init;	// IMP=0x000000000050602d

@end
