//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetPixelBufferSourcesProvider-Protocol.h>
#import <PhotosUICore/PXGRectDiagnosticsProvider-Protocol.h>

@class NSString, PXCuratedLibraryLayout, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryVideoPlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider>
{
    PXCuratedLibraryViewModel *_viewModel;	// 8 = 0x8
    long long _presentedZoomLevel;	// 16 = 0x10
    long long _newZoomLevel;	// 24 = 0x18
    PXCuratedLibraryLayout *_curatedLibraryLayout;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000053b268
@property(retain, nonatomic) PXCuratedLibraryLayout *curatedLibraryLayout; // @synthesize curatedLibraryLayout=_curatedLibraryLayout;
- (void)enumerateRectDiagnosticsForLayout:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000053af3a
- (_Bool)_canPlayVideosInZoomLevel:(long long)arg1;	// IMP=0x000000000053aed9
- (_Bool)canPlayAsset:(id)arg1;	// IMP=0x000000000053ae70
- (_Bool)shouldEnablePlayback;	// IMP=0x000000000053adf7
- (_Bool)canProvideGeometriesForRecords;	// IMP=0x000000000053adb3
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;	// IMP=0x000000000053a777
- (id)filterSortedRecordsToPlay:(id)arg1;	// IMP=0x0000000000539f7d
- (void)didUpdatePlayingRecords;	// IMP=0x0000000000539f61
- (_Bool)canUpdatePlayingRecords;	// IMP=0x0000000000539f3d
- (struct CGRect)currentVisibleRect;	// IMP=0x0000000000539e5f
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;	// IMP=0x0000000000539dca
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000539cba
- (_Bool)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)arg1;	// IMP=0x0000000000539ca8
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;	// IMP=0x0000000000539c96
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;	// IMP=0x0000000000539c84
- (id)init;	// IMP=0x0000000000539c0a
- (id)initViewViewModel:(id)arg1;	// IMP=0x0000000000539b66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

