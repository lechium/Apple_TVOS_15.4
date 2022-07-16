//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryLayoutSpec-Protocol.h>

@class NSDictionary, NSShadow, PXExploreLayoutMetrics, PXStoryChromeButtonSpec, UIColor;

@interface PXStoryConcreteLayoutSpec <PXStoryLayoutSpec>
{
    _Bool _styleSwitcherShowsRestartButton;	// 8 = 0x8
    _Bool _styleSwitcherShowsTitle;	// 9 = 0x9
    UIColor *_backgroundColor;	// 16 = 0x10
    double _interpageSpacing;	// 24 = 0x18
    long long _scrollDecelerationRate;	// 32 = 0x20
    long long _browserGridScrollDecelerationRate;	// 40 = 0x28
    PXExploreLayoutMetrics *_browserGridLayoutMetrics;	// 48 = 0x30
    double _browserGridCellCornersRadius;	// 56 = 0x38
    double _thumbnailCornerRadius;	// 64 = 0x40
    NSShadow *_thumbnailShadow;	// 72 = 0x48
    double _thumbnailChromeButtonSpacing;	// 80 = 0x50
    PXStoryChromeButtonSpec *_thumbnailChromeButtonSpec;	// 88 = 0x58
    double _styleSwitcherChromeButtonHorizontalMargin;	// 96 = 0x60
    PXStoryChromeButtonSpec *_styleSwitcherChromeButtonSpec;	// 104 = 0x68
    double _styleSwitcherViewportSpacing;	// 112 = 0x70
    NSDictionary *_styleSwitcherTitleAttributes;	// 120 = 0x78
    double _styleSwitcherPageControlHeight;	// 128 = 0x80
    long long _styleSwitcherLayoutDirection;	// 136 = 0x88
    double _scrubberVerticalPadding;	// 144 = 0x90
    double _distanceBetweenBufferingIndicatorCenterAndBottom;	// 152 = 0x98
    struct CGSize _thumbnailChromePadding;	// 160 = 0xa0
    struct CGSize _scrubberCurrentAssetSize;	// 176 = 0xb0
    struct CGSize _bufferingIndicatorSize;	// 192 = 0xc0
    struct UIEdgeInsets _styleSwitcherChromeInset;	// 208 = 0xd0
    struct UIEdgeInsets _styleSwitcherViewportInset;	// 240 = 0xf0
    struct UIEdgeInsets _styleSwitcherPageControlInset;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000077cf6
@property(readonly, nonatomic) double distanceBetweenBufferingIndicatorCenterAndBottom; // @synthesize distanceBetweenBufferingIndicatorCenterAndBottom=_distanceBetweenBufferingIndicatorCenterAndBottom;
@property(readonly, nonatomic) struct CGSize bufferingIndicatorSize; // @synthesize bufferingIndicatorSize=_bufferingIndicatorSize;
@property(readonly, nonatomic) double scrubberVerticalPadding; // @synthesize scrubberVerticalPadding=_scrubberVerticalPadding;
@property(readonly, nonatomic) struct CGSize scrubberCurrentAssetSize; // @synthesize scrubberCurrentAssetSize=_scrubberCurrentAssetSize;
@property(readonly, nonatomic) long long styleSwitcherLayoutDirection; // @synthesize styleSwitcherLayoutDirection=_styleSwitcherLayoutDirection;
@property(readonly, nonatomic) struct UIEdgeInsets styleSwitcherPageControlInset; // @synthesize styleSwitcherPageControlInset=_styleSwitcherPageControlInset;
@property(readonly, nonatomic) double styleSwitcherPageControlHeight; // @synthesize styleSwitcherPageControlHeight=_styleSwitcherPageControlHeight;
@property(readonly, nonatomic) _Bool styleSwitcherShowsTitle; // @synthesize styleSwitcherShowsTitle=_styleSwitcherShowsTitle;
@property(readonly, nonatomic) NSDictionary *styleSwitcherTitleAttributes; // @synthesize styleSwitcherTitleAttributes=_styleSwitcherTitleAttributes;
@property(readonly, nonatomic) double styleSwitcherViewportSpacing; // @synthesize styleSwitcherViewportSpacing=_styleSwitcherViewportSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets styleSwitcherViewportInset; // @synthesize styleSwitcherViewportInset=_styleSwitcherViewportInset;
@property(readonly, nonatomic) struct UIEdgeInsets styleSwitcherChromeInset; // @synthesize styleSwitcherChromeInset=_styleSwitcherChromeInset;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *styleSwitcherChromeButtonSpec; // @synthesize styleSwitcherChromeButtonSpec=_styleSwitcherChromeButtonSpec;
@property(readonly, nonatomic) double styleSwitcherChromeButtonHorizontalMargin; // @synthesize styleSwitcherChromeButtonHorizontalMargin=_styleSwitcherChromeButtonHorizontalMargin;
@property(readonly, nonatomic) _Bool styleSwitcherShowsRestartButton; // @synthesize styleSwitcherShowsRestartButton=_styleSwitcherShowsRestartButton;
@property(readonly, nonatomic) PXStoryChromeButtonSpec *thumbnailChromeButtonSpec; // @synthesize thumbnailChromeButtonSpec=_thumbnailChromeButtonSpec;
@property(readonly, nonatomic) double thumbnailChromeButtonSpacing; // @synthesize thumbnailChromeButtonSpacing=_thumbnailChromeButtonSpacing;
@property(readonly, nonatomic) struct CGSize thumbnailChromePadding; // @synthesize thumbnailChromePadding=_thumbnailChromePadding;
@property(readonly, nonatomic) NSShadow *thumbnailShadow; // @synthesize thumbnailShadow=_thumbnailShadow;
@property(readonly, nonatomic) double thumbnailCornerRadius; // @synthesize thumbnailCornerRadius=_thumbnailCornerRadius;
@property(readonly, nonatomic) double browserGridCellCornersRadius; // @synthesize browserGridCellCornersRadius=_browserGridCellCornersRadius;
@property(readonly, nonatomic) PXExploreLayoutMetrics *browserGridLayoutMetrics; // @synthesize browserGridLayoutMetrics=_browserGridLayoutMetrics;
@property(readonly, nonatomic) long long browserGridScrollDecelerationRate; // @synthesize browserGridScrollDecelerationRate=_browserGridScrollDecelerationRate;
@property(readonly, nonatomic) long long scrollDecelerationRate; // @synthesize scrollDecelerationRate=_scrollDecelerationRate;
@property(readonly, nonatomic) double interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000077ade
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 storyConfigurationOptions:(unsigned long long)arg3;	// IMP=0x0000000000076f17

@end

