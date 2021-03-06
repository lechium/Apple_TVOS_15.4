//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarSystemNavigationItemView
{
    int _currentLabelCompressionLevel;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c239e9
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) int currentLabelCompressionLevel; // @synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel;
- (double)extraRightPadding;	// IMP=0x0000000000c2396e
- (double)extraLeftPadding;	// IMP=0x0000000000c2394b
- (id)shortenedTitleWithCompressionLevel:(int)arg1;	// IMP=0x0000000000c23943
- (void)userDidActivateButton:(id)arg1;	// IMP=0x0000000000c2393d
- (long long)labelLineBreakMode;	// IMP=0x0000000000c23932
- (_Bool)layoutImageOnTrailingEdge;	// IMP=0x0000000000c2392a
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000c2386e
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000c2373b
- (double)resetContentOverlap;	// IMP=0x0000000000c2370a
@property(retain, nonatomic) NSString *title;
- (double)updateContentsAndWidth;	// IMP=0x0000000000c234dc
- (struct CGSize)_buttonSize;	// IMP=0x0000000000c23434
- (_Bool)_shouldLayoutImageOnRight;	// IMP=0x0000000000c23076

@end

