//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface INSystemAppMapper : NSObject
{
    struct map<std::string, INSystemApp, std::less<std::string>, std::allocator<std::pair<const std::string, INSystemApp>>> _mapping;	// 8 = 0x8
    NSDictionary *_bundleIdentifierGroupingForIntentExecution;	// 32 = 0x20
}

+ (id)supportedIntentsOverridesForBundleIdentifier:(id)arg1;	// IMP=0x00000000004cbfbd
- (id).cxx_construct;	// IMP=0x00000000004cb9be
- (void).cxx_destruct;	// IMP=0x00000000004cb994
- (id)resolvedIntentForAccessibilityActionWithBundleIdentifier:(id)arg1 intentClassName:(id)arg2;	// IMP=0x00000000004cb6f9
- (id)extensionToDisplayableAppBundleIdentifierMapping;	// IMP=0x00000000004cb14a
- (id)extensionToLaunchableAppBundleIdentifierMapping;	// IMP=0x00000000004ca8e0
- (id)bundleIdentifiersForIntentExecutionMatchingBundleIdentifier:(id)arg1;	// IMP=0x00000000004ca79f
- (id)launchableBundleIdentifierMatchingBundleIdentifier:(id)arg1;	// IMP=0x00000000004ca65d
- (id)resolvedIntentMatchingAppBundleIdentifier:(id)arg1 preferredCallProvider:(long long)arg2 intentClassName:(id)arg3;	// IMP=0x00000000004ca283
- (id)resolvedIntentMatchingExtensionBundleIdentifier:(id)arg1 preferredCallProvider:(long long)arg2 intentClassName:(id)arg3;	// IMP=0x00000000004c9dee
- (id)resolvedAppMatchingExtensionBundleIdentifier:(id)arg1;	// IMP=0x00000000004c9a91
- (id)init;	// IMP=0x00000000004c8157

@end
