//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOCompanionCyclingStep, GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionGenericStep, GEOCompanionWalkStep, GEOStopWaypoint, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOCompanionStep : PBCodable <GEOCompanionCompatibility, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOCompanionCyclingStep *_cyclingStep;	// 16 = 0x10
    GEOCompanionDriveStep *_driveStep;	// 24 = 0x18
    GEOCompanionFerryStep *_ferryStep;	// 32 = 0x20
    GEOCompanionGenericStep *_genericStep;	// 40 = 0x28
    NSMutableArray *_guidanceEvents;	// 48 = 0x30
    NSMutableArray *_instructionWithAlternatives;	// 56 = 0x38
    NSString *_listInstruction;	// 64 = 0x40
    NSMutableArray *_roadDescriptions;	// 72 = 0x48
    NSString *_roadName;	// 80 = 0x50
    GEOStopWaypoint *_stopWaypoint;	// 88 = 0x58
    NSData *_updateID;	// 96 = 0x60
    GEOCompanionWalkStep *_walkStep;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    float _distanceMeters;	// 124 = 0x7c
    unsigned int _distance;	// 128 = 0x80
    unsigned int _endCoordinateIndex;	// 132 = 0x84
    unsigned int _legID;	// 136 = 0x88
    unsigned int _maneuverStartCoordinateIndex;	// 140 = 0x8c
    unsigned int _startCoordinateIndex;	// 144 = 0x90
    unsigned int _stepID;	// 148 = 0x94
    unsigned int _time;	// 152 = 0x98
    struct {
        unsigned int has_distanceMeters:1;
        unsigned int has_distance:1;
        unsigned int has_endCoordinateIndex:1;
        unsigned int has_legID:1;
        unsigned int has_maneuverStartCoordinateIndex:1;
        unsigned int has_startCoordinateIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_time:1;
        unsigned int read_cyclingStep:1;
        unsigned int read_driveStep:1;
        unsigned int read_ferryStep:1;
        unsigned int read_genericStep:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_instructionWithAlternatives:1;
        unsigned int read_listInstruction:1;
        unsigned int read_roadDescriptions:1;
        unsigned int read_roadName:1;
        unsigned int read_stopWaypoint:1;
        unsigned int read_updateID:1;
        unsigned int read_walkStep:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 156 = 0x9c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000753db9
+ (Class)roadDescriptionsType;	// IMP=0x0000000000751dcf
+ (Class)guidanceEventType;	// IMP=0x0000000000751795
+ (Class)instructionWithAlternativesType;	// IMP=0x00000000007513e1
- (void).cxx_destruct;	// IMP=0x0000000000756319
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000755d2a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000755533
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000754d53
- (void)copyTo:(id)arg1;	// IMP=0x00000000007548e7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000007548b6
- (void)writeTo:(id)arg1;	// IMP=0x00000000007540ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007540f0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000753b06
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000753af4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000752c92
- (id)jsonRepresentation;	// IMP=0x0000000000752c83
- (id)dictionaryRepresentation;	// IMP=0x0000000000752099
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasLegID;
@property(nonatomic) unsigned int legID;
@property(nonatomic) _Bool hasDistanceMeters;
@property(nonatomic) float distanceMeters;
@property(retain, nonatomic) GEOStopWaypoint *stopWaypoint;
@property(readonly, nonatomic) _Bool hasStopWaypoint;
- (id)roadDescriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000751d9e
- (unsigned long long)roadDescriptionsCount;	// IMP=0x0000000000751d72
- (void)addRoadDescriptions:(id)arg1;	// IMP=0x0000000000751cbb
- (void)clearRoadDescriptions;	// IMP=0x0000000000751c90
@property(retain, nonatomic) NSMutableArray *roadDescriptions;
@property(retain, nonatomic) GEOCompanionCyclingStep *cyclingStep;
@property(readonly, nonatomic) _Bool hasCyclingStep;
@property(retain, nonatomic) GEOCompanionGenericStep *genericStep;
@property(readonly, nonatomic) _Bool hasGenericStep;
@property(retain, nonatomic) NSData *updateID;
@property(readonly, nonatomic) _Bool hasUpdateID;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000751764
- (unsigned long long)guidanceEventsCount;	// IMP=0x0000000000751738
- (void)addGuidanceEvent:(id)arg1;	// IMP=0x0000000000751681
- (void)clearGuidanceEvents;	// IMP=0x0000000000751656
@property(retain, nonatomic) NSMutableArray *guidanceEvents;
@property(retain, nonatomic) NSString *listInstruction;
@property(readonly, nonatomic) _Bool hasListInstruction;
- (id)instructionWithAlternativesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007513b0
- (unsigned long long)instructionWithAlternativesCount;	// IMP=0x0000000000751384
- (void)addInstructionWithAlternatives:(id)arg1;	// IMP=0x00000000007512cd
- (void)clearInstructionWithAlternatives;	// IMP=0x00000000007512a2
@property(retain, nonatomic) NSMutableArray *instructionWithAlternatives;
@property(nonatomic) _Bool hasEndCoordinateIndex;
@property(nonatomic) unsigned int endCoordinateIndex;
@property(nonatomic) _Bool hasManeuverStartCoordinateIndex;
@property(nonatomic) unsigned int maneuverStartCoordinateIndex;
@property(nonatomic) _Bool hasStartCoordinateIndex;
@property(nonatomic) unsigned int startCoordinateIndex;
@property(retain, nonatomic) GEOCompanionFerryStep *ferryStep;
@property(readonly, nonatomic) _Bool hasFerryStep;
@property(retain, nonatomic) GEOCompanionWalkStep *walkStep;
@property(readonly, nonatomic) _Bool hasWalkStep;
@property(retain, nonatomic) GEOCompanionDriveStep *driveStep;
@property(readonly, nonatomic) _Bool hasDriveStep;
@property(retain, nonatomic) NSString *roadName;
@property(readonly, nonatomic) _Bool hasRoadName;
@property(nonatomic) _Bool hasTime;
@property(nonatomic) unsigned int time;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) unsigned int distance;
@property(nonatomic) _Bool hasStepID;
@property(nonatomic) unsigned int stepID;
- (id)initWithData:(id)arg1;	// IMP=0x000000000074f4a1
- (id)init;	// IMP=0x000000000074f445
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1;	// IMP=0x0000000000cb6305
- (id)geoStep;	// IMP=0x0000000000cbc2e8
- (id)maneuverStep;	// IMP=0x0000000000cbc230
- (id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3;	// IMP=0x0000000000cbb064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

