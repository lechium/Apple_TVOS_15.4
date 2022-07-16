//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>

@class CKDServerConfiguration, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>
{
    _Bool _shouldDropAllConfigurations;	// 8 = 0x8
    int _iCloudEnvNotifToken;	// 12 = 0xc
    NSObject<OS_dispatch_source> *_switchNotifSource;	// 16 = 0x10
    NSOperationQueue *_configurationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    CKDServerConfiguration *_globalConfiguration;	// 40 = 0x28
    NSMutableSet *_globalConfigurationOps;	// 48 = 0x30
    NSOperationQueue *_containerSpecificInfoQueue;	// 56 = 0x38
    NSMutableDictionary *_containerSpecificInfos;	// 64 = 0x40
    NSMutableDictionary *_containerSpecificInfoOperations;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_propertyQueue;	// 80 = 0x50
}

+ (id)sharedManager;	// IMP=0x0000000000221044
- (void).cxx_destruct;	// IMP=0x00000000002255fd
@property(nonatomic) _Bool shouldDropAllConfigurations; // @synthesize shouldDropAllConfigurations=_shouldDropAllConfigurations;
@property(nonatomic) int iCloudEnvNotifToken; // @synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // @synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfos; // @synthesize containerSpecificInfos=_containerSpecificInfos;
@property(retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // @synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue;
@property(retain, nonatomic) NSMutableSet *globalConfigurationOps; // @synthesize globalConfigurationOps=_globalConfigurationOps;
@property(retain, nonatomic) CKDServerConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSOperationQueue *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource; // @synthesize switchNotifSource=_switchNotifSource;
- (id)CKStatusReportArray;	// IMP=0x0000000000224dfd
- (void)expireConfigurationForContainer:(id)arg1;	// IMP=0x0000000000224a83
- (void)expireGlobalConfiguration;	// IMP=0x00000000002249fa
- (void)_writeOutiCloudAppSiteAssociationData:(id)arg1;	// IMP=0x0000000000224343
- (void)wipeAllConfigurations;	// IMP=0x00000000002242e1
- (void)_reallyDropAllConfigurations;	// IMP=0x0000000000224133
- (void)containerServerInfoForOperation:(id)arg1 requireUserIDs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000223845
- (void)configurationForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002231eb
- (void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000221cd8
- (void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000221099
- (void)dealloc;	// IMP=0x0000000000220ffd
- (id)init;	// IMP=0x0000000000220d59
- (void)_watchForSwitchPrefFileChanges;	// IMP=0x000000000022093b
- (id)_uniqueStringForContainer:(id)arg1;	// IMP=0x000000000022079b
- (_Bool)systemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x000000000022075d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

