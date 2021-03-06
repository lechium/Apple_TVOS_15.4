//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCompanionTransitAlightMessage, GEOLatLng, GEOLocation, NSArray, NSData, PBDataReader;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _selectedRideIndexs;	// 16 = 0x10
    GEOCompanionTransitAlightMessage *_alightMessage;	// 40 = 0x28
    GEOLocation *_location;	// 48 = 0x30
    NSData *_routeID;	// 56 = 0x38
    GEOLatLng *_routeMatchCoordinate;	// 64 = 0x40
    double _timestamp;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    unsigned int _distanceRemainingOnRoute;	// 92 = 0x5c
    unsigned int _distanceToManeuver;	// 96 = 0x60
    unsigned int _distanceToRoute;	// 100 = 0x64
    int _feedbackType;	// 104 = 0x68
    int _hapticsType;	// 108 = 0x6c
    unsigned int _remainingTime;	// 112 = 0x70
    unsigned int _routeLocationIndex;	// 116 = 0x74
    float _routeLocationOffset;	// 120 = 0x78
    unsigned int _stepID;	// 124 = 0x7c
    _Bool _guidancePromptsEnabled;	// 128 = 0x80
    _Bool _isConnectedToCarplay;	// 129 = 0x81
    _Bool _lowGuidanceNavigation;	// 130 = 0x82
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_distanceRemainingOnRoute:1;
        unsigned int has_distanceToManeuver:1;
        unsigned int has_distanceToRoute:1;
        unsigned int has_feedbackType:1;
        unsigned int has_hapticsType:1;
        unsigned int has_remainingTime:1;
        unsigned int has_routeLocationIndex:1;
        unsigned int has_routeLocationOffset:1;
        unsigned int has_stepID:1;
        unsigned int has_guidancePromptsEnabled:1;
        unsigned int has_isConnectedToCarplay:1;
        unsigned int has_lowGuidanceNavigation:1;
        unsigned int read_selectedRideIndexs:1;
        unsigned int read_alightMessage:1;
        unsigned int read_location:1;
        unsigned int read_routeID:1;
        unsigned int read_routeMatchCoordinate:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000074b10a
- (void).cxx_destruct;	// IMP=0x000000000074d4af
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000074d19e
- (unsigned long long)hash;	// IMP=0x000000000074cd2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000074c930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074c55a
- (void)copyTo:(id)arg1;	// IMP=0x000000000074c237
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000074c1c9
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000074c067
- (void)writeTo:(id)arg1;	// IMP=0x000000000074bba7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000074bb98
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000074acb0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000074ac9e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000749903
- (id)jsonRepresentation;	// IMP=0x00000000007498f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000748cee
- (id)description;	// IMP=0x0000000000748c3f
@property(retain, nonatomic) GEOCompanionTransitAlightMessage *alightMessage;
@property(readonly, nonatomic) _Bool hasAlightMessage;
@property(nonatomic) _Bool hasIsConnectedToCarplay;
@property(nonatomic) _Bool isConnectedToCarplay;
- (int)StringAsHapticsType:(id)arg1;	// IMP=0x00000000007482a8
- (id)hapticsTypeAsString:(int)arg1;	// IMP=0x0000000000747e62
@property(nonatomic) _Bool hasHapticsType;
@property(nonatomic) int hapticsType;
@property(nonatomic) _Bool hasLowGuidanceNavigation;
@property(nonatomic) _Bool lowGuidanceNavigation;
- (void)setSelectedRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000747d61
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000747c8b
- (void)addSelectedRideIndex:(unsigned int)arg1;	// IMP=0x0000000000747c4f
- (void)clearSelectedRideIndexs;	// IMP=0x0000000000747c30
@property(readonly, nonatomic) unsigned int *selectedRideIndexs;
@property(readonly, nonatomic) unsigned long long selectedRideIndexsCount;
@property(nonatomic) _Bool hasGuidancePromptsEnabled;
@property(nonatomic) _Bool guidancePromptsEnabled;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(retain, nonatomic) GEOLatLng *routeMatchCoordinate;
@property(readonly, nonatomic) _Bool hasRouteMatchCoordinate;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool hasRouteLocationOffset;
@property(nonatomic) float routeLocationOffset;
@property(nonatomic) _Bool hasRouteLocationIndex;
@property(nonatomic) unsigned int routeLocationIndex;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasRemainingTime;
@property(nonatomic) unsigned int remainingTime;
@property(nonatomic) _Bool hasDistanceRemainingOnRoute;
@property(nonatomic) unsigned int distanceRemainingOnRoute;
@property(nonatomic) _Bool hasDistanceToRoute;
@property(nonatomic) unsigned int distanceToRoute;
@property(nonatomic) _Bool hasDistanceToManeuver;
@property(nonatomic) unsigned int distanceToManeuver;
@property(nonatomic) _Bool hasStepID;
@property(nonatomic) unsigned int stepID;
- (int)StringAsFeedbackType:(id)arg1;	// IMP=0x0000000000745f10
- (id)feedbackTypeAsString:(int)arg1;	// IMP=0x0000000000745e35
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType;
- (void)dealloc;	// IMP=0x0000000000745d80
- (id)initWithData:(id)arg1;	// IMP=0x0000000000745d24
- (id)init;	// IMP=0x0000000000745cc8
@property(readonly, nonatomic) NSArray *selectedRideIndices;
@property(readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property(readonly, nonatomic) _Bool hasEffectiveDistanceToManeuver;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;	// IMP=0x0000000000cbaa9a
@property(readonly, nonatomic) unsigned int effectiveStepID;
@property(readonly, nonatomic) _Bool hasEffectiveStepID;
@property(readonly, nonatomic) _Bool isRecalculating;
@property(readonly, nonatomic) _Bool isNavigating;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(_Bool)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;	// IMP=0x0000000000cba7fe
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;	// IMP=0x0000000000cba663
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;	// IMP=0x0000000000cba5bd
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;	// IMP=0x0000000000cba46f
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;	// IMP=0x0000000000cba340
- (id)initWithRouteID:(id)arg1;	// IMP=0x0000000000cba2c1

@end

