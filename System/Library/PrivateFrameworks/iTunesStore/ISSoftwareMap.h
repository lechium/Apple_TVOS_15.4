//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ISSoftwareMap : NSObject
{
    NSArray *_applications;	// 8 = 0x8
}

+ (void)_startWatchingInstallationNotifications;	// IMP=0x000000000004f65b
+ (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;	// IMP=0x000000000004f5dc
+ (void)startObservingNotifications;	// IMP=0x000000000004f592
+ (void)removableSystemApplicationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f362
+ (void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f0b8
+ (void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ee44
+ (id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2;	// IMP=0x000000000004ea80
+ (id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3;	// IMP=0x000000000004e9f8
+ (id)applicationForPluginBundleIdentifier:(id)arg1 extensionType:(id)arg2;	// IMP=0x000000000004e5c5
+ (id)applicationForPluginBundleIdentifier:(id)arg1;	// IMP=0x000000000004e5b1
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2;	// IMP=0x000000000004e2df
+ (id)applicationForBundleIdentifier:(id)arg1;	// IMP=0x000000000004e2c3
+ (void)setCurrentMap:(id)arg1;	// IMP=0x000000000004e26d
+ (id)loadedMap;	// IMP=0x000000000004e1fc
+ (void)invalidateCurrentMap;	// IMP=0x000000000004e1a3
+ (_Bool)currentMapIsValid;	// IMP=0x000000000004e178
+ (id)currentMap;	// IMP=0x000000000004e13a
+ (_Bool)haveApplicationsOfType:(id)arg1;	// IMP=0x000000000004de94
- (void)_loadFromMobileInstallation;	// IMP=0x000000000004f80d
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;	// IMP=0x000000000004e9cb
- (id)copySoftwareUpdatesPropertyList;	// IMP=0x000000000004e9b7
@property(readonly, nonatomic) NSArray *applications;
- (id)applicationForItemIdentifier:(id)arg1;	// IMP=0x000000000004e836
- (id)applicationForBundleIdentifier:(id)arg1;	// IMP=0x000000000004e6cc
- (void)dealloc;	// IMP=0x000000000004de51
- (id)init;	// IMP=0x000000000004dde0

@end

