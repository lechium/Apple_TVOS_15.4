//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_alightNotificationFeedbacks;	// 16 = 0x10
    NSData *_directionResponseID;	// 24 = 0x18
    NSMutableArray *_guidanceFeedbacks;	// 32 = 0x20
    NSMutableArray *_modalitys;	// 40 = 0x28
    NSMutableArray *_stepFeedbacks;	// 48 = 0x30
    NSMutableArray *_trafficRerouteFeedbacks;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    _Bool _isCarplayConnected;	// 76 = 0x4c
    struct {
        unsigned int has_isCarplayConnected:1;
        unsigned int read_alightNotificationFeedbacks:1;
        unsigned int read_directionResponseID:1;
        unsigned int read_guidanceFeedbacks:1;
        unsigned int read_modalitys:1;
        unsigned int read_stepFeedbacks:1;
        unsigned int read_trafficRerouteFeedbacks:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c26018
+ (Class)modalityType;	// IMP=0x0000000000c23d03
+ (Class)guidanceFeedbackType;	// IMP=0x0000000000c23a9e
+ (Class)alightNotificationFeedbackType;	// IMP=0x0000000000c23839
+ (Class)trafficRerouteFeedbackType;	// IMP=0x0000000000c235d4
+ (Class)stepFeedbackType;	// IMP=0x0000000000c2336f
- (void).cxx_destruct;	// IMP=0x0000000000c29388
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c28e1d
- (unsigned long long)hash;	// IMP=0x0000000000c28d26
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c28b2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c2834b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c27f93
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000c27e42
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c2755f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c27550
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c25439
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c25427
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c2495b
- (id)jsonRepresentation;	// IMP=0x0000000000c2494c
- (id)dictionaryRepresentation;	// IMP=0x0000000000c23e1b
- (id)description;	// IMP=0x0000000000c23d6c
@property(nonatomic) _Bool hasIsCarplayConnected;
@property(nonatomic) _Bool isCarplayConnected;
- (id)modalityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c23cd2
- (unsigned long long)modalitysCount;	// IMP=0x0000000000c23ca6
- (void)addModality:(id)arg1;	// IMP=0x0000000000c23bf2
- (void)clearModalitys;	// IMP=0x0000000000c23bca
@property(retain, nonatomic) NSMutableArray *modalitys;
- (id)guidanceFeedbackAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c23a6d
- (unsigned long long)guidanceFeedbacksCount;	// IMP=0x0000000000c23a41
- (void)addGuidanceFeedback:(id)arg1;	// IMP=0x0000000000c2398d
- (void)clearGuidanceFeedbacks;	// IMP=0x0000000000c23965
@property(retain, nonatomic) NSMutableArray *guidanceFeedbacks;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c23808
- (unsigned long long)alightNotificationFeedbacksCount;	// IMP=0x0000000000c237dc
- (void)addAlightNotificationFeedback:(id)arg1;	// IMP=0x0000000000c23728
- (void)clearAlightNotificationFeedbacks;	// IMP=0x0000000000c23700
@property(retain, nonatomic) NSMutableArray *alightNotificationFeedbacks;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c235a3
- (unsigned long long)trafficRerouteFeedbacksCount;	// IMP=0x0000000000c23577
- (void)addTrafficRerouteFeedback:(id)arg1;	// IMP=0x0000000000c234c3
- (void)clearTrafficRerouteFeedbacks;	// IMP=0x0000000000c2349b
@property(retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks;
- (id)stepFeedbackAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c2333e
- (unsigned long long)stepFeedbacksCount;	// IMP=0x0000000000c23312
- (void)addStepFeedback:(id)arg1;	// IMP=0x0000000000c2325e
- (void)clearStepFeedbacks;	// IMP=0x0000000000c23236
@property(retain, nonatomic) NSMutableArray *stepFeedbacks;
@property(retain, nonatomic) NSData *directionResponseID;
@property(readonly, nonatomic) _Bool hasDirectionResponseID;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c2219e
- (id)init;	// IMP=0x0000000000c22142

@end
