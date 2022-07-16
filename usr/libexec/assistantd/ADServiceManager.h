//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSMutableDictionary, NSMutableSet;

@interface ADServiceManager : NSObject
{
    _Bool _bundleServicesLoaded;	// 8 = 0x8
    NSMutableDictionary *_serviceMap;	// 16 = 0x10
    NSMutableDictionary *_commandMap;	// 24 = 0x18
    NSMutableDictionary *_syncKeyMap;	// 32 = 0x20
    NSMutableSet *_pendingServiceReloadNotifications;	// 40 = 0x28
    AFInstanceContext *_instanceContext;	// 48 = 0x30
}

+ (id)_serviceBundleIDFromServiceReloadNotification:(id)arg1;	// IMP=0x00400000000a56fb
+ (_Bool)isReloadServiceNotification:(id)arg1;	// IMP=0x00100000000a56dc
- (void).cxx_destruct;	// IMP=0x00200000000a61cd
- (void)_reloadServices:(id)arg1;	// IMP=0x00100000000a5c3d
- (void)reloadServicesForAllPendingServiceNotifications;	// IMP=0x00100000000a5a96
- (void)reloadServiceForNotification:(id)arg1;	// IMP=0x00100000000a596f
- (void)pendServiceReloadNotification:(id)arg1;	// IMP=0x00100000000a57ad
- (void)cancelOperationsForRequest:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x00100000000a554b
- (id)controlCenterLockRestrictedCommands;	// IMP=0x00100000000a539b
- (void)preheat;	// IMP=0x00100000000a5389
- (void)preheatBundleServices;	// IMP=0x00100000000a522d
- (void)preheatServicesForDomain:(id)arg1;	// IMP=0x00000000000a4f6f
- (void)setCommandCenterClient:(id)arg1;	// IMP=0x00100000000a4ef0
- (id)lockRestrictedCommands;	// IMP=0x00100000000a4d56
- (id)firstUnlockRestrictedCommands;	// IMP=0x00100000000a4ba6
- (id)allVocabSyncInfo;	// IMP=0x00100000000a4ad5
- (id)allSyncAnchorKeys;	// IMP=0x00100000000a4a85
- (void)reprioritizeService:(id)arg1;	// IMP=0x00100000000a4a73
- (void)removeService:(id)arg1;	// IMP=0x00100000000a4a61
- (void)addServiceWithLowPrecedence:(id)arg1;	// IMP=0x00100000000a4a4a
- (void)addService:(id)arg1;	// IMP=0x00100000000a4a36
- (id)serviceForSyncAnchorKey:(id)arg1;	// IMP=0x00100000000a47ae
- (id)serviceForDomain:(id)arg1 command:(id)arg2;	// IMP=0x00100000000a4672
- (id)serviceForIdentifier:(id)arg1;	// IMP=0x00100000000a45ef
- (id)servicesThatRequireBootMaintenance;	// IMP=0x00100000000a4538
- (id)allServices;	// IMP=0x00100000000a44e8
- (id)_pendingServiceReloadNotifications;	// IMP=0x00100000000a44ad
- (id)_syncKeyMap;	// IMP=0x00100000000a4488
- (id)_commandMap;	// IMP=0x00100000000a4463
- (id)_serviceMap;	// IMP=0x00100000000a443e
- (void)_loadServicesIfNeeded;	// IMP=0x00100000000a439a
- (void)_loadServiceFromBundlePath:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x00100000000a4219
- (id)_bundleServicesCache;	// IMP=0x00100000000a41eb
- (id)_bundleServicesCache:(_Bool *)arg1;	// IMP=0x00100000000a4028
- (void)_writeBundleServicesCache:(id)arg1 toPath:(id)arg2;	// IMP=0x00100000000a3ed7
- (id)_generatedBundleServicesCache;	// IMP=0x00100000000a3bb1
- (id)_buildFliteredInfoDictionaryFromBundleURL:(id)arg1;	// IMP=0x00100000000a386f
- (void)_reprioritizeService:(id)arg1;	// IMP=0x00100000000a32d5
- (void)_removeService:(id)arg1;	// IMP=0x00100000000a2c16
- (void)_addService:(id)arg1 precedence:(long long)arg2;	// IMP=0x00100000000a2b97
- (void)_addServiceWithRecord:(id)arg1;	// IMP=0x00100000000a23f0
- (id)init;	// IMP=0x00100000000a2396
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000000a22a9

@end

