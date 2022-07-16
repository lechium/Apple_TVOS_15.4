//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitPlaceCard, NSString, PBDataReader;

@interface GEOPlaceActionDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_actionUrl;	// 16 = 0x10
    unsigned long long _animationID;	// 24 = 0x18
    unsigned long long _businessID;	// 32 = 0x20
    NSString *_destinationApp;	// 40 = 0x28
    NSString *_photoId;	// 48 = 0x30
    long long _placeID;	// 56 = 0x38
    NSString *_richProviderId;	// 64 = 0x40
    double _searchResponseRelativeTimestamp;	// 72 = 0x48
    unsigned long long _targetID;	// 80 = 0x50
    GEOTransitPlaceCard *_transitPlaceCard;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    int _localSearchProviderID;	// 108 = 0x6c
    int _resultIndex;	// 112 = 0x70
    struct {
        unsigned int has_animationID:1;
        unsigned int has_businessID:1;
        unsigned int has_placeID:1;
        unsigned int has_searchResponseRelativeTimestamp:1;
        unsigned int has_targetID:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_resultIndex:1;
        unsigned int read_actionUrl:1;
        unsigned int read_destinationApp:1;
        unsigned int read_photoId:1;
        unsigned int read_richProviderId:1;
        unsigned int read_transitPlaceCard:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 116 = 0x74
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c3a830
+ (id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2;	// IMP=0x0000000000608f44
+ (id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;	// IMP=0x0000000000608db1
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;	// IMP=0x0000000000608d75
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;	// IMP=0x0000000000608d47
+ (id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;	// IMP=0x0000000000608d09
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;	// IMP=0x0000000000608cf4
+ (id)actionDetailsWithTargetID:(unsigned long long)arg1;	// IMP=0x0000000000608cd5
- (void).cxx_destruct;	// IMP=0x0000000000c3ba15
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c3b856
- (unsigned long long)hash;	// IMP=0x0000000000c3b5de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3b30d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3afff
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c3adf4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3aacb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3aabc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c3a57d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c3a56b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c39f2a
- (id)jsonRepresentation;	// IMP=0x0000000000c39f1b
- (id)dictionaryRepresentation;	// IMP=0x0000000000c39a76
- (id)description;	// IMP=0x0000000000c399c7
@property(retain, nonatomic) NSString *destinationApp;
@property(readonly, nonatomic) _Bool hasDestinationApp;
@property(retain, nonatomic) NSString *richProviderId;
@property(readonly, nonatomic) _Bool hasRichProviderId;
@property(retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;
@property(readonly, nonatomic) _Bool hasTransitPlaceCard;
@property(retain, nonatomic) NSString *actionUrl;
@property(readonly, nonatomic) _Bool hasActionUrl;
@property(retain, nonatomic) NSString *photoId;
@property(readonly, nonatomic) _Bool hasPhotoId;
@property(nonatomic) _Bool hasTargetID;
@property(nonatomic) unsigned long long targetID;
@property(nonatomic) _Bool hasAnimationID;
@property(nonatomic) unsigned long long animationID;
@property(nonatomic) _Bool hasResultIndex;
@property(nonatomic) int resultIndex;
@property(nonatomic) _Bool hasSearchResponseRelativeTimestamp;
@property(nonatomic) double searchResponseRelativeTimestamp;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) _Bool hasPlaceID;
@property(nonatomic) long long placeID;
@property(nonatomic) _Bool hasBusinessID;
@property(nonatomic) unsigned long long businessID;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c38492
- (id)init;	// IMP=0x0000000000c38436
- (id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;	// IMP=0x00000000006088cc
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;	// IMP=0x0000000000608891
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;	// IMP=0x000000000060887c

@end

