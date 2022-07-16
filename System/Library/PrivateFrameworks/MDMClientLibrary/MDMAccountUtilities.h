//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MDMAccountUtilities : NSObject
{
}

+ (id)_createMissingBearerTokenError;	// IMP=0x000000000000c90f
+ (id)_createMissingRMAccountError;	// IMP=0x000000000000c887
+ (_Bool)updateOrganizationName:(id)arg1 rmAccountIdentifier:(id)arg2 personaID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000bdec
+ (id)_longLivedTokenFromRMAccount:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000000bc8d
+ (id)_shortLivedTokenFromRMAccount:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000000b96f
+ (id)maidPropertiesForRMAccountID:(id)arg1;	// IMP=0x000000000000b620
+ (id)bearerTokenForRMAccountID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b4f0
+ (id)authenticatorForRMAccountID:(id)arg1;	// IMP=0x000000000000b426
+ (void)removeMAIDShortLivedTokenWithAccount:(id)arg1;	// IMP=0x000000000000b315
+ (void)stashMAIDShortLivedTokenWithAccount:(id)arg1 authenticationResults:(id)arg2;	// IMP=0x000000000000b0ba
+ (id)rmAccountWithIdentifier:(id)arg1 fromStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000af76

@end

