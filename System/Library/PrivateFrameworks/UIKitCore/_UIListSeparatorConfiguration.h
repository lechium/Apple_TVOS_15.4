//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface _UIListSeparatorConfiguration
{
    _Bool _adjustColorForMultipleSelection;	// 8 = 0x8
    long long _hidingBehavior;	// 16 = 0x10
    long long _insetAdjustmentBehavior;	// 24 = 0x18
    struct NSDirectionalEdgeInsets _insetsForBoundarySeparators;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000d2a35e
+ (id)_configurationForAppearanceStyle:(long long)arg1 inLayoutEnvironment:(id)arg2;	// IMP=0x0000000000d2a067
@property(nonatomic, getter=_insetsForBoundarySeparators, setter=_setInsetsForBoundarySeparators:) struct NSDirectionalEdgeInsets _insetsForBoundarySeparators; // @synthesize _insetsForBoundarySeparators;
@property(nonatomic, getter=_shouldAdjustColorForMultipleSelection, setter=_setAdjustColorForMultipleSelection:) _Bool _adjustColorForMultipleSelection; // @synthesize _adjustColorForMultipleSelection;
@property(nonatomic, getter=_insetAdjustmentBehaviour, setter=_setInsetAdjustmentBehavior:) long long _insetAdjustmentBehavior; // @synthesize _insetAdjustmentBehavior;
@property(nonatomic, getter=_hidingBehavior, setter=_setHidingBehavior:) long long _hidingBehavior; // @synthesize _hidingBehavior;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d2a457
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d2a366
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2a25a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2a1ed
@property(retain, nonatomic, getter=_multipleSelectionColor, setter=_setMultipleSelectionColor:) UIColor *_multipleSelectionColor;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *_color;
@property(nonatomic, getter=_insets, setter=_setInsets:) struct NSDirectionalEdgeInsets _insets;

@end

