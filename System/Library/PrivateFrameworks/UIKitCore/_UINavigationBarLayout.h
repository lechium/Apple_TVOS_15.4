//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILabel, UISearchBar, UIView, _UIBarBackground, _UIBarBackgroundLayout, _UIBarInsertLayoutData, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView, _UINavigationBarPalette, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant>
{
    _UIBarInsertLayoutData *_promptLayoutData;	// 8 = 0x8
    _UIBarInsertLayoutData *_contentLayoutData;	// 16 = 0x10
    _UIBarInsertLayoutData *_canvasViewLayoutData;	// 24 = 0x18
    _UIBarInsertLayoutData *_largeTitleLayoutData;	// 32 = 0x20
    _UIBarInsertLayoutData *_refreshControlLayoutData;	// 40 = 0x28
    _UIBarInsertLayoutData *_searchBarLayoutData;	// 48 = 0x30
    _UIBarInsertLayoutData *_scopeBarLayoutData;	// 56 = 0x38
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;	// 64 = 0x40
    NSMutableArray *_priorityOrderedLayout;	// 72 = 0x48
    NSMutableArray *_stackingOrderedLayout;	// 80 = 0x50
    NSArray *_restingHeights;	// 88 = 0x58
    _Bool _backgroundCoversContentOnly;	// 96 = 0x60
    _Bool _clientWantsBackgroundHidden;	// 97 = 0x61
    _Bool _useManualScrollEdgeAppearance;	// 98 = 0x62
    _Bool _clientUsesManualScrollEdgeAppearanceProgressSPI;	// 99 = 0x63
    _Bool _clientCanUpdateChromelessTransitionProgress;	// 100 = 0x64
    _Bool _clientWantsToPreserveSearchBarAcrossTransitions;	// 101 = 0x65
    _Bool _hidesSearchBarWhenScrolling;	// 102 = 0x66
    _UINavigationBarModernPromptView *_promptView;	// 104 = 0x68
    _UINavigationBarContentView *_contentView;	// 112 = 0x70
    UIView *_animationContentClippingView;	// 120 = 0x78
    _UINavigationBarLargeTitleView *_largeTitleView;	// 128 = 0x80
    _UINavigationBarContentViewLayout *_contentViewLayout;	// 136 = 0x88
    _UINavigationBarLargeTitleViewLayout *_largeTitleViewLayout;	// 144 = 0x90
    _UIBarBackground *_backgroundView;	// 152 = 0x98
    _UIBarBackgroundLayout *_compactBackgroundViewLayout;	// 160 = 0xa0
    _UIBarBackgroundLayout *_standardBackgroundViewLayout;	// 168 = 0xa8
    double _backgroundExtension;	// 176 = 0xb0
    double _requestedBackgroundViewAlpha;	// 184 = 0xb8
    double _manualScrollEdgeAppearanceProgress;	// 192 = 0xc0
    _UINavigationControllerRefreshControlHost *_refreshControlHost;	// 200 = 0xc8
    UILabel *_weeTitleLabel;	// 208 = 0xd0
    UIView *_canvasView;	// 216 = 0xd8
    UISearchBar *_searchBar;	// 224 = 0xe0
    long long _representedSearchLayoutState;	// 232 = 0xe8
    _UINavigationBarPalette *_bottomPalette;	// 240 = 0xf0
    double _largeTitleExposure;	// 248 = 0xf8
    double _chromelessTransitionProgress;	// 256 = 0x100
    double _computedBackgroundViewAlpha;	// 264 = 0x108
    long long _apiVersion;	// 272 = 0x110
    struct CGSize _layoutSize;	// 280 = 0x118
    struct NSDirectionalEdgeInsets _largeTitleViewInsets;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000000018915e
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) double computedBackgroundViewAlpha; // @synthesize computedBackgroundViewAlpha=_computedBackgroundViewAlpha;
@property(readonly, nonatomic) double chromelessTransitionProgress; // @synthesize chromelessTransitionProgress=_chromelessTransitionProgress;
@property(readonly, nonatomic) double largeTitleExposure; // @synthesize largeTitleExposure=_largeTitleExposure;
@property(retain, nonatomic) _UINavigationBarPalette *bottomPalette; // @synthesize bottomPalette=_bottomPalette;
@property(nonatomic) long long representedSearchLayoutState; // @synthesize representedSearchLayoutState=_representedSearchLayoutState;
@property(nonatomic) _Bool hidesSearchBarWhenScrolling; // @synthesize hidesSearchBarWhenScrolling=_hidesSearchBarWhenScrolling;
@property(nonatomic) _Bool clientWantsToPreserveSearchBarAcrossTransitions; // @synthesize clientWantsToPreserveSearchBarAcrossTransitions=_clientWantsToPreserveSearchBarAcrossTransitions;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UILabel *weeTitleLabel; // @synthesize weeTitleLabel=_weeTitleLabel;
@property(retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property(nonatomic) _Bool clientCanUpdateChromelessTransitionProgress; // @synthesize clientCanUpdateChromelessTransitionProgress=_clientCanUpdateChromelessTransitionProgress;
@property(nonatomic) _Bool clientUsesManualScrollEdgeAppearanceProgressSPI; // @synthesize clientUsesManualScrollEdgeAppearanceProgressSPI=_clientUsesManualScrollEdgeAppearanceProgressSPI;
@property(nonatomic) double manualScrollEdgeAppearanceProgress; // @synthesize manualScrollEdgeAppearanceProgress=_manualScrollEdgeAppearanceProgress;
@property(nonatomic) _Bool useManualScrollEdgeAppearance; // @synthesize useManualScrollEdgeAppearance=_useManualScrollEdgeAppearance;
@property(nonatomic) _Bool clientWantsBackgroundHidden; // @synthesize clientWantsBackgroundHidden=_clientWantsBackgroundHidden;
@property(nonatomic) double requestedBackgroundViewAlpha; // @synthesize requestedBackgroundViewAlpha=_requestedBackgroundViewAlpha;
@property(nonatomic) _Bool backgroundCoversContentOnly; // @synthesize backgroundCoversContentOnly=_backgroundCoversContentOnly;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(retain, nonatomic) _UIBarBackgroundLayout *standardBackgroundViewLayout; // @synthesize standardBackgroundViewLayout=_standardBackgroundViewLayout;
@property(retain, nonatomic) _UIBarBackgroundLayout *compactBackgroundViewLayout; // @synthesize compactBackgroundViewLayout=_compactBackgroundViewLayout;
@property(retain, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UINavigationBarLargeTitleViewLayout *largeTitleViewLayout; // @synthesize largeTitleViewLayout=_largeTitleViewLayout;
@property(retain, nonatomic) _UINavigationBarContentViewLayout *contentViewLayout; // @synthesize contentViewLayout=_contentViewLayout;
@property(nonatomic) struct NSDirectionalEdgeInsets largeTitleViewInsets; // @synthesize largeTitleViewInsets=_largeTitleViewInsets;
@property(retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(retain, nonatomic) UIView *animationContentClippingView; // @synthesize animationContentClippingView=_animationContentClippingView;
@property(retain, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
- (void)finalizeStateFromTransition:(id)arg1;	// IMP=0x0000000000188eee
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;	// IMP=0x0000000000188ed8
- (void)recordToStateForTransition:(id)arg1;	// IMP=0x0000000000188e75
- (void)prepareToRecordToState:(id)arg1;	// IMP=0x0000000000188e12
- (void)recordFromStateForTransition:(id)arg1;	// IMP=0x0000000000188daf
@property(readonly, copy) NSString *description;
- (_Bool)isBackgroundForScrollEdge;	// IMP=0x0000000000188a84
@property(readonly, nonatomic, getter=isVariableHeight) _Bool variableHeight;
@property(readonly, nonatomic) CDStruct_cf303044 layoutHeights;
@property(readonly, copy, nonatomic) NSArray *restingHeights;
- (id)layoutForMeasuringWidth:(double)arg1;	// IMP=0x0000000000188922
- (void)removeViewsNotInLayout:(id)arg1;	// IMP=0x00000000001886fe
- (void)removeAllViews;	// IMP=0x000000000018862d
- (void)interleaveViewsWithLayout:(id)arg1 inNavigationBar:(id)arg2;	// IMP=0x0000000000188412
- (void)installViewsInNavigationBar:(id)arg1;	// IMP=0x0000000000188284
- (void)layoutViews;	// IMP=0x0000000000187a8a
@property(readonly, nonatomic) struct CGRect weeTitleLabelLayoutFrame;
- (struct CGRect)backgroundViewLayoutFrameForcingExpandedHeight:(_Bool)arg1;	// IMP=0x000000000018761e
@property(readonly, nonatomic) struct CGRect backgroundViewLayoutFrame;
- (struct CGRect)_backgroundViewLayoutFrameWithRelevantMaxY:(double)arg1;	// IMP=0x00000000001875a6
@property(readonly, nonatomic) struct CGRect bottomPaletteLayoutFrame;
- (struct CGRect)_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)arg1;	// IMP=0x00000000001874e5
@property(readonly, nonatomic) struct CGRect searchBarLayoutFrame;
- (struct CGRect)_searchBarLayoutFrameWithLargeTitleMaxY:(double)arg1;	// IMP=0x00000000001873f7
@property(readonly, nonatomic) struct CGRect largeTitleViewLayoutFrame;
- (struct CGRect)_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)arg1;	// IMP=0x0000000000187336
@property(readonly, nonatomic) struct CGRect refreshControlLayoutFrame;
- (struct CGRect)_refreshControlLayoutFrameWithContentOrCanvasMaxY:(double)arg1;	// IMP=0x0000000000187263
@property(readonly, nonatomic) struct CGRect canvasViewLayoutFrame;
- (struct CGRect)_canvasViewLayoutFrameWithPromptMaxY:(double)arg1;	// IMP=0x00000000001871a2
@property(readonly, nonatomic) struct CGRect contentViewLayoutFrame;
- (struct CGRect)_contentViewLayoutFrameWithPromptMaxY:(double)arg1;	// IMP=0x00000000001870e4
@property(readonly, nonatomic) struct CGRect promptViewLayoutFrame;
- (void)updateLayout;	// IMP=0x0000000000186fef
- (void)_updateLayoutOutputs;	// IMP=0x0000000000186978
- (void)_updateLayoutParametersForWidth:(double)arg1;	// IMP=0x000000000018663f
- (void)_updateRefreshControlLayoutData;	// IMP=0x0000000000186123
- (void)_updateLargeTitleViewLayoutItem;	// IMP=0x0000000000185d66
- (void)_resolveContentAndCanvasLayouts;	// IMP=0x0000000000185905
- (void)_reprioritizeLayoutItem:(id)arg1 toPriority:(long long)arg2;	// IMP=0x00000000001857c1
- (void)_removeLayoutItem:(id)arg1;	// IMP=0x0000000000185746
- (void)_addLayoutItem:(id)arg1;	// IMP=0x0000000000185579
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018554a
- (id)init;	// IMP=0x00000000001854ad
- (id)initWithLayout:(id)arg1;	// IMP=0x000000000018509e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

