//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PSAppUsageUtilities : NSObject
{
}

+ (void)cacheSharingAppUsageDurations:(id)arg1;	// IMP=0x0000000000056952
+ (id)sharingAppUsageDurations;	// IMP=0x00000000000568bf
+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3;	// IMP=0x0000000000055f7b
+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1;	// IMP=0x0000000000055a86
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3;	// IMP=0x0000000000054ef6
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2;	// IMP=0x0000000000054911

@end

