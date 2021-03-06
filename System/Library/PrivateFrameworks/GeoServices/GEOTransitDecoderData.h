//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitDecoderData : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_accessPoints;	// 24 = 0x18
    NSMutableArray *_artworks;	// 32 = 0x20
    NSMutableArray *_halls;	// 40 = 0x28
    NSMutableArray *_lines;	// 48 = 0x30
    NSMutableArray *_stations;	// 56 = 0x38
    NSMutableArray *_steps;	// 64 = 0x40
    NSMutableArray *_stops;	// 72 = 0x48
    NSMutableArray *_systems;	// 80 = 0x50
    NSMutableArray *_transitIncidentMessages;	// 88 = 0x58
    NSMutableArray *_transitIncidents;	// 96 = 0x60
    NSMutableArray *_walkings;	// 104 = 0x68
    NSMutableArray *_zilchPoints;	// 112 = 0x70
    unsigned int _readerMarkPos;	// 120 = 0x78
    unsigned int _readerMarkLength;	// 124 = 0x7c
    struct os_unfair_lock_s _readerLock;	// 128 = 0x80
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoints:1;
        unsigned int read_artworks:1;
        unsigned int read_halls:1;
        unsigned int read_lines:1;
        unsigned int read_stations:1;
        unsigned int read_steps:1;
        unsigned int read_stops:1;
        unsigned int read_systems:1;
        unsigned int read_transitIncidentMessages:1;
        unsigned int read_transitIncidents:1;
        unsigned int read_walkings:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000039fb7a
+ (Class)stepType;	// IMP=0x000000000039c5fe
+ (Class)transitIncidentMessageType;	// IMP=0x000000000039c393
+ (Class)artworkType;	// IMP=0x000000000039c129
+ (Class)hallType;	// IMP=0x000000000039bebe
+ (Class)transitIncidentType;	// IMP=0x000000000039bc53
+ (Class)systemType;	// IMP=0x000000000039b9e9
+ (Class)zilchPointsType;	// IMP=0x000000000039b77f
+ (Class)stopType;	// IMP=0x000000000039b515
+ (Class)walkingType;	// IMP=0x000000000039b2aa
+ (Class)accessPointType;	// IMP=0x000000000039b040
+ (Class)lineType;	// IMP=0x000000000039add5
+ (Class)stationType;	// IMP=0x000000000039ab6a
- (void).cxx_destruct;	// IMP=0x00000000003a5d44
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003a5335
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a467f
- (unsigned long long)hash;	// IMP=0x00000000003a4505
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a4210
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a31c8
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a2a9b
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000003a23ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a0aaf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a0aa0
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000039f720
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000039f70e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000039e0a1
- (id)jsonRepresentation;	// IMP=0x000000000039df8f
- (id)dictionaryRepresentation;	// IMP=0x000000000039c6be
- (id)description;	// IMP=0x000000000039c60f
- (id)stepAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039c5cd
- (unsigned long long)stepsCount;	// IMP=0x000000000039c5a1
- (void)addStep:(id)arg1;	// IMP=0x000000000039c4eb
- (void)clearSteps;	// IMP=0x000000000039c4c1
@property(retain, nonatomic) NSMutableArray *steps;
- (id)transitIncidentMessageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039c362
- (unsigned long long)transitIncidentMessagesCount;	// IMP=0x000000000039c336
- (void)addTransitIncidentMessage:(id)arg1;	// IMP=0x000000000039c281
- (void)clearTransitIncidentMessages;	// IMP=0x000000000039c258
@property(retain, nonatomic) NSMutableArray *transitIncidentMessages;
- (id)artworkAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039c0f8
- (unsigned long long)artworksCount;	// IMP=0x000000000039c0cc
- (void)addArtwork:(id)arg1;	// IMP=0x000000000039c016
- (void)clearArtworks;	// IMP=0x000000000039bfec
@property(retain, nonatomic) NSMutableArray *artworks;
- (id)hallAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039be8d
- (unsigned long long)hallsCount;	// IMP=0x000000000039be61
- (void)addHall:(id)arg1;	// IMP=0x000000000039bdab
- (void)clearHalls;	// IMP=0x000000000039bd81
@property(retain, nonatomic) NSMutableArray *halls;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039bc22
- (unsigned long long)transitIncidentsCount;	// IMP=0x000000000039bbf6
- (void)addTransitIncident:(id)arg1;	// IMP=0x000000000039bb41
- (void)clearTransitIncidents;	// IMP=0x000000000039bb18
@property(retain, nonatomic) NSMutableArray *transitIncidents;
- (id)systemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039b9b8
- (unsigned long long)systemsCount;	// IMP=0x000000000039b98c
- (void)addSystem:(id)arg1;	// IMP=0x000000000039b8d7
- (void)clearSystems;	// IMP=0x000000000039b8ae
@property(retain, nonatomic) NSMutableArray *systems;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039b74e
- (unsigned long long)zilchPointsCount;	// IMP=0x000000000039b722
- (void)addZilchPoints:(id)arg1;	// IMP=0x000000000039b66d
- (void)clearZilchPoints;	// IMP=0x000000000039b644
@property(retain, nonatomic) NSMutableArray *zilchPoints;
- (id)stopAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039b4e4
- (unsigned long long)stopsCount;	// IMP=0x000000000039b4b8
- (void)addStop:(id)arg1;	// IMP=0x000000000039b402
- (void)clearStops;	// IMP=0x000000000039b3d8
@property(retain, nonatomic) NSMutableArray *stops;
- (id)walkingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039b279
- (unsigned long long)walkingsCount;	// IMP=0x000000000039b24d
- (void)addWalking:(id)arg1;	// IMP=0x000000000039b198
- (void)clearWalkings;	// IMP=0x000000000039b16f
@property(retain, nonatomic) NSMutableArray *walkings;
- (id)accessPointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039b00f
- (unsigned long long)accessPointsCount;	// IMP=0x000000000039afe3
- (void)addAccessPoint:(id)arg1;	// IMP=0x000000000039af2d
- (void)clearAccessPoints;	// IMP=0x000000000039af03
@property(retain, nonatomic) NSMutableArray *accessPoints;
- (id)lineAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039ada4
- (unsigned long long)linesCount;	// IMP=0x000000000039ad78
- (void)addLine:(id)arg1;	// IMP=0x000000000039acc2
- (void)clearLines;	// IMP=0x000000000039ac98
@property(retain, nonatomic) NSMutableArray *lines;
- (id)stationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039ab39
- (unsigned long long)stationsCount;	// IMP=0x000000000039ab0d
- (void)addStation:(id)arg1;	// IMP=0x000000000039aa57
- (void)clearStations;	// IMP=0x000000000039aa2d
@property(retain, nonatomic) NSMutableArray *stations;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000398f99
- (id)init;	// IMP=0x0000000000398f3d
- (id)artworkFromIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000fcfb06

@end

