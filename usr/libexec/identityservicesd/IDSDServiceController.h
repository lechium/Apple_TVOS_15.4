//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSServiceProperties, NSArray, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface IDSDServiceController : NSObject
{
    NSMapTable *_services;	// 8 = 0x8
    NSMapTable *_servicesToNameMap;	// 16 = 0x10
    NSMapTable *_servicesToTopicMap;	// 24 = 0x18
    NSMutableDictionary *_deviceIDToSubServicesMap;	// 32 = 0x20
    NSSet *_allAdHocServices;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (_Bool)shouldLoadService:(id)arg1;	// IMP=0x004000000066adb0
+ (id)sharedInstance;	// IMP=0x001000000066acf0
- (void).cxx_destruct;	// IMP=0x00200000006711e0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *allAdHocServices; // @synthesize allAdHocServices=_allAdHocServices;
- (id)adHocServicesForIdentifier:(id)arg1;	// IMP=0x0010000000670b20
- (id)primaryServiceForAdhocServiceType:(unsigned int)arg1;	// IMP=0x0010000000670990
- (id)linkedServicesForService:(id)arg1;	// IMP=0x00100000006705d0
- (id)serviceWithPushTopic:(id)arg1;	// IMP=0x00100000006704c0
- (id)serviceWithName:(id)arg1;	// IMP=0x00100000006703b0
- (id)serviceWithIdentifier:(id)arg1;	// IMP=0x0010000000670310
@property(readonly, nonatomic) __weak NSArray *allServicesStrings;
@property(readonly, nonatomic) __weak NSArray *allFamilyServices;
@property(readonly, nonatomic) __weak NSArray *allTinkerServices;
@property(readonly, nonatomic) __weak NSArray *allServices;
@property(readonly, nonatomic) NSSet *allPrimaryServices;
- (id)allServicesWithAdHocServiceType:(unsigned int)arg1;	// IMP=0x001000000066fe20
- (id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2;	// IMP=0x001000000066fd30
- (void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3;	// IMP=0x001000000066fad0
- (_Bool)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2;	// IMP=0x001000000066f540
- (id)_combinedServicesForAllDevices;	// IMP=0x001000000066efb0
- (void)_loadSubServices;	// IMP=0x001000000066dbf0
- (void)_saveSubServices;	// IMP=0x001000000066d970
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x001000000066c390
- (void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000066bfa0
- (void)_unloadServiceWithName:(id)arg1;	// IMP=0x001000000066be10
- (void)_loadService:(id)arg1;	// IMP=0x001000000066bac0
- (void)_loadServices;	// IMP=0x001000000066b0c0
@property(readonly, nonatomic) IDSServiceProperties *iCloudService;
@property(readonly, nonatomic) IDSServiceProperties *iTunesService;
- (id)userDefaults;	// IMP=0x001000000066ac60
- (id)serviceLoader;	// IMP=0x001000000066ac30
- (id)init;	// IMP=0x001000000066aad0

@end

