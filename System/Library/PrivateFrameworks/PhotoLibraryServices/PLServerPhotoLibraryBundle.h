//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PLBackgroundJobService, PLLazyObject;

@interface PLServerPhotoLibraryBundle <NSFilePresenter>
{
    Class _libraryServicesDelegateClass;	// 176 = 0xb0
    PLBackgroundJobService *_backgroundJobService;	// 184 = 0xb8
    NSOperationQueue *_presentedItemOperationQueue;	// 192 = 0xc0
    PLLazyObject *_lazyTouchCoalescer;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000045fe15
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000045fce6
- (void)presentedItemDidMoveToURL:(id)arg1;	// IMP=0x000000000045fc0f
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000045fad4
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000045f9d1
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;	// IMP=0x000000000045f717
- (_Bool)shouldRelinquishToWriterOfSubitemAtURL:(id)arg1;	// IMP=0x000000000045f0e8
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;	// IMP=0x000000000045efe5
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)unbindAssetsdService:(id)arg1;	// IMP=0x000000000045ef37
- (_Bool)bindAssetsdService:(id)arg1 error:(id *)arg2;	// IMP=0x000000000045edc3
- (id)boundAssetsdServices;	// IMP=0x000000000045ecf0
- (void)shutdownWithReason:(id)arg1;	// IMP=0x000000000045e8fd
- (void)clearShutdownReason;	// IMP=0x000000000045e8b5
- (void)invalidateClientConnectionsWithReason:(id)arg1;	// IMP=0x000000000045e60f
- (void)_touch;	// IMP=0x000000000045e580
- (void)touch;	// IMP=0x000000000045e57a
- (void)close;	// IMP=0x000000000045e2b9
- (id)transferAssets:(id)arg1 toBundle:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000045ddf3
- (id)_newTouchCoalescer;	// IMP=0x000000000045dd0b
- (id)newBoundAssetsdServicesTable;	// IMP=0x000000000045dce9
- (id)newLibraryServicesManager;	// IMP=0x000000000045dc3b
- (id)newChangePublisher;	// IMP=0x000000000045dc2a
- (id)newAssetsdClient;	// IMP=0x000000000045dbe6
- (id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 backgroundJobService:(id)arg3 libraryServicesDelegateClass:(Class)arg4;	// IMP=0x000000000045da24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

