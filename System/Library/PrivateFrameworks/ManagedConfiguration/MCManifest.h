//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject
{
    NSString *_systemFilePath;	// 8 = 0x8
    NSString *_userFilePath;	// 16 = 0x10
    NSMutableDictionary *_systemManifest;	// 24 = 0x18
    NSMutableDictionary *_userManifest;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
}

+ (id)installedUserProfileDataWithIdentifier:(id)arg1;	// IMP=0x000000000001e3f6
+ (id)installedSystemProfileDataWithIdentifier:(id)arg1;	// IMP=0x000000000001e2f3
+ (id)installedProfileDataWithIdentifier:(id)arg1;	// IMP=0x000000000001e27e
+ (id)installedUserProfileWithIdentifier:(id)arg1;	// IMP=0x000000000001e13d
+ (id)installedSystemProfileWithIdentifier:(id)arg1;	// IMP=0x000000000001e0db
+ (id)installedProfileWithIdentifier:(id)arg1;	// IMP=0x000000000001e02f
+ (id)sharedManifest;	// IMP=0x000000000001dfda
+ (void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2;	// IMP=0x000000000001df70
- (void).cxx_destruct;	// IMP=0x000000000001f886
- (void)invalidateCache;	// IMP=0x000000000001f7fa
- (void)_adjustManifestIdentifier:(id)arg1 isUserInstall:(_Bool)arg2 flag:(int)arg3 addingIdentifier:(_Bool)arg4;	// IMP=0x000000000001f4d3
- (void)removeIdentifierFromUserManifest:(id)arg1 flag:(int)arg2;	// IMP=0x000000000001f4b6
- (void)removeIdentifierFromSystemManifest:(id)arg1 flag:(int)arg2;	// IMP=0x000000000001f49c
- (void)addIdentifierToUserManifest:(id)arg1 flag:(int)arg2;	// IMP=0x000000000001f47c
- (void)addIdentifierToSystemManifest:(id)arg1 flag:(int)arg2;	// IMP=0x000000000001f45f
- (id)allInstalledPayloadsOfClass:(Class)arg1;	// IMP=0x000000000001f13e
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1;	// IMP=0x000000000001ee2d
- (id)allInstalledSystemProfileIdentifiers;	// IMP=0x000000000001ee16
- (id)allInstalledUserProfileIdentifiers;	// IMP=0x000000000001edff
- (id)allInstalledProfileIdentifiers;	// IMP=0x000000000001ede8
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;	// IMP=0x000000000001ec52
- (void)_setSystemManifest:(id)arg1 userManifest:(id)arg2;	// IMP=0x000000000001eb5c
- (id)userManifest;	// IMP=0x000000000001ea65
- (id)systemManifest;	// IMP=0x000000000001e949
- (id)_userManifest;	// IMP=0x000000000001e854
- (id)_systemManifest;	// IMP=0x000000000001e641
- (void)dealloc;	// IMP=0x000000000001e5eb
- (id)init;	// IMP=0x000000000001e512
- (id)installedProfileDataWithIdentifier:(id)arg1;	// IMP=0x000000000001e4f9
- (id)installedMDMProfile;	// IMP=0x000000000001e1ea
- (id)installedUserProfileWithIdentifier:(id)arg1;	// IMP=0x000000000001e1d1
- (id)installedSystemProfileWithIdentifier:(id)arg1;	// IMP=0x000000000001e1b8
- (id)installedProfileWithIdentifier:(id)arg1;	// IMP=0x000000000001e19f

@end

