//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSServiceFacility.h>

#import <FrontBoard/FBApplicationDataStoreRepositoryServerClientContextDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString;
@protocol FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate>
{
    id <FBApplicationDataStoreRepository> _dataStore;	// 8 = 0x8
    FBServiceClientAuthenticator *_connectionAuthenticator;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000001b420
- (void).cxx_destruct;	// IMP=0x000000000001c5c4
@property(retain, nonatomic) id <FBApplicationDataStoreRepository> dataStore; // @synthesize dataStore=_dataStore;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2;	// IMP=0x000000000001c412
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4;	// IMP=0x000000000001c1aa
- (void)_handleRemoveAllObjects:(id)arg1;	// IMP=0x000000000001c08d
- (void)_handleRemoveObjectForKey:(id)arg1 context:(id)arg2;	// IMP=0x000000000001bf4a
- (void)_handleSetObjectForKey:(id)arg1 context:(id)arg2;	// IMP=0x000000000001bda9
- (void)_handleGetObjectForKey:(id)arg1;	// IMP=0x000000000001bc0e
- (void)_handleGetAvailableDataStores:(id)arg1;	// IMP=0x000000000001bb12
- (void)_handleSynchronize:(id)arg1;	// IMP=0x000000000001baae
- (void)_handleSetChangesInterest:(id)arg1 context:(id)arg2;	// IMP=0x000000000001b9f5
- (void)_handleSetPrefetchedKeys:(id)arg1 context:(id)arg2;	// IMP=0x000000000001b7c8
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;	// IMP=0x000000000001b6da
- (void)noteClientDidDisconnect:(id)arg1;	// IMP=0x000000000001b698
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000001b610
- (_Bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000001b5f3
- (id)_prerequisiteMilestones;	// IMP=0x000000000001b5eb
- (id)_init;	// IMP=0x000000000001b49f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
