//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _encryptedFeatureIds;	// 24 = 0x18
    unsigned long long _featureId;	// 48 = 0x30
    GEOLatLng *_location;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _formattedAddressType;	// 76 = 0x4c
    struct {
        unsigned int has_featureId:1;
        unsigned int has_formattedAddressType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_encryptedFeatureIds:1;
        unsigned int read_location:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000050d67c
- (unsigned long long)hash;	// IMP=0x000000000050d5da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000050d4a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000050d2b9
- (void)writeTo:(id)arg1;	// IMP=0x000000000050d0ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000050d09c
- (id)jsonRepresentation;	// IMP=0x000000000050cd1b
- (id)dictionaryRepresentation;	// IMP=0x000000000050c9c7
- (id)description;	// IMP=0x000000000050c918
- (void)dealloc;	// IMP=0x000000000050bcbd
- (id)initWithData:(id)arg1;	// IMP=0x000000000050bc61
- (id)init;	// IMP=0x000000000050bc05

@end
