//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationCredential-Protocol.h>

@class NSArray, NSData, NSPersonNameComponents, NSString;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential>
{
    NSString *_user;	// 8 = 0x8
    NSArray *_authorizedScopes;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSData *_authorizationCode;	// 32 = 0x20
    NSData *_identityToken;	// 40 = 0x28
    NSString *_email;	// 48 = 0x30
    NSPersonNameComponents *_fullName;	// 56 = 0x38
    long long _realUserStatus;	// 64 = 0x40
    NSData *_accessToken;	// 72 = 0x48
    NSData *_refreshToken;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002da7
+ (id)new;	// IMP=0x0000000000002b43
- (void).cxx_destruct;	// IMP=0x000000000000326f
@property(copy, nonatomic) NSData *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) long long realUserStatus; // @synthesize realUserStatus=_realUserStatus;
@property(copy, nonatomic) NSPersonNameComponents *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSData *identityToken; // @synthesize identityToken=_identityToken;
@property(copy, nonatomic) NSData *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSArray *authorizedScopes; // @synthesize authorizedScopes=_authorizedScopes;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002f44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002e5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002daf
@property(readonly, copy) NSString *description;
- (id)initWithUser:(id)arg1 authorizedScopes:(id)arg2;	// IMP=0x0000000000002b86
- (id)init;	// IMP=0x0000000000002b5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
