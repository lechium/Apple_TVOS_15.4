//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    _Bool _isFaceProcessingComplete;	// 8 = 0x8
    _Bool _countCacheValid;	// 9 = 0x9
    _Bool _faceProcessingComplete;	// 10 = 0xa
    unsigned long long _cachedUnlockValue;	// 16 = 0x10
    unsigned long long _pendingCount;	// 24 = 0x18
    unsigned long long _processedCount;	// 32 = 0x20
    unsigned long long _totalCount;	// 40 = 0x28
    unsigned long long _prioritizedProcessedCount;	// 48 = 0x30
    unsigned long long _prioritizedTotalAllowedCount;	// 56 = 0x38
    PHFetchResult *_homeResult;	// 64 = 0x40
    PHFetchResult *_verifyResult;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_scanningProgressQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000004a6dbc
@property(nonatomic, getter=isFaceProcessingComplete) _Bool faceProcessingComplete; // @synthesize faceProcessingComplete=_faceProcessingComplete;
@property(readonly, nonatomic) _Bool isFaceProcessingComplete; // @synthesize isFaceProcessingComplete=_isFaceProcessingComplete;
@property(getter=isCountCacheValid) _Bool countCacheValid; // @synthesize countCacheValid=_countCacheValid;
@property(readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue; // @synthesize scanningProgressQueue=_scanningProgressQueue;
@property(retain, nonatomic) PHFetchResult *verifyResult; // @synthesize verifyResult=_verifyResult;
@property(retain, nonatomic) PHFetchResult *homeResult; // @synthesize homeResult=_homeResult;
@property(nonatomic) unsigned long long prioritizedTotalAllowedCount; // @synthesize prioritizedTotalAllowedCount=_prioritizedTotalAllowedCount;
@property(nonatomic) unsigned long long prioritizedProcessedCount; // @synthesize prioritizedProcessedCount=_prioritizedProcessedCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long processedCount; // @synthesize processedCount=_processedCount;
@property(nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
@property(nonatomic) unsigned long long cachedUnlockValue; // @synthesize cachedUnlockValue=_cachedUnlockValue;
- (id)_calculateAnalysisCounts;	// IMP=0x00000000004a6966
- (void)_appWillEnterForeground;	// IMP=0x00000000004a6916
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;	// IMP=0x00000000004a6818
- (double)_updateProgressFromFaceAnalysisProgressDictionary:(id)arg1;	// IMP=0x00000000004a65ba
@property(readonly, nonatomic) _Bool isPersonPromoterDone;
@property(readonly, nonatomic) unsigned long long homeMembersCount;
@property(readonly, nonatomic) unsigned long long prioritizedTotalAllowedAssetCount;
@property(readonly, nonatomic) unsigned long long prioritizedProcessedAssetCount;
@property(readonly, nonatomic) unsigned long long processedAssetCount;
@property(readonly, nonatomic) unsigned long long pendingAssetCount;
@property(readonly, nonatomic) unsigned long long totalAssetCount;
- (id)_faceAnalysisCounts;	// IMP=0x00000000004a63c5
- (void)asyncUpdatePeopleProgressWithReportBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a6314
- (void)syncUpdatePeopleProgressWithReportBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a627c
- (void)updateProgressIfNeededWithReportBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a61e1
- (void)loadQueryData;	// IMP=0x00000000004a60f5
- (void)dealloc;	// IMP=0x00000000004a6046
- (id)init;	// IMP=0x00000000004a5f78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

