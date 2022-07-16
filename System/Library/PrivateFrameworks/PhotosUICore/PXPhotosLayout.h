//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGNamedImageSource-Protocol.h>
#import <PhotosUICore/PXGStringSource-Protocol.h>

@class NSDictionary, NSString, PXGSingleViewLayout, PXNumberAnimator, PXPhotosLayoutSpecManager, PXPhotosSectionedLayout, PXPhotosViewModel, UIView;
@protocol PXPhotosLayoutDelegate, PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    CDStruct_af00bf4e _postUpdateFlags;	// 32 = 0x20
    unsigned short _headerTitleVersion;	// 56 = 0x38
    unsigned short _backgroundGradientResizableCapInsetsIndex;	// 58 = 0x3a
    PXNumberAnimator *_alternateAppearanceMixAnimator;	// 64 = 0x40
    _Bool _managesHeaderSprites;	// 72 = 0x48
    _Bool _presentedVisibility;	// 73 = 0x49
    PXPhotosSectionedLayout *_sectionedLayout;	// 80 = 0x50
    _Bool _footerHasAppearedInitially;	// 88 = 0x58
    PXNumberAnimator *_headerFooterAlphaAnimator;	// 96 = 0x60
    PXGSingleViewLayout *_headerLayout;	// 104 = 0x68
    PXGSingleViewLayout *_footerLayout;	// 112 = 0x70
    _Bool _wantsHeaderInSafeArea;	// 120 = 0x78
    _Bool _alignsHeaderTitleWithLayoutMargins;	// 121 = 0x79
    PXPhotosViewModel *_viewModel;	// 128 = 0x80
    PXPhotosLayoutSpecManager *_specManager;	// 136 = 0x88
    id <PXPhotosLayoutDelegate> _delegate;	// 144 = 0x90
    UIView *_headerView;	// 152 = 0x98
    UIView *_footerView;	// 160 = 0xa0
    id <PXPhotosSectionHeaderLayoutProvider> _sectionHeaderProvider;	// 168 = 0xa8
    id <PXPhotosSectionBodyLayoutProvider> _sectionBodyProvider;	// 176 = 0xb0
    double _statusBarHeight;	// 184 = 0xb8
    long long _pendingHideAnimationType;	// 192 = 0xc0
    NSString *_headerTitle;	// 200 = 0xc8
    NSDictionary *_headerTitleOverContentAttributes;	// 208 = 0xd0
    NSDictionary *_headerTitleOverBackgroundAttributes;	// 216 = 0xd8
    long long _headerTitleDrawingOptions;	// 224 = 0xe0
    double _headerTitleBaselineToBottom;	// 232 = 0xe8
    double _backgroundSpriteHeight;	// 240 = 0xf0
    double _backgroundGradientAdditionalCoverage;	// 248 = 0xf8
    struct CGPoint _headerTitleOrigin;	// 256 = 0x100
    struct CGSize _headerTitleSize;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000060f5c3
