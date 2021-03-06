//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLAggdLogging : NSObject
{
}

+ (id)_fetchPersistentHistoryStatsWithLibraryPathManager:(id)arg1;	// IMP=0x0000000000431b76
+ (void)_addPersistentHistoryStatsToLibrarySummaryEvent:(id)arg1 withLibraryPathManager:(id)arg2;	// IMP=0x000000000043195c
+ (void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000431779
+ (void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(_Bool)arg2;	// IMP=0x0000000000430b2c
+ (void)_configureEnumeratorForLibrarySummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(_Bool)arg2 dataForCA:(id)arg3;	// IMP=0x00000000004306f0
+ (void)_configureEnumeratorForSyndicationLibrarySummaryLogging:(id)arg1 dataForCA:(id)arg2;	// IMP=0x00000000004303d7
+ (void)configureEnumeratorForLibrarySummaryForLibraryEnumerator:(id)arg1 withSyndicationLibraryEnumerator:(id)arg2 cloudPhotoLibraryEnabled:(_Bool)arg3 dataForCA:(id)arg4;	// IMP=0x0000000000430348
+ (void)configureEnumeratorForHyperionLocalResourcesLogging:(id)arg1 cloudPhotoLibraryEnabled:(_Bool)arg2 dataForCA:(id)arg3 dataForCK:(id)arg4;	// IMP=0x000000000043007c
+ (void)configureEnumeratorForLibrarySizeLogging:(id)arg1 cloudPhotoLibraryEnabled:(_Bool)arg2 dataForCA:(id)arg3 dataForCK:(id)arg4;	// IMP=0x000000000042ff1e
+ (void)_addLibrarySummaryDataToCollectionIfPresent:(id)arg1 fromCPLEventData:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000042fe56
+ (void)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2 inPrefixedDictionary:(id)arg3;	// IMP=0x000000000042fd9b
+ (id)_analyticsDescriptionForAssetCount:(long long)arg1;	// IMP=0x000000000042fced
+ (id)_analyticsDescriptionForMediaAge:(double)arg1;	// IMP=0x000000000042fbe8
+ (void)_addDistributionStatisticsOfValues:(id)arg1 withPrefix:(id)arg2 toDictionary:(id)arg3 formatter:(CDUnknownBlockType)arg4;	// IMP=0x000000000042f766
+ (void)performSlideshowProjectStatisticsLogging:(id)arg1;	// IMP=0x000000000042f0dd
+ (void)performMomentsStatisticsLogging:(id)arg1;	// IMP=0x000000000042e8fa

@end

