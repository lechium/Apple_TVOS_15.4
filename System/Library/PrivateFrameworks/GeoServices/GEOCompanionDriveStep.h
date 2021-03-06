//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionManeuverStep-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOEVChargeInfo, GEOEVStepInfo, GEONameInfo, GEOPBTransitArtwork, NSMutableArray, NSString, PBDataReader;
@protocol GEOTransitArtworkDataSource;

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    struct GEOJunctionElement *_junctionElements;	// 16 = 0x10
    unsigned long long _junctionElementsCount;	// 24 = 0x18
    unsigned long long _junctionElementsSpace;	// 32 = 0x20
    GEOPBTransitArtwork *_artworkOverride;	// 40 = 0x28
    GEOEVChargeInfo *_chargingInfo;	// 48 = 0x30
    GEOEVStepInfo *_evInfo;	// 56 = 0x38
    GEONameInfo *_exitNumber;	// 64 = 0x40
    NSMutableArray *_maneuverNames;	// 72 = 0x48
    NSString *_shield;	// 80 = 0x50
    NSMutableArray *_signposts;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    int _drivingSide;	// 108 = 0x6c
    int _junctionType;	// 112 = 0x70
    int _maneuverType;	// 116 = 0x74
    int _shieldType;	// 120 = 0x78
    _Bool _toFreeway;	// 124 = 0x7c
    struct {
        unsigned int has_drivingSide:1;
        unsigned int has_junctionType:1;
        unsigned int has_maneuverType:1;
        unsigned int has_shieldType:1;
        unsigned int has_toFreeway:1;
        unsigned int read_junctionElements:1;
        unsigned int read_artworkOverride:1;
        unsigned int read_chargingInfo:1;
        unsigned int read_evInfo:1;
        unsigned int read_exitNumber:1;
        unsigned int read_maneuverNames:1;
        unsigned int read_shield:1;
        unsigned int read_signposts:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 128 = 0x80
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000072b5e4
+ (Class)signpostType;	// IMP=0x0000000000728a66
+ (Class)maneuverNameType;	// IMP=0x00000000007287fc
- (void).cxx_destruct;	// IMP=0x000000000072d404
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000072cf9f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000072ca7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000072c4ba
- (void)copyTo:(id)arg1;	// IMP=0x000000000072c141
- (void)writeTo:(id)arg1;	// IMP=0x000000000072ba97
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000072ba88
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000072b331
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000072b31f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000729f77
- (id)jsonRepresentation;	// IMP=0x0000000000729f68
- (id)dictionaryRepresentation;	// IMP=0x00000000007291b8
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOEVStepInfo *evInfo;
@property(readonly, nonatomic) _Bool hasEvInfo;
@property(retain, nonatomic) GEOEVChargeInfo *chargingInfo;
@property(readonly, nonatomic) _Bool hasChargingInfo;
@property(retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property(readonly, nonatomic) _Bool hasArtworkOverride;
- (int)StringAsDrivingSide:(id)arg1;	// IMP=0x0000000000728ce3
- (id)drivingSideAsString:(int)arg1;	// IMP=0x0000000000728c8e
@property(nonatomic) _Bool hasDrivingSide;
@property(nonatomic) int drivingSide;
@property(retain, nonatomic) GEONameInfo *exitNumber;
@property(readonly, nonatomic) _Bool hasExitNumber;
@property(nonatomic) _Bool hasToFreeway;
@property(nonatomic) _Bool toFreeway;
- (id)signpostAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000728a35
- (unsigned long long)signpostsCount;	// IMP=0x0000000000728a09
- (void)addSignpost:(id)arg1;	// IMP=0x0000000000728954
- (void)clearSignposts;	// IMP=0x000000000072892b
@property(retain, nonatomic) NSMutableArray *signposts;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007287cb
- (unsigned long long)maneuverNamesCount;	// IMP=0x000000000072879f
- (void)addManeuverName:(id)arg1;	// IMP=0x00000000007286ea
- (void)clearManeuverNames;	// IMP=0x00000000007286c1
@property(retain, nonatomic) NSMutableArray *maneuverNames;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000728537
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000728459
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;	// IMP=0x00000000007283e5
- (void)clearJunctionElements;	// IMP=0x0000000000728393
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
- (int)StringAsJunctionType:(id)arg1;	// IMP=0x000000000072811f
- (id)junctionTypeAsString:(int)arg1;	// IMP=0x00000000007280ca
@property(nonatomic) _Bool hasJunctionType;
@property(nonatomic) int junctionType;
@property(nonatomic) _Bool hasShieldType;
@property(nonatomic) int shieldType;
@property(retain, nonatomic) NSString *shield;
@property(readonly, nonatomic) _Bool hasShield;
- (int)StringAsManeuverType:(id)arg1;	// IMP=0x0000000000726640
- (id)maneuverTypeAsString:(int)arg1;	// IMP=0x00000000007261fb
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;
- (void)dealloc;	// IMP=0x000000000072614a
- (id)initWithData:(id)arg1;	// IMP=0x00000000007260ee
- (id)init;	// IMP=0x0000000000726092
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> maneuverArtworkOverride;
@property(readonly, nonatomic) int transportType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

