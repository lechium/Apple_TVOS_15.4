//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PXPhotosGridSettings
{
    _Bool _emulatesEmptyLibrary;	// 8 = 0x8
    _Bool _enableGridZero;	// 9 = 0x9
    _Bool _enableInTopLevelSmartAlbums;	// 10 = 0xa
    _Bool _enableInImportHistory;	// 11 = 0xb
    _Bool _enableInRecentlyDeleted;	// 12 = 0xc
    _Bool _enableInMediaTypes;	// 13 = 0xd
    _Bool _enableInPanoramas;	// 14 = 0xe
    _Bool _enableInUserAlbums;	// 15 = 0xf
    _Bool _enableInUserSmartAlbums;	// 16 = 0x10
    _Bool _enableInPlaces;	// 17 = 0x11
    _Bool _enableInSharedAlbums;	// 18 = 0x12
    _Bool _enableInSearch;	// 19 = 0x13
    _Bool _enableInMyPhotoStream;	// 20 = 0x14
    _Bool _enableInStandInAlbums;	// 21 = 0x15
    _Bool _enableInOtherAlbums;	// 22 = 0x16
    _Bool _enableInAppPicker;	// 23 = 0x17
    _Bool _enableInImagePicker;	// 24 = 0x18
    _Bool _enableInCMM;	// 25 = 0x19
    _Bool _enableSuperzoom;	// 26 = 0x1a
    _Bool _enableInvisibleNavBars;	// 27 = 0x1b
    _Bool _enableSortAction;	// 28 = 0x1c
    _Bool _enableNewActionMenu;	// 29 = 0x1d
    _Bool _enableContentFiltering;	// 30 = 0x1e
    _Bool _enableAspectFitToggle;	// 31 = 0x1f
    _Bool _enableAspectFitButton;	// 32 = 0x20
    _Bool _enableZoomInOutButton;	// 33 = 0x21
    _Bool _enableDetailsMenuAction;	// 34 = 0x22
    _Bool _enableFilterButton;	// 35 = 0x23
    _Bool _enableFilterIndicatorButton;	// 36 = 0x24
    _Bool _alwaysShowFilterIndicatorButton;	// 37 = 0x25
    _Bool _enableFilterIcons;	// 38 = 0x26
    _Bool _enableFilterViewControllerAnchoringToSender;	// 39 = 0x27
    _Bool _enableTitleLegibilityDimmingFilter;	// 40 = 0x28
    _Bool _backdropStyleForPlacesAndImports;	// 41 = 0x29
    _Bool _colorNavbarArea;	// 42 = 0x2a
    _Bool _useGradientSectionHeaders;	// 43 = 0x2b
    double _defaultAnimationDuration;	// 48 = 0x30
    double _headerTitleTopSpacing;	// 56 = 0x38
    double _headerTitleBottomSpacing;	// 64 = 0x40
    double _sectionHeaderGradientOverhang;	// 72 = 0x48
    double _sectionHeaderGradientAlpha;	// 80 = 0x50
    double _headerGradientHeight;	// 88 = 0x58
    double _headerGradientAlpha;	// 96 = 0x60
    double _behindContentBackgroundGradientAlpha;	// 104 = 0x68
    double _filteringTimeoutDuration;	// 112 = 0x70
    NSString *_actionMenuGlyphName;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x00000000008933ca
+ (id)_enableTungstenNewFeaturesActionPredicate;	// IMP=0x0000000000009791
+ (id)_enableTungstenNewFeaturesAction;	// IMP=0x0000000000009728
+ (id)settingsControllerModule;	// IMP=0x0000000000007aa1
- (void).cxx_destruct;	// IMP=0x00000000008933b7
@property(copy, nonatomic) NSString *actionMenuGlyphName; // @synthesize actionMenuGlyphName=_actionMenuGlyphName;
@property(nonatomic) double filteringTimeoutDuration; // @synthesize filteringTimeoutDuration=_filteringTimeoutDuration;
@property(nonatomic) double behindContentBackgroundGradientAlpha; // @synthesize behindContentBackgroundGradientAlpha=_behindContentBackgroundGradientAlpha;
@property(nonatomic) double headerGradientAlpha; // @synthesize headerGradientAlpha=_headerGradientAlpha;
@property(nonatomic) double headerGradientHeight; // @synthesize headerGradientHeight=_headerGradientHeight;
@property(nonatomic) double sectionHeaderGradientAlpha; // @synthesize sectionHeaderGradientAlpha=_sectionHeaderGradientAlpha;
@property(nonatomic) double sectionHeaderGradientOverhang; // @synthesize sectionHeaderGradientOverhang=_sectionHeaderGradientOverhang;
@property(nonatomic) _Bool useGradientSectionHeaders; // @synthesize useGradientSectionHeaders=_useGradientSectionHeaders;
@property(nonatomic) double headerTitleBottomSpacing; // @synthesize headerTitleBottomSpacing=_headerTitleBottomSpacing;
@property(nonatomic) double headerTitleTopSpacing; // @synthesize headerTitleTopSpacing=_headerTitleTopSpacing;
@property(nonatomic) _Bool colorNavbarArea; // @synthesize colorNavbarArea=_colorNavbarArea;
@property(nonatomic) _Bool backdropStyleForPlacesAndImports; // @synthesize backdropStyleForPlacesAndImports=_backdropStyleForPlacesAndImports;
@property(nonatomic) _Bool enableTitleLegibilityDimmingFilter; // @synthesize enableTitleLegibilityDimmingFilter=_enableTitleLegibilityDimmingFilter;
@property(nonatomic) _Bool enableFilterViewControllerAnchoringToSender; // @synthesize enableFilterViewControllerAnchoringToSender=_enableFilterViewControllerAnchoringToSender;
@property(nonatomic) _Bool enableFilterIcons; // @synthesize enableFilterIcons=_enableFilterIcons;
@property(nonatomic) _Bool alwaysShowFilterIndicatorButton; // @synthesize alwaysShowFilterIndicatorButton=_alwaysShowFilterIndicatorButton;
@property(nonatomic) _Bool enableFilterIndicatorButton; // @synthesize enableFilterIndicatorButton=_enableFilterIndicatorButton;
@property(nonatomic) _Bool enableFilterButton; // @synthesize enableFilterButton=_enableFilterButton;
@property(nonatomic) _Bool enableDetailsMenuAction; // @synthesize enableDetailsMenuAction=_enableDetailsMenuAction;
@property(nonatomic) _Bool enableZoomInOutButton; // @synthesize enableZoomInOutButton=_enableZoomInOutButton;
@property(nonatomic) _Bool enableAspectFitButton; // @synthesize enableAspectFitButton=_enableAspectFitButton;
@property(nonatomic) _Bool enableAspectFitToggle; // @synthesize enableAspectFitToggle=_enableAspectFitToggle;
@property(nonatomic) _Bool enableContentFiltering; // @synthesize enableContentFiltering=_enableContentFiltering;
@property(nonatomic) _Bool enableNewActionMenu; // @synthesize enableNewActionMenu=_enableNewActionMenu;
@property(nonatomic) _Bool enableSortAction; // @synthesize enableSortAction=_enableSortAction;
@property(nonatomic) _Bool enableInvisibleNavBars; // @synthesize enableInvisibleNavBars=_enableInvisibleNavBars;
@property(nonatomic) _Bool enableSuperzoom; // @synthesize enableSuperzoom=_enableSuperzoom;
@property(nonatomic) _Bool enableInCMM; // @synthesize enableInCMM=_enableInCMM;
@property(nonatomic) _Bool enableInImagePicker; // @synthesize enableInImagePicker=_enableInImagePicker;
@property(nonatomic) _Bool enableInAppPicker; // @synthesize enableInAppPicker=_enableInAppPicker;
@property(nonatomic) _Bool enableInOtherAlbums; // @synthesize enableInOtherAlbums=_enableInOtherAlbums;
@property(nonatomic) _Bool enableInStandInAlbums; // @synthesize enableInStandInAlbums=_enableInStandInAlbums;
@property(nonatomic) _Bool enableInMyPhotoStream; // @synthesize enableInMyPhotoStream=_enableInMyPhotoStream;
@property(nonatomic) _Bool enableInSearch; // @synthesize enableInSearch=_enableInSearch;
@property(nonatomic) _Bool enableInSharedAlbums; // @synthesize enableInSharedAlbums=_enableInSharedAlbums;
@property(nonatomic) _Bool enableInPlaces; // @synthesize enableInPlaces=_enableInPlaces;
@property(nonatomic) _Bool enableInUserSmartAlbums; // @synthesize enableInUserSmartAlbums=_enableInUserSmartAlbums;
@property(nonatomic) _Bool enableInUserAlbums; // @synthesize enableInUserAlbums=_enableInUserAlbums;
@property(nonatomic) _Bool enableInPanoramas; // @synthesize enableInPanoramas=_enableInPanoramas;
@property(nonatomic) _Bool enableInMediaTypes; // @synthesize enableInMediaTypes=_enableInMediaTypes;
@property(nonatomic) _Bool enableInRecentlyDeleted; // @synthesize enableInRecentlyDeleted=_enableInRecentlyDeleted;
@property(nonatomic) _Bool enableInImportHistory; // @synthesize enableInImportHistory=_enableInImportHistory;
@property(nonatomic) _Bool enableInTopLevelSmartAlbums; // @synthesize enableInTopLevelSmartAlbums=_enableInTopLevelSmartAlbums;
@property(nonatomic) _Bool enableGridZero; // @synthesize enableGridZero=_enableGridZero;
@property(nonatomic) double defaultAnimationDuration; // @synthesize defaultAnimationDuration=_defaultAnimationDuration;
@property(nonatomic) _Bool emulatesEmptyLibrary; // @synthesize emulatesEmptyLibrary=_emulatesEmptyLibrary;
- (void)setDefaultValues;	// IMP=0x0000000000892a4c
- (id)parentSettings;	// IMP=0x0000000000892a33

@end

