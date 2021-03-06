//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class MSVLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
    unsigned long long _backgroundCacheSize;	// 8 = 0x8
    unsigned long long _cacheSize;	// 16 = 0x10
    MSVLRUDictionary *_cachedArtworkRepresentations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;	// 32 = 0x20
    long long _resumeToForegroundCacheSize;	// 40 = 0x28
}

+ (id)sharedRadioArtworkDataSource;	// IMP=0x00000000000f6ddb
- (void).cxx_destruct;	// IMP=0x00000000000f64d3
- (void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(_Bool)arg2;	// IMP=0x00000000000f6469
- (void)_clearCache;	// IMP=0x00000000000f6417
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000f6359
- (void)_handleWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000000f6330
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;	// IMP=0x00000000000f631e
- (void)_handleDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000000f6285
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000000f6270
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000f626a
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f60a3
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000f5fbc
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000f5c03
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000000f5af6
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000f5a81
- (void)dealloc;	// IMP=0x00000000000f59c6
- (id)init;	// IMP=0x00000000000f5881

@end

