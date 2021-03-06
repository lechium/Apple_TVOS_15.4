//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOEVStepFeedbackInfo, NSData, PBDataReader;

@interface GEOStepFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    double _completionTimeStamp;	// 16 = 0x10
    NSData *_etaTrafficUpdateResponseId;	// 24 = 0x18
    GEOEVStepFeedbackInfo *_evStepInfo;	// 32 = 0x20
    NSData *_routeID;	// 40 = 0x28
    double _stepEndPathPointOffset;	// 48 = 0x30
    NSData *_stepZilch;	// 56 = 0x38
    NSData *_tripID;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    unsigned int _expectedTime;	// 84 = 0x54
    int _maneuverType;	// 88 = 0x58
    unsigned int _routeIndex;	// 92 = 0x5c
    unsigned int _stepID;	// 96 = 0x60
    int _stepEndPathPointIndex;	// 100 = 0x64
    unsigned int _waypointRouteID;	// 104 = 0x68
    _Bool _completedStep;	// 108 = 0x6c
    _Bool _lightGuidance;	// 109 = 0x6d
    _Bool _routePaused;	// 110 = 0x6e
    _Bool _routeResumed;	// 111 = 0x6f
    struct {
        unsigned int has_completionTimeStamp:1;
        unsigned int has_stepEndPathPointOffset:1;
        unsigned int has_expectedTime:1;
        unsigned int has_maneuverType:1;
        unsigned int has_routeIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_stepEndPathPointIndex:1;
        unsigned int has_waypointRouteID:1;
        unsigned int has_completedStep:1;
        unsigned int has_lightGuidance:1;
        unsigned int has_routePaused:1;
        unsigned int has_routeResumed:1;
        unsigned int read_etaTrafficUpdateResponseId:1;
        unsigned int read_evStepInfo:1;
        unsigned int read_routeID:1;
        unsigned int read_stepZilch:1;
        unsigned int read_tripID:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c44fdb
- (void).cxx_destruct;	// IMP=0x0000000000c46479
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c46225
- (unsigned long long)hash;	// IMP=0x0000000000c45dd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c459cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c45615
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c4537c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c44ff7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c44fe8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c44ecf
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c44ebd
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c43d3b
- (id)jsonRepresentation;	// IMP=0x0000000000c43d2c
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4315c
- (id)description;	// IMP=0x0000000000c430ad
@property(retain, nonatomic) NSData *etaTrafficUpdateResponseId;
@property(readonly, nonatomic) _Bool hasEtaTrafficUpdateResponseId;
@property(nonatomic) _Bool hasStepEndPathPointOffset;
@property(nonatomic) double stepEndPathPointOffset;
@property(nonatomic) _Bool hasStepEndPathPointIndex;
@property(nonatomic) int stepEndPathPointIndex;
@property(retain, nonatomic) NSData *stepZilch;
@property(readonly, nonatomic) _Bool hasStepZilch;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) unsigned int expectedTime;
- (int)StringAsManeuverType:(id)arg1;	// IMP=0x0000000000c42508
- (id)maneuverTypeAsString:(int)arg1;	// IMP=0x0000000000c420c1
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;
@property(nonatomic) _Bool hasWaypointRouteID;
@property(nonatomic) unsigned int waypointRouteID;
@property(retain, nonatomic) GEOEVStepFeedbackInfo *evStepInfo;
@property(readonly, nonatomic) _Bool hasEvStepInfo;
@property(nonatomic) _Bool hasRouteResumed;
@property(nonatomic) _Bool routeResumed;
@property(nonatomic) _Bool hasRoutePaused;
@property(nonatomic) _Bool routePaused;
@property(retain, nonatomic) NSData *tripID;
@property(readonly, nonatomic) _Bool hasTripID;
@property(nonatomic) _Bool hasLightGuidance;
@property(nonatomic) _Bool lightGuidance;
@property(nonatomic) _Bool hasRouteIndex;
@property(nonatomic) unsigned int routeIndex;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(nonatomic) _Bool hasCompletedStep;
@property(nonatomic) _Bool completedStep;
@property(nonatomic) _Bool hasCompletionTimeStamp;
@property(nonatomic) double completionTimeStamp;
@property(nonatomic) _Bool hasStepID;
@property(nonatomic) unsigned int stepID;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c40a0d
- (id)init;	// IMP=0x0000000000c409b1

@end

