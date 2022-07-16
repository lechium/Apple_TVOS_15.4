//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerPreheatHandler-Protocol.h>

@class NSIndexSet, NSMutableSet, NSString, PXFeedDateFormatter, PXPhotoKitUIMediaProvider, PXReusableObjectPool, PXUIScrollViewController;
@protocol PXMemoriesUITileSourceDelegate;

@interface PXMemoriesUITileSource : NSObject <PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler>
{
    NSMutableSet *_checkedOutTiles;	// 8 = 0x8
    struct {
        _Bool memoryToPreheatForIndexPath;
    } _delegateRespondsTo;	// 16 = 0x10
    _Bool _canRenderTextAsynchronously;	// 17 = 0x11
    PXReusableObjectPool *_viewTilePool;	// 24 = 0x18
    PXUIScrollViewController *_scrollViewController;	// 32 = 0x20
    NSIndexSet *_providingTilesForKinds;	// 40 = 0x28
    id <PXMemoriesUITileSourceDelegate> _delegate;	// 48 = 0x30
    PXPhotoKitUIMediaProvider *__mediaProvider;	// 56 = 0x38
    PXFeedDateFormatter *__dateFormatter;	// 64 = 0x40
    unsigned long long __memoriesStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003bf0c9
@property(readonly, nonatomic) unsigned long long _memoriesStyle; // @synthesize _memoriesStyle=__memoriesStyle;
@property(readonly, nonatomic) PXFeedDateFormatter *_dateFormatter; // @synthesize _dateFormatter=__dateFormatter;
@property(readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property(nonatomic) __weak id <PXMemoriesUITileSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSIndexSet *providingTilesForKinds; // @synthesize providingTilesForKinds=_providingTilesForKinds;
@property(nonatomic) _Bool canRenderTextAsynchronously; // @synthesize canRenderTextAsynchronously=_canRenderTextAsynchronously;
@property(readonly, nonatomic) PXUIScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(readonly, nonatomic) PXReusableObjectPool *viewTilePool; // @synthesize viewTilePool=_viewTilePool;
- (void)_dateFormatterChanged:(id)arg1;	// IMP=0x00000000003beef8
- (void)_updateDateLabelTile:(id)arg1;	// IMP=0x00000000003bedce
- (void)_getImageRequester:(id *)arg1 title:(id *)arg2 subtitle:(id *)arg3 forIndexPath:(struct PXSimpleIndexPath)arg4 dataSource:(id)arg5;	// IMP=0x00000000003bec9c
- (void *)_tileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x00000000003be4aa
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000003be1a9
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000003be0cf
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000003bdff5
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;	// IMP=0x00000000003bdfb5
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;	// IMP=0x00000000003bdf43
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x00000000003bdd70
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x00000000003bdcb2
- (_Bool)providesTileForIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x00000000003bdc38
- (void)dealloc;	// IMP=0x00000000003bdbc3
- (id)initWithScrollViewController:(id)arg1 memoriesStyle:(unsigned long long)arg2;	// IMP=0x00000000003bd93d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
