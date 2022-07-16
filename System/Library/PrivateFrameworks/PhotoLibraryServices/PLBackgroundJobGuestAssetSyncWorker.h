//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersistentHistoryToken;

@interface PLBackgroundJobGuestAssetSyncWorker
{
    NSPersistentHistoryToken *_cancelledWorkItem;	// 8 = 0x8
}

+ (_Bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;	// IMP=0x0000000000272baa
+ (id)workerWithLibraryBundle:(id)arg1;	// IMP=0x0000000000272b5c
- (void).cxx_destruct;	// IMP=0x0000000000272c04
@property(copy) NSPersistentHistoryToken *cancelledWorkItem; // @synthesize cancelledWorkItem=_cancelledWorkItem;
- (void)stopWorkingOnItem:(id)arg1;	// IMP=0x0000000000272bd7
- (_Bool)isInterruptible;	// IMP=0x0000000000272bcf
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000272bbf
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;	// IMP=0x0000000000272bb2

@end

