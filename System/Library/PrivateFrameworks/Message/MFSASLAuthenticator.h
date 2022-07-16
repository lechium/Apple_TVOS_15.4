//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFAccount, MFAuthScheme, MFConnection;

@interface MFSASLAuthenticator : NSObject
{
    MFConnection *_connection;	// 8 = 0x8
    MFAuthScheme *_authScheme;	// 16 = 0x10
    MFAccount *_account;	// 24 = 0x18
    int _authenticationState;	// 32 = 0x20
}

- (void)setMissingPasswordError;	// IMP=0x0000000000039596
- (_Bool)couldRetry;	// IMP=0x000000000003958e
- (_Bool)base64EncodeResponseData;	// IMP=0x0000000000039586
- (_Bool)isUsingSSL;	// IMP=0x0000000000039546
- (id)securityLayer;	// IMP=0x000000000003953e
- (_Bool)justSentPlainTextPassword;	// IMP=0x0000000000039536
- (void)setAuthenticationState:(int)arg1;	// IMP=0x000000000003952d
- (int)authenticationState;	// IMP=0x0000000000039524
- (id)responseForServerData:(id)arg1;	// IMP=0x000000000003950a
- (_Bool)supportsInitialClientResponse;	// IMP=0x0000000000039502
- (id)saslName;	// IMP=0x00000000000394ec
- (id)account;	// IMP=0x00000000000394e2
- (id)authScheme;	// IMP=0x00000000000394d8
- (void)dealloc;	// IMP=0x0000000000039487
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;	// IMP=0x000000000003940d

@end
