//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession;

@interface WFOAuth2SessionManager : NSObject
{
    NSURL *_tokenURL;	// 8 = 0x8
    NSURL *_authorizationURL;	// 16 = 0x10
    NSString *_clientID;	// 24 = 0x18
    NSString *_clientSecret;	// 32 = 0x20
    NSString *_authenticationMethod;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
}

+ (id)combinedScopeFromScopes:(id)arg1;	// IMP=0x000000000035f1ce
- (void).cxx_destruct;	// IMP=0x000000000035ec45
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSString *authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
@property(readonly, copy, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
@property(readonly, copy, nonatomic) NSURL *tokenURL; // @synthesize tokenURL=_tokenURL;
- (id)authorizationSessionWithAuthorizationURL:(id)arg1 responseType:(id)arg2 scopes:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000035ea01
- (id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000035e91c
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035e826
- (void)authenticateWithRequest:(id)arg1 refreshToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000035e767
- (void)authenticateWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035e18e
- (void)authenticateWithRefreshCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035df20
- (void)authenticateWithCode:(id)arg1 redirectURI:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000035dc5f
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2 scopes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000035d8d9
- (void)authenticateWithScopes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035d750
- (id)initWithSessionConfiguration:(id)arg1 tokenURL:(id)arg2 authorizationURL:(id)arg3 authenticationMethod:(id)arg4 clientID:(id)arg5 clientSecret:(id)arg6;	// IMP=0x000000000035d480

@end
