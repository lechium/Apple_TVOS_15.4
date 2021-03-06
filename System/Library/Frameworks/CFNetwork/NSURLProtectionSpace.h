//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>
{
    NSURLProtectionSpaceInternal *_internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000062056
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061e10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000061d74
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;	// IMP=0x0000000000061d6a
- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;	// IMP=0x0000000000061d60
@property(readonly, copy) NSString *protocol;
- (void)_setServerTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000000061c4e
- (struct __SecTrust *)serverTrust;	// IMP=0x0000000000061c0f
- (void)_setDistinguishedNames:(id)arg1;	// IMP=0x0000000000061bcb
- (id)distinguishedNames;	// IMP=0x0000000000061b8c
@property(readonly, copy) NSString *authenticationMethod;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061a5d
- (unsigned long long)hash;	// IMP=0x0000000000061a4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000061a44
@property(readonly, copy) NSString *proxyType;
@property(readonly) long long port;
@property(readonly, copy) NSString *host;
@property(readonly) _Bool isProxy;
@property(readonly) _Bool receivesCredentialSecurely;
@property(readonly, copy) NSString *realm;
- (id)description;	// IMP=0x0000000000061785
- (void)dealloc;	// IMP=0x0000000000061746
- (id)init;	// IMP=0x0000000000061738
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg1;	// IMP=0x00000000000616c2
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;	// IMP=0x0000000000061593
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;	// IMP=0x0000000000061465

@end

