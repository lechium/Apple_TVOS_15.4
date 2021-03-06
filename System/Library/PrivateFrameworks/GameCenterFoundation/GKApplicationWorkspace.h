//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;	// 8 = 0x8
}

+ (id)defaultWorkspace;	// IMP=0x00000000000da87c
- (void).cxx_destruct;	// IMP=0x00000000000db154
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;	// IMP=0x00000000000dafaa
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;	// IMP=0x00000000000dad10
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x00000000000daccc
- (void)openGameCenterSettings;	// IMP=0x00000000000dacba
- (void)openURL:(id)arg1;	// IMP=0x00000000000daaef
- (void)openICloudSettings;	// IMP=0x00000000000daa92
- (void)openSettings;	// IMP=0x00000000000daa35
- (id)applicationProxyForBundleID:(id)arg1;	// IMP=0x00000000000da9e8
- (id)initWithWorkspace:(id)arg1;	// IMP=0x00000000000da980

@end

