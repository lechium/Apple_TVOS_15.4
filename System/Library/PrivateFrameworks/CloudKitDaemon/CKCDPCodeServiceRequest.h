//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, CKCDPCodeServiceRequestAttestationRequest, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, CKCDPCodeServiceRequestRequestContext, CKCDPTrustedTargetCryptoMetadata, NSData, NSMutableArray, NSString;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying>
{
    CKCDPCodeServiceRequestAccountConfig *_accountConfig;	// 8 = 0x8
    CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *_assetAuthorizeGetRequestOptions;	// 16 = 0x10
    CKCDPCodeServiceRequestAttestationRequest *_attestationRequest;	// 24 = 0x18
    NSMutableArray *_clientConfigs;	// 32 = 0x20
    NSString *_functionName;	// 40 = 0x28
    CKCDPCodeServiceRequestProtectedCloudComputeMetadata *_protectedCloudComputeMetadata;	// 48 = 0x30
    CKCDPCodeServiceRequestRequestContext *_requestContext;	// 56 = 0x38
    NSData *_routingToken;	// 64 = 0x40
    int _serializationFormat;	// 72 = 0x48
    NSData *_serializedParameters;	// 80 = 0x50
    NSString *_serviceName;	// 88 = 0x58
    CKCDPTrustedTargetCryptoMetadata *_trustedTargetCryptoMetadata;	// 96 = 0x60
    struct {
        unsigned int serializationFormat:1;
    } _has;	// 104 = 0x68
}

+ (Class)clientConfigType;	// IMP=0x00000000002f64f8
- (void).cxx_destruct;	// IMP=0x00000000002f819e
@property(retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata; // @synthesize trustedTargetCryptoMetadata=_trustedTargetCryptoMetadata;
@property(retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata; // @synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata;
@property(retain, nonatomic) CKCDPCodeServiceRequestAttestationRequest *attestationRequest; // @synthesize attestationRequest=_attestationRequest;
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions; // @synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions;
@property(retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig; // @synthesize accountConfig=_accountConfig;
@property(retain, nonatomic) NSMutableArray *clientConfigs; // @synthesize clientConfigs=_clientConfigs;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f7cc2
- (unsigned long long)hash;	// IMP=0x00000000002f7b47
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f7877
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f74f5
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f72c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f7040
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f6b6c
- (id)dictionaryRepresentation;	// IMP=0x00000000002f664b
- (id)description;	// IMP=0x00000000002f659c
@property(readonly, nonatomic) _Bool hasTrustedTargetCryptoMetadata;
@property(readonly, nonatomic) _Bool hasProtectedCloudComputeMetadata;
@property(readonly, nonatomic) _Bool hasAttestationRequest;
@property(readonly, nonatomic) _Bool hasRoutingToken;
@property(readonly, nonatomic) _Bool hasAssetAuthorizeGetRequestOptions;
@property(readonly, nonatomic) _Bool hasRequestContext;
@property(readonly, nonatomic) _Bool hasAccountConfig;
- (id)clientConfigAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002f64db
- (unsigned long long)clientConfigsCount;	// IMP=0x00000000002f64be
- (void)addClientConfig:(id)arg1;	// IMP=0x00000000002f6454
- (void)clearClientConfigs;	// IMP=0x00000000002f6437
- (int)StringAsSerializationFormat:(id)arg1;	// IMP=0x00000000002f63d0
- (id)serializationFormatAsString:(int)arg1;	// IMP=0x00000000002f637a
@property(nonatomic) _Bool hasSerializationFormat;
@property(nonatomic) int serializationFormat; // @synthesize serializationFormat=_serializationFormat;
@property(readonly, nonatomic) _Bool hasSerializedParameters;
@property(readonly, nonatomic) _Bool hasFunctionName;
@property(readonly, nonatomic) _Bool hasServiceName;

@end
