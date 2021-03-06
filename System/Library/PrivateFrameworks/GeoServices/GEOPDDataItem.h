//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDBusinessHoursData, GEOPDCategoryData, GEOPDFactoidData, GEOPDLocationData, GEOPDRatingData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDataItem : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDBusinessHoursData *_businessHoursData;	// 24 = 0x18
    GEOPDCategoryData *_categoryData;	// 32 = 0x20
    GEOPDFactoidData *_factoidData;	// 40 = 0x28
    GEOPDLocationData *_locationData;	// 48 = 0x30
    GEOPDRatingData *_ratingData;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _type;	// 76 = 0x4c
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_businessHoursData:1;
        unsigned int read_categoryData:1;
        unsigned int read_factoidData:1;
        unsigned int read_locationData:1;
        unsigned int read_ratingData:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000aef925
- (unsigned long long)hash;	// IMP=0x0000000000aef3d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aef224
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aeefb0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aeecd3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aeecc4
- (id)jsonRepresentation;	// IMP=0x0000000000aec9a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000aec4d4
- (id)description;	// IMP=0x0000000000aec425
- (id)initWithData:(id)arg1;	// IMP=0x0000000000aeb4b4
- (id)init;	// IMP=0x0000000000aeb458
- (id)locationName;	// IMP=0x00000000009cfeca
- (id)categoryName;	// IMP=0x00000000009cfe4f

@end

