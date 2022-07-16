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
@interface VCPProtoMovieObstructionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _obstructionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001ef4a2
- (void).cxx_destruct;	// IMP=0x00000000001df186
@property(nonatomic) float obstructionScore; // @synthesize obstructionScore=_obstructionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001df0d1
- (unsigned long long)hash;	// IMP=0x00000000001defba
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001def0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001dee81
- (void)copyTo:(id)arg1;	// IMP=0x00000000001dee23
- (void)writeTo:(id)arg1;	// IMP=0x00000000001dedc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001dedb5
- (id)dictionaryRepresentation;	// IMP=0x00000000001deab8
- (id)description;	// IMP=0x00000000001dea09
- (id)exportToLegacyDictionary;	// IMP=0x00000000001ef605

@end

