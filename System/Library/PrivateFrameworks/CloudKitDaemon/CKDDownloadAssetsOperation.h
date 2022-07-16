//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDownloadAssetsOperation
{
    CDUnknownBlockType _downloadPreparationBlock;	// 8 = 0x8
    CDUnknownBlockType _downloadProgressBlock;	// 16 = 0x10
    CDUnknownBlockType _downloadCommandBlock;	// 24 = 0x18
    CDUnknownBlockType _downloadCompletionBlock;	// 32 = 0x20
    CDUnknownBlockType _urlFilledOutBlock;	// 40 = 0x28
    NSMutableDictionary *_keyOrErrorForHostname;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSArray *_assetsToDownload;	// 64 = 0x40
    NSArray *_packageIndexSets;	// 72 = 0x48
    NSArray *_assetsToDownloadInMemory;	// 80 = 0x50
    NSArray *_assetURLInfosToFillOut;	// 88 = 0x58
    NSMutableArray *_MMCSItemsToDownload;	// 96 = 0x60
    NSMutableArray *_MMCSItemsToDownloadInMemory;	// 104 = 0x68
    NSMutableArray *_assetsToDownloadFromTranscoder;	// 112 = 0x70
    NSMutableArray *_assetsToDownloadFromTranscoderInMemory;	// 120 = 0x78
    NSMapTable *_downloadTasksByPackages;	// 128 = 0x80
    CKDCancelTokenGroup *_cancelTokens;	// 136 = 0x88
    unsigned long long _maxPackageDownloadsPerBatch;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000d74f8
@property(nonatomic) unsigned long long maxPackageDownloadsPerBatch; // @synthesize maxPackageDownloadsPerBatch=_maxPackageDownloadsPerBatch;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSMapTable *downloadTasksByPackages; // @synthesize downloadTasksByPackages=_downloadTasksByPackages;
@property(retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoderInMemory; // @synthesize assetsToDownloadFromTranscoderInMemory=_assetsToDownloadFromTranscoderInMemory;
@property(retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoder; // @synthesize assetsToDownloadFromTranscoder=_assetsToDownloadFromTranscoder;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory; // @synthesize MMCSItemsToDownloadInMemory=_MMCSItemsToDownloadInMemory;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToDownload; // @synthesize MMCSItemsToDownload=_MMCSItemsToDownload;
@property(retain, nonatomic) NSArray *assetURLInfosToFillOut; // @synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut;
@property(retain, nonatomic) NSArray *assetsToDownloadInMemory; // @synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory;
@property(retain, nonatomic) NSArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property(retain, nonatomic) NSArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname; // @synthesize keyOrErrorForHostname=_keyOrErrorForHostname;
@property(copy, nonatomic) CDUnknownBlockType urlFilledOutBlock; // @synthesize urlFilledOutBlock=_urlFilledOutBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCommandBlock; // @synthesize downloadCommandBlock=_downloadCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadPreparationBlock; // @synthesize downloadPreparationBlock=_downloadPreparationBlock;
- (void)_downloadTranscodedAsset:(id)arg1 inMemory:(_Bool)arg2;	// IMP=0x00000000000d5eeb
- (_Bool)shouldDownloadAssetFromTranscoder:(id)arg1;	// IMP=0x00000000000d5e00
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000000d5df8
- (void)main;	// IMP=0x00000000000d5c8b
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000d5bc0
- (void)cancel;	// IMP=0x00000000000d5b53
- (_Bool)_postProcess;	// IMP=0x00000000000d5767
- (void)_downloadMMCSItems:(id)arg1 downloadTasksByPackages:(id)arg2 shouldFetchAssetContentInMemory:(_Bool)arg3;	// IMP=0x00000000000d44a5
- (_Bool)_download;	// IMP=0x00000000000d3f51
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;	// IMP=0x00000000000d3762
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d289e
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d2700
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d124e
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;	// IMP=0x00000000000d10b2
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;	// IMP=0x00000000000d0e16
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;	// IMP=0x00000000000d026c
- (void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2;	// IMP=0x00000000000d01f4
- (void)_didMakeProgressForMMCSItem:(id)arg1 inMemory:(_Bool)arg2;	// IMP=0x00000000000d002a
- (void)_didDownloadMMCSItems:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000cfd6b
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;	// IMP=0x00000000000cfcd4
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;	// IMP=0x00000000000cfc21
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;	// IMP=0x00000000000cfae0
- (void)_didDownloadMMCSItem:(id)arg1 inMemory:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000cf375
- (_Bool)_prepareForDownload;	// IMP=0x00000000000cd369
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)arg1;	// IMP=0x00000000000cc982
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;	// IMP=0x00000000000cc7b8
- (void)_didCommandForAsset:(id)arg1 command:(id)arg2;	// IMP=0x00000000000cc522
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;	// IMP=0x00000000000cc377
- (void)_didPrepareAsset:(id)arg1;	// IMP=0x00000000000cc1e1
- (void)_removeUntrackedMMCSItems:(id)arg1;	// IMP=0x00000000000cbf9c
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000000cbf28
- (_Bool)makeStateTransition;	// IMP=0x00000000000cbd7d
- (id)CKStatusReportLogGroups;	// IMP=0x00000000000cbb8d
- (id)activityCreate;	// IMP=0x00000000000cbb64
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000cb9c3

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
