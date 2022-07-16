//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSMutableArray, NSString, VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    NSMutableArray *_classifications;	// 16 = 0x10
    NSString *_faceId;	// 24 = 0x18
    VCPProtoTimeRange *_timeRange;	// 32 = 0x20
}

+ (Class)classificationType;	// IMP=0x0000000000173255
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000000279a2
- (void).cxx_destruct;	// IMP=0x0000000000174212
@property(retain, nonatomic) NSString *faceId; // @synthesize faceId=_faceId;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000173f76
- (unsigned long long)hash;	// IMP=0x0000000000173ef2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000173dc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000173b83
- (void)copyTo:(id)arg1;	// IMP=0x0000000000173a69
- (void)writeTo:(id)arg1;	// IMP=0x00000000001738d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001738cc
- (id)dictionaryRepresentation;	// IMP=0x000000000017332a
- (id)description;	// IMP=0x000000000017327b
@property(readonly, nonatomic) _Bool hasFaceId;
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000173238
- (unsigned long long)classificationsCount;	// IMP=0x000000000017321b
- (void)addClassification:(id)arg1;	// IMP=0x00000000001731b1
- (void)clearClassifications;	// IMP=0x0000000000173194
- (id)exportToLegacyDictionary;	// IMP=0x0000000000027d95

@end
