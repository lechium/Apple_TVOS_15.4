//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSString, UIAccessibilityHUDItem, UIImage;

@interface _UIStatusBarImageView <_UIStatusBarDisplayable>
{
    _Bool _useDisabledAppearanceForAccessibilityHUD;	// 8 = 0x8
    long long _fontStyle;	// 16 = 0x10
    UIImage *_accessibilityHUDImage;	// 24 = 0x18
    double _iconScale;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c5ecb2
@property(nonatomic) double iconScale; // @synthesize iconScale=_iconScale;
@property(retain, nonatomic) UIImage *accessibilityHUDImage; // @synthesize accessibilityHUDImage=_accessibilityHUDImage;
@property(nonatomic) _Bool useDisabledAppearanceForAccessibilityHUD; // @synthesize useDisabledAppearanceForAccessibilityHUD=_useDisabledAppearanceForAccessibilityHUD;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000c5ea59
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000c5e935
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c5e8c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

