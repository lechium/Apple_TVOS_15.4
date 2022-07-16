//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavigabilityInfo, GEOTrafficBannerText, GEOTraversalTimes, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_incidentsOnUserWaypointRoutes;	// 24 = 0x18
    GEONavigabilityInfo *_navigabilityInfo;	// 32 = 0x20
    NSMutableArray *_newWaypointRoutes;	// 40 = 0x28
    NSMutableArray *_routeLegs;	// 48 = 0x30
    GEOTrafficBannerText *_trafficBannerText;	// 56 = 0x38
    GEOTraversalTimes *_traversalTimes;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    unsigned int _identifier;	// 84 = 0x54
    struct {
        unsigned int has_identifier:1;
        unsigned int read_unknownFields:1;
        unsigned int read_incidentsOnUserWaypointRoutes:1;
        unsigned int read_navigabilityInfo:1;
        unsigned int read_newWaypointRoutes:1;
        unsigned int read_routeLegs:1;
        unsigned int read_trafficBannerText:1;
        unsigned int read_traversalTimes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000012e5729
+ (Class)newWaypointRoutesType;	// IMP=0x00000000012e4094
+ (Class)incidentsOnUserWaypointRouteType;	// IMP=0x00000000012e3cde
+ (Class)routeLegType;	// IMP=0x00000000012e3932
- (void).cxx_destruct;	// IMP=0x00000000012e740c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000012e7088
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000012e6b7f
- (unsigned long long)hash;	// IMP=0x00000000012e6a78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012e6882
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012e6259
- (void)copyTo:(id)arg1;	// IMP=0x00000000012e5f84
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000012e5c0a
- (void)writeTo:(id)arg1;	// IMP=0x00000000012e5745
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012e5736
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000012e561d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000012e560b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000012e4d57
- (id)jsonRepresentation;	// IMP=0x00000000012e4c45
- (id)dictionaryRepresentation;	// IMP=0x00000000012e429e
- (id)description;	// IMP=0x00000000012e41ef
@property(retain, nonatomic) GEONavigabilityInfo *navigabilityInfo;
@property(readonly, nonatomic) _Bool hasNavigabilityInfo;
- (id)newWaypointRoutesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000012e405a
- (unsigned long long)newWaypointRoutesCount;	// IMP=0x00000000012e402e
- (void)addNewWaypointRoutes:(id)arg1;	// IMP=0x00000000012e3f78
- (void)clearNewWaypointRoutes;	// IMP=0x00000000012e3f4e
@property(retain, nonatomic) NSMutableArray *newWaypointRoutes;
@property(retain, nonatomic) GEOTrafficBannerText *trafficBannerText;
@property(readonly, nonatomic) _Bool hasTrafficBannerText;
- (id)incidentsOnUserWaypointRouteAtIndex:(unsigned long long)arg1;	// IMP=0x00000000012e3cad
- (unsigned long long)incidentsOnUserWaypointRoutesCount;	// IMP=0x00000000012e3c81
- (void)addIncidentsOnUserWaypointRoute:(id)arg1;	// IMP=0x00000000012e3bcb
- (void)clearIncidentsOnUserWaypointRoutes;	// IMP=0x00000000012e3ba1
@property(retain, nonatomic) NSMutableArray *incidentsOnUserWaypointRoutes;
@property(retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property(readonly, nonatomic) _Bool hasTraversalTimes;
- (id)routeLegAtIndex:(unsigned long long)arg1;	// IMP=0x00000000012e3901
- (unsigned long long)routeLegsCount;	// IMP=0x00000000012e38d5
- (void)addRouteLeg:(id)arg1;	// IMP=0x00000000012e381f
- (void)clearRouteLegs;	// IMP=0x00000000012e37f5
@property(retain, nonatomic) NSMutableArray *routeLegs;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) unsigned int identifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000012e2777
- (id)init;	// IMP=0x00000000012e271b

@end
