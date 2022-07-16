//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGItemsGeometry-Protocol.h>
#import <PhotosUICore/PXZoomablePhotosContentLayout-Protocol.h>

@class NSString;

@interface PXGGridLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry, PXGDiagnosticsProvider>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    _Bool _isUpdating;	// 32 = 0x20
    struct CGSize _itemSize;	// 40 = 0x28
    struct CGSize _finalInterItemSpacing;	// 56 = 0x38
    struct UIEdgeInsets _finalInsets;	// 72 = 0x48
    _Bool _canHandleVisibleRectRejection;	// 104 = 0x68
    _Bool _enableBestCropRect;	// 105 = 0x69
    _Bool _enableEffects;	// 106 = 0x6a
    _Bool _enablePerItemCornerRadius;	// 107 = 0x6b
    _Bool _enablePerItemMargin;	// 108 = 0x6c
    _Bool _enablePerItemInsets;	// 109 = 0x6d
    unsigned char _spriteInfoFlags;	// 110 = 0x6e
    _Bool _fillSafeAreaTopInset;	// 111 = 0x6f
    _Bool _supportsAutomaticContentRotation;	// 112 = 0x70
    _Bool _hideIncompleteLastRowOrColumn;	// 113 = 0x71
    _Bool _mediaTargetSizeIgnoresSpacing;	// 114 = 0x72
    _Bool _loadItemsOutsideAnchorViewport;	// 115 = 0x73
    int _mediaKind;	// 116 = 0x74
    int _presentationType;	// 120 = 0x78
    int _accessoryMediaKind;	// 124 = 0x7c
    int _accessoryPresentationType;	// 128 = 0x80
    float _itemZPosition;	// 132 = 0x84
    long long _style;	// 136 = 0x88
    long long _contentMode;	// 144 = 0x90
    long long _axis;	// 152 = 0x98
    long long _numberOfColumns;	// 160 = 0xa0
    long long _numberOfRows;	// 168 = 0xa8
    double _itemCaptionSpacing;	// 176 = 0xb0
    double _itemAspectRatio;	// 184 = 0xb8
    double _aspectRatioLimit;	// 192 = 0xc0
    double _accessoryAlpha;	// 200 = 0xc8
    long long _visualItemShift;	// 208 = 0xd0
    id _anchorObjectReference;	// 216 = 0xd8
    struct CGSize _interItemSpacing;	// 224 = 0xe0
    CDStruct_2bd92d94 _itemCornerRadius;	// 240 = 0xf0
    CDStruct_2bd92d94 _edgeCornerRadius;	// 256 = 0x100
    struct CGPoint _anchorViewportCenter;	// 272 = 0x110
    struct CGPoint _contentOrigin;	// 288 = 0x120
    struct UIEdgeInsets _padding;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x000000000070179c
