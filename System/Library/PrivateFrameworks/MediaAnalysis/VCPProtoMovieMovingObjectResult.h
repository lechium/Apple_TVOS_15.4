//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>
#import <MediaAnalysis/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieMovingObjectResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    NSMutableArray *_bounds;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (Class)boundsType;	// IMP=0x00000000001dccc0
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001dd939
- (void).cxx_destruct;	// IMP=0x00000000001dd908
@property(retain, nonatomic) NSMutableArray *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001dd72d
- (unsigned long long)hash;	// IMP=0x00000000001dd6e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001dd618
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001dd43f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001dd363
- (void)writeTo:(id)arg1;	// IMP=0x00000000001dd21b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001dd20e
- (id)dictionaryRepresentation;	// IMP=0x00000000001dcd80
- (id)description;	// IMP=0x00000000001dccd1
- (id)boundsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001dcca3
- (unsigned long long)boundsCount;	// IMP=0x00000000001dcc86
- (void)addBounds:(id)arg1;	// IMP=0x00000000001dcc1c
- (void)clearBounds;	// IMP=0x00000000001dcbff
- (id)exportToLegacyDictionary;	// IMP=0x00000000001ddd06

@end

