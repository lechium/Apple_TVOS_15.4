//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGItemsLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionBodyLayoutProvider-Protocol.h>

@class NSString, PXPhotosGridMessagesLayoutSpecManager;
@protocol PXAssetImportStatusManager, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXTapbackStatusManager;

@interface PXPhotosGridMessagesBodyLayoutProvider : NSObject <PXGItemsLayoutDelegate, PXChangeObserver, PXPhotosSectionBodyLayoutProvider>
{
    id <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;	// 8 = 0x8
    PXPhotosGridMessagesLayoutSpecManager *_specManager;	// 16 = 0x10
    id <PXTapbackStatusManager> _tapbackStatusManager;	// 24 = 0x18
    id <PXAssetImportStatusManager> _assetImportStatusManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002bf0b4
@property(readonly, nonatomic) id <PXAssetImportStatusManager> assetImportStatusManager; // @synthesize assetImportStatusManager=_assetImportStatusManager;
@property(readonly, nonatomic) id <PXTapbackStatusManager> tapbackStatusManager; // @synthesize tapbackStatusManager=_tapbackStatusManager;
@property(readonly, nonatomic) PXPhotosGridMessagesLayoutSpecManager *specManager; // @synthesize specManager=_specManager;
@property(nonatomic) __weak id <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate; // @synthesize invalidationDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002bef8d
- (id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2;	// IMP=0x00000000002bef75
- (long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000002beda1
- (struct CGSize)itemsLayout:(id)arg1 marginForItem:(long long)arg2;	// IMP=0x00000000002becbe
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;	// IMP=0x00000000002bec2b
- (_Bool)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2;	// IMP=0x00000000002bec23
- (id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath)arg3 spec:(id)arg4 outWantsDecoration:(_Bool *)arg5;	// IMP=0x00000000002bea8a
- (void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;	// IMP=0x00000000002be8eb
- (void)sectionedLayout:(id)arg1 bodyLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath)arg4 hasSectionChanges:(_Bool)arg5;	// IMP=0x00000000002be875
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000002be717

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
