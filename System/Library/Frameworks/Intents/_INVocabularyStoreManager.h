//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _INVocabularyValidator;
@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _INVocabularyValidator *_validator;	// 16 = 0x10
    NSString *_appBundleID;	// 24 = 0x18
    NSString *_baseDirectoryPath;	// 32 = 0x20
    NSString *_appBundlePath;	// 40 = 0x28
}

+ (void)deleteAllUserVocabularyFromAllAppsAsync;	// IMP=0x000000000004fa57
+ (void)_iterateVocabularyWithSummary:(id)arg1 optionalBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f7a1
+ (id)savedCustomVocabularyOverviewDictionary;	// IMP=0x000000000004f74d
+ (void)enumerateVocabularyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f72f
+ (id)_latestVocabularyStringsAt:(id)arg1;	// IMP=0x000000000004f3ab
+ (id)managerForBundleID:(id)arg1 bundlePath:(id)arg2;	// IMP=0x000000000004f26e
+ (id)appDatastoreDirectoryForAppBundleID:(id)arg1 bundlePath:(id)arg2;	// IMP=0x000000000004f1a0
+ (id)_hashOfAppPath:(id)arg1;	// IMP=0x000000000004f05d
+ (id)_customVocabularyDirectory;	// IMP=0x000000000004f00f
+ (id)_globalClassQueue;	// IMP=0x000000000004efac
- (void).cxx_destruct;	// IMP=0x000000000004ecce
@property(copy, nonatomic) NSString *appBundlePath; // @synthesize appBundlePath=_appBundlePath;
@property(readonly, copy, nonatomic) NSString *baseDirectoryPath; // @synthesize baseDirectoryPath=_baseDirectoryPath;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
- (void)writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ebab
- (void)checkIfSyncSlot:(id)arg1 isAllowedWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ea00
- (void)_writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e715
- (id)deleteEverything;	// IMP=0x000000000004e5af
- (id)getPathToLatestVocabulary:(id *)arg1 pathDuringReading:(id *)arg2 sentVocabulary:(id *)arg3 forIntentSlot:(id)arg4;	// IMP=0x000000000004e4df
- (id)deleteIntentSlot:(id)arg1;	// IMP=0x000000000004e435
- (id)deleteVocabularyStoreItemAt:(id)arg1;	// IMP=0x000000000004e275
- (id)_validator;	// IMP=0x000000000004e23a
- (id)init;	// IMP=0x000000000004e217
- (id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 appBundlePath:(id)arg3;	// IMP=0x000000000004e09f
- (id)_baseDirectoryPathForIntentSlot:(id)arg1;	// IMP=0x000000000004dfdb
- (id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2;	// IMP=0x000000000004dee0

@end

