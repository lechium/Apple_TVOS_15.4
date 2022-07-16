//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSString, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIDimmingKnockoutBackdropView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    UIView *dimmingKnockoutView;	// 112 = 0x70
    UIVisualEffectView *backdropView;	// 120 = 0x78
    double _alpha;	// 128 = 0x80
    double _currentCornerRadius;	// 136 = 0x88
    double _cornerRadius;	// 144 = 0x90
    long long _style;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000108e659
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)setPressed:(_Bool)arg1;	// IMP=0x000000000108e630
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000108e618
- (void)_updateCornerRadius;	// IMP=0x000000000108e3b8
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x000000000108e2e0
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000000108e2c2
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000108e25e
- (void)setAlpha:(double)arg1;	// IMP=0x000000000108e1df
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;	// IMP=0x000000000108e157
- (id)_dimmingKnockoutFilterForBackdropStyle:(long long)arg1;	// IMP=0x000000000108e114
- (id)_vibrancyEffectForStyle:(long long)arg1;	// IMP=0x000000000108e10c
- (id)_visualEffectForStyle:(long long)arg1;	// IMP=0x000000000108dec0
- (void)_updateBackdropViewWithStyle:(long long)arg1 alpha:(double)arg2;	// IMP=0x000000000108dccf
- (void)_configureViewsWithStyle:(long long)arg1;	// IMP=0x000000000108da6a
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000108d944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

