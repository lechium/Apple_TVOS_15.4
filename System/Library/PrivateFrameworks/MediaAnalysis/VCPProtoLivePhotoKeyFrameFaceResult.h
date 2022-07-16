//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoBounds *_faceBounds;	// 8 = 0x8
    float _faceQuality;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x000000000002e8f0
- (void).cxx_destruct;	// IMP=0x00000000000362a7
@property(nonatomic) float faceQuality; // @synthesize faceQuality=_faceQuality;
@property(retain, nonatomic) VCPProtoBounds *faceBounds; // @synthesize faceBounds=_faceBounds;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000361f2
- (unsigned long long)hash;	// IMP=0x00000000000360db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003602c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035fa2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000035f44
- (void)writeTo:(id)arg1;	// IMP=0x0000000000035ee3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000035ed6
- (id)dictionaryRepresentation;	// IMP=0x0000000000035bd9
- (id)description;	// IMP=0x0000000000035b2a
- (id)exportToLegacyDictionary;	// IMP=0x000000000002ea9c

@end

