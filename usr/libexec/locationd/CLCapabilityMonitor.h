//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLCapabilityMonitor : CLIntersiloService
{
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::default_delete<CLDarwinNotifier_Type::Client>> _darwinClient;	// 8 = 0x8
    _Bool _supervised;	// 16 = 0x10
    _Bool _iCloudManagedAppleID;	// 17 = 0x11
    _Bool _iTunesManagedAppleID;	// 18 = 0x12
    _Bool _installedEducationProfile;	// 19 = 0x13
    NSMutableSet *_capabilityChangeClients;	// 24 = 0x18
}

+ (id)getSilo;	// IMP=0x00200000004f980a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f97f1
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004f9794
- (id).cxx_construct;	// IMP=0x00200000004fac8f
- (void).cxx_destruct;	// IMP=0x00100000004fac67
@property(retain, nonatomic) NSMutableSet *capabilityChangeClients; // @synthesize capabilityChangeClients=_capabilityChangeClients;
@property(nonatomic) _Bool installedEducationProfile; // @synthesize installedEducationProfile=_installedEducationProfile;
@property(nonatomic) _Bool iTunesManagedAppleID; // @synthesize iTunesManagedAppleID=_iTunesManagedAppleID;
@property(nonatomic) _Bool iCloudManagedAppleID; // @synthesize iCloudManagedAppleID=_iCloudManagedAppleID;
@property(nonatomic) _Bool supervised; // @synthesize supervised=_supervised;
- (_Bool)syncgetForceCacheUpdate;	// IMP=0x00100000004fabf0
- (void)stopMonitoringCapabilityChangeForClient:(byref id)arg1;	// IMP=0x00100000004fab99
- (void)startMonitoringCapabilityChangeForClient:(byref id)arg1;	// IMP=0x00100000004fab42
- (void)onCapabilityChange;	// IMP=0x00100000004faad1
- (void)updateLocationDictionaryCachedCapabilities;	// IMP=0x00100000004fa8d1
- (_Bool)hasCapability:(id)arg1;	// IMP=0x00100000004fa760
- (void)onDarwinNotification:(int)arg1 data:(CDStruct_2920cfb7)arg2;	// IMP=0x00100000004fa5a0
- (void)updateITunesManagedAppleID;	// IMP=0x00100000004fa3f2
- (void)updateInstalledEducationProfile;	// IMP=0x00100000004fa090
- (void)updateICloudManagedAppleID;	// IMP=0x00100000004f9ca4
- (void)updateSupervised;	// IMP=0x00100000004f9ad7
- (void)endService;	// IMP=0x00100000004f9a34
- (void)beginService;	// IMP=0x00100000004f98a3
- (id)init;	// IMP=0x00100000004f9866

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

