//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDBackgroundOperationManagerHelper : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x00000000009d22bf
+ (void)removeAllUsersFromAccessory:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000009d1df8
+ (_Bool)didAuditTimeExpiredOnThisAccessory:(id)arg1;	// IMP=0x00000000009d1d25
+ (void)scheduleRemovePairingForAccessory:(id)arg1 usingPairingIdentity:(id)arg2;	// IMP=0x00000000009d1b12
+ (void)scheduleRemovePairingForAccessory:(id)arg1 sharedUser:(id)arg2;	// IMP=0x00000000009d18a1
+ (void)scheduleRemovePairingForAccessory:(id)arg1 forSharedUser:(id)arg2;	// IMP=0x00000000009d1615
+ (void)scheduleAddPairingForAccessory:(id)arg1 sharedUser:(id)arg2;	// IMP=0x00000000009d1359
+ (void)scheduleAddPairingForAccessory:(id)arg1 forSharedUser:(id)arg2;	// IMP=0x00000000009d1044
+ (void)scheduleFullAuditForAccessory:(id)arg1;	// IMP=0x00000000009d0f0c
+ (void)dumpUsers:(id)arg1 usingTag:(id)arg2;	// IMP=0x00000000009d0e75
+ (void)auditSharedUserEntriesInDatabaseForHome:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000009d0c84
+ (void)markAllTheAccessoriesNeedFullAuditDueToResidentChangedForHome:(id)arg1;	// IMP=0x00000000009d08e0
+ (void)removePairingOnAllAccessoriesOfHome:(id)arg1 forSharedUser:(id)arg2;	// IMP=0x00000000009d069c
+ (void)addPairingOnAllAccessoriesOfHome:(id)arg1 forSharedUser:(id)arg2;	// IMP=0x00000000009d04d2
+ (void)auditSharedUserEntriesInDatabase:(id)arg1;	// IMP=0x00000000009d03ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

