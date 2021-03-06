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
@interface VCPProtoMovieCameraMotionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    int _motionType;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
    _Bool _isFast;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001bf7ec
- (void).cxx_destruct;	// IMP=0x00000000001bf7d9
@property(nonatomic) _Bool isFast; // @synthesize isFast=_isFast;
@property(nonatomic) int motionType; // @synthesize motionType=_motionType;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bf6fe
- (unsigned long long)hash;	// IMP=0x00000000001bf6ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bf5e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bf554
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bf4ec
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bf474
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bf467
- (id)dictionaryRepresentation;	// IMP=0x00000000001bf055
- (id)description;	// IMP=0x00000000001befa6
- (id)exportToLegacyDictionary;	// IMP=0x00000000001bfae9

@end

