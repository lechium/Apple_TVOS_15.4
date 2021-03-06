//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionManeuverStep-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, NSMutableArray, NSString, PBDataReader;
@protocol GEOTransitArtworkDataSource;

@interface GEOCompanionWalkStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    struct GEOJunctionElement *_junctionElements;	// 16 = 0x10
    unsigned long long _junctionElementsCount;	// 24 = 0x18
    unsigned long long _junctionElementsSpace;	// 32 = 0x20
    GEOPBTransitArtwork *_artworkOverride;	// 40 = 0x28
    NSMutableArray *_maneuverNames;	// 48 = 0x30
    NSMutableArray *_signposts;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _junctionType;	// 76 = 0x4c
    int _maneuverType;	// 80 = 0x50
    CDStruct_9011fabd _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000075c643
+ (Class)signpostType;	// IMP=0x000000000075a7a1
+ (Class)maneuverNameType;	// IMP=0x000000000075a53c
- (void).cxx_destruct;	// IMP=0x000000000075d7f0
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000075d4b1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000075d207
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000075cd24
- (void)copyTo:(id)arg1;	// IMP=0x000000000075ca82
- (void)writeTo:(id)arg1;	// IMP=0x000000000075c65f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000075c650
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000075c537
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000075c525
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000075b487
- (id)jsonRepresentation;	// IMP=0x000000000075b478
- (id)dictionaryRepresentation;	// IMP=0x000000000075a9a0
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property(readonly, nonatomic) _Bool hasArtworkOverride;
- (id)signpostAtIndex:(unsigned long long)arg1;	// IMP=0x000000000075a770
- (unsigned long long)signpostsCount;	// IMP=0x000000000075a744
- (void)addSignpost:(id)arg1;	// IMP=0x000000000075a690
- (void)clearSignposts;	// IMP=0x000000000075a668
@property(retain, nonatomic) NSMutableArray *signposts;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;	// IMP=0x000000000075a50b
- (unsigned long long)maneuverNamesCount;	// IMP=0x000000000075a4df
- (void)addManeuverName:(id)arg1;	// IMP=0x000000000075a42b
- (void)clearManeuverNames;	// IMP=0x000000000075a403
@property(retain, nonatomic) NSMutableArray *maneuverNames;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000075a27e
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000075a1a0
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;	// IMP=0x000000000075a12e
- (void)clearJunctionElements;	// IMP=0x000000000075a0de
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
- (int)StringAsJunctionType:(id)arg1;	// IMP=0x0000000000759354
- (id)junctionTypeAsString:(int)arg1;	// IMP=0x00000000007592ff
@property(nonatomic) _Bool hasJunctionType;
@property(nonatomic) int junctionType;
- (int)StringAsManeuverType:(id)arg1;	// IMP=0x0000000000758aac
- (id)maneuverTypeAsString:(int)arg1;	// IMP=0x0000000000758665
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;
- (void)dealloc;	// IMP=0x00000000007585bc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000758560
- (id)init;	// IMP=0x0000000000758504
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> maneuverArtworkOverride;
@property(readonly, nonatomic) int transportType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

