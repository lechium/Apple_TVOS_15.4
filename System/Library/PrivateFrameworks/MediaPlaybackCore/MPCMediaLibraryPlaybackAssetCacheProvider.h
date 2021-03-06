//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCModelPlaybackAssetCacheProviding-Protocol.h>

@class MPMediaLibrary, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding>
{
    MPMediaLibrary *_mediaLibrary;	// 8 = 0x8
}

+ (id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;	// IMP=0x000000000008c042
+ (id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;	// IMP=0x000000000008bf8f
+ (id)deviceLibraryProviderWithUserIdentity:(id)arg1;	// IMP=0x000000000008bf31
- (void).cxx_destruct;	// IMP=0x000000000008aeb7
- (long long)_persistentIDForModelObject:(id)arg1;	// IMP=0x000000000008adc4
- (void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008a953
- (void)getPlaybackAssetCacheDestinationURL:(id *)arg1 purchaseBundleDestinationURL:(id *)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5;	// IMP=0x000000000008a761
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a679
- (id)_initWithMediaLibrary:(id)arg1;	// IMP=0x000000000008a60e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

