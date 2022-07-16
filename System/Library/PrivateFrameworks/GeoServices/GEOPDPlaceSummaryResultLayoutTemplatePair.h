//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceSummaryLayoutTemplate, NSArray, NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryResultLayoutTemplatePair : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _placeTypes;	// 16 = 0x10
    GEOPDPlaceSummaryLayoutTemplate *_layoutTemplate;	// 40 = 0x28
    NSMutableArray *_mapsIds;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_placeTypes:1;
        unsigned int read_layoutTemplate:1;
        unsigned int read_mapsIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d70172
+ (Class)mapsIdType;	// IMP=0x0000000000d6e970
- (void).cxx_destruct;	// IMP=0x0000000000d70e6b
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d70c53
- (unsigned long long)hash;	// IMP=0x0000000000d70be2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d70ad6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d707a3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d705db
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d7045b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d7018e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d7017f
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d70066
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d70054
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d6f897
- (id)jsonRepresentation;	// IMP=0x0000000000d6f888
- (id)dictionaryRepresentation;	// IMP=0x0000000000d6f2ad
- (id)description;	// IMP=0x0000000000d6f1fe
- (int)StringAsPlaceTypes:(id)arg1;	// IMP=0x0000000000d6eef8
- (id)placeTypesAsString:(int)arg1;	// IMP=0x0000000000d6ed26
- (void)setPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000d6ed04
- (int)placeTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d6ec2e
- (void)addPlaceType:(int)arg1;	// IMP=0x0000000000d6ebf5
- (void)clearPlaceTypes;	// IMP=0x0000000000d6ebd9
@property(readonly, nonatomic) int *placeTypes;
@property(readonly, nonatomic) unsigned long long placeTypesCount;
@property(retain, nonatomic) GEOPDPlaceSummaryLayoutTemplate *layoutTemplate;
@property(readonly, nonatomic) _Bool hasLayoutTemplate;
- (id)mapsIdAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d6e93f
- (unsigned long long)mapsIdsCount;	// IMP=0x0000000000d6e913
- (void)addMapsId:(id)arg1;	// IMP=0x0000000000d6e85f
- (void)clearMapsIds;	// IMP=0x0000000000d6e837
@property(retain, nonatomic) NSMutableArray *mapsIds;
- (void)dealloc;	// IMP=0x0000000000d6de46
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d6ddea
- (id)init;	// IMP=0x0000000000d6dd8e
@property(readonly, nonatomic) NSArray *geoMapItemPlaceTypes;
@property(readonly, nonatomic) NSArray *mapItemIdentifiers;

@end
