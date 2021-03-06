//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString, REKeyValueMap;
@protocol OS_dispatch_queue;

@interface REApplicationCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_applicationTypes;	// 16 = 0x10
    NSMutableDictionary *_restrictedApps;	// 24 = 0x18
    NSMutableDictionary *_removedApps;	// 32 = 0x20
    NSMutableDictionary *_watchKitExtensions;	// 40 = 0x28
    REKeyValueMap *_remoteApplicationsMap;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000000002391d
- (void).cxx_destruct;	// IMP=0x0000000000026411
- (unsigned long long)_typeForProxy:(id)arg1;	// IMP=0x0000000000026394
- (void)_queue_applicationsDidChange:(id)arg1;	// IMP=0x000000000002615d
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000025c59
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000002548a
- (void)applicationStateDidChange:(id)arg1;	// IMP=0x00000000000252c7
- (void)_queue_loadStateForBundleID:(id)arg1;	// IMP=0x0000000000025072
- (void)_init_loadApplicationTypesMapFromWorkspace:(id)arg1;	// IMP=0x0000000000024d3c
- (void)_clearApplicationTypesMap;	// IMP=0x0000000000024cd7
- (void)_queue_loadApplicationWorkspace:(CDUnknownBlockType)arg1;	// IMP=0x00000000000249cc
- (unsigned long long)_trackedApplicationCount;	// IMP=0x0000000000024911
- (unsigned long long)typeForApplication:(id)arg1;	// IMP=0x00000000000247e0
- (id)watchKitExtensionForApplication:(id)arg1;	// IMP=0x00000000000243b5
- (void)_accessRemoteApplicationsMapWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000241d4
- (id)remoteApplicationForLocalApplication:(id)arg1;	// IMP=0x000000000002403f
- (id)localApplicationForRemoteApplication:(id)arg1;	// IMP=0x0000000000023e85
- (_Bool)applicationIsRemote:(id)arg1;	// IMP=0x0000000000023e7d
- (_Bool)_queue_applicationIsRestricted:(id)arg1;	// IMP=0x0000000000023ddb
- (_Bool)applicationIsRestricted:(id)arg1;	// IMP=0x0000000000023cd8
- (_Bool)_queue_applicationIsRemoved:(id)arg1;	// IMP=0x0000000000023c36
- (_Bool)applicationIsRemoved:(id)arg1;	// IMP=0x0000000000023b33
- (void)dealloc;	// IMP=0x0000000000023abe
- (id)_init;	// IMP=0x0000000000023982

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

