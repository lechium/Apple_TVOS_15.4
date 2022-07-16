//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoRecommendationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001b92e5
- (void).cxx_destruct;	// IMP=0x00000000001b902a
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b8f75
- (unsigned long long)hash;	// IMP=0x00000000001b8e5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b8daf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8d25
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b8cc7
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b8c66
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b8c59
- (id)dictionaryRepresentation;	// IMP=0x00000000001b895c
- (id)description;	// IMP=0x00000000001b88ad
- (id)exportToLegacyDictionary;	// IMP=0x00000000001b9448

@end

