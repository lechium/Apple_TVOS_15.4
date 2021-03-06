//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class CALayer, CAShapeLayer, NSString, UIAccessibilityHUDItem, UIColor, UILabel, _UIBatteryViewAXHUDImageCacheInfo;

@interface _UIBatteryView <_UIStatusBarDisplayable>
{
    _Bool _saverModeActive;	// 112 = 0x70
    _Bool _showsInlineChargingIndicator;	// 113 = 0x71
    _Bool _showsPercentage;	// 114 = 0x72
    UIColor *_fillColor;	// 120 = 0x78
    UIColor *_bodyColor;	// 128 = 0x80
    UIColor *_pinColor;	// 136 = 0x88
    UIColor *_boltColor;	// 144 = 0x90
    double _chargePercent;	// 152 = 0x98
    long long _chargingState;	// 160 = 0xa0
    double _lowBatteryChargePercentThreshold;	// 168 = 0xa8
    long long _iconSize;	// 176 = 0xb0
    UILabel *_percentageLabel;	// 184 = 0xb8
    _UIBatteryViewAXHUDImageCacheInfo *_accessibilityHUDImageCacheInfo;	// 192 = 0xc0
    CALayer *_bodyLayer;	// 200 = 0xc8
    CALayer *_pinLayer;	// 208 = 0xd0
    CALayer *_boltMaskLayer;	// 216 = 0xd8
    CALayer *_boltLayer;	// 224 = 0xe0
    CALayer *_fillLayer;	// 232 = 0xe8
    long long _internalSizeCategory;	// 240 = 0xf0
    double _bodyColorAlpha;	// 248 = 0xf8
    double _pinColorAlpha;	// 256 = 0x100
}

