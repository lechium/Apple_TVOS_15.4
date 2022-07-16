//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _sharpness;	// 8 = 0x8
    float _stillTime;	// 12 = 0xc
    float _textureness;	// 16 = 0x10
    _Bool _hasFlash;	// 20 = 0x14
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x000000000013f9e7
@property(nonatomic) float stillTime; // @synthesize stillTime=_stillTime;
@property(nonatomic) _Bool hasFlash; // @synthesize hasFlash=_hasFlash;
@property(nonatomic) float textureness; // @synthesize textureness=_textureness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006525f
- (unsigned long long)hash;	// IMP=0x0000000000064f81
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064eba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064e36
- (void)copyTo:(id)arg1;	// IMP=0x0000000000064df0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000064d55
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000064d48
- (id)dictionaryRepresentation;	// IMP=0x00000000000648ef
- (id)description;	// IMP=0x0000000000064840
- (id)exportToLegacyDictionary;	// IMP=0x000000000013fc48

@end
