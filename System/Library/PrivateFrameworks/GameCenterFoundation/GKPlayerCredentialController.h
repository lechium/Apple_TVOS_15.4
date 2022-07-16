//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject
{
    long long _loginCancelledCount;	// 8 = 0x8
    ACAccountStore *_store;	// 16 = 0x10
    GKThreadsafeDictionary *_allCredentialsCache;	// 24 = 0x18
}

+ (void)migrateOldAccountInformation;	// IMP=0x0000000000029ed4
+ (id)sharedController;	// IMP=0x0000000000029e19
+ (id)accessQueue;	// IMP=0x0000000000029da8
- (void).cxx_destruct;	// IMP=0x000000000002def9
@property(retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache; // @synthesize allCredentialsCache=_allCredentialsCache;
@property(retain, nonatomic) ACAccountStore *store; // @synthesize store=_store;
@property long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
@property(readonly) _Bool loginDisabled;
- (id)suggestedUsername;	// IMP=0x000000000002dc06
- (id)primaryCredentialForEnvironment:(long long)arg1 conformsToMultiUserRestrictions:(_Bool)arg2;	// IMP=0x000000000002db2f
- (id)primaryCredentialForEnvironment:(long long)arg1;	// IMP=0x000000000002d9c5
- (id)pushCredentialForEnvironment:(long long)arg1;	// IMP=0x000000000002d8f1
- (id)allCredentialsForEnvironment:(long long)arg1;	// IMP=0x000000000002d5da
- (id)credentialForAltDSID:(id)arg1 environment:(long long)arg2;	// IMP=0x000000000002d4bd
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x000000000002d3a0
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;	// IMP=0x000000000002d14a
- (unsigned long long)loginStatusForCredential:(id)arg1;	// IMP=0x000000000002cf12
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c7fd
- (void)removeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c38c
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bfd9
- (void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bc75
- (void)setPrimaryCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ade9
- (void)setCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a97c
- (void)accountStoreEmailDidChange:(id)arg1;	// IMP=0x000000000002a7d3
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x000000000002a5b2
- (void)invalidateCredentialCaches;	// IMP=0x000000000002a575
- (void)_transact:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a20b
- (id)_transactAndWait:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029f0a
- (id)accessQueue;	// IMP=0x0000000000029dff
- (void)dealloc;	// IMP=0x0000000000029d33
- (id)init;	// IMP=0x0000000000029bf3

@end

