//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCredentialRequestContext;

@interface AKOwnerProxyClient
{
    AKCredentialRequestContext *_credentialRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008d10
- (id)teamID;	// IMP=0x0010000000008cf3
- (id)appID;	// IMP=0x0010000000008cd6
- (id)bundleID;	// IMP=0x0010000000008cb9
- (id)localizedAppName;	// IMP=0x0010000000008c9c
- (id)name;	// IMP=0x0010000000008c30
- (_Bool)hasOwnerAccess;	// IMP=0x0010000000008c28
- (_Bool)hasWriteAccess;	// IMP=0x0010000000008c20
- (_Bool)hasPublicAccess;	// IMP=0x0010000000008c18
- (_Bool)hasPrivateSignedAccess;	// IMP=0x0010000000008c10
- (_Bool)hasPrivateAccess;	// IMP=0x0010000000008c08
- (_Bool)hasInternalAccess;	// IMP=0x0010000000008c00
- (id)description;	// IMP=0x0010000000008b94
- (id)initWithCredentialRequest:(id)arg1;	// IMP=0x0010000000008b24

@end

