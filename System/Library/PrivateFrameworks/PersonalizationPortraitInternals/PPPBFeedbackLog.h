//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable <NSCopying>
{
    NSString *_assetVersion;	// 8 = 0x8
    NSMutableArray *_experimentalGroups;	// 16 = 0x10
    NSMutableArray *_extractedDonations;	// 24 = 0x18
    PPPBFeedbackMetadata *_feedbackMetadata;	// 32 = 0x20
    NSString *_homeLocationGeohash;	// 40 = 0x28
    int _predictionType;	// 48 = 0x30
    NSMutableArray *_scoredItems;	// 56 = 0x38
    struct {
        unsigned int predictionType:1;
    } _has;	// 64 = 0x40
}

+ (Class)experimentalGroupsType;	// IMP=0x0000000000066092
+ (Class)extractedDonationsType;	// IMP=0x0000000000066081
+ (Class)scoredItemsType;	// IMP=0x0000000000066070
- (void).cxx_destruct;	// IMP=0x0000000000065c37
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(retain, nonatomic) NSString *homeLocationGeohash; // @synthesize homeLocationGeohash=_homeLocationGeohash;
@property(retain, nonatomic) NSMutableArray *experimentalGroups; // @synthesize experimentalGroups=_experimentalGroups;
@property(retain, nonatomic) NSMutableArray *extractedDonations; // @synthesize extractedDonations=_extractedDonations;
@property(retain, nonatomic) NSMutableArray *scoredItems; // @synthesize scoredItems=_scoredItems;
@property(retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata; // @synthesize feedbackMetadata=_feedbackMetadata;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000065786
- (unsigned long long)hash;	// IMP=0x00000000000656a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000654d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000065013
- (void)copyTo:(id)arg1;	// IMP=0x0000000000064d9c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000064a34
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000064a27
- (id)dictionaryRepresentation;	// IMP=0x0000000000064365
- (id)description;	// IMP=0x00000000000642b6
@property(readonly, nonatomic) _Bool hasAssetVersion;
@property(readonly, nonatomic) _Bool hasHomeLocationGeohash;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006426f
- (unsigned long long)experimentalGroupsCount;	// IMP=0x0000000000064252
- (void)addExperimentalGroups:(id)arg1;	// IMP=0x00000000000641e8
- (void)clearExperimentalGroups;	// IMP=0x00000000000641cb
- (id)extractedDonationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000641ae
- (unsigned long long)extractedDonationsCount;	// IMP=0x0000000000064191
- (void)addExtractedDonations:(id)arg1;	// IMP=0x0000000000064127
- (void)clearExtractedDonations;	// IMP=0x000000000006410a
- (id)scoredItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000640ed
- (unsigned long long)scoredItemsCount;	// IMP=0x00000000000640d0
- (void)addScoredItems:(id)arg1;	// IMP=0x0000000000064066
- (void)clearScoredItems;	// IMP=0x0000000000064049
@property(nonatomic) _Bool hasPredictionType;
@property(nonatomic) int predictionType; // @synthesize predictionType=_predictionType;
@property(readonly, nonatomic) _Bool hasFeedbackMetadata;

@end

