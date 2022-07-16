//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitDepartureSequenceUsage, NSString, PBDataReader;

@interface GEOTransitPlaceCard : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_incidentType;	// 16 = 0x10
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;	// 24 = 0x18
    NSString *_transitSystemName;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _transitCategory;	// 52 = 0x34
    struct {
        unsigned int has_transitCategory:1;
        unsigned int read_incidentType:1;
        unsigned int read_transitDepartureSequenceUsage:1;
        unsigned int read_transitSystemName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c4e031
- (void).cxx_destruct;	// IMP=0x0000000000c4e80e
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c4e742
- (unsigned long long)hash;	// IMP=0x0000000000c4e699
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c4e540
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4e339
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c4e229
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4e04d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4e03e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c4df25
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c4df13
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c4db2f
- (id)jsonRepresentation;	// IMP=0x0000000000c4db20
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4d888
- (id)description;	// IMP=0x0000000000c4d7d9
@property(retain, nonatomic) NSString *incidentType;
@property(readonly, nonatomic) _Bool hasIncidentType;
@property(retain, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property(readonly, nonatomic) _Bool hasTransitDepartureSequenceUsage;
@property(retain, nonatomic) NSString *transitSystemName;
@property(readonly, nonatomic) _Bool hasTransitSystemName;
- (int)StringAsTransitCategory:(id)arg1;	// IMP=0x0000000000c4ccdc
- (id)transitCategoryAsString:(int)arg1;	// IMP=0x0000000000c4cc36
@property(nonatomic) _Bool hasTransitCategory;
@property(nonatomic) int transitCategory;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c4cb73
- (id)init;	// IMP=0x0000000000c4cb17

@end

