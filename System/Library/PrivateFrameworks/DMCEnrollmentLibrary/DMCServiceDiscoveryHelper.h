//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMCServiceDiscoveryHelper : NSObject
{
}

- (id)_serverURLForAppleMAID;	// IMP=0x0000000000004a5d
- (void)_serviceURLFromWellKnownURL:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004228
- (void)_discoverServiceURLForDomain:(id)arg1 port:(id)arg2 userIdentifier:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003fff
- (void)fetchEnrollmentProfileWithServiceURL:(id)arg1 authToken:(id)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000039fe
- (id)abstractWebAuthCredentialTokenFromCallBackURL:(id)arg1;	// IMP=0x0000000000003620
- (id)webAuthenticationURLForUserAuthURL:(id)arg1 withUserIdentifierQuery:(id)arg2;	// IMP=0x00000000000034ee
- (void)exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)arg1 userAuthURL:(id)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000343f
- (void)discoverEnrollmentMethodWithServiceURL:(id)arg1 enrollmentType:(unsigned long long)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002d18
- (void)discoverServiceURLForUserIdentifier:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000274e

@end

