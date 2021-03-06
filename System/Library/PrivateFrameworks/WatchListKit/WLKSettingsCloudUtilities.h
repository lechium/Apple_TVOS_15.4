//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WLKSettingsCloudUtilities : NSObject
{
}

+ (id)_queue;	// IMP=0x00000000000301ea
+ (id)_connection;	// IMP=0x0000000000030080
+ (void)_postChangeDictionaryToCloud:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002faf1
+ (void)_fetchSyncDictionary:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f0ae
+ (id)_syncDictionaryForAppSettings:(id)arg1;	// IMP=0x000000000002ef14
+ (id)_syncDictionaryForLocalStore;	// IMP=0x000000000002ebe2
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e6b8
+ (_Bool)synchronizeSettingsFromCloudIfNeeded:(id *)arg1;	// IMP=0x000000000002e4c8
+ (void)updateLocalStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e310
+ (_Bool)cloudSyncEnabled;	// IMP=0x000000000002e219
+ (void)resetAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002df84
+ (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002df61
+ (void)deleteAllHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002df3e
+ (void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002dcb9
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 removeEntry:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d931
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d919
+ (void)updateCloudStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d786

@end

