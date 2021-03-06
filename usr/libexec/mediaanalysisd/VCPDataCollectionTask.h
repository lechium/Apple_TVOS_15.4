//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPDatabaseWriter;

@interface VCPDataCollectionTask
{
    VCPDatabaseWriter *_database;	// 8 = 0x8
}

+ (id)taskWithPhotoLibrary:(id)arg1;	// IMP=0x004000000004780a
- (void).cxx_destruct;	// IMP=0x002000000004ad11
- (int)mainInternal;	// IMP=0x001000000004a9fa
- (int)_collectAndReportProgress;	// IMP=0x0010000000049c45
- (_Bool)queryBackgroundAnalysisMetrics:(id)arg1 withNormalizeRatio:(double *)arg2;	// IMP=0x0010000000049886
- (int)updateAnalysisProgressMetrics:(id)arg1;	// IMP=0x00100000000493ce
- (int)processAssetBatch:(id)arg1 withDatabase:(id)arg2 andStatistics:(id)arg3 andVersionTime:(long long)arg4 andCurrentTime:(long long)arg5;	// IMP=0x0010000000048a98
- (void)updateAnalyzedProgressStatistics:(id)arg1 hasResource:(_Bool)arg2 timeElapsed:(long long)arg3;	// IMP=0x0010000000048a08
- (void)updateOutdatedProgressStatistics:(id)arg1 hasResource:(_Bool)arg2;	// IMP=0x0010000000048980
- (void)updateUnanalyzedProgressStatistics:(id)arg1 hasResource:(_Bool)arg2 isNewAsset:(_Bool)arg3 timeElapsed:(long long)arg4;	// IMP=0x00100000000487ee
- (int)resetBackgroundAnalysisMetrics;	// IMP=0x0010000000048453
- (int)resetDailyBackgroundAnalysisMetrics;	// IMP=0x00100000000481b1
- (int)updateLivePhotoEffectsStatistics:(id)arg1;	// IMP=0x0010000000047f81
- (int)updateLivePhotoStatistics:(id)arg1 withFetchResult:(id)arg2 forAnalysisTypes:(id)arg3;	// IMP=0x001000000004786f
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0010000000047752

@end

