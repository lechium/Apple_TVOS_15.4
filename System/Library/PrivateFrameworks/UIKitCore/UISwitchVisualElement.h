//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol UISwitchControl;

@interface UISwitchVisualElement
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    id <UISwitchControl> _switchControl;	// 24 = 0x18
    double _enabledAlpha;	// 32 = 0x20
}

+ (_Bool)isFixedSize;	// IMP=0x0000000000544dec
+ (struct UIEdgeInsets)preferredAlignmentRectInsets;	// IMP=0x0000000000544cf3
+ (struct CGSize)preferredContentSize;	// IMP=0x0000000000544cdd
- (void).cxx_destruct;	// IMP=0x0000000000544e7c
@property(nonatomic) double enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
@property(nonatomic) __weak id <UISwitchControl> switchControl; // @synthesize switchControl=_switchControl;
@property(copy) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setShowsOnOffLabel:(_Bool)arg1;	// IMP=0x0000000000544de6
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000544dd0
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x0000000000544d91
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000544d2a
- (void)setOffImage:(id)arg1;	// IMP=0x0000000000544d24
- (void)setOnImage:(id)arg1;	// IMP=0x0000000000544d1e
- (void)tintColorDidChange;	// IMP=0x0000000000544d18
- (void)setThumbTintColor:(id)arg1;	// IMP=0x0000000000544d12
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000544d0c
- (void)setOnTintColor:(id)arg1;	// IMP=0x0000000000544d06
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000544c5e

@end

