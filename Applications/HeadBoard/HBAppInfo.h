//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, NSURL, PBSAppInfo, PBSBadgeValue;

@interface HBAppInfo : NSObject
{
    _Bool _uninstalling;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    PBSAppInfo *_appInfo;	// 32 = 0x20
}

+ (id)_pbsAppInfoKeysForBadgeValue;	// IMP=0x002000000005a3be
+ (id)_pbsAppInfoKeysForDotStyle;	// IMP=0x001000000005a31f
+ (id)_pbsAppInfoKeysForTerminationAssertion;	// IMP=0x001000000005a2af
+ (id)_pbsAppInfoKeysForDisplayName;	// IMP=0x001000000005a210
+ (id)_pbsAppInfoKeysForInstallState;	// IMP=0x001000000005a198
- (void).cxx_destruct;	// IMP=0x002000000005a68a
@property(nonatomic, getter=isUninstalling) _Bool uninstalling; // @synthesize uninstalling=_uninstalling;
@property(retain, nonatomic, getter=_appInfo, setter=_setAppInfo:) PBSAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)iconCache:(id)arg1 didUpdateCacheForBundleID:(id)arg2;	// IMP=0x001000000005a457
- (id)_observersUnlessUninstalling;	// IMP=0x001000000005a436
- (id)_placeholderDisplayName;	// IMP=0x0010000000059fd7
- (_Bool)_placeholderShouldDisplayLocalizedName;	// IMP=0x0010000000059f11
- (void)_notifyObserversWithChanges:(id)arg1;	// IMP=0x0010000000059b58
@property(readonly, nonatomic) double lastModifiedDate;
@property(readonly, nonatomic) PBSBadgeValue *badgeValue;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000596d1
- (void)addObserver:(id)arg1;	// IMP=0x00100000000596bb
@property(readonly, nonatomic) long long installState;
@property(readonly, nonatomic) long long applicationType;
@property(readonly, nonatomic, getter=isRecentlyUpdated) _Bool recentlyUpdated;
@property(readonly, nonatomic, getter=isBetaApp) _Bool betaApp;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) double installProgress;
@property(readonly, nonatomic, getter=isXcodeApp) _Bool xcodeApp;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted;
@property(readonly, nonatomic, getter=isUsingCloudKit) _Bool usingCloudKit;
@property(readonly, nonatomic, getter=isAnyTerminationAssertionInEffection) _Bool anyTerminationAssertionInEffection;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000590c9
- (id)_initWithAppInfo:(id)arg1;	// IMP=0x0010000000058f2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
