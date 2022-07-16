//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_82f37d05 _fusedConfidences;	// 16 = 0x10
    CDStruct_82f37d05 _solverConfidences;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    unsigned int _numberOfInliers;	// 76 = 0x4c
    unsigned int _numberOfKeypoints;	// 80 = 0x50
    unsigned int _numberOfMatches;	// 84 = 0x54
    unsigned int _tKptsMs;	// 88 = 0x58
    unsigned int _tMatchMs;	// 92 = 0x5c
    unsigned int _tPoseMs;	// 96 = 0x60
    struct {
        unsigned int has_numberOfInliers:1;
        unsigned int has_numberOfKeypoints:1;
        unsigned int has_numberOfMatches:1;
        unsigned int has_tKptsMs:1;
        unsigned int has_tMatchMs:1;
        unsigned int has_tPoseMs:1;
        unsigned int read_fusedConfidences:1;
        unsigned int read_solverConfidences:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014e2a14
- (void).cxx_destruct;	// IMP=0x00000000014e3b48
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014e398a
- (unsigned long long)hash;	// IMP=0x00000000014e385f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014e369c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014e346a
- (void)copyTo:(id)arg1;	// IMP=0x00000000014e3229
- (void)writeTo:(id)arg1;	// IMP=0x00000000014e2f4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014e2f3c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014e2761
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014e274f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014e207c
- (id)jsonRepresentation;	// IMP=0x00000000014e206d
- (id)dictionaryRepresentation;	// IMP=0x00000000014e1cc5
- (id)description;	// IMP=0x00000000014e1c16
@property(nonatomic) _Bool hasTPoseMs;
@property(nonatomic) unsigned int tPoseMs;
@property(nonatomic) _Bool hasTMatchMs;
@property(nonatomic) unsigned int tMatchMs;
@property(nonatomic) _Bool hasTKptsMs;
@property(nonatomic) unsigned int tKptsMs;
- (void)setFusedConfidences:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000014e1ac2
- (double)fusedConfidenceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014e19ea
- (void)addFusedConfidence:(double)arg1;	// IMP=0x00000000014e19aa
- (void)clearFusedConfidences;	// IMP=0x00000000014e198c
@property(readonly, nonatomic) double *fusedConfidences;
@property(readonly, nonatomic) unsigned long long fusedConfidencesCount;
- (void)setSolverConfidences:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000014e184f
- (double)solverConfidenceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014e1777
- (void)addSolverConfidence:(double)arg1;	// IMP=0x00000000014e1737
- (void)clearSolverConfidences;	// IMP=0x00000000014e1719
@property(readonly, nonatomic) double *solverConfidences;
@property(readonly, nonatomic) unsigned long long solverConfidencesCount;
@property(nonatomic) _Bool hasNumberOfInliers;
@property(nonatomic) unsigned int numberOfInliers;
@property(nonatomic) _Bool hasNumberOfMatches;
@property(nonatomic) unsigned int numberOfMatches;
@property(nonatomic) _Bool hasNumberOfKeypoints;
@property(nonatomic) unsigned int numberOfKeypoints;
- (void)dealloc;	// IMP=0x00000000014e0a29
- (id)initWithData:(id)arg1;	// IMP=0x00000000014e09cd
- (id)init;	// IMP=0x00000000014e0971

@end
