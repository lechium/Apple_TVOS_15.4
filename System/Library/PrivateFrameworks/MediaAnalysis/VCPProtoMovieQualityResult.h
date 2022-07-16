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
@interface VCPProtoMovieQualityResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001f8eb6
- (void).cxx_destruct;	// IMP=0x00000000001f8ea3
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f8dee
- (unsigned long long)hash;	// IMP=0x00000000001f8cd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f8c28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f8b9e
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f8b40
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f8adf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f8ad2
- (id)dictionaryRepresentation;	// IMP=0x00000000001f87d5
- (id)description;	// IMP=0x00000000001f8726
- (id)exportToLegacyDictionary;	// IMP=0x00000000001f9019

@end
