//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOStructuredAddress, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOStructuredAddress *_addressHint;	// 24 = 0x18
    NSData *_addressObjectHint;	// 32 = 0x20
    NSMutableArray *_formattedAddressLineHints;	// 40 = 0x28
    GEOLatLng *_locationHint;	// 48 = 0x30
    GEOPDMapsIdentifier *_mapsId;	// 56 = 0x38
    unsigned long long _muid;	// 64 = 0x40
    NSString *_placeNameHint;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    int _addressGeocodeAccuracyHint;	// 92 = 0x5c
    int _placeTypeHint;	// 96 = 0x60
    int _resultProviderId;	// 100 = 0x64
    _Bool _supportCoordinatesOnlyRefinement;	// 104 = 0x68
    struct {
        unsigned int has_muid:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int has_resultProviderId:1;
        unsigned int has_supportCoordinatesOnlyRefinement:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_addressObjectHint:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_mapsId:1;
        unsigned int read_placeNameHint:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x000000000057aa1b
- (unsigned long long)hash;	// IMP=0x000000000057a5a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000057a305
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000579eab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000579a53
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000579a44
- (id)jsonRepresentation;	// IMP=0x0000000000578644
- (id)dictionaryRepresentation;	// IMP=0x0000000000577d24
- (id)description;	// IMP=0x0000000000577c75
- (id)initWithData:(id)arg1;	// IMP=0x00000000005765bb
- (id)init;	// IMP=0x000000000057655f
- (_Bool)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1;	// IMP=0x0000000001007ba9
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;	// IMP=0x0000000001007b34
- (_Bool)_hasRequiredFields;	// IMP=0x0000000001007b08
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000120361d
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x0000000001203379
- (id)initWithIdentifier:(id)arg1 placeNameHint:(id)arg2 locationHint:(CDStruct_c3b9c2ee)arg3;	// IMP=0x0000000001203153

@end

