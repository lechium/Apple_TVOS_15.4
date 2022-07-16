//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLMemoryAssetList : PBCodable <NSCopying>
{
    NSMutableArray *_assets;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

+ (Class)assetType;	// IMP=0x0000000000138d38
- (void).cxx_destruct;	// IMP=0x0000000000138adf
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000138935
- (unsigned long long)hash;	// IMP=0x00000000001388e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000138822
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000138630
- (void)copyTo:(id)arg1;	// IMP=0x000000000013854b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001383e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001383d7
- (id)dictionaryRepresentation;	// IMP=0x000000000013813e
- (id)description;	// IMP=0x000000000013808f
@property(nonatomic) _Bool hasVersion;
- (id)assetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013802d
- (unsigned long long)assetsCount;	// IMP=0x0000000000138010
- (void)addAsset:(id)arg1;	// IMP=0x0000000000137fa6
- (void)clearAssets;	// IMP=0x0000000000137f89

@end
