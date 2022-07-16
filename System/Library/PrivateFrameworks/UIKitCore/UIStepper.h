//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStepperControl-Protocol.h>

@class NSMutableDictionary, UIView;
@protocol UIStepperVisualElement;

@interface UIStepper <UIStepperControl>
{
    NSMutableDictionary *_dividerImages;	// 8 = 0x8
    NSMutableDictionary *_incrementImages;	// 16 = 0x10
    NSMutableDictionary *_decrementImages;	// 24 = 0x18
    NSMutableDictionary *_backgroundImages;	// 32 = 0x20
    _Bool _continuous;	// 40 = 0x28
    _Bool _autorepeat;	// 41 = 0x29
    _Bool _wraps;	// 42 = 0x2a
    double _value;	// 48 = 0x30
    double _minimumValue;	// 56 = 0x38
    double _maximumValue;	// 64 = 0x40
    double _stepValue;	// 72 = 0x48
    UIView<UIStepperVisualElement> *_visualElement;	// 80 = 0x50
}

+ (id)visualElementForTraitCollection:(id)arg1;	// IMP=0x000000000053b7b5
+ (Class)visualElementClassForTraitCollection:(id)arg1;	// IMP=0x000000000053b7a4
+ (Class)_fallbackVisualElementClass;	// IMP=0x000000000053b74b
+ (_Bool)_allowsUnsupportedMacIdiomBehavior;	// IMP=0x0000000000eedfe3
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(_Bool)arg1;	// IMP=0x0000000000eedfcb
- (void).cxx_destruct;	// IMP=0x000000000053c832
@property(retain, nonatomic) UIView<UIStepperVisualElement> *visualElement; // @synthesize visualElement=_visualElement;
@property(nonatomic) _Bool wraps; // @synthesize wraps=_wraps;
@property(nonatomic) _Bool autorepeat; // @synthesize autorepeat=_autorepeat;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)tintColorDidChange;	// IMP=0x000000000053c728
- (void)setTintColor:(id)arg1;	// IMP=0x000000000053c694
- (id)decrementImageForState:(unsigned long long)arg1;	// IMP=0x000000000053c635
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000053c56d
- (id)incrementImageForState:(unsigned long long)arg1;	// IMP=0x000000000053c50e
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000053c446
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;	// IMP=0x000000000053c3e2
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;	// IMP=0x000000000053c302
- (id)backgroundImageForState:(unsigned long long)arg1;	// IMP=0x000000000053c2a3
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000053c1db
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000053c13d
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x000000000053c132
- (void)_emitValueChanged;	// IMP=0x000000000053c11b
- (void)visualElementSendValueChangedEvent:(id)arg1;	// IMP=0x000000000053c109
- (void)visualElementDidSetValue:(id)arg1;	// IMP=0x000000000053c0dd
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000053c06b
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000053bfe5
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000053bf5a
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000053becf
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000053be47
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000053be18
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(_Bool)arg2;	// IMP=0x000000000053b833
- (void)_refreshVisualElement;	// IMP=0x000000000053b7e5
- (void)_commonStepperInit;	// IMP=0x000000000053b67c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000053b4fe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000053b2dd
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000053b113
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x000000000053b069
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000053afbf
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x000000000053afb7
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x000000000053afaf
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000053af1f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000053abfe
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x000000000053ab6a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000053aacf

@end
