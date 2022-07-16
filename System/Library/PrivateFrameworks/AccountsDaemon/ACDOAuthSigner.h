//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDOAuthSignerProtocol-Protocol.h>

@class ACDClient, ACDClientAuthorizationManager, ACDDatabaseConnection, NSString;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>
{
    ACDClient *_client;	// 8 = 0x8
    ACDDatabaseConnection *_databaseConnection;	// 16 = 0x10
    ACDClientAuthorizationManager *_authorizationManager;	// 24 = 0x18
    _Bool _shouldIncludeAppIdInRequest;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000000004ef79
- (void).cxx_destruct;	// IMP=0x0000000000050669
- (id)csForAccountType:(id)arg1;	// IMP=0x00000000000504d2
- (id)ckForAccountType:(id)arg1;	// IMP=0x0000000000050246
- (_Bool)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;	// IMP=0x00000000000501a2
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004fd53
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;	// IMP=0x000000000004fb32
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004f5b5
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;	// IMP=0x000000000004f166
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f090
- (void)setShouldIncludeAppIdInRequest:(_Bool)arg1;	// IMP=0x000000000004f087
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x000000000004efbc
- (id)init;	// IMP=0x000000000004ef91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

