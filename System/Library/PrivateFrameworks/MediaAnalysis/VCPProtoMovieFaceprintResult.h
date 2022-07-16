//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFaceprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    unsigned int _faceID;	// 8 = 0x8
    NSData *_faceprintBlob;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001c698c
- (void).cxx_destruct;	// IMP=0x00000000001c63ba
@property(retain, nonatomic) NSData *faceprintBlob; // @synthesize faceprintBlob=_faceprintBlob;
@property(nonatomic) unsigned int faceID; // @synthesize faceID=_faceID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c6344
- (unsigned long long)hash;	// IMP=0x00000000001c6309
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c625f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c61d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c61a9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c614a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c613d
- (id)dictionaryRepresentation;	// IMP=0x00000000001c5e7d
- (id)description;	// IMP=0x00000000001c5dce
- (id)exportToLegacyDictionary;	// IMP=0x00000000001c6abe

@end

