//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/ENAuthenticator-Protocol.h>

@class ENCredentialStore, NSArray, NSMutableData, NSString, NSURLResponse;
@protocol ENAuthenticatorDelegate;

@interface ENOAuthAuthenticator : NSObject <ENAuthenticator>
{
    _Bool _supportsLinkedAppNotebook;	// 8 = 0x8
    _Bool _useWebAuthenticationOnly;	// 9 = 0x9
    _Bool _preferRegistration;	// 10 = 0xa
    _Bool _inProgress;	// 11 = 0xb
    _Bool _isCancelled;	// 12 = 0xc
    _Bool _isSwitchingInProgress;	// 13 = 0xd
    _Bool _isActiveBecauseOfCallback;	// 14 = 0xe
    _Bool _userSelectedLinkedAppNotebook;	// 15 = 0xf
    id <ENAuthenticatorDelegate> _delegate;	// 16 = 0x10
    NSString *_consumerKey;	// 24 = 0x18
    NSString *_consumerSecret;	// 32 = 0x20
    NSString *_host;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    NSArray *_profiles;	// 56 = 0x38
    NSString *_currentProfile;	// 64 = 0x40
    ENCredentialStore *_credentialStore;	// 72 = 0x48
    NSString *_tokenSecret;	// 80 = 0x50
    NSMutableData *_receivedData;	// 88 = 0x58
    NSURLResponse *_response;	// 96 = 0x60
}

+ (id)parametersFromQueryString:(id)arg1;	// IMP=0x00000000001c98c3
+ (id)queryStringFromParameters:(id)arg1;	// IMP=0x00000000001c97e0
+ (id)deviceDescription;	// IMP=0x00000000001c97d3
- (void).cxx_destruct;	// IMP=0x00000000001cbe50
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(nonatomic) _Bool userSelectedLinkedAppNotebook; // @synthesize userSelectedLinkedAppNotebook=_userSelectedLinkedAppNotebook;
@property(nonatomic) _Bool isActiveBecauseOfCallback; // @synthesize isActiveBecauseOfCallback=_isActiveBecauseOfCallback;
@property(nonatomic) _Bool isSwitchingInProgress; // @synthesize isSwitchingInProgress=_isSwitchingInProgress;
@property(copy, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(retain, nonatomic) ENCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
@property(copy, nonatomic) NSString *currentProfile; // @synthesize currentProfile=_currentProfile;
@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(nonatomic) _Bool preferRegistration; // @synthesize preferRegistration=_preferRegistration;
@property(nonatomic) _Bool useWebAuthenticationOnly; // @synthesize useWebAuthenticationOnly=_useWebAuthenticationOnly;
@property(nonatomic) _Bool supportsLinkedAppNotebook; // @synthesize supportsLinkedAppNotebook=_supportsLinkedAppNotebook;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(nonatomic) __weak id <ENAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getOAuthTokenForURL:(id)arg1;	// IMP=0x00000000001cb9cf
- (void)gotCallbackURL:(id)arg1;	// IMP=0x00000000001cb92c
- (_Bool)canHandleSwitchProfileURL:(id)arg1;	// IMP=0x00000000001cb82e
- (void)disableIsActiveBecauseOfCallback;	// IMP=0x00000000001cb81a
- (void)enableIsActiveBecauseOfCallback;	// IMP=0x00000000001cb7d6
- (_Bool)handleOpenURL:(id)arg1;	// IMP=0x00000000001cb44b
- (void)updateCurrentBootstrapProfileWithName:(id)arg1;	// IMP=0x00000000001cb1da
- (void)switchProfile;	// IMP=0x00000000001cafc8
- (void)completeAuthenticationWithError:(id)arg1;	// IMP=0x00000000001caf41
- (void)completeAuthenticationWithCredentials:(id)arg1 usesLinkedAppNotebook:(_Bool)arg2;	// IMP=0x00000000001cae88
- (void)didFinishLoading;	// IMP=0x00000000001ca8b7
- (void)receivedData:(id)arg1;	// IMP=0x00000000001ca845
- (void)receivedResponse:(id)arg1;	// IMP=0x00000000001ca7e8
- (void)failedWithError:(id)arg1;	// IMP=0x00000000001ca773
- (void)handleDidBecomeActive;	// IMP=0x00000000001ca70c
- (id)userAuthorizationURLStringWithParameters:(id)arg1;	// IMP=0x00000000001ca480
- (id)oauthCallback;	// IMP=0x00000000001ca414
- (id)callbackScheme;	// IMP=0x00000000001ca379
- (void)startOauthAuthentication;	// IMP=0x00000000001ca19d
- (void)authenticate;	// IMP=0x00000000001c9ea8
- (void)emptyCookieJar;	// IMP=0x00000000001c9c58

@end

