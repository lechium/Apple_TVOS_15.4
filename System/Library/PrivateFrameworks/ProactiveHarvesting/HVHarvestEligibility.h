//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HVHarvestEligibility : NSObject
{
}

+ (_Bool)searchableItemIsEligibleForHarvestingWithGetterBlock:(CDUnknownBlockType)arg1 bundleIdentifier:(id)arg2 eligibleExceptForAge:(_Bool *)arg3;	// IMP=0x000000000001e33f
+ (_Bool)searchableItemIsStoredEncryptedWithGetterBlock:(CDUnknownBlockType)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000001e337
+ (_Bool)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(_Bool *)arg2;	// IMP=0x000000000001e26f
+ (_Bool)searchableItemIsEligibleForDissectorPipeline:(id)arg1 targetPluginsCustomAttributeName:(id)arg2;	// IMP=0x000000000001df72
+ (_Bool)searchableItemIsEligibleForDeferredHarvesting:(id)arg1;	// IMP=0x000000000001dea8

@end

