//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXAudioAssetFetchResult, PXDisplayAsset, PXDisplayAssetCollection, PXDisplayAssetFetchResult, PXStoryColorResource, PXStoryDisplayAssetCroppingContext, PXStoryDisplayAssetResource, PXStoryMovieHighlightsCollection, PXStoryTextResource;

@interface PXStoryResourcesDataSource : NSObject
{
    id <PXStoryTextResource> _titleResource;	// 8 = 0x8
    id <PXStoryTextResource> _subtitleResource;	// 16 = 0x10
    long long _identifier;	// 24 = 0x18
    id <PXStoryColorResource> _backgroundColorResource;	// 32 = 0x20
    long long _numberOfTextResources;	// 40 = 0x28
    long long _numberOfColorResources;	// 48 = 0x30
    id <PXDisplayAssetCollection> _assetCollection;	// 56 = 0x38
    id <PXStoryDisplayAssetCroppingContext> _croppingContext;	// 64 = 0x40
    id <PXDisplayAsset> _keyAsset;	// 72 = 0x48
    id <PXDisplayAssetFetchResult> _displayAssets;	// 80 = 0x50
    id <PXDisplayAssetFetchResult> _availableDisplayAssets;	// 88 = 0x58
    id <PXStoryMovieHighlightsCollection> _movieHighlights;	// 96 = 0x60
    id <PXAudioAssetFetchResult> _audioAssets;	// 104 = 0x68
    CDStruct_5d4c7ed3 _overallDurationInfo;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000080c88c
@property(readonly, nonatomic) id <PXAudioAssetFetchResult> audioAssets; // @synthesize audioAssets=_audioAssets;
@property(readonly, nonatomic) id <PXStoryMovieHighlightsCollection> movieHighlights; // @synthesize movieHighlights=_movieHighlights;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> availableDisplayAssets; // @synthesize availableDisplayAssets=_availableDisplayAssets;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> displayAssets; // @synthesize displayAssets=_displayAssets;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) id <PXStoryDisplayAssetCroppingContext> croppingContext; // @synthesize croppingContext=_croppingContext;
@property(readonly, nonatomic) CDStruct_5d4c7ed3 overallDurationInfo; // @synthesize overallDurationInfo=_overallDurationInfo;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) long long numberOfColorResources; // @synthesize numberOfColorResources=_numberOfColorResources;
@property(readonly, nonatomic) long long numberOfTextResources; // @synthesize numberOfTextResources=_numberOfTextResources;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (_Bool)hasSameResourcesOfKind:(long long)arg1 as:(id)arg2;	// IMP=0x000000000080c498
- (id)resourceWithKind:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x000000000080c35c
- (long long)numberOfResourcesWithKind:(long long)arg1;	// IMP=0x000000000080c236
- (id)frameFillingEffectResourceAtIndex:(long long)arg1;	// IMP=0x000000000080c177
@property(readonly, nonatomic) long long numberOfFrameFillingEffectResources;
@property(readonly, nonatomic) id <PXStoryColorResource> backgroundColorResource; // @synthesize backgroundColorResource=_backgroundColorResource;
- (id)colorResourceAtIndex:(long long)arg1;	// IMP=0x000000000080bf66
- (id)songResourceAtIndex:(long long)arg1;	// IMP=0x000000000080bf07
@property(readonly, nonatomic) long long numberOfSongResources;
- (id)movieHighlightsForDisplayAssetAtIndex:(long long)arg1;	// IMP=0x000000000080bde6
- (long long)indexForDisplayAssetReference:(id)arg1;	// IMP=0x000000000080bc81
- (id)displayAssetResourceAtIndex:(long long)arg1;	// IMP=0x000000000080bb92
@property(readonly, nonatomic) long long numberOfDisplayAssetResources;
- (id)textResourceAtIndex:(long long)arg1;	// IMP=0x000000000080ba00
@property(readonly, nonatomic) id <PXStoryTextResource> subtitleResource; // @synthesize subtitleResource=_subtitleResource;
@property(readonly, nonatomic) id <PXStoryTextResource> titleResource; // @synthesize titleResource=_titleResource;
@property(readonly, nonatomic) id <PXStoryDisplayAssetResource> keyAssetResource;
- (id)initWithKeyAsset:(id)arg1 displayAssets:(id)arg2 availableDisplayAssets:(id)arg3 movieHighlights:(id)arg4 audioAssets:(id)arg5 assetCollection:(id)arg6 overallDurationInfo:(CDStruct_5d4c7ed3)arg7 configuration:(id)arg8;	// IMP=0x000000000080b64e
- (id)init;	// IMP=0x000000000080b5e6

@end

