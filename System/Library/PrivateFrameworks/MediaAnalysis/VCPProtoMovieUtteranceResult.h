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
@interface VCPProtoMovieUtteranceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoTimeRange *_timeRange;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0000000000203458
- (void).cxx_destruct;	// IMP=0x0000000000203148
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002030c9
- (unsigned long long)hash;	// IMP=0x00000000002030ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000203012
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000202f9a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000202f77
- (void)writeTo:(id)arg1;	// IMP=0x0000000000202f5a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000202f4d
- (id)dictionaryRepresentation;	// IMP=0x0000000000202d09
- (id)description;	// IMP=0x0000000000202c5a
- (id)exportToLegacyDictionary;	// IMP=0x000000000020352a

@end
