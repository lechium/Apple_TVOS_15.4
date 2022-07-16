//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSString;

@interface MCCertificatePayload
{
    NSData *_certificatePersistentID;	// 80 = 0x50
    NSString *_installedOnDeviceID;	// 88 = 0x58
    NSNumber *_isIdentity;	// 96 = 0x60
    NSNumber *_isRoot;	// 104 = 0x68
    NSNumber *_expiryInterval;	// 112 = 0x70
    NSString *_certSubject;	// 120 = 0x78
    NSString *_certIssuer;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000384cf
@property(copy, nonatomic) NSString *installedOnDeviceID; // @synthesize installedOnDeviceID=_installedOnDeviceID;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
- (id)issuer;	// IMP=0x00000000000383dc
- (id)certificateSubject;	// IMP=0x0000000000038330
@property(readonly, retain, nonatomic) NSDate *expiry;
- (id)verboseDescription;	// IMP=0x0000000000037f7c
- (id)subtitle2Description;	// IMP=0x0000000000037e3d
- (id)subtitle2Label;	// IMP=0x0000000000037ce0
- (id)subtitle1Description;	// IMP=0x0000000000037c33
- (id)subtitle1Label;	// IMP=0x0000000000037bb7
- (id)title;	// IMP=0x0000000000037b07
@property(readonly, nonatomic) _Bool isMDMClientIdentity;
@property(readonly, nonatomic) _Bool isIdentity;
@property(readonly, nonatomic) _Bool isFullyTrustedRootCert;
@property(readonly, nonatomic) _Bool isRoot;
- (struct __SecIdentity *)copyIdentityFromKeychain;	// IMP=0x00000000000376be
- (struct __SecCertificate *)copyCertificate;	// IMP=0x0000000000037653
- (id)stubDictionary;	// IMP=0x00000000000373f2
@property(readonly, nonatomic) _Bool isSigned;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000036d4e

@end
