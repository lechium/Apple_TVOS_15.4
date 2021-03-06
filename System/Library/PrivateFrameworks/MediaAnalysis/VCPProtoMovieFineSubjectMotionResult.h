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
@interface VCPProtoMovieFineSubjectMotionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _actionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001c91aa
- (void).cxx_destruct;	// IMP=0x00000000001c9197
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c90e2
- (unsigned long long)hash;	// IMP=0x00000000001c8fcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c8f1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c8e92
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c8e34
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c8dd3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c8dc6
- (id)dictionaryRepresentation;	// IMP=0x00000000001c8ac9
- (id)description;	// IMP=0x00000000001c8a1a
- (id)exportToLegacyDictionary;	// IMP=0x00000000001c930d

@end

