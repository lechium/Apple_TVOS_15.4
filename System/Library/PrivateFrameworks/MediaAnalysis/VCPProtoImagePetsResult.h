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
@interface VCPProtoImagePetsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001ad19d
- (void).cxx_destruct;	// IMP=0x00000000001ad18a
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ad0d5
- (unsigned long long)hash;	// IMP=0x00000000001acfc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001acf12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ace88
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ace54
- (void)writeTo:(id)arg1;	// IMP=0x00000000001acdee
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001acde1
- (id)dictionaryRepresentation;	// IMP=0x00000000001acaee
- (id)description;	// IMP=0x00000000001aca3f
- (id)exportToLegacyDictionary;	// IMP=0x00000000001ad349

@end

