//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SpotlightSender : NSObject
{
}

+ (id)connectionForClient:(long long)arg1 jobType:(long long)arg2;	// IMP=0x000000000000bbd9
+ (void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;	// IMP=0x000000000000bb42
+ (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 client:(long long)arg3;	// IMP=0x000000000000baab
+ (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4;	// IMP=0x000000000000b9fa
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4;	// IMP=0x000000000000b949
+ (void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5;	// IMP=0x000000000000b86a
+ (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 retainedData:(id)arg4;	// IMP=0x000000000000b7b9
+ (void)deleteAllUserActivities:(id)arg1 client:(long long)arg2;	// IMP=0x000000000000b738
+ (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4;	// IMP=0x000000000000b687
+ (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;	// IMP=0x000000000000b5f0
+ (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;	// IMP=0x000000000000b559
+ (void)deleteAllSearchableItemsWithBundleID:(id)arg1 client:(long long)arg2;	// IMP=0x000000000000b4d8
+ (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;	// IMP=0x000000000000b441
+ (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 contentType:(id)arg3 client:(long long)arg4;	// IMP=0x000000000000b390
+ (void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3;	// IMP=0x000000000000b2f9
+ (void)addOrUpdateSearchableItems:(id)arg1 itemsContent:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5;	// IMP=0x000000000000b218
+ (void)dispatchWithOptions:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b0cb
+ (_Bool)jobForSuggestions:(long long)arg1;	// IMP=0x000000000000b0b5
+ (_Bool)jobForDuet:(long long)arg1;	// IMP=0x000000000000b0a0
+ (_Bool)jobForAssets:(long long)arg1;	// IMP=0x000000000000b089
+ (_Bool)jobForImages:(long long)arg1;	// IMP=0x000000000000b072
+ (_Bool)jobForTest:(long long)arg1;	// IMP=0x000000000000b05b
+ (_Bool)enabledForClient:(long long)arg1;	// IMP=0x000000000000b021
+ (id)clientConnection:(long long)arg1;	// IMP=0x000000000000afb0
+ (id)clientConnection:(long long)arg1 jobType:(int)arg2;	// IMP=0x000000000000af3f
+ (void)setup;	// IMP=0x000000000000af26

@end
