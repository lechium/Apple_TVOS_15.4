//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, PKSecureElementSignatureInfo;

@interface PKAuxiliaryCapabilityFetchBarcodeRequest
{
    NSString *_dpanIdentifier;	// 16 = 0x10
    long long _barcodeCount;	// 24 = 0x18
    NSString *_lastUsedBarcodeIdentifier;	// 32 = 0x20
    NSArray *_encryptionCertificateChain;	// 40 = 0x28
    long long _fetchReason;	// 48 = 0x30
    NSData *_signatureData;	// 56 = 0x38
    PKSecureElementSignatureInfo *_signatureInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000ea77e
@property(retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo; // @synthesize signatureInfo=_signatureInfo;
@property(copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
@property(copy, nonatomic) NSArray *encryptionCertificateChain; // @synthesize encryptionCertificateChain=_encryptionCertificateChain;
@property(copy, nonatomic) NSString *lastUsedBarcodeIdentifier; // @synthesize lastUsedBarcodeIdentifier=_lastUsedBarcodeIdentifier;
@property(nonatomic) long long barcodeCount; // @synthesize barcodeCount=_barcodeCount;
@property(copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (id)_dataToSign;	// IMP=0x00000000000ea587
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000000ea1c2

@end

