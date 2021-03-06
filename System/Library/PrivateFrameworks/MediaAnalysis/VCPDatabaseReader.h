//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPDatabaseReader : NSObject
{
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;	// 8 = 0x8
    NSString *_filepath;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
}

+ (id)databaseForPhotoLibrary:(id)arg1;	// IMP=0x0000000000039c22
+ (_Bool)shouldQueryInternalFields;	// IMP=0x0000000000039b00
- (void).cxx_destruct;	// IMP=0x000000000003f7be
- (int)querySchedulingHistoryRecords:(id *)arg1 forActivityID:(unsigned long long)arg2 sinceDate:(id)arg3;	// IMP=0x000000000003f34b
- (long long)valueForKey:(id)arg1;	// IMP=0x000000000003f217
- (int)_queryValue:(long long *)arg1 forKey:(id)arg2;	// IMP=0x000000000003f064
- (unsigned long long)countForTaskID:(unsigned long long)arg1 withProcessingStatus:(unsigned long long)arg2;	// IMP=0x000000000003eeff
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2;	// IMP=0x000000000003ec15
- (id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x000000000003e3d9
- (id)queryAssetsAnalyzedSince:(id)arg1;	// IMP=0x000000000003dfa7
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;	// IMP=0x000000000003d87c
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;	// IMP=0x000000000003d503
- (id)queryAnalysisPropertiesForAssets:(id)arg1;	// IMP=0x000000000003cea3
- (id)queryAnalysisPropertiesForAsset:(id)arg1;	// IMP=0x000000000003cc65
- (id)queryAnalysisForAsset:(id)arg1;	// IMP=0x000000000003c9e8
- (id)queryBlacklistedLocalIdentifiers;	// IMP=0x000000000003c717
- (id)blacklistedLocalIdentifiersFromAssets:(id)arg1;	// IMP=0x000000000003c095
- (_Bool)isAssetBlacklisted:(id)arg1 blacklistDate:(id *)arg2;	// IMP=0x000000000003bd7d
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bbd8
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;	// IMP=0x000000000003b436
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;	// IMP=0x000000000003ae5e
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;	// IMP=0x000000000003a9bb
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;	// IMP=0x000000000003a850
- (int)queryHeaderForAsset:(id)arg1 analysis:(id *)arg2 assetId:(long long *)arg3;	// IMP=0x000000000003a613
- (int)parseResults:(struct sqlite3_stmt *)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;	// IMP=0x000000000003a350
- (int)parseHeader:(struct sqlite3_stmt *)arg1 startColumn:(int)arg2 analysis:(id)arg3;	// IMP=0x0000000000039e87
- (void)closeDatabase;	// IMP=0x0000000000039e13
- (int)openDatabase;	// IMP=0x0000000000039d0b
- (void)dealloc;	// IMP=0x0000000000039c87
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000039b08

@end

