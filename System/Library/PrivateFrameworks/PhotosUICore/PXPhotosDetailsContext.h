//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXHierarchicalContext-Protocol.h>
#import <PhotosUICore/PXMutablePhotosDetailsContext-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSDictionary, NSString, PHFetchResult, PXDisplayTitleInfo, PXPhotosDataSource, PXPhotosDetailsViewModel, PXPhotosDetailsVisualLookupData;

@interface PXPhotosDetailsContext <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext>
{
    _Bool _shouldShowMovieHeader;	// 8 = 0x8
    _Bool _hasLocation;	// 9 = 0x9
    _Bool _shouldUseKeyFace;	// 10 = 0xa
    PXPhotosDataSource *_photosDataSource;	// 16 = 0x10
    PXDisplayTitleInfo *_displayTitleInfo;	// 24 = 0x18
    PXPhotosDetailsContext *_parentContext;	// 32 = 0x20
    PHFetchResult *_keyAssetsFetchResult;	// 40 = 0x28
    long long _viewSourceOrigin;	// 48 = 0x30
    PXPhotosDetailsViewModel *_viewModel;	// 56 = 0x38
    unsigned long long _contextHierarchyDepth;	// 64 = 0x40
    PXPhotosDetailsVisualLookupData *_visualLookupData;	// 72 = 0x48
    PHFetchResult *_assetFetchResult;	// 80 = 0x50
    PHFetchResult *_assetCollections;	// 88 = 0x58
    NSDictionary *_assetsByCollection;	// 96 = 0x60
    PHFetchResult *_people;	// 104 = 0x68
    NSString *_localizedTitle;	// 112 = 0x70
    NSString *_localizedSubtitle;	// 120 = 0x78
    NSString *_titleFontName;	// 128 = 0x80
    CDUnknownBlockType _unlockDeviceStatus;	// 136 = 0x88
}

+ (id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2;	// IMP=0x0000000000476d50
+ (id)_preheatedFetchResultForAsset:(id)arg1;	// IMP=0x0000000000476b0f
+ (id)preheatedAssets;	// IMP=0x0000000000476adf
+ (void)photosDetailsContextPreheatForAssets:(id)arg1;	// IMP=0x0000000000476a6e
+ (id)photosDetailsContextForMemory:(id)arg1 enableCuration:(_Bool)arg2 enableKeyAssets:(_Bool)arg3;	// IMP=0x00000000004769bc
+ (id)photosDetailsContextForMemory:(id)arg1;	// IMP=0x00000000004769a5
+ (id)_assetFetchResultForAssets:(id)arg1;	// IMP=0x0000000000476673
+ (id)_fetchPropertySets;	// IMP=0x00000000004765b5
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(_Bool)arg4 enableKeyAssets:(_Bool)arg5 useVerboseSmartDescription:(_Bool)arg6 viewSourceOrigin:(long long)arg7;	// IMP=0x000000000047613f
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(long long)arg3;	// IMP=0x0000000000476113
- (void).cxx_destruct;	// IMP=0x0000000000475f2c
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceStatus; // @synthesize unlockDeviceStatus=_unlockDeviceStatus;
@property(readonly, nonatomic) _Bool shouldUseKeyFace; // @synthesize shouldUseKeyFace=_shouldUseKeyFace;
@property(readonly, nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(readonly, nonatomic) _Bool shouldShowMovieHeader; // @synthesize shouldShowMovieHeader=_shouldShowMovieHeader;
@property(readonly, copy, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(readonly, copy, nonatomic) NSDictionary *assetsByCollection; // @synthesize assetsByCollection=_assetsByCollection;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(readonly, nonatomic) PHFetchResult *assetFetchResult; // @synthesize assetFetchResult=_assetFetchResult;
@property(readonly, nonatomic) PXPhotosDetailsVisualLookupData *visualLookupData; // @synthesize visualLookupData=_visualLookupData;
@property(readonly, nonatomic) unsigned long long contextHierarchyDepth; // @synthesize contextHierarchyDepth=_contextHierarchyDepth;
@property(readonly, nonatomic) PXPhotosDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) long long viewSourceOrigin; // @synthesize viewSourceOrigin=_viewSourceOrigin;
@property(readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(readonly, nonatomic) __weak PXPhotosDetailsContext *parentContext; // @synthesize parentContext=_parentContext;
@property(readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000475d23
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000475d11
- (void)setPhotosDataSource:(id)arg1;	// IMP=0x0000000000475c79
- (void)setViewModel:(id)arg1;	// IMP=0x0000000000475c13
- (void)setViewSourceOrigin:(long long)arg1;	// IMP=0x0000000000475c02
- (void)setVisualLookupData:(id)arg1;	// IMP=0x0000000000475b8d
- (void)setHasLocation:(_Bool)arg1;	// IMP=0x0000000000475b65
- (void)setShouldShowMovieHeader:(_Bool)arg1;	// IMP=0x0000000000475b3d
- (void)setTitleFontName:(id)arg1;	// IMP=0x0000000000475aba
- (void)setLocalizedSubtitle:(id)arg1;	// IMP=0x0000000000475a37
- (void)setLocalizedTitle:(id)arg1;	// IMP=0x00000000004759b4
- (void)setPeople:(id)arg1;	// IMP=0x000000000047594e
- (void)setKeyAssetsFetchResult:(id)arg1;	// IMP=0x00000000004758cb
- (void)setAssetsByCollection:(id)arg1;	// IMP=0x0000000000475848
- (void)setAssetCollections:(id)arg1;	// IMP=0x00000000004757d3
- (id)mutableChangeObject;	// IMP=0x00000000004757ca
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000047579b
@property(readonly, nonatomic) _Bool shouldShowHeaderTitle;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;	// IMP=0x000000000047566d
- (void)_updatePropertiesDerivedFromPhotosDataSource;	// IMP=0x00000000004754be
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;	// IMP=0x00000000004752d3
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4 assetFetchResult:(id)arg5;	// IMP=0x0000000000475255
- (id)init;	// IMP=0x00000000004751e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
