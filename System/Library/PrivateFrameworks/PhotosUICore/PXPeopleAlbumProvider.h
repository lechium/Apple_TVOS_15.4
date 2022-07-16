//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleSectionedDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString, PHPhotoLibrary, PXPeopleProgressManager, PXPeopleSectionedDataSource;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver>
{
    _Bool _didInitiateReCacheRequest;	// 8 = 0x8
    _Bool _didInitiatePeopleCountFetchRequest;	// 9 = 0x9
    _Bool _didPrepareDataSource;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
    _Atomic int _currentRequestId;	// 48 = 0x30
    PXPeopleSectionedDataSource *_peopleDataSource;	// 56 = 0x38
    PXPeopleProgressManager *_progressMgr;	// 64 = 0x40
    CDUnknownBlockType _requestCompletion;	// 72 = 0x48
    long long _cachedPeopleCount;	// 80 = 0x50
    NSMutableDictionary *_imageCache;	// 88 = 0x58
    struct CGSize _imageSize;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00000000006d831c
- (void).cxx_destruct;	// IMP=0x00000000006d787f
@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property _Atomic int currentRequestId; // @synthesize currentRequestId=_currentRequestId;
@property(nonatomic) long long cachedPeopleCount; // @synthesize cachedPeopleCount=_cachedPeopleCount;
@property(copy, nonatomic) CDUnknownBlockType requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) PXPeopleProgressManager *progressMgr; // @synthesize progressMgr=_progressMgr;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
- (void)_appWillEnterForeground;	// IMP=0x00000000006d7725
- (void)_invalidateCache;	// IMP=0x00000000006d76da
- (void)imageCacheDidChanged:(id)arg1;	// IMP=0x00000000006d73d6
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;	// IMP=0x00000000006d71e7
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;	// IMP=0x00000000006d71e1
- (_Bool)_shouldShowInterstitialProgress;	// IMP=0x00000000006d718e
- (void)_handleRequestResult:(id)arg1 forRequestID:(_Atomic int)arg2 person:(id)arg3 atIndex:(long long)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006d6fec
- (void)_asyncAddImagesToCacheWithPersons:(id)arg1 displayScale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d6cb6
- (void)_reCacheImagesWithDisplayScale:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006d6c37
- (id)_visiblePersons;	// IMP=0x00000000006d6ba1
@property(readonly, nonatomic) long long peopleCount;
- (void)_updateCachedCountIfNeeded;	// IMP=0x00000000006d6a1d
@property(readonly, nonatomic) _Bool isCountAvailable;
- (id)peopleViewController;	// IMP=0x00000000006d68f3
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 displayScale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006d666c
- (void)dealloc;	// IMP=0x00000000006d65e6
- (void)_prepareIfNeeded;	// IMP=0x00000000006d6570
- (id)init;	// IMP=0x00000000006d620c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
