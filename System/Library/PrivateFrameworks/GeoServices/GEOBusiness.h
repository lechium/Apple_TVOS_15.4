//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOBusiness : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    unsigned long long _uID;	// 24 = 0x18
    NSString *_uRL;	// 32 = 0x20
    NSMutableArray *_attributeKeyValues;	// 40 = 0x28
    NSMutableArray *_attributions;	// 48 = 0x30
    NSMutableArray *_categorys;	// 56 = 0x38
    GEOLatLng *_center;	// 64 = 0x40
    NSMutableArray *_localizedCategories;	// 72 = 0x48
    NSString *_mapsURL;	// 80 = 0x50
    NSString *_name;	// 88 = 0x58
    NSMutableArray *_openHours;	// 96 = 0x60
    NSString *_phoneticName;	// 104 = 0x68
    NSMutableArray *_photos;	// 112 = 0x70
    NSMutableArray *_placeDataAmendments;	// 120 = 0x78
    NSMutableArray *_ratings;	// 128 = 0x80
    NSMutableArray *_sources;	// 136 = 0x88
    NSMutableArray *_starRatings;	// 144 = 0x90
    NSString *_telephone;	// 152 = 0x98
    unsigned int _readerMarkPos;	// 160 = 0xa0
    unsigned int _readerMarkLength;	// 164 = 0xa4
    struct os_unfair_lock_s _readerLock;	// 168 = 0xa8
    _Bool _isClosed;	// 172 = 0xac
    struct {
        unsigned int has_uID:1;
        unsigned int has_isClosed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_uRL:1;
        unsigned int read_attributeKeyValues:1;
        unsigned int read_attributions:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_localizedCategories:1;
        unsigned int read_mapsURL:1;
        unsigned int read_name:1;
        unsigned int read_openHours:1;
        unsigned int read_phoneticName:1;
        unsigned int read_photos:1;
        unsigned int read_placeDataAmendments:1;
        unsigned int read_ratings:1;
        unsigned int read_sources:1;
        unsigned int read_starRatings:1;
        unsigned int read_telephone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 176 = 0xb0
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e6206c
+ (Class)placeDataAmendmentType;	// IMP=0x0000000000e5cf1c
+ (Class)starRatingType;	// IMP=0x0000000000e5ccac
+ (Class)sourceType;	// IMP=0x0000000000e5ca42
+ (Class)attributionType;	// IMP=0x0000000000e5c7d8
+ (Class)localizedCategoriesType;	// IMP=0x0000000000e5c56a
+ (Class)openHoursType;	// IMP=0x0000000000e5c1b8
+ (Class)attributeKeyValueType;	// IMP=0x0000000000e5bf48
+ (Class)photoType;	// IMP=0x0000000000e5bcda
+ (Class)categoryType;	// IMP=0x0000000000e5ba6a
+ (Class)ratingType;	// IMP=0x0000000000e5b7fc
- (void).cxx_destruct;	// IMP=0x0000000000e68073
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e67584
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e669a1
- (unsigned long long)hash;	// IMP=0x0000000000e6674c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e66310
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e65441
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e64cf6
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e64cc5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e63b23
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e63b14
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e60fa0
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e60f8e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e5e548
- (id)jsonRepresentation;	// IMP=0x0000000000e5e436
- (id)dictionaryRepresentation;	// IMP=0x0000000000e5cfdc
- (id)description;	// IMP=0x0000000000e5cf2d
- (id)placeDataAmendmentAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5ceeb
- (unsigned long long)placeDataAmendmentsCount;	// IMP=0x0000000000e5cebf
- (void)addPlaceDataAmendment:(id)arg1;	// IMP=0x0000000000e5ce08
- (void)clearPlaceDataAmendments;	// IMP=0x0000000000e5cddd
@property(retain, nonatomic) NSMutableArray *placeDataAmendments;
- (id)starRatingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5cc7b
- (unsigned long long)starRatingsCount;	// IMP=0x0000000000e5cc4f
- (void)addStarRating:(id)arg1;	// IMP=0x0000000000e5cb9a
- (void)clearStarRatings;	// IMP=0x0000000000e5cb71
@property(retain, nonatomic) NSMutableArray *starRatings;
- (id)sourceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5ca11
- (unsigned long long)sourcesCount;	// IMP=0x0000000000e5c9e5
- (void)addSource:(id)arg1;	// IMP=0x0000000000e5c930
- (void)clearSources;	// IMP=0x0000000000e5c907
@property(retain, nonatomic) NSMutableArray *sources;
- (id)attributionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5c7a7
- (unsigned long long)attributionsCount;	// IMP=0x0000000000e5c77b
- (void)addAttribution:(id)arg1;	// IMP=0x0000000000e5c6c4
- (void)clearAttributions;	// IMP=0x0000000000e5c699
@property(retain, nonatomic) NSMutableArray *attributions;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5c539
- (unsigned long long)localizedCategoriesCount;	// IMP=0x0000000000e5c50d
- (void)addLocalizedCategories:(id)arg1;	// IMP=0x0000000000e5c456
- (void)clearLocalizedCategories;	// IMP=0x0000000000e5c42b
@property(retain, nonatomic) NSMutableArray *localizedCategories;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (id)openHoursAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5c187
- (unsigned long long)openHoursCount;	// IMP=0x0000000000e5c15b
- (void)addOpenHours:(id)arg1;	// IMP=0x0000000000e5c0a4
- (void)clearOpenHours;	// IMP=0x0000000000e5c079
@property(retain, nonatomic) NSMutableArray *openHours;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5bf17
- (unsigned long long)attributeKeyValuesCount;	// IMP=0x0000000000e5beeb
- (void)addAttributeKeyValue:(id)arg1;	// IMP=0x0000000000e5be34
- (void)clearAttributeKeyValues;	// IMP=0x0000000000e5be09
@property(retain, nonatomic) NSMutableArray *attributeKeyValues;
- (id)photoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5bca9
- (unsigned long long)photosCount;	// IMP=0x0000000000e5bc7d
- (void)addPhoto:(id)arg1;	// IMP=0x0000000000e5bbc6
- (void)clearPhotos;	// IMP=0x0000000000e5bb9b
@property(retain, nonatomic) NSMutableArray *photos;
- (id)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5ba39
- (unsigned long long)categorysCount;	// IMP=0x0000000000e5ba0d
- (void)addCategory:(id)arg1;	// IMP=0x0000000000e5b956
- (void)clearCategorys;	// IMP=0x0000000000e5b92b
@property(retain, nonatomic) NSMutableArray *categorys;
- (id)ratingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e5b7cb
- (unsigned long long)ratingsCount;	// IMP=0x0000000000e5b79f
- (void)addRating:(id)arg1;	// IMP=0x0000000000e5b6e8
- (void)clearRatings;	// IMP=0x0000000000e5b6bd
@property(retain, nonatomic) NSMutableArray *ratings;
@property(retain, nonatomic) NSString *mapsURL;
@property(readonly, nonatomic) _Bool hasMapsURL;
@property(nonatomic) _Bool hasIsClosed;
@property(nonatomic) _Bool isClosed;
@property(retain, nonatomic) NSString *uRL;
@property(readonly, nonatomic) _Bool hasURL;
@property(retain, nonatomic) NSString *telephone;
@property(readonly, nonatomic) _Bool hasTelephone;
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasUID;
@property(nonatomic) unsigned long long uID;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e593aa
- (id)init;	// IMP=0x0000000000e5934e
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6;	// IMP=0x00000000009c57d9
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;	// IMP=0x0000000001121472

@end

