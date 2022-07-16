//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequestFactory : NSObject
{
}

+ (id)_logoutSAMLRequestStringWithError:(id *)arg1;	// IMP=0x000000000005f464
+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005f3fe
+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000005f398
- (id)STBOptOutApplicationControllerRequest;	// IMP=0x000000000005f360
- (id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1;	// IMP=0x000000000005f293
- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2;	// IMP=0x000000000005f0bb
- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;	// IMP=0x000000000005ef93
- (id)silentAuthenticationApplicationControllerRequest;	// IMP=0x000000000005ef5b
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;	// IMP=0x000000000005ee33

@end
