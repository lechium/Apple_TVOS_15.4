//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEORPPoiEnrichmentPlaceContext, GEORPScorecard, GEORPScorecardUpdate, NSMutableArray, PBDataReader;

@interface GEORPPoiEnrichmentUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_imageIds;	// 16 = 0x10
    NSMutableArray *_imageUpdates;	// 24 = 0x18
    GEORPPoiEnrichmentPlaceContext *_placeContext;	// 32 = 0x20
    GEOPDPlace *_place;	// 40 = 0x28
    GEORPScorecardUpdate *_scorecardUpdate;	// 48 = 0x30
    GEORPScorecard *_scorecard;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _action;	// 76 = 0x4c
    struct {
        unsigned int has_action:1;
        unsigned int read_imageIds:1;
        unsigned int read_imageUpdates:1;
        unsigned int read_placeContext:1;
        unsigned int read_place:1;
        unsigned int read_scorecardUpdate:1;
        unsigned int read_scorecard:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007843a9
+ (Class)imageUpdateType;	// IMP=0x0000000000782d1f
+ (Class)imageIdType;	// IMP=0x000000000078297b
- (void).cxx_destruct;	// IMP=0x00000000007860cd
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000785d71
- (unsigned long long)hash;	// IMP=0x0000000000785c6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000785a75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000785588
- (void)copyTo:(id)arg1;	// IMP=0x000000000078531d
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000785166
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000784eab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000784904
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007848f5
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000783e5c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000783e4a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000078363b
- (id)jsonRepresentation;	// IMP=0x000000000078362c
- (id)dictionaryRepresentation;	// IMP=0x000000000078305d
- (id)description;	// IMP=0x0000000000782fae
@property(retain, nonatomic) GEORPPoiEnrichmentPlaceContext *placeContext;
@property(readonly, nonatomic) _Bool hasPlaceContext;
@property(retain, nonatomic) GEORPScorecardUpdate *scorecardUpdate;
@property(readonly, nonatomic) _Bool hasScorecardUpdate;
- (id)imageUpdateAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000782cee
- (unsigned long long)imageUpdatesCount;	// IMP=0x0000000000782cc2
- (void)addImageUpdate:(id)arg1;	// IMP=0x0000000000782c0e
- (void)clearImageUpdates;	// IMP=0x0000000000782be6
@property(retain, nonatomic) NSMutableArray *imageUpdates;
@property(retain, nonatomic) GEORPScorecard *scorecard;
@property(readonly, nonatomic) _Bool hasScorecard;
- (id)imageIdAtIndex:(unsigned long long)arg1;	// IMP=0x000000000078294a
- (unsigned long long)imageIdsCount;	// IMP=0x000000000078291e
- (void)addImageId:(id)arg1;	// IMP=0x000000000078286a
- (void)clearImageIds;	// IMP=0x0000000000782842
@property(retain, nonatomic) NSMutableArray *imageIds;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
- (int)StringAsAction:(id)arg1;	// IMP=0x0000000000781ad0
- (id)actionAsString:(int)arg1;	// IMP=0x0000000000781a53
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000781990
- (id)init;	// IMP=0x0000000000781934

@end
