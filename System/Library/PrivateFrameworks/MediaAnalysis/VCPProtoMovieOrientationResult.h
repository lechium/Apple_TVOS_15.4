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
@interface VCPProtoMovieOrientationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    int _orientation;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001f78f8
- (void).cxx_destruct;	// IMP=0x00000000001f78e5
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f7838
- (unsigned long long)hash;	// IMP=0x00000000001f77f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f7751
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f76cb
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f7671
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f7612
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f7605
- (id)dictionaryRepresentation;	// IMP=0x00000000001f72cd
- (id)description;	// IMP=0x00000000001f721e
- (id)exportToLegacyDictionary;	// IMP=0x00000000001f7a9a

@end