+ (id)_boltMaskBezierPath;	// IMP=0x0000000000c51750
+ (id)_boltBezierPathForSize:(struct CGSize)arg1;	// IMP=0x0000000000c51502
+ (id)_pinBezierPathForSize:(struct CGSize)arg1 complex:(_Bool)arg2;	// IMP=0x0000000000c51366
+ (struct CGSize)_statusBarIntrinsicContentSizeForIconSize:(long long)arg1;	// IMP=0x0000000000c51261
+ (double)_lineWidthAndInterspaceForIconSize:(long long)arg1;	// IMP=0x0000000000c4e653
+ (struct CGSize)_pinSizeForIconSize:(long long)arg1;	// IMP=0x0000000000c4e3bf
+ (struct CGSize)_batterySizeForIconSize:(long long)arg1;	// IMP=0x0000000000c4e0dc
- (void).cxx_destruct;	// IMP=0x0000000000c51e7a
@property(nonatomic) double pinColorAlpha; // @synthesize pinColorAlpha=_pinColorAlpha;
@property(nonatomic) double bodyColorAlpha; // @synthesize bodyColorAlpha=_bodyColorAlpha;
@property(nonatomic) _Bool showsPercentage; // @synthesize showsPercentage=_showsPercentage;
@property(nonatomic) long long internalSizeCategory; // @synthesize internalSizeCategory=_internalSizeCategory;
@property(retain, nonatomic) CALayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(retain, nonatomic) CALayer *boltLayer; // @synthesize boltLayer=_boltLayer;
@property(retain, nonatomic) CALayer *boltMaskLayer; // @synthesize boltMaskLayer=_boltMaskLayer;
@property(retain, nonatomic) CALayer *pinLayer; // @synthesize pinLayer=_pinLayer;
@property(retain, nonatomic) CALayer *bodyLayer; // @synthesize bodyLayer=_bodyLayer;
@property(retain, nonatomic) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo; // @synthesize accessibilityHUDImageCacheInfo=_accessibilityHUDImageCacheInfo;
@property(retain, nonatomic) UILabel *percentageLabel; // @synthesize percentageLabel=_percentageLabel;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool showsInlineChargingIndicator; // @synthesize showsInlineChargingIndicator=_showsInlineChargingIndicator;
@property(nonatomic) double lowBatteryChargePercentThreshold; // @synthesize lowBatteryChargePercentThreshold=_lowBatteryChargePercentThreshold;
@property(nonatomic) _Bool saverModeActive; // @synthesize saverModeActive=_saverModeActive;
@property(nonatomic) long long chargingState; // @synthesize chargingState=_chargingState;
@property(nonatomic) double chargePercent; // @synthesize chargePercent=_chargePercent;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000c512ce
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000c5122d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000c511bd
@property(copy, nonatomic) UIColor *boltColor; // @synthesize boltColor=_boltColor;
@property(copy, nonatomic) UIColor *pinColor; // @synthesize pinColor=_pinColor;
@property(copy, nonatomic) UIColor *bodyColor; // @synthesize bodyColor=_bodyColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (_Bool)_shouldShowBolt;	// IMP=0x0000000000c50d6b
- (_Bool)_currentlyShowsPercentage;	// IMP=0x0000000000c50d34
@property(readonly, nonatomic, getter=isLowBattery) _Bool lowBattery;
@property(nonatomic) long long sizeCategory;
- (void)_unflipBoltIfNecessary;	// IMP=0x0000000000c507c0
- (void)_updateTransform;	// IMP=0x0000000000c50656
- (void)_updatePercentage;	// IMP=0x0000000000c50375
- (void)_didFinishAnimatingBoltToVisible:(_Bool)arg1;	// IMP=0x0000000000c5036f
- (void)_willBeginAnimatingBoltToVisible:(_Bool)arg1;	// IMP=0x0000000000c50369
- (void)_notifyDidFinishAnimatingBoltToVisible:(_Bool)arg1;	// IMP=0x0000000000c50318
- (void)_notifyWillBeginAnimatingBoltToVisible:(_Bool)arg1;	// IMP=0x0000000000c502c7
- (void)_updateBolt;	// IMP=0x0000000000c4f9dc
- (double)_batteryBoltSmallScaleFactor;	// IMP=0x0000000000c4f9ce
- (double)_batteryBoltLargeScaleFactor;	// IMP=0x0000000000c4f9c0
- (double)_batteryBoltScaleFactorMultiplier;	// IMP=0x0000000000c4f90a
- (void)_fillLayerFrame:(struct CGRect *)arg1 cornerRadius:(double *)arg2;	// IMP=0x0000000000c4f6f7
- (void)_updateFillLayer;	// IMP=0x0000000000c4f661
- (void)__resetBoltLayers;	// IMP=0x0000000000c4f5e2
- (void)__updateFillLayer;	// IMP=0x0000000000c4f585
- (void)_updateBatteryFillColor;	// IMP=0x0000000000c4f39d
- (void)_updateFillColor;	// IMP=0x0000000000c4f157
- (void)_updateBodyColors;	// IMP=0x0000000000c4ee6a
- (struct CGRect)_updateBodyLayers;	// IMP=0x0000000000c4ebaa
- (void)layoutSubviews;	// IMP=0x0000000000c4ea34
- (struct CGRect)_bodyRectForTraitCollection:(id)arg1;	// IMP=0x0000000000c4e974
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;	// IMP=0x0000000000c4e8c0
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;	// IMP=0x0000000000c4e800
- (double)_lineWidthAndInterspaceForTraitCollection:(id)arg1;	// IMP=0x0000000000c4e748
- (struct CGSize)_pinSizeForTraitCollection:(id)arg1;	// IMP=0x0000000000c4e548
- (struct CGSize)_batterySizeForTraitCollection:(id)arg1;	// IMP=0x0000000000c4e2b4
- (id)_batteryTextColor;	// IMP=0x0000000000c4dfbe
- (id)_batteryFillColor;	// IMP=0x0000000000c4de1c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c4ddd5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c4dd7d
- (id)initWithSizeCategory:(long long)arg1;	// IMP=0x0000000000c4dd17
- (void)_createBoltLayersWithSize:(struct CGSize)arg1;	// IMP=0x0000000000c4da50
- (void)_createBodyLayers;	// IMP=0x0000000000c4d8e3
- (void)_createFillLayer;	// IMP=0x0000000000c4d843
- (void)_commonInit;	// IMP=0x0000000000c4d7a8
@property(readonly, nonatomic) CAShapeLayer *boltShapeLayer;
@property(readonly, nonatomic) CAShapeLayer *boltMaskShapeLayer;
@property(readonly, nonatomic) CAShapeLayer *pinShapeLayer;
@property(readonly, nonatomic) CAShapeLayer *bodyShapeLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

