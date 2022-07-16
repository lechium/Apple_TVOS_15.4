//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPStreamingAssetIdentifier, CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetRequest, CKDPStreamingAssetSaveAssetResponse;

@interface CKDPStreamingAsset : PBCodable <NSCopying>
{
    CKDPStreamingAssetIdentifier *_assetId;	// 8 = 0x8
    CKDPStreamingAssetRetrieveAssetResponse *_retrieveAssetResponse;	// 16 = 0x10
    CKDPStreamingAssetSaveAssetRequest *_saveAssetRequest;	// 24 = 0x18
    CKDPStreamingAssetSaveAssetResponse *_saveAssetResponse;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000100e3c
@property(retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse; // @synthesize retrieveAssetResponse=_retrieveAssetResponse;
@property(retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse; // @synthesize saveAssetResponse=_saveAssetResponse;
@property(retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest; // @synthesize saveAssetRequest=_saveAssetRequest;
@property(retain, nonatomic) CKDPStreamingAssetIdentifier *assetId; // @synthesize assetId=_assetId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000100ca9
- (unsigned long long)hash;	// IMP=0x0000000000100c25
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000100af9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000100a0f
- (void)copyTo:(id)arg1;	// IMP=0x000000000010096c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001008d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001008c8
- (id)dictionaryRepresentation;	// IMP=0x00000000001004ab
- (id)description;	// IMP=0x00000000001003fc
@property(readonly, nonatomic) _Bool hasRetrieveAssetResponse;
@property(readonly, nonatomic) _Bool hasSaveAssetResponse;
@property(readonly, nonatomic) _Bool hasSaveAssetRequest;
@property(readonly, nonatomic) _Bool hasAssetId;

@end

