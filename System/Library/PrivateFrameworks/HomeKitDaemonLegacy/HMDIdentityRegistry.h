//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDHomeManager, NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState>
{
    NSMutableArray *_registeredIdentities;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    NSRecursiveLock *_lock;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x000000000017f835
+ (id)sharedRegistry;	// IMP=0x000000000017f7d2
- (void).cxx_destruct;	// IMP=0x000000000017cd9b
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)dumpState;	// IMP=0x000000000017bbe1
- (void)reset;	// IMP=0x000000000017bb63
- (void)deregisterIdentity:(id)arg1 object:(id)arg2;	// IMP=0x000000000017ba67
- (void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3;	// IMP=0x000000000017b7f1
- (void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3;	// IMP=0x000000000017b57b
- (id)accountsForIdentity:(id)arg1;	// IMP=0x000000000017b430
- (id)identitiesForAccount:(id)arg1;	// IMP=0x000000000017b2e0
- (id)identitiesForDevice:(id)arg1;	// IMP=0x000000000017b155
- (id)userForDevice:(id)arg1;	// IMP=0x000000000017b062
- (id)_userForIdenity:(id)arg1;	// IMP=0x000000000017aebe
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x000000000017aeac
- (id)identityForIdentifier:(id)arg1;	// IMP=0x000000000017ad61
@property(readonly) NSArray *registeredIdentities;
- (id)attributeDescriptions;	// IMP=0x000000000017ab8e
- (id)init;	// IMP=0x000000000017aafb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

