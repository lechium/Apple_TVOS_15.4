//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarActivityIconView, _UIStatusBarImageView, _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem
{
    _UIStatusBarPillView *_backgroundView;	// 8 = 0x8
    _UIStatusBarActivityIconView *_iconView;	// 16 = 0x10
    _UIStatusBarImageView *_secondaryIconView;	// 24 = 0x18
}

+ (double)_fontSizeAdjustmentForActivityType:(long long)arg1;	// IMP=0x0000000000c28838
+ (double)_verticalOffsetForActivityType:(long long)arg1;	// IMP=0x0000000000c287cb
+ (_Bool)_identifierContainsSecondaryItemImage:(id)arg1;	// IMP=0x0000000000c2788a
+ (_Bool)_identifierContainsItemImage:(id)arg1;	// IMP=0x0000000000c2782c
+ (id)secondaryIconDisplayIdentifier;	// IMP=0x0000000000c276c5
+ (id)backgroundDisplayIdentifier;	// IMP=0x0000000000c276ac
- (void).cxx_destruct;	// IMP=0x0000000000c28ed6
@property(retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // @synthesize secondaryIconView=_secondaryIconView;
@property(retain, nonatomic) _UIStatusBarActivityIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) _UIStatusBarPillView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000c28de3
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000c28d2c
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000c28c44
- (id)imageView;	// IMP=0x0000000000c28c32
- (void)_create_secondaryIconView;	// IMP=0x0000000000c28bd8
- (void)_create_iconView;	// IMP=0x0000000000c28b47
- (void)_create_backgroundView;	// IMP=0x0000000000c28ab6
- (id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000c28a29
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000c289ec
- (_Bool)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000c289bc
- (id)_backgroundColorForActivityType:(long long)arg1;	// IMP=0x0000000000c2885b
- (id)secondaryImageForUpdate:(id)arg1;	// IMP=0x0000000000c28706
- (id)_secondarySystemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000000c286fe
- (id)imageForUpdate:(id)arg1;	// IMP=0x0000000000c28417
- (id)_textLabelForActivityType:(long long)arg1;	// IMP=0x0000000000c28400
- (id)_imageNameForActivityType:(long long)arg1;	// IMP=0x0000000000c283d4
- (id)_systemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000000c282cc
- (id)imageNameForUpdate:(id)arg1;	// IMP=0x0000000000c2823c
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000000c281ac
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000c280e5
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000c279c0
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000c278e8
- (id)_backgroundActivityViewForIdentifier:(id)arg1;	// IMP=0x0000000000c277ab
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000000c276f2
- (id)indicatorEntryKey;	// IMP=0x0000000000c276de

@end

