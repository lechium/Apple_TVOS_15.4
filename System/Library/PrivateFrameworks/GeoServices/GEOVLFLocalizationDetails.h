//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOVLFFailureDetails, GEOVLFGravityVector, GEOVLFLocalizationAlgorithmDetails, GEOVLFLocation, GEOVLFSuccessDetails, GEOVLFTileDetails, PBDataReader;

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    struct GEOVLFPositionContextClassification _positionContextClassification;	// 16 = 0x10
    GEOVLFLocalizationAlgorithmDetails *_algorithmDetails;	// 40 = 0x28
    double _exposureTargetOffset;	// 48 = 0x30
    GEOVLFFailureDetails *_failureDetails;	// 56 = 0x38
    GEOVLFGravityVector *_gravityVector;	// 64 = 0x40
    GEOVLFLocation *_location;	// 72 = 0x48
    GEOVLFSuccessDetails *_successDetails;	// 80 = 0x50
    GEOVLFTileDetails *_tileDetails;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    unsigned int _relativeTimestampMs;	// 108 = 0x6c
    unsigned int _runTimeMs;	// 112 = 0x70
    struct {
        unsigned int has_positionContextClassification:1;
        unsigned int has_exposureTargetOffset:1;
        unsigned int has_relativeTimestampMs:1;
        unsigned int has_runTimeMs:1;
        unsigned int read_algorithmDetails:1;
        unsigned int read_failureDetails:1;
        unsigned int read_gravityVector:1;
        unsigned int read_location:1;
        unsigned int read_successDetails:1;
        unsigned int read_tileDetails:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 116 = 0x74
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014e620d
- (void).cxx_destruct;	// IMP=0x00000000014e7685
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014e7476
- (unsigned long long)hash;	// IMP=0x00000000014e7224
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014e6f7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014e6c68
- (void)copyTo:(id)arg1;	// IMP=0x00000000014e6a8f
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000014e6a5e
- (void)writeTo:(id)arg1;	// IMP=0x00000000014e6786
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014e6777
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014e5cc0
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014e5cae
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014e565f
- (id)jsonRepresentation;	// IMP=0x00000000014e5650
- (id)dictionaryRepresentation;	// IMP=0x00000000014e513e
- (id)description;	// IMP=0x00000000014e508f
@property(nonatomic) _Bool hasPositionContextClassification;
@property(nonatomic) struct GEOVLFPositionContextClassification positionContextClassification;
@property(nonatomic) _Bool hasExposureTargetOffset;
@property(nonatomic) double exposureTargetOffset;
@property(retain, nonatomic) GEOVLFLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) GEOVLFGravityVector *gravityVector;
@property(readonly, nonatomic) _Bool hasGravityVector;
@property(retain, nonatomic) GEOVLFFailureDetails *failureDetails;
@property(readonly, nonatomic) _Bool hasFailureDetails;
@property(retain, nonatomic) GEOVLFSuccessDetails *successDetails;
@property(readonly, nonatomic) _Bool hasSuccessDetails;
@property(retain, nonatomic) GEOVLFLocalizationAlgorithmDetails *algorithmDetails;
@property(readonly, nonatomic) _Bool hasAlgorithmDetails;
@property(nonatomic) _Bool hasRunTimeMs;
@property(nonatomic) unsigned int runTimeMs;
@property(nonatomic) _Bool hasRelativeTimestampMs;
@property(nonatomic) unsigned int relativeTimestampMs;
@property(retain, nonatomic) GEOVLFTileDetails *tileDetails;
@property(readonly, nonatomic) _Bool hasTileDetails;
- (id)initWithData:(id)arg1;	// IMP=0x00000000014e3bb7
- (id)init;	// IMP=0x00000000014e3b5b

@end

