//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _excludeGuidance;	// 16 = 0x10
    _Bool _includeSnapScoreMetadataDebug;	// 17 = 0x11
    _Bool _includeSummaryForPredictedDestination;	// 18 = 0x12
    _Bool _includeTravelTimeAggressive;	// 19 = 0x13
    _Bool _includeTravelTimeConservative;	// 20 = 0x14
    _Bool _includeTravelTimeEstimate;	// 21 = 0x15
    _Bool _supportsArMode;	// 22 = 0x16
    struct {
        unsigned int has_excludeGuidance:1;
        unsigned int has_includeSnapScoreMetadataDebug:1;
        unsigned int has_includeSummaryForPredictedDestination:1;
        unsigned int has_includeTravelTimeAggressive:1;
        unsigned int has_includeTravelTimeConservative:1;
        unsigned int has_includeTravelTimeEstimate:1;
        unsigned int has_supportsArMode:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000084a19a
- (void).cxx_destruct;	// IMP=0x000000000084ad1d
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000084acd7
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000084abc9
- (unsigned long long)hash;	// IMP=0x000000000084aada
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000084a8d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000084a7b2
- (void)copyTo:(id)arg1;	// IMP=0x000000000084a6b9
- (void)writeTo:(id)arg1;	// IMP=0x000000000084a58b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000084a57c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000849b6c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000849b5a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000849789
- (id)jsonRepresentation;	// IMP=0x0000000000849677
- (id)dictionaryRepresentation;	// IMP=0x0000000000849241
- (id)description;	// IMP=0x0000000000849192
@property(nonatomic) _Bool hasSupportsArMode;
@property(nonatomic) _Bool supportsArMode;
@property(nonatomic) _Bool hasIncludeSnapScoreMetadataDebug;
@property(nonatomic) _Bool includeSnapScoreMetadataDebug;
@property(nonatomic) _Bool hasIncludeSummaryForPredictedDestination;
@property(nonatomic) _Bool includeSummaryForPredictedDestination;
@property(nonatomic) _Bool hasExcludeGuidance;
@property(nonatomic) _Bool excludeGuidance;
@property(nonatomic) _Bool hasIncludeTravelTimeConservative;
@property(nonatomic) _Bool includeTravelTimeConservative;
@property(nonatomic) _Bool hasIncludeTravelTimeEstimate;
@property(nonatomic) _Bool includeTravelTimeEstimate;
@property(nonatomic) _Bool hasIncludeTravelTimeAggressive;
@property(nonatomic) _Bool includeTravelTimeAggressive;

@end

