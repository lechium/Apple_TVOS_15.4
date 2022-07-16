//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPProblemContext, GEORPProblemCorrections, PBDataReader;

@interface GEORPProblem : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _userPaths;	// 16 = 0x10
    GEORPProblemContext *_problemContext;	// 40 = 0x28
    GEORPProblemCorrections *_problemCorrections;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _problemType;	// 68 = 0x44
    unsigned int _protocolVersion;	// 72 = 0x48
    struct {
        unsigned int has_problemType:1;
        unsigned int has_protocolVersion:1;
        unsigned int read_userPaths:1;
        unsigned int read_problemContext:1;
        unsigned int read_problemCorrections:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e1825e
- (void).cxx_destruct;	// IMP=0x0000000000e1b3c3
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e1b26f
- (unsigned long long)hash;	// IMP=0x0000000000e1b1ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e1b03e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e1ae2f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e1ac94
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e1ac26
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000e19c8d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e19087
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e19078
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e17c5d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e17c4b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e16797
- (id)jsonRepresentation;	// IMP=0x0000000000e16788
- (id)dictionaryRepresentation;	// IMP=0x0000000000e15ce4
- (id)description;	// IMP=0x0000000000e15c35
@property(retain, nonatomic) GEORPProblemContext *problemContext;
@property(readonly, nonatomic) _Bool hasProblemContext;
@property(retain, nonatomic) GEORPProblemCorrections *problemCorrections;
@property(readonly, nonatomic) _Bool hasProblemCorrections;
- (int)StringAsProblemType:(id)arg1;	// IMP=0x0000000000e151c8
- (id)problemTypeAsString:(int)arg1;	// IMP=0x0000000000e14dc9
@property(nonatomic) _Bool hasProblemType;
@property(nonatomic) int problemType;
- (int)StringAsUserPaths:(id)arg1;	// IMP=0x0000000000e14618
- (id)userPathsAsString:(int)arg1;	// IMP=0x0000000000e1426e
- (void)setUserPaths:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e1424c
- (int)userPathAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e14176
- (void)addUserPath:(int)arg1;	// IMP=0x0000000000e1413d
- (void)clearUserPaths;	// IMP=0x0000000000e14121
@property(readonly, nonatomic) int *userPaths;
@property(readonly, nonatomic) unsigned long long userPathsCount;
@property(nonatomic) _Bool hasProtocolVersion;
@property(nonatomic) unsigned int protocolVersion;
- (void)dealloc;	// IMP=0x0000000000e136ee
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e13692
- (id)init;	// IMP=0x0000000000e13636

@end