@property(nonatomic) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) _Bool loadItemsOutsideAnchorViewport; // @synthesize loadItemsOutsideAnchorViewport=_loadItemsOutsideAnchorViewport;
@property(nonatomic) struct CGPoint anchorViewportCenter; // @synthesize anchorViewportCenter=_anchorViewportCenter;
@property(retain, nonatomic) id anchorObjectReference; // @synthesize anchorObjectReference=_anchorObjectReference;
@property(nonatomic) float itemZPosition; // @synthesize itemZPosition=_itemZPosition;
@property(nonatomic) CDStruct_2bd92d94 edgeCornerRadius; // @synthesize edgeCornerRadius=_edgeCornerRadius;
@property(nonatomic) CDStruct_2bd92d94 itemCornerRadius; // @synthesize itemCornerRadius=_itemCornerRadius;
@property(nonatomic) _Bool mediaTargetSizeIgnoresSpacing; // @synthesize mediaTargetSizeIgnoresSpacing=_mediaTargetSizeIgnoresSpacing;
@property(nonatomic) _Bool hideIncompleteLastRowOrColumn; // @synthesize hideIncompleteLastRowOrColumn=_hideIncompleteLastRowOrColumn;
@property(nonatomic) long long visualItemShift; // @synthesize visualItemShift=_visualItemShift;
@property(nonatomic) _Bool supportsAutomaticContentRotation; // @synthesize supportsAutomaticContentRotation=_supportsAutomaticContentRotation;
@property(nonatomic) _Bool fillSafeAreaTopInset; // @synthesize fillSafeAreaTopInset=_fillSafeAreaTopInset;
@property(nonatomic) double accessoryAlpha; // @synthesize accessoryAlpha=_accessoryAlpha;
@property(nonatomic) int accessoryPresentationType; // @synthesize accessoryPresentationType=_accessoryPresentationType;
@property(nonatomic) int accessoryMediaKind; // @synthesize accessoryMediaKind=_accessoryMediaKind;
@property(nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) unsigned char spriteInfoFlags; // @synthesize spriteInfoFlags=_spriteInfoFlags;
@property(nonatomic) int mediaKind; // @synthesize mediaKind=_mediaKind;
@property(nonatomic) double aspectRatioLimit; // @synthesize aspectRatioLimit=_aspectRatioLimit;
@property(nonatomic) _Bool enablePerItemInsets; // @synthesize enablePerItemInsets=_enablePerItemInsets;
@property(nonatomic) _Bool enablePerItemMargin; // @synthesize enablePerItemMargin=_enablePerItemMargin;
@property(nonatomic) _Bool enablePerItemCornerRadius; // @synthesize enablePerItemCornerRadius=_enablePerItemCornerRadius;
@property(nonatomic) _Bool enableEffects; // @synthesize enableEffects=_enableEffects;
@property(nonatomic) _Bool enableBestCropRect; // @synthesize enableBestCropRect=_enableBestCropRect;
@property(nonatomic) double itemAspectRatio; // @synthesize itemAspectRatio=_itemAspectRatio;
@property(nonatomic) double itemCaptionSpacing; // @synthesize itemCaptionSpacing=_itemCaptionSpacing;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool canHandleVisibleRectRejection; // @synthesize canHandleVisibleRectRejection=_canHandleVisibleRectRejection;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (id)itemsInRect:(struct CGRect)arg1 inLayout:(id)arg2;	// IMP=0x0000000000700c19
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;	// IMP=0x0000000000700c09
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x0000000000700b59
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;	// IMP=0x0000000000700a3e
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007008ce
- (void)setNeedsUpdateOfScrollableAxis;	// IMP=0x00000000006fe8e5
- (void)effectsDidChange;	// IMP=0x00000000006fe7d2
- (void)accessoryItemsDidChange;	// IMP=0x00000000006fe6bf
- (void)numberOfAccessoryItemsDidChange;	// IMP=0x00000000006fe5ac
- (void)loadedItemsDidChange;	// IMP=0x00000000006fe499
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000006fe372
- (void)visibleRectDidChange;	// IMP=0x00000000006fe331
- (void)alphaDidChange;	// IMP=0x00000000006fe21e
- (void)entityManagerDidChange;	// IMP=0x00000000006fe0c7
- (void)screenScaleDidChange;	// IMP=0x00000000006fdfb4
- (void)referenceSizeDidChange;	// IMP=0x00000000006fdea1
- (void)dropTargetObjectReferenceDidChange;	// IMP=0x00000000006fdd8e
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint)arg1;	// IMP=0x00000000006fdb33
- (_Bool)shouldUpdateDecorationMediaTargetSizes;	// IMP=0x00000000006fdb00
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x00000000006fda82
- (long long)scrollableAxis;	// IMP=0x00000000006fda70
- (id)itemsGeometry;	// IMP=0x00000000006fda67
- (struct CGSize)sizeForItem:(long long)arg1;	// IMP=0x00000000006fd885
- (struct _NSRange)itemsToLoad;	// IMP=0x00000000006fd4cf
- (struct CGRect)_pageAlignedRectForVisibleRect:(struct CGRect)arg1;	// IMP=0x00000000006fd25f
- (struct _NSRange)_itemsToLoadForVisibleRect:(struct CGRect)arg1;	// IMP=0x00000000006fcdfd
- (struct _NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;	// IMP=0x00000000006fcdd4
- (struct _NSRange)itemRangeInRect:(struct CGRect)arg1;	// IMP=0x00000000006fc907
@property(readonly, nonatomic) struct CGRect loadedItemsRect;
- (long long)itemClosestTo:(struct CGPoint)arg1;	// IMP=0x00000000006fc64e
- (long long)columnForItem:(long long)arg1;	// IMP=0x00000000006fc5ac
- (long long)_rowForItem:(long long)arg1;	// IMP=0x00000000006fc50a
- (void)_getItemSize:(struct CGSize *)arg1 finalInteritemSpacing:(struct CGSize *)arg2 finalInsets:(struct UIEdgeInsets *)arg3 forDesiredInterItemSpacing:(struct CGSize)arg4 padding:(struct UIEdgeInsets)arg5;	// IMP=0x00000000006fc196
- (struct CGRect)_frameForItem:(long long)arg1 usingInterItemSpacing:(struct CGSize)arg2 itemSize:(struct CGSize)arg3 insets:(struct UIEdgeInsets)arg4 contentMode:(long long)arg5;	// IMP=0x00000000006fbf00
- (struct CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(struct CGSize)arg2;	// IMP=0x00000000006fbe0f
- (struct CGRect)frameForItem:(long long)arg1;	// IMP=0x00000000006fbd7a
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;	// IMP=0x00000000006fbca0
- (struct CGRect)_contentRectInLayout:(struct CGRect)arg1;	// IMP=0x00000000006fbc57
- (struct CGRect)_layoutRectInContent:(struct CGRect)arg1;	// IMP=0x00000000006fbc0e
- (struct CGPoint)_contentPointInLayout:(struct CGPoint)arg1;	// IMP=0x00000000006fbbdf
- (struct CGPoint)_layoutPointInContent:(struct CGPoint)arg1;	// IMP=0x00000000006fbba0
@property(readonly, nonatomic) long long numberOfVisualItems;
@property(readonly, nonatomic) long long numberOfVisualColumns;
@property(readonly, nonatomic) long long numberOfVisualRows;
@property(readonly, nonatomic) double rowHeight;
- (void)_updateSpriteStyles;	// IMP=0x00000000006fb4f5
- (void)_updateSprites;	// IMP=0x00000000006fab71
- (id)insetDelegate;	// IMP=0x00000000006fab1c
- (id)marginDelegate;	// IMP=0x00000000006faac7
- (void)_updateContentSize;	// IMP=0x00000000006fa93a
- (void)_updateColumnsMetrics;	// IMP=0x00000000006fa4a4
- (void)didUpdate;	// IMP=0x00000000006fa3ce
- (void)update;	// IMP=0x00000000006f9f34
- (void)willUpdate;	// IMP=0x00000000006f9e59
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000006f9ca7
- (_Bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(_Bool)arg3;	// IMP=0x000000000059379b
@property(readonly, nonatomic) _Bool itemCaptionsVisible;
@property(readonly, nonatomic) _Bool supportsContentMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isLazy) _Bool lazy; // @dynamic lazy;
@property(readonly, nonatomic) struct _NSRange loadedItems;
@property(readonly) Class superclass;

@end

