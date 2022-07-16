//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosSectionBodyLayoutProvider-Protocol.h>

@class NSString, PXPhotosViewModel, PXZoomablePhotosLayout, PXZoomablePhotosViewModel;
@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate;

@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider>
{
    PXZoomablePhotosLayout *_zoomablePhotosLayout;	// 8 = 0x8
    id <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;	// 16 = 0x10
    PXPhotosViewModel *_viewModel;	// 24 = 0x18
    PXZoomablePhotosViewModel *_zoomablePhotosViewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007f3df5
@property(readonly, nonatomic) PXZoomablePhotosViewModel *zoomablePhotosViewModel; // @synthesize zoomablePhotosViewModel=_zoomablePhotosViewModel;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate; // @synthesize invalidationDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000007f3cee
- (void)_updatePhotosViewModelWithChanges:(unsigned long long)arg1;	// IMP=0x00000000007f3c65
- (void)_updateZoomableViewModelWithChanges:(unsigned long long)arg1;	// IMP=0x00000000007f3be7
- (_Bool)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2;	// IMP=0x00000000007f3bdf
- (void)sectionedLayout:(id)arg1 bodyLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath)arg4 hasSectionChanges:(_Bool)arg5;	// IMP=0x00000000007f3bd9
- (void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;	// IMP=0x00000000007f3a88
- (void)_configureZoomableLayoutDecorations:(id)arg1 fromAssetSectionLayout:(id)arg2;	// IMP=0x00000000007f399e
- (id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath)arg3 spec:(id)arg4 outWantsDecoration:(_Bool *)arg5;	// IMP=0x00000000007f38ed
- (id)createInteraction;	// IMP=0x00000000007f3884
- (id)init;	// IMP=0x00000000007f380a
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000007f351e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

