//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying>
{
    CKDPRequestedFields *_assetFields;	// 8 = 0x8
    _Bool _allAssets;	// 16 = 0x10
    struct {
        unsigned int allAssets:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000002a6a87
@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
@property(nonatomic) _Bool allAssets; // @synthesize allAssets=_allAssets;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a69d8
- (unsigned long long)hash;	// IMP=0x00000000002a698b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a68bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a682b
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a67c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a6763
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a6756
- (id)dictionaryRepresentation;	// IMP=0x00000000002a6412
- (id)description;	// IMP=0x00000000002a6363
@property(readonly, nonatomic) _Bool hasAssetFields;
@property(nonatomic) _Bool hasAllAssets;

@end

