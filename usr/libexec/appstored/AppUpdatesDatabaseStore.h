//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppUpdatesDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x004000000010315d
+ (id)storeDescriptor;	// IMP=0x0010000000102308
+ (id)sharedInstance;	// IMP=0x0010000000102215
- (_Bool)setUpdateState:(long long)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x0040000000103030
- (_Bool)setUpdateState:(long long)arg1 forBundleIDs:(id)arg2 logKey:(id)arg3;	// IMP=0x0010000000102bfe
- (_Bool)resetUpdateWithBundleID:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000102a86
- (_Bool)finishAppUpdateForBundleID:(id)arg1 withUpdateState:(long long)arg2;	// IMP=0x00100000001025be
- (void)convertBackgroundUpdateToForeground:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000010237d

@end

