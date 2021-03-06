//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSNGMKeyLoadingErrorContainer, IDSPublicIdentityData, NSNumber, NSString;

@protocol IDSClientDataRegistrationKeyManager
- (IDSNGMKeyLoadingErrorContainer *)errorContainerToReport;
- (NSNumber *)keyTransparencyVersionNumberToRegisterForServiceType:(NSString *)arg1;
- (IDSPublicIdentityData *)publicMessageProtectionIdentityDataToRegisterWithError:(id *)arg1;
@end

