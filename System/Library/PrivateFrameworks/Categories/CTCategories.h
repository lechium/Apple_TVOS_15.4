//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSString;

@interface CTCategories : NSObject
{
    NSString *_indexVersionId;	// 8 = 0x8
    NSLock *_lookupLock;	// 16 = 0x10
}

+ (long long)currentIOSDevice;	// IMP=0x00000000000052c0
+ (id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)arg1;	// IMP=0x00000000000050d0
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1;	// IMP=0x0000000000004cfc
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1;	// IMP=0x0000000000004980
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1;	// IMP=0x0000000000004619
+ (id)sharedCategories;	// IMP=0x0000000000001fb3
+ (void)initialize;	// IMP=0x0000000000001d0c
- (void).cxx_destruct;	// IMP=0x00000000000052c8
- (void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004016
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000387a
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003125
- (void)categoryForDomainURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002f8c
- (void)categoryForDomainName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002df3
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002dd7
- (void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000024ac
- (void)categoryForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000230c
- (void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000213f
- (id)bundleIDForPlatform:(id)arg1 fromBundleID:(id)arg2 platform:(id)arg3;	// IMP=0x0000000000002126
@property(readonly, copy) NSArray *availableCategoryIDs;
- (void)_emptySharedCache:(id)arg1;	// IMP=0x000000000000208b
- (void)dealloc;	// IMP=0x0000000000001eda
- (id)init;	// IMP=0x0000000000001d9a

@end

