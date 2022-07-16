//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, PKSecureElementSignatureInfo;

@interface PKAuxiliaryCapabilityRegisterRequest
{
    NSArray *_dpanIdentifiers;	// 16 = 0x10
    NSData *_deviceSignatureKeyAttestation;	// 24 = 0x18
    NSData *_deviceDecryptionKeyAttestation;	// 32 = 0x20
    NSArray *_validCertificatesOnDevice;	// 40 = 0x28
    NSData *_signatureData;	// 48 = 0x30
    PKSecureElementSignatureInfo *_signatureInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000ea14d
@property(retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo; // @synthesize signatureInfo=_signatureInfo;
@property(copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(copy, nonatomic) NSArray *validCertificatesOnDevice; // @synthesize validCertificatesOnDevice=_validCertificatesOnDevice;
@property(copy, nonatomic) NSData *deviceDecryptionKeyAttestation; // @synthesize deviceDecryptionKeyAttestation=_deviceDecryptionKeyAttestation;
@property(copy, nonatomic) NSData *deviceSignatureKeyAttestation; // @synthesize deviceSignatureKeyAttestation=_deviceSignatureKeyAttestation;
@property(copy, nonatomic) NSArray *dpanIdentifiers; // @synthesize dpanIdentifiers=_dpanIdentifiers;
- (id)_dataToSign;	// IMP=0x00000000000e9f2a
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000000e9c1f

@end
