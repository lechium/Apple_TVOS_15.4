//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PXMessagesUISettings
{
    NSArray *_cachedHorizontalOffsets;	// 8 = 0x8
    _Bool _enableDebugTapbacksStack;	// 16 = 0x10
    _Bool _applyRotationToFirstAndLast;	// 17 = 0x11
    _Bool _renderWithCA;	// 18 = 0x12
    _Bool _bestCropRectEnabled;	// 19 = 0x13
    _Bool _aspectTilesEnabled;	// 20 = 0x14
    _Bool _enableDebugTapbacksGrid;	// 21 = 0x15
    long long _dataSourceType;	// 24 = 0x18
    unsigned long long _stackedItemsCount;	// 32 = 0x20
    double _normalizedStackSizeTransform;	// 40 = 0x28
    double _normalizedStackVerticalOffset;	// 48 = 0x30
    double _verticalContentInsets;	// 56 = 0x38
    double _rotationAngle;	// 64 = 0x40
    double _stackShadowYOffset;	// 72 = 0x48
    double _stackShadowBlurRadius;	// 80 = 0x50
    double _stackShadowAlpha;	// 88 = 0x58
    NSString *_horizontalOffsetString;	// 96 = 0x60
    double _normalizedPageWidth;	// 104 = 0x68
    long long _pagingBehavior;	// 112 = 0x70
    double _pagingVelocityThreshold;	// 120 = 0x78
    double _gridShadowXOffset;	// 128 = 0x80
    double _gridShadowYOffset;	// 136 = 0x88
    double _gridShadowBlurRadius;	// 144 = 0x90
    double _gridShadowAlpha;	// 152 = 0x98
    double _minItemSize;	// 160 = 0xa0
    double _comfortableFitPercentage;	// 168 = 0xa8
    long long _minColumns;	// 176 = 0xb0
    long long _maxColumns;	// 184 = 0xb8
    unsigned long long _transitionItemsCount;	// 192 = 0xc0
    double _transitionDuration;	// 200 = 0xc8
    double _transitionSpringDamping;	// 208 = 0xd0
    double _transitionSpringVelocity;	// 216 = 0xd8
}

+ (id)transientProperties;	// IMP=0x0000000000016a5a
+ (id)sharedInstance;	// IMP=0x0000000000016a2a
+ (void)_showStackBalloonViewWithNavigationController:(id)arg1;	// IMP=0x0000000000083406
+ (id)_assetCollectionItemProvider;	// IMP=0x000000000008326c
+ (id)settingsControllerModule;	// IMP=0x0000000000081c38
- (void).cxx_destruct;	// IMP=0x00000000000169f9
@property(nonatomic) double transitionSpringVelocity; // @synthesize transitionSpringVelocity=_transitionSpringVelocity;
@property(nonatomic) double transitionSpringDamping; // @synthesize transitionSpringDamping=_transitionSpringDamping;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) unsigned long long transitionItemsCount; // @synthesize transitionItemsCount=_transitionItemsCount;
@property(nonatomic) long long maxColumns; // @synthesize maxColumns=_maxColumns;
@property(nonatomic) long long minColumns; // @synthesize minColumns=_minColumns;
@property(nonatomic) double comfortableFitPercentage; // @synthesize comfortableFitPercentage=_comfortableFitPercentage;
@property(nonatomic) double minItemSize; // @synthesize minItemSize=_minItemSize;
@property(nonatomic) _Bool enableDebugTapbacksGrid; // @synthesize enableDebugTapbacksGrid=_enableDebugTapbacksGrid;
@property(nonatomic) double gridShadowAlpha; // @synthesize gridShadowAlpha=_gridShadowAlpha;
@property(nonatomic) double gridShadowBlurRadius; // @synthesize gridShadowBlurRadius=_gridShadowBlurRadius;
@property(nonatomic) double gridShadowYOffset; // @synthesize gridShadowYOffset=_gridShadowYOffset;
@property(nonatomic) double gridShadowXOffset; // @synthesize gridShadowXOffset=_gridShadowXOffset;
@property(nonatomic) _Bool aspectTilesEnabled; // @synthesize aspectTilesEnabled=_aspectTilesEnabled;
@property(nonatomic) _Bool bestCropRectEnabled; // @synthesize bestCropRectEnabled=_bestCropRectEnabled;
@property(nonatomic) double pagingVelocityThreshold; // @synthesize pagingVelocityThreshold=_pagingVelocityThreshold;
@property(nonatomic) long long pagingBehavior; // @synthesize pagingBehavior=_pagingBehavior;
@property(nonatomic) double normalizedPageWidth; // @synthesize normalizedPageWidth=_normalizedPageWidth;
@property(copy, nonatomic) NSString *horizontalOffsetString; // @synthesize horizontalOffsetString=_horizontalOffsetString;
@property(nonatomic) _Bool renderWithCA; // @synthesize renderWithCA=_renderWithCA;
@property(nonatomic) double stackShadowAlpha; // @synthesize stackShadowAlpha=_stackShadowAlpha;
@property(nonatomic) double stackShadowBlurRadius; // @synthesize stackShadowBlurRadius=_stackShadowBlurRadius;
@property(nonatomic) double stackShadowYOffset; // @synthesize stackShadowYOffset=_stackShadowYOffset;
@property(nonatomic) _Bool applyRotationToFirstAndLast; // @synthesize applyRotationToFirstAndLast=_applyRotationToFirstAndLast;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) _Bool enableDebugTapbacksStack; // @synthesize enableDebugTapbacksStack=_enableDebugTapbacksStack;
@property(nonatomic) double verticalContentInsets; // @synthesize verticalContentInsets=_verticalContentInsets;
@property(nonatomic) double normalizedStackVerticalOffset; // @synthesize normalizedStackVerticalOffset=_normalizedStackVerticalOffset;
@property(nonatomic) double normalizedStackSizeTransform; // @synthesize normalizedStackSizeTransform=_normalizedStackSizeTransform;
@property(nonatomic) unsigned long long stackedItemsCount; // @synthesize stackedItemsCount=_stackedItemsCount;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(readonly, nonatomic) NSArray *horizontalOffsets;
- (void)setDefaultValues;	// IMP=0x0000000000016024
- (id)parentSettings;	// IMP=0x000000000001600b

@end

