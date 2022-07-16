//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFeatureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    NSData *_featureBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001c86b2
- (void).cxx_destruct;	// IMP=0x00000000001c866f
@property(retain, nonatomic) NSData *featureBlob; // @synthesize featureBlob=_featureBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c85ab
- (unsigned long long)hash;	// IMP=0x00000000001c855e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c8496
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c83f8
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c8387
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c8328
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c831b
- (id)dictionaryRepresentation;	// IMP=0x00000000001c807e
- (id)description;	// IMP=0x00000000001c7fcf
- (id)exportToLegacyDictionary;	// IMP=0x00000000001c8868

@end
