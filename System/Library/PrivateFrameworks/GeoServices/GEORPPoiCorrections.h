//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddressCorrections, GEORPAmenityCorrections, GEORPCategoryCorrections, GEORPPlaceContainmentCorrections, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPPoiCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEORPAddressCorrections *_address;	// 24 = 0x18
    GEORPAmenityCorrections *_amenity;	// 32 = 0x20
    NSMutableArray *_businessHours;	// 40 = 0x28
    GEORPCategoryCorrections *_category;	// 48 = 0x30
    GEORPPlaceContainmentCorrections *_containmentCorrections;	// 56 = 0x38
    NSString *_hoursText;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSString *_originalName;	// 80 = 0x50
    NSString *_originalPhone;	// 88 = 0x58
    NSString *_originalUrl;	// 96 = 0x60
    NSString *_phone;	// 104 = 0x68
    NSString *_url;	// 112 = 0x70
    unsigned int _readerMarkPos;	// 120 = 0x78
    unsigned int _readerMarkLength;	// 124 = 0x7c
    struct os_unfair_lock_s _readerLock;	// 128 = 0x80
    _Bool _flagBadCuratedCollectionDescription;	// 132 = 0x84
    _Bool _flagBrokenCuratedCollectionUrl;	// 133 = 0x85
    _Bool _flagHoursIncorrect;	// 134 = 0x86
    _Bool _flagNotAtThisAddress;	// 135 = 0x87
    struct {
        unsigned int has_flagBadCuratedCollectionDescription:1;
        unsigned int has_flagBrokenCuratedCollectionUrl:1;
        unsigned int has_flagHoursIncorrect:1;
        unsigned int has_flagNotAtThisAddress:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_amenity:1;
        unsigned int read_businessHours:1;
        unsigned int read_category:1;
        unsigned int read_containmentCorrections:1;
        unsigned int read_hoursText:1;
        unsigned int read_name:1;
        unsigned int read_originalName:1;
        unsigned int read_originalPhone:1;
        unsigned int read_originalUrl:1;
        unsigned int read_phone:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 136 = 0x88
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000047079f
+ (Class)businessHoursType;	// IMP=0x000000000046e331
- (void).cxx_destruct;	// IMP=0x000000000047263b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000472589
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004720f7
- (unsigned long long)hash;	// IMP=0x0000000000471ef3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000471b15
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004715ce
- (void)copyTo:(id)arg1;	// IMP=0x00000000004712ce
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000047129d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000470c57
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000470c48
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004704ec
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004704da
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000046fa3b
- (id)jsonRepresentation;	// IMP=0x000000000046f929
- (id)dictionaryRepresentation;	// IMP=0x000000000046ef98
- (id)description;	// IMP=0x000000000046eee9
@property(nonatomic) _Bool hasFlagBadCuratedCollectionDescription;
@property(nonatomic) _Bool flagBadCuratedCollectionDescription;
@property(nonatomic) _Bool hasFlagBrokenCuratedCollectionUrl;
@property(nonatomic) _Bool flagBrokenCuratedCollectionUrl;
@property(retain, nonatomic) GEORPPlaceContainmentCorrections *containmentCorrections;
@property(readonly, nonatomic) _Bool hasContainmentCorrections;
@property(retain, nonatomic) NSString *hoursText;
@property(readonly, nonatomic) _Bool hasHoursText;
@property(retain, nonatomic) NSString *originalUrl;
@property(readonly, nonatomic) _Bool hasOriginalUrl;
@property(retain, nonatomic) NSString *originalPhone;
@property(readonly, nonatomic) _Bool hasOriginalPhone;
@property(retain, nonatomic) NSString *originalName;
@property(readonly, nonatomic) _Bool hasOriginalName;
@property(nonatomic) _Bool hasFlagNotAtThisAddress;
@property(nonatomic) _Bool flagNotAtThisAddress;
@property(nonatomic) _Bool hasFlagHoursIncorrect;
@property(nonatomic) _Bool flagHoursIncorrect;
@property(retain, nonatomic) GEORPAmenityCorrections *amenity;
@property(readonly, nonatomic) _Bool hasAmenity;
@property(retain, nonatomic) GEORPCategoryCorrections *category;
@property(readonly, nonatomic) _Bool hasCategory;
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) _Bool hasUrl;
- (id)businessHoursAtIndex:(unsigned long long)arg1;	// IMP=0x000000000046e300
- (unsigned long long)businessHoursCount;	// IMP=0x000000000046e2d4
- (void)addBusinessHours:(id)arg1;	// IMP=0x000000000046e21d
- (void)clearBusinessHours;	// IMP=0x000000000046e1f2
@property(retain, nonatomic) NSMutableArray *businessHours;
@property(retain, nonatomic) GEORPAddressCorrections *address;
@property(readonly, nonatomic) _Bool hasAddress;
@property(retain, nonatomic) NSString *phone;
@property(readonly, nonatomic) _Bool hasPhone;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (id)initWithData:(id)arg1;	// IMP=0x000000000046c8e6
- (id)init;	// IMP=0x000000000046c88a

@end

