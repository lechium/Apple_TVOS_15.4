//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSummaryResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _curationScore;	// 8 = 0x8
    VCPProtoVideoKeyFrame *_keyFrame;	// 16 = 0x10
    VCPProtoBounds *_playbackCrop;	// 24 = 0x18
    VCPProtoTimeRange *_timeRange;	// 32 = 0x20
    _Bool _autoPlayable;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000002023c4
- (void).cxx_destruct;	// IMP=0x00000000001ff1ab
@property(retain, nonatomic) VCPProtoBounds *playbackCrop; // @synthesize playbackCrop=_playbackCrop;
@property(nonatomic) _Bool autoPlayable; // @synthesize autoPlayable=_autoPlayable;
@property(retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ff010
- (unsigned long long)hash;	// IMP=0x00000000001fee9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fed71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fec8d
- (void)copyTo:(id)arg1;	// IMP=0x00000000001febef
- (void)writeTo:(id)arg1;	// IMP=0x00000000001feb49
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001feb3c
- (id)dictionaryRepresentation;	// IMP=0x00000000001fe639
- (id)description;	// IMP=0x00000000001fe58a
@property(readonly, nonatomic) _Bool hasPlaybackCrop;
@property(readonly, nonatomic) _Bool hasKeyFrame;
- (id)exportToLegacyDictionary;	// IMP=0x000000000020280d

@end
