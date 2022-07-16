//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _faceSharpness;	// 8 = 0x8
    float _sharpness;	// 12 = 0xc
    struct {
        unsigned int faceSharpness:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001a623e
@property(nonatomic) float faceSharpness; // @synthesize faceSharpness=_faceSharpness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a61cf
- (unsigned long long)hash;	// IMP=0x00000000001a5fdb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a5f2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a5eb8
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a5e7f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a5e1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a5e10
- (id)dictionaryRepresentation;	// IMP=0x00000000001a5b12
- (id)description;	// IMP=0x00000000001a5a63
@property(nonatomic) _Bool hasFaceSharpness;
- (id)exportToLegacyDictionary;	// IMP=0x00000000001a6391

@end
