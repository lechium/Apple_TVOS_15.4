//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SecCDKeychain;

__attribute__((visibility("hidden")))
@interface SFKeychainServerConnection : NSObject
{
    SecCDKeychain *_keychain;	// 8 = 0x8
    NSArray *_clientAccessGroups;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001c8e2e
@property(readonly) NSArray *clientAccessGroups; // @synthesize clientAccessGroups=_clientAccessGroups;
- (id)passwordCredentialForItemMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c8719
- (id)passwordCredentialForItem:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c850a
- (void)rpcReplaceOldCredential:(id)arg1 withNewCredential:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c84f8
- (void)rpcRemoveCredentialWithPersistentIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c82aa
- (void)rpcLookupCredentialsForServiceIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c7e3a
- (void)rpcFetchPasswordCredentialForPersistentIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c7bdf
- (void)rpcAddCredential:(id)arg1 withAccessPolicy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c6c51
- (int)keyclassForAccessPolicy:(id)arg1;	// IMP=0x00100000001c6bb3
- (id)initWithKeychain:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x00100000001c6ac5

@end

