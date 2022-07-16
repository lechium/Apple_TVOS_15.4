//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentity, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MCMUserIdentityCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_flushQueue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    _Bool _cacheInvalid;	// 32 = 0x20
    NSDictionary *_lock_bundleToDataSeparatedIdentitiesMap;	// 40 = 0x28
    NSDictionary *_lock_personaUniqueStringToUserIdentityMap;	// 48 = 0x30
    NSDictionary *_lock_personaIDToUserIdentityMap;	// 56 = 0x38
    MCMUserIdentity *_lock_userIdentityForPersonalPersona;	// 64 = 0x40
    MCMUserIdentity *_lock_userIdentityForUnspecificPersona;	// 72 = 0x48
    NSMutableDictionary *_lock_managedPathRegistryForUserIdentity;	// 80 = 0x50
    NSMutableDictionary *_lock_libraryRepairForUserIdentity;	// 88 = 0x58
    NSSet *_previousUserIdentities;	// 96 = 0x60
    NSHashTable *_observers;	// 104 = 0x68
    unsigned long long _savedGeneration;	// 112 = 0x70
}

+ (id)globalSystemUserIdentity;	// IMP=0x0020000000003d6c
+ (id)globalBundleUserIdentity;	// IMP=0x0010000000003d3c
+ (_Bool)personasAreSupported;	// IMP=0x0010000000003d34
+ (id)defaultUserIdentity;	// IMP=0x0010000000003d04
- (void).cxx_destruct;	// IMP=0x0020000000003c54
@property(nonatomic) unsigned long long savedGeneration; // @synthesize savedGeneration=_savedGeneration;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool cacheInvalid; // @synthesize cacheInvalid=_cacheInvalid;
@property(retain, nonatomic) NSSet *previousUserIdentities; // @synthesize previousUserIdentities=_previousUserIdentities;
@property(readonly, nonatomic) NSMutableDictionary *lock_libraryRepairForUserIdentity; // @synthesize lock_libraryRepairForUserIdentity=_lock_libraryRepairForUserIdentity;
@property(readonly, nonatomic) NSMutableDictionary *lock_managedPathRegistryForUserIdentity; // @synthesize lock_managedPathRegistryForUserIdentity=_lock_managedPathRegistryForUserIdentity;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)arg1;	// IMP=0x001000000000354a
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)arg1;	// IMP=0x0010000000002f9d
- (void)_lock_flush;	// IMP=0x0010000000002e7b
- (void)_lock_resync;	// IMP=0x0010000000002e5e
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;	// IMP=0x0010000000002bee
- (_Bool)_lock_isBundleIdentifier:(id)arg1 associatedWithUserIdentity:(id)arg2;	// IMP=0x0010000000002a88
- (id)_lock_userIdentitiesForBundleIdentifier:(id)arg1;	// IMP=0x0010000000002964
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona; // @synthesize lock_userIdentityForUnspecificPersona=_lock_userIdentityForUnspecificPersona;
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona; // @synthesize lock_userIdentityForPersonalPersona=_lock_userIdentityForPersonalPersona;
@property(readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap; // @synthesize lock_personaIDToUserIdentityMap=_lock_personaIDToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap; // @synthesize lock_personaUniqueStringToUserIdentityMap=_lock_personaUniqueStringToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap; // @synthesize lock_bundleToDataSeparatedIdentitiesMap=_lock_bundleToDataSeparatedIdentitiesMap;
- (id)libraryRepairForUserIdentity:(id)arg1;	// IMP=0x0010000000002637
- (id)managedUserPathRegistryForUserIdentity:(id)arg1;	// IMP=0x0010000000002509
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000002457
- (void)addObserver:(id)arg1;	// IMP=0x00100000000023a5
- (void)flushAndRepopulateWithUserIdentities:(id)arg1;	// IMP=0x0010000000002352
- (id)userIdentityForLegacyMobileUser;	// IMP=0x0010000000002322
- (id)userIdentityForCurrentContext;	// IMP=0x0010000000002288
- (id)personaUniqueStringForCurrentContext;	// IMP=0x0010000000002280
- (id)globalSystemUserIdentity;	// IMP=0x0010000000002266
- (id)globalBundleUserIdentity;	// IMP=0x001000000000224c
- (id)defaultUserIdentity;	// IMP=0x0010000000002232
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002103
- (id)allAccessibleUserIdentities;	// IMP=0x0010000000001d77
- (void)flush;	// IMP=0x0010000000001d2b
- (id)userIdentityWithPersonaID:(unsigned int)arg1;	// IMP=0x0010000000001a6a
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)arg1;	// IMP=0x0010000000001942
- (id)unspecificUserIdentity;	// IMP=0x00100000000018e6
- (id)userIdentityForPersonalPersona;	// IMP=0x0010000000001873
- (id)userIdentityForClient:(struct container_client *)arg1;	// IMP=0x001000000000173c
- (id)userIdentityForPersonaUniqueString:(id)arg1 POSIXUser:(id)arg2;	// IMP=0x0010000000001436
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;	// IMP=0x001000000000122d
- (_Bool)isBundleIdentifier:(id)arg1 associatedWithUserIdentity:(id)arg2;	// IMP=0x001000000000119c
- (id)userIdentitiesForBundleIdentifier:(id)arg1;	// IMP=0x00100000000010ff
- (void)_refreshFromUserManagementIfNecessary;	// IMP=0x00100000000010f9
- (id)init;	// IMP=0x0010000000001004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
