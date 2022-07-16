//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSError, NSURLAuthenticationChallengeInternal, NSURLCredential, NSURLProtectionSpace, NSURLResponse;
@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>
{
    NSURLAuthenticationChallengeInternal *_internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e67d
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;	// IMP=0x000000000003e7fd
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;	// IMP=0x000000000003e7ca
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003e375
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003e224
@property(readonly, retain) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, copy) NSURLResponse *failureResponse;
@property(readonly, copy) NSError *error;
@property(readonly) long long previousFailureCount;
@property(readonly, copy) NSURLCredential *proposedCredential;
@property(readonly, copy) NSURLProtectionSpace *protectionSpace;
- (void)dealloc;	// IMP=0x000000000003e154
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;	// IMP=0x000000000003e06e
- (id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7;	// IMP=0x000000000003e00f
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;	// IMP=0x000000000003df87
- (id)init;	// IMP=0x000000000003df5e
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;	// IMP=0x000000000003e6bb
- (void)setSender:(id)arg1;	// IMP=0x000000000003e685

@end
