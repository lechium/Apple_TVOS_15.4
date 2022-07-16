//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCoding-Protocol.h>
#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>
#import <AppleAccount/NSURLSessionAppleIDContext-Protocol.h>

@class AAAbsintheSigner, AAAttestationSigner, AARemoteServer, AKAppleIDSession, NSString;
@protocol OS_dispatch_queue;

@interface AAURLSessionContext : NSObject <NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext>
{
    AKAppleIDSession *_appleIDSession;	// 8 = 0x8
    struct os_unfair_lock_s _signerLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_signingQueue;	// 24 = 0x18
    _Bool _requiresSigning;	// 32 = 0x20
    AAAbsintheSigner *_absintheSigner;	// 40 = 0x28
    AAAttestationSigner *_attestationSigner;	// 48 = 0x30
    AARemoteServer *_remoteServer;	// 56 = 0x38
}

+ (id)_relevantHTTPStatusCodes;	// IMP=0x000000000000fa76
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fa6e
- (void).cxx_destruct;	// IMP=0x000000000001170b
@property(retain, nonatomic) AARemoteServer *remoteServer; // @synthesize remoteServer=_remoteServer;
@property(retain, nonatomic) AAAttestationSigner *attestationSigner; // @synthesize attestationSigner=_attestationSigner;
@property(retain, nonatomic) AAAbsintheSigner *absintheSigner; // @synthesize absintheSigner=_absintheSigner;
@property(readonly, nonatomic) _Bool requiresSigning; // @synthesize requiresSigning=_requiresSigning;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000112a2
- (id)relevantHTTPStatusCodes;	// IMP=0x000000000001120b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001119e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001112b
- (void)_additionalAttestationHeadersForData:(id)arg1 withValidity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010856
- (void)_additionalAbsintheHeadersForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000105e4
- (void)_additionalHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ffda
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fc5f
- (id)_initRequiringSigning:(_Bool)arg1 appleIDSession:(id)arg2;	// IMP=0x000000000000fb82
- (id)initRequiringSigning:(_Bool)arg1;	// IMP=0x000000000000faef
- (id)init;	// IMP=0x000000000000fadb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

