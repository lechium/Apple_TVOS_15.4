//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDCKCacheDeleteManager : NSObject
{
    _Bool _alreadyCapturedErrorWithAutoBugCapture;	// 8 = 0x8
    _Bool _allowsWritingToDisk;	// 9 = 0x9
    _Bool _deviceLowOnDiskSpace;	// 10 = 0xa
    _Bool _isUsingCentralizedModel;	// 11 = 0xb
    _Bool _isUpdatingAttachmentFileSizes;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x000000000004357c
@property _Bool isUpdatingAttachmentFileSizes; // @synthesize isUpdatingAttachmentFileSizes=_isUpdatingAttachmentFileSizes;
@property(nonatomic) _Bool isUsingCentralizedModel; // @synthesize isUsingCentralizedModel=_isUsingCentralizedModel;
@property(nonatomic, getter=isDeviceLowOnDiskSpace) _Bool deviceLowOnDiskSpace; // @synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace;
@property(nonatomic) _Bool allowsWritingToDisk; // @synthesize allowsWritingToDisk=_allowsWritingToDisk;
@property(nonatomic) _Bool alreadyCapturedErrorWithAutoBugCapture; // @synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 activity:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000045f9d
- (_Bool)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;	// IMP=0x0000000000045f18
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;	// IMP=0x0000000000045ef5
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;	// IMP=0x0000000000045e93
- (void)_fetchTransfersFromCloudKit:(id)arg1 withActivity:(id)arg2;	// IMP=0x0000000000045d6d
- (id)_fileTransfersToValidate:(struct __CFArray *)arg1;	// IMP=0x0000000000045c97
- (void)metricAttachmentsToPurge:(long long)arg1 withActivity:(id)arg2;	// IMP=0x0000000000045b6a
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;	// IMP=0x0000000000045812
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;	// IMP=0x00000000000453f1
- (id)_fileTransfersToDelete:(struct __CFArray *)arg1;	// IMP=0x0000000000045333
- (long long)purgeAttachments:(long long)arg1;	// IMP=0x0000000000045192
- (long long)purgeableAttachmentSize;	// IMP=0x0000000000045107
- (_Bool)isUsingCentralizeCacheDelete;	// IMP=0x00000000000450f5
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)arg1;	// IMP=0x0000000000045018
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000000044fa3
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000000044f2e
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;	// IMP=0x0000000000044ea0
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;	// IMP=0x0000000000044de2
- (struct _IMDAttachmentRecordStruct *)_copyRecordRef:(id)arg1;	// IMP=0x0000000000044cd6
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000000044c02
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000000044ada
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;	// IMP=0x00000000000449b6
- (_Bool)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(_Bool)arg2;	// IMP=0x0000000000044891
- (_Bool)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(_Bool)arg2;	// IMP=0x0000000000044889
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4;	// IMP=0x0000000000044844
- (void)resetAttachmentWatermark;	// IMP=0x0000000000044794
- (void)_cacheDeleteSetUp;	// IMP=0x0000000000043cb1
- (void)registerWithCacheDelete;	// IMP=0x0000000000043c10
- (void)updateAttachmentFileSizesWithActivity:(id)arg1;	// IMP=0x00000000000436d0
- (_Bool)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1;	// IMP=0x0000000000043615
- (id)_ckUtilitiesSharedInstance;	// IMP=0x00000000000435fc
- (id)init;	// IMP=0x00000000000435c1

@end
