//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SWCSecurityGuard : NSObject
{
}

+ (id)new;	// IMP=0x0020000000020f3d
+ (id)sharedSecurityGuard;	// IMP=0x0010000000020ed8
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 allowInstalledRootCertificates:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000002136b
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0010000000021354
- (id)JSONObjectWithSignedJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000020f6b
- (id)init;	// IMP=0x0010000000020f46
- (_Bool)_isSystemTrusted:(struct __SecTrust *)arg1;	// IMP=0x00100000000223f0
- (_Bool)_verifyExtendedValidationOfTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x00100000000221b8
- (id)_errorForUntrustedRootCertificateOfTrust:(struct __SecTrust *)arg1;	// IMP=0x0010000000021f59
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 allowingKeychains:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000021b4a
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0010000000021632
- (id)_init;	// IMP=0x0010000000021603

@end

