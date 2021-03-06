//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSString;

@interface HMUserActionPredictionDuetPredictionValue : PBCodable <NSCopying>
{
    double _score;	// 8 = 0x8
    NSString *_homeIdentifier;	// 16 = 0x10
    int _predictionType;	// 24 = 0x18
    NSString *_targetAccessoryServiceIdentifier;	// 32 = 0x20
    NSString *_targetIdentifier;	// 40 = 0x28
    struct {
        unsigned int score:1;
        unsigned int predictionType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000266608
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *targetAccessoryServiceIdentifier; // @synthesize targetAccessoryServiceIdentifier=_targetAccessoryServiceIdentifier;
@property(retain, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(retain, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002664c3
- (unsigned long long)hash;	// IMP=0x000000000026631a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002661c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002660c0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000265ffc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000265f32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000265f25
- (id)dictionaryRepresentation;	// IMP=0x0000000000265d86
- (id)description;	// IMP=0x0000000000265cd7
- (int)StringAsPredictionType:(id)arg1;	// IMP=0x0000000000265c45
- (id)predictionTypeAsString:(int)arg1;	// IMP=0x0000000000265bdf
@property(nonatomic) _Bool hasPredictionType;
@property(nonatomic) int predictionType; // @synthesize predictionType=_predictionType;
@property(nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasTargetAccessoryServiceIdentifier;
@property(readonly, nonatomic) _Bool hasTargetIdentifier;
@property(readonly, nonatomic) _Bool hasHomeIdentifier;

@end

