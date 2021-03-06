//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_assets;	// 8 = 0x8
    NSData *_authPutRequest;	// 16 = 0x10
    int _authPutType;	// 24 = 0x18
    NSMutableArray *_contentRequestHeaders;	// 32 = 0x20
    CKDPRecordFieldIdentifier *_field;	// 40 = 0x28
    CKDPRecordType *_type;	// 48 = 0x30
    NSMutableArray *_uploads;	// 56 = 0x38
    struct {
        unsigned int authPutType:1;
    } _has;	// 64 = 0x40
}

+ (Class)contentRequestHeadersType;	// IMP=0x000000000021d16b
+ (Class)uploadsType;	// IMP=0x000000000021d099
+ (Class)assetsType;	// IMP=0x000000000021cfc7
+ (id)options;	// IMP=0x000000000021ce8c
- (void).cxx_destruct;	// IMP=0x000000000021f0e9
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021ec25
- (unsigned long long)hash;	// IMP=0x000000000021eb3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021e979
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021e4b4
- (void)copyTo:(id)arg1;	// IMP=0x000000000021e23d
- (Class)responseClass;	// IMP=0x000000000021e22c
- (unsigned int)requestTypeCode;	// IMP=0x000000000021e221
- (void)writeTo:(id)arg1;	// IMP=0x000000000021deb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021deac
- (id)dictionaryRepresentation;	// IMP=0x000000000021d3ab
- (id)description;	// IMP=0x000000000021d2fc
- (int)StringAsAuthPutType:(id)arg1;	// IMP=0x000000000021d25f
- (id)authPutTypeAsString:(int)arg1;	// IMP=0x000000000021d1f8
@property(nonatomic) _Bool hasAuthPutType;
@property(nonatomic) int authPutType; // @synthesize authPutType=_authPutType;
@property(readonly, nonatomic) _Bool hasAuthPutRequest;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000021d14e
- (unsigned long long)contentRequestHeadersCount;	// IMP=0x000000000021d131
- (void)addContentRequestHeaders:(id)arg1;	// IMP=0x000000000021d0c7
- (void)clearContentRequestHeaders;	// IMP=0x000000000021d0aa
- (id)uploadsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000021d07c
- (unsigned long long)uploadsCount;	// IMP=0x000000000021d05f
- (void)addUploads:(id)arg1;	// IMP=0x000000000021cff5
- (void)clearUploads;	// IMP=0x000000000021cfd8
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000021cfaa
- (unsigned long long)assetsCount;	// IMP=0x000000000021cf8d
- (void)addAssets:(id)arg1;	// IMP=0x000000000021cf23
- (void)clearAssets;	// IMP=0x000000000021cf06
@property(readonly, nonatomic) _Bool hasField;
@property(readonly, nonatomic) _Bool hasType;

@end

