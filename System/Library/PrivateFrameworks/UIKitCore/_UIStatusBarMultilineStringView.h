//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDItem, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarMultilineStringView <_UIStatusBarDisplayable>
{
    long long _numberOfLines;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c60e46
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000c60dc0
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000c60d70
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000c60c1f
@property(readonly, nonatomic) NSArray *stringViews;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c606e8

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

