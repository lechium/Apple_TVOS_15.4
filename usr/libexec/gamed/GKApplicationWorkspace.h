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

+ (id)defaultWorkspace;	// IMP=0x00400000000ab823
- (void).cxx_destruct;	// IMP=0x00200000000ac6d2
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (_Bool)wasProductionSignedForProcess:(int)arg1;	// IMP=0x00100000000ac557
- (_Bool)allowProductionForProcess:(int)arg1;	// IMP=0x00100000000ac54f
- (id)availableGamesAndIdentifiers;	// IMP=0x00100000000ac359
- (id)availableGameIdentifiers;	// IMP=0x00100000000ac0e0
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;	// IMP=0x00100000000abf51
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;	// IMP=0x00100000000abcb7
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x00100000000abc73
- (void)openGameCenterSettings;	// IMP=0x00100000000abc61
- (void)openURL:(id)arg1;	// IMP=0x00100000000aba96
- (void)openICloudSettings;	// IMP=0x00100000000aba39
- (void)openSettings;	// IMP=0x00100000000ab9dc
- (id)applicationProxyForBundleID:(id)arg1;	// IMP=0x00100000000ab98f
- (id)initWithWorkspace:(id)arg1;	// IMP=0x00100000000ab927

@end

