//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_appBundleIdentifier;	// 16 = 0x10
    NSMutableArray *_handledSchemes;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _restaurantReservationExtensionSupport;	// 44 = 0x2c
    _Bool _supportsRestaurantQueueing;	// 48 = 0x30
    _Bool _supportsRestaurantReservations;	// 49 = 0x31
    struct {
        unsigned int has_restaurantReservationExtensionSupport:1;
        unsigned int has_supportsRestaurantQueueing:1;
        unsigned int has_supportsRestaurantReservations:1;
        unsigned int read_appBundleIdentifier:1;
        unsigned int read_handledSchemes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f8350e
+ (Class)handledSchemesType;	// IMP=0x0000000000f82890
- (void).cxx_destruct;	// IMP=0x0000000000f8443b
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f84259
- (unsigned long long)hash;	// IMP=0x0000000000f84193
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f84003
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f83c93
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f83b05
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f837d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f837c8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f8325b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f8324e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f82db1
- (id)jsonRepresentation;	// IMP=0x0000000000f82da7
- (id)dictionaryRepresentation;	// IMP=0x0000000000f82b78
- (id)description;	// IMP=0x0000000000f82ac9
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;	// IMP=0x0000000000f82a2c
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;	// IMP=0x0000000000f829c5
@property(nonatomic) _Bool hasRestaurantReservationExtensionSupport;
@property(nonatomic) int restaurantReservationExtensionSupport;
@property(nonatomic) _Bool hasSupportsRestaurantQueueing;
@property(nonatomic) _Bool supportsRestaurantQueueing;
@property(nonatomic) _Bool hasSupportsRestaurantReservations;
@property(nonatomic) _Bool supportsRestaurantReservations;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000f8285f
- (unsigned long long)handledSchemesCount;	// IMP=0x0000000000f82833
- (void)addHandledSchemes:(id)arg1;	// IMP=0x0000000000f8277f
- (void)clearHandledSchemes;	// IMP=0x0000000000f82757
@property(retain, nonatomic) NSMutableArray *handledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f81ea7
- (id)init;	// IMP=0x0000000000f81e4b

@end