@property(nonatomic) double backgroundGradientAdditionalCoverage; // @synthesize backgroundGradientAdditionalCoverage=_backgroundGradientAdditionalCoverage;
@property(nonatomic) double backgroundSpriteHeight; // @synthesize backgroundSpriteHeight=_backgroundSpriteHeight;
@property(nonatomic) double headerTitleBaselineToBottom; // @synthesize headerTitleBaselineToBottom=_headerTitleBaselineToBottom;
@property(nonatomic) struct CGSize headerTitleSize; // @synthesize headerTitleSize=_headerTitleSize;
@property(nonatomic) struct CGPoint headerTitleOrigin; // @synthesize headerTitleOrigin=_headerTitleOrigin;
@property(readonly, nonatomic) long long headerTitleDrawingOptions; // @synthesize headerTitleDrawingOptions=_headerTitleDrawingOptions;
@property(copy, nonatomic) NSDictionary *headerTitleOverBackgroundAttributes; // @synthesize headerTitleOverBackgroundAttributes=_headerTitleOverBackgroundAttributes;
@property(copy, nonatomic) NSDictionary *headerTitleOverContentAttributes; // @synthesize headerTitleOverContentAttributes=_headerTitleOverContentAttributes;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) long long pendingHideAnimationType; // @synthesize pendingHideAnimationType=_pendingHideAnimationType;
@property(nonatomic) _Bool alignsHeaderTitleWithLayoutMargins; // @synthesize alignsHeaderTitleWithLayoutMargins=_alignsHeaderTitleWithLayoutMargins;
@property(nonatomic) _Bool wantsHeaderInSafeArea; // @synthesize wantsHeaderInSafeArea=_wantsHeaderInSafeArea;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(retain, nonatomic) id <PXPhotosSectionBodyLayoutProvider> sectionBodyProvider; // @synthesize sectionBodyProvider=_sectionBodyProvider;
@property(retain, nonatomic) id <PXPhotosSectionHeaderLayoutProvider> sectionHeaderProvider; // @synthesize sectionHeaderProvider=_sectionHeaderProvider;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <PXPhotosLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPhotosLayoutSpecManager *specManager; // @synthesize specManager=_specManager;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060f1e9
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060f081
- (id)axSpriteIndexes;	// IMP=0x000000000060f017
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060eeca
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060eec2
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060eeb0
- (struct UIEdgeInsets)paddingForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060ee92
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060ee87
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060edb8
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060ecdb
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000060e74d
- (struct UIEdgeInsets)additionalSafeAreaInsetsForSublayout:(id)arg1;	// IMP=0x000000000060e66c
- (void)hideSpritesForObjectReferences:(id)arg1;	// IMP=0x000000000060e572
- (id)createDefaultAnimationForCurrentContext;	// IMP=0x000000000060e419
- (unsigned long long)fullyVisibleEdgesWithDefaultTolerance;	// IMP=0x000000000060e388
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000060e325
- (void)screenScaleDidChange;	// IMP=0x000000000060e2e4
- (void)referenceSizeDidChange;	// IMP=0x000000000060e2a3
- (void)visibleRectDidChange;	// IMP=0x000000000060e24d
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000060e064
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x000000000060df6c
- (void)_updateLocalSpritesAlpha;	// IMP=0x000000000060dc67
- (void)_invalidateLocalSpritesAlpha;	// IMP=0x000000000060db70
- (void)_updateLocalSprites;	// IMP=0x000000000060d751
- (void)_invalidateLocalSprites;	// IMP=0x000000000060d65a
- (void)_updateContentBelowTitle;	// IMP=0x000000000060d559
- (void)_invalidateContentBelowTitle;	// IMP=0x000000000060d462
- (void)_updateLocalSpritesCount;	// IMP=0x000000000060d40c
- (void)_invalidateLocalSpritesCount;	// IMP=0x000000000060d318
- (void)_updateSectionedLayout;	// IMP=0x000000000060d0b1
- (void)_invalidateSectionedLayout;	// IMP=0x000000000060cfbd
- (void)_updateFooter;	// IMP=0x000000000060cc70
- (void)_invalidateFooter;	// IMP=0x000000000060cb7c
- (void)_updateHeaderFooterAlphaAnimator;	// IMP=0x000000000060caaf
- (void)_updateHeader;	// IMP=0x000000000060c8eb
- (void)_invalidateHeader;	// IMP=0x000000000060c7f7
- (void)_updateHeaderMeasurements;	// IMP=0x000000000060c210
- (void)_invalidateHeaderMeasurements;	// IMP=0x000000000060c11c
- (void)_updateHeaderAttributes;	// IMP=0x000000000060bf88
- (void)_invalidateHeaderAttributes;	// IMP=0x000000000060be94
- (void)didUpdate;	// IMP=0x000000000060bd19
- (void)update;	// IMP=0x000000000060b286
- (void)willUpdate;	// IMP=0x000000000060b101
- (void)_invalidateHeaderTitle;	// IMP=0x000000000060b0c8
- (void)_updateHeaderTitle;	// IMP=0x000000000060accc
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x000000000060aae0
- (void)enumerateItemsGeometriesInRect:(struct CGRect)arg1 dataSource:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000060aa1e
- (id)presentedItemsGeometryForSection:(unsigned long long)arg1 inDataSource:(id)arg2;	// IMP=0x000000000060aa01
- (id)topmostSectionHeaderSnapshotInRect:(struct CGRect)arg1;	// IMP=0x000000000060a976
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;	// IMP=0x000000000060a96e
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000060a866
- (id)createAnchorForScrollingToInitialPosition;	// IMP=0x000000000060a7ee
- (void)invalidateFooterHeight;	// IMP=0x000000000060a6ee
@property(readonly, nonatomic) struct PXFloatRange bottomCollapsibleArea;
@property(readonly, nonatomic) struct PXFloatRange topCollapsibleArea;
- (_Bool)appliesAlphaToSublayouts;	// IMP=0x000000000060a50b
- (id)presentedDataSource;	// IMP=0x000000000060a4ee
- (id)initWithViewModel:(id)arg1 specManager:(id)arg2;	// IMP=0x000000000060a1e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

