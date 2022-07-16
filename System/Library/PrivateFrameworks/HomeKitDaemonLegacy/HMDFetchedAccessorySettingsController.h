//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDFetchedSettingsDriverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDFetchedAccessorySettingsControllerMutableKeyPathMap, NSMutableSet, NSString;
@protocol HMDFetchedAccessorySettingsControllerDataSource, OS_dispatch_queue;

@interface HMDFetchedAccessorySettingsController : NSObject <HMDFetchedSettingsDriverDelegate, HMFLogging, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <HMDFetchedAccessorySettingsControllerDataSource> _dataSource;	// 16 = 0x10
    HMDFetchedAccessorySettingsControllerMutableKeyPathMap *_driverMap;	// 24 = 0x18
    NSMutableSet *_pendingFetchKeyPaths;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000009c2c1b
- (void).cxx_destruct;	// IMP=0x00000000009c03bd
@property(retain) NSMutableSet *pendingFetchKeyPaths; // @synthesize pendingFetchKeyPaths=_pendingFetchKeyPaths;
@property(readonly) HMDFetchedAccessorySettingsControllerMutableKeyPathMap *driverMap; // @synthesize driverMap=_driverMap;
@property(readonly) id <HMDFetchedAccessorySettingsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)driverDidReload:(id)arg1;	// IMP=0x00000000009bffaf
- (void)driver:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x00000000009bfbd7
- (void)languageValueListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009bfb26
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009bfa1c
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009bf940
- (void)start;	// IMP=0x00000000009bf8cf
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 drivers:(id)arg3;	// IMP=0x00000000009bf5ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

