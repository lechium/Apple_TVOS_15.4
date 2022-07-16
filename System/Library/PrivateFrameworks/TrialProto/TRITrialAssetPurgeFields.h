//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@interface TRITrialAssetPurgeFields : PBCodable <NSCopying>
{
    int _purgeabilityLevel;	// 8 = 0x8
    struct {
        unsigned int purgeabilityLevel:1;
    } _has;	// 12 = 0xc
}

+ (int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:(int)arg1;	// IMP=0x000000000004c300
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000024790
- (unsigned long long)hash;	// IMP=0x0000000000024765
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000246d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024671
- (void)copyTo:(id)arg1;	// IMP=0x000000000002464d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000024622
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000024615
- (id)dictionaryRepresentation;	// IMP=0x0000000000024342
- (id)description;	// IMP=0x0000000000024293
- (int)StringAsPurgeabilityLevel:(id)arg1;	// IMP=0x00000000000241c8
- (id)purgeabilityLevelAsString:(int)arg1;	// IMP=0x000000000002413c
@property(nonatomic) _Bool hasPurgeabilityLevel;
@property(nonatomic) int purgeabilityLevel; // @synthesize purgeabilityLevel=_purgeabilityLevel;

@end

