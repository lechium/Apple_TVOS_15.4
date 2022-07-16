//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying>
{
    NSMutableArray *_predictedDestinations;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    unsigned int _duration;	// 24 = 0x18
    int _endReason;	// 28 = 0x1c
    unsigned int _numberOfAlertingResponses;	// 32 = 0x20
    unsigned int _numberOfDoomRoutingRequests;	// 36 = 0x24
    unsigned int _predictedExitTime;	// 40 = 0x28
    struct {
        unsigned int has_startTime:1;
        unsigned int has_duration:1;
        unsigned int has_endReason:1;
        unsigned int has_numberOfAlertingResponses:1;
        unsigned int has_numberOfDoomRoutingRequests:1;
        unsigned int has_predictedExitTime:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013290cc
+ (Class)predictedDestinationType;	// IMP=0x0000000001327feb
- (void).cxx_destruct;	// IMP=0x0000000001329f7c
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001329d3d
- (unsigned long long)hash;	// IMP=0x0000000001329b34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001329969
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013296cd
- (void)copyTo:(id)arg1;	// IMP=0x0000000001329547
- (void)writeTo:(id)arg1;	// IMP=0x000000000132933b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000132932c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001328ceb
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001328cd9
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013286d5
- (id)jsonRepresentation;	// IMP=0x00000000013286c6
- (id)dictionaryRepresentation;	// IMP=0x0000000001328161
- (id)description;	// IMP=0x00000000013280b2
@property(nonatomic) _Bool hasNumberOfAlertingResponses;
@property(nonatomic) unsigned int numberOfAlertingResponses;
@property(nonatomic) _Bool hasNumberOfDoomRoutingRequests;
@property(nonatomic) unsigned int numberOfDoomRoutingRequests;
- (id)predictedDestinationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001327fce
- (unsigned long long)predictedDestinationsCount;	// IMP=0x0000000001327fb1
- (void)addPredictedDestination:(id)arg1;	// IMP=0x0000000001327f47
- (void)clearPredictedDestinations;	// IMP=0x0000000001327f2a
@property(retain, nonatomic) NSMutableArray *predictedDestinations;
- (int)StringAsEndReason:(id)arg1;	// IMP=0x0000000001327e6f
- (id)endReasonAsString:(int)arg1;	// IMP=0x0000000001327e09
@property(nonatomic) _Bool hasEndReason;
@property(nonatomic) int endReason;
@property(nonatomic) _Bool hasPredictedExitTime;
@property(nonatomic) unsigned int predictedExitTime;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) unsigned int duration;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) double startTime;

@end

