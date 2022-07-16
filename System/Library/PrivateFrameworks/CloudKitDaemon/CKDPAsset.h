//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPRecordIdentifier, CKDPReservedVoucher, NSData, NSString;

@interface CKDPAsset : PBCodable <NSCopying>
{
    long long _constructedAssetDownloadEstimatedSize;	// 8 = 0x8
    long long _constructedAssetDownloadURLExpiration;	// 16 = 0x10
    long long _downloadTokenExpiration;	// 24 = 0x18
    long long _downloadURLExpiration;	// 32 = 0x20
    long long _size;	// 40 = 0x28
    NSString *_assetAuthorizationResponseUUID;	// 48 = 0x30
    NSData *_clearAssetKey;	// 56 = 0x38
    NSData *_constructedAssetDownloadParameters;	// 64 = 0x40
    NSString *_constructedAssetDownloadURL;	// 72 = 0x48
    NSString *_contentBaseURL;	// 80 = 0x50
    NSString *_downloadBaseURL;	// 88 = 0x58
    NSData *_downloadRequest;	// 96 = 0x60
    NSString *_downloadToken;	// 104 = 0x68
    NSString *_owner;	// 112 = 0x70
    CKDPProtectionInfo *_protectionInfo;	// 120 = 0x78
    CKDPRecordIdentifier *_recordId;	// 128 = 0x80
    NSData *_referenceSignature;	// 136 = 0x88
    NSString *_requestor;	// 144 = 0x90
    CKDPReservedVoucher *_reservedVoucher;	// 152 = 0x98
    NSData *_signature;	// 160 = 0xa0
    NSString *_uploadReceipt;	// 168 = 0xa8
    struct {
        unsigned int constructedAssetDownloadEstimatedSize:1;
        unsigned int constructedAssetDownloadURLExpiration:1;
        unsigned int downloadTokenExpiration:1;
        unsigned int downloadURLExpiration:1;
        unsigned int size:1;
    } _has;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000002308f1
@property(retain, nonatomic) CKDPReservedVoucher *reservedVoucher; // @synthesize reservedVoucher=_reservedVoucher;
@property(retain, nonatomic) NSData *constructedAssetDownloadParameters; // @synthesize constructedAssetDownloadParameters=_constructedAssetDownloadParameters;
@property(nonatomic) long long constructedAssetDownloadEstimatedSize; // @synthesize constructedAssetDownloadEstimatedSize=_constructedAssetDownloadEstimatedSize;
@property(nonatomic) long long constructedAssetDownloadURLExpiration; // @synthesize constructedAssetDownloadURLExpiration=_constructedAssetDownloadURLExpiration;
@property(retain, nonatomic) NSString *constructedAssetDownloadURL; // @synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL;
@property(retain, nonatomic) NSString *assetAuthorizationResponseUUID; // @synthesize assetAuthorizationResponseUUID=_assetAuthorizationResponseUUID;
@property(retain, nonatomic) NSData *clearAssetKey; // @synthesize clearAssetKey=_clearAssetKey;
@property(nonatomic) long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(nonatomic) long long downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property(retain, nonatomic) NSString *downloadBaseURL; // @synthesize downloadBaseURL=_downloadBaseURL;
@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(retain, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(retain, nonatomic) NSData *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023034b
- (unsigned long long)hash;	// IMP=0x00000000002300b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022fc2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022f8ad
- (void)copyTo:(id)arg1;	// IMP=0x000000000022f5f1
- (void)writeTo:(id)arg1;	// IMP=0x000000000022f351
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022f344
- (id)dictionaryRepresentation;	// IMP=0x000000000022e753
- (id)description;	// IMP=0x000000000022e6a4
@property(readonly, nonatomic) _Bool hasReservedVoucher;
@property(readonly, nonatomic) _Bool hasConstructedAssetDownloadParameters;
@property(nonatomic) _Bool hasConstructedAssetDownloadEstimatedSize;
@property(nonatomic) _Bool hasConstructedAssetDownloadURLExpiration;
@property(readonly, nonatomic) _Bool hasConstructedAssetDownloadURL;
@property(readonly, nonatomic) _Bool hasAssetAuthorizationResponseUUID;
@property(readonly, nonatomic) _Bool hasClearAssetKey;
@property(nonatomic) _Bool hasDownloadTokenExpiration;
@property(readonly, nonatomic) _Bool hasReferenceSignature;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(nonatomic) _Bool hasDownloadURLExpiration;
@property(readonly, nonatomic) _Bool hasDownloadBaseURL;
@property(readonly, nonatomic) _Bool hasUploadReceipt;
@property(readonly, nonatomic) _Bool hasRecordId;
@property(readonly, nonatomic) _Bool hasRequestor;
@property(readonly, nonatomic) _Bool hasContentBaseURL;
@property(readonly, nonatomic) _Bool hasDownloadRequest;
@property(readonly, nonatomic) _Bool hasDownloadToken;
@property(nonatomic) _Bool hasSize;
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasOwner;

@end

