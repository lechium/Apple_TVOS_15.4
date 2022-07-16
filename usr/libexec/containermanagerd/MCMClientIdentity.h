//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentity, NSDictionary, NSString, NSURL;

@interface MCMClientIdentity : NSObject
{
    _Bool _sandboxed;	// 8 = 0x8
    _Bool _kernel;	// 9 = 0x9
    _Bool _isSigned;	// 10 = 0xa
    _Bool _isSignatureValid;	// 11 = 0xb
    _Bool _isPlatformBinary;	// 12 = 0xc
    int _posixPID;	// 16 = 0x10
    unsigned int _platform;	// 20 = 0x14
    NSString *_bundleIdentifier;	// 24 = 0x18
    MCMPOSIXUser *_posixUser;	// 32 = 0x20
    NSDictionary *_entitlements;	// 40 = 0x28
    MCMUserIdentity *_userIdentity;	// 48 = 0x30
    struct container_client *_client;	// 56 = 0x38
    NSURL *_sandboxContainerURL;	// 64 = 0x40
    CDStruct_4c969caf _auditToken;	// 72 = 0x48
}

+ (id)privilegedClientIdentityWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x00200000000218a1
+ (id)anonymousPrivilegedClientIdentity;	// IMP=0x0010000000021839
+ (id)_clientIdentityWithXPCConnection:(id)arg1 personaUniqueString:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x001000000002256c
+ (id)clientIdentityWithXPCConnection:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x00100000000224b4
+ (id)clientIdentityWithClient:(struct container_client *)arg1 error:(unsigned long long *)arg2;	// IMP=0x0010000000022133
- (void).cxx_destruct;	// IMP=0x00200000000211b3
@property(readonly, nonatomic) _Bool isPlatformBinary; // @synthesize isPlatformBinary=_isPlatformBinary;
@property(readonly, nonatomic) _Bool isSignatureValid; // @synthesize isSignatureValid=_isSignatureValid;
@property(readonly, nonatomic) _Bool isSigned; // @synthesize isSigned=_isSigned;
@property(readonly, nonatomic) NSURL *sandboxContainerURL; // @synthesize sandboxContainerURL=_sandboxContainerURL;
@property(readonly, nonatomic) struct container_client *client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic, getter=isKernel) _Bool kernel; // @synthesize kernel=_kernel;
// Error: Property attributes should begin with the type ('T') attribute, property name: userIdentity
// Property attributes: (null)

@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) int posixPID; // @synthesize posixPID=_posixPID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)shortDescription;	// IMP=0x00100000000210b9
- (id)description;	// IMP=0x0010000000021052
- (void)dealloc;	// IMP=0x0010000000021018
- (_Bool)boolValueOfEntitlement:(id)arg1;	// IMP=0x0010000000020f58
- (id)initWithClient:(struct container_client *)arg1 userIdentity:(id)arg2 entitlements:(id)arg3 sandboxed:(_Bool)arg4 sandboxContainerURL:(id)arg5 kernel:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x0010000000020c34
- (id)init;	// IMP=0x0010000000020b2c
- (id)clientIdentityWithXPCConnection:(id)arg1 xpcMessage:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0010000000021a01

@end

