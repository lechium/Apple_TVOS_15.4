//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject
{
    UINavigationBar *_navigationBar;	// 8 = 0x8
    _UINavigationBarItemStack *_stack;	// 16 = 0x10
    _UINavigationBarModernPromptView *_promptView;	// 24 = 0x18
    _UINavigationBarContentView *_contentView;	// 32 = 0x20
    _UIBarBackground *_backgroundView;	// 40 = 0x28
    _UINavigationBarLargeTitleView *_largeTitleView;	// 48 = 0x30
    _UINavigationBarLayout *_fromLayout;	// 56 = 0x38
    _UINavigationBarLayout *_toLayout;	// 64 = 0x40
    _UINavigationBarContentViewLayout *_fromContentLayout;	// 72 = 0x48
    _UINavigationBarContentViewLayout *_toContentLayout;	// 80 = 0x50
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;	// 88 = 0x58
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;	// 96 = 0x60
    double _backgroundAlpha;	// 104 = 0x68
    int _largeTitleTransitionType;	// 112 = 0x70
    long long _apiVersion;	// 120 = 0x78
    struct {
        unsigned int isRTL:1;
        unsigned int compact:1;
        unsigned int allowLargeTitles:1;
        unsigned int twoPart:1;
        unsigned int beginWithLargeTitle:1;
        unsigned int endWithLargeTitle:1;
        unsigned int observedScrollViewOffsetIsApplicable:1;
        unsigned int sharesContentViewLayouts:1;
        unsigned int beginWithTransparencyAllowed:1;
        unsigned int endWithTransparencyAllowed:1;
    } _navigationBarTransitionContextFlags;	// 128 = 0x80
    NSMutableSet *_clippingViews;	// 136 = 0x88
    struct CGPoint _startingContentOffsetForObservedScrollView;	// 144 = 0x90
}

+ (id)contextForTransition:(int)arg1;	// IMP=0x000000000018a485
- (void).cxx_destruct;	// IMP=0x000000000018bec7
@property(retain, nonatomic) _UINavigationBarLayout *toLayout; // @synthesize toLayout=_toLayout;
@property(retain, nonatomic) _UINavigationBarLayout *fromLayout; // @synthesize fromLayout=_fromLayout;
@property(nonatomic) struct CGPoint startingContentOffsetForObservedScrollView; // @synthesize startingContentOffsetForObservedScrollView=_startingContentOffsetForObservedScrollView;
@property(retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(retain, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property(nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;	// IMP=0x000000000018bd4d
- (void)_animateAsTwoPartsWithoutOverlap:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;	// IMP=0x000000000018bd33
- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;	// IMP=0x000000000018bcab
- (void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(CDUnknownBlockType)arg2 partTwo:(CDUnknownBlockType)arg3;	// IMP=0x000000000018bb18
- (void)_removeAllClippingViews;	// IMP=0x000000000018b9ca
- (void)_addClippingView:(id)arg1;	// IMP=0x000000000018b95f
@property(readonly, nonatomic) double contentViewMaxY;
@property(readonly, nonatomic) double contentViewFittingHeight;
@property(readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property(readonly, nonatomic) UIView *viewUsingEaseOutCurve;
@property(readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
- (void)cancel;	// IMP=0x000000000018b71a
- (void)complete;	// IMP=0x000000000018b60b
- (void)_resetContentAndLargeTitleViewCompleted:(_Bool)arg1;	// IMP=0x000000000018b5bc
- (void)setAllLargeTitleLayoutsVisible;	// IMP=0x000000000018b57d
- (void)animate;	// IMP=0x000000000018b56b
- (void)_animateBackgroundView;	// IMP=0x000000000018b3da
- (_Bool)shouldPerformTwoPartCrossfadeTransition;	// IMP=0x000000000018b380
- (void)_animateFromBottomPaletteAtEdge:(unsigned long long)arg1;	// IMP=0x000000000018ae59
- (void)_prepareToBottomPaletteAtEdge:(unsigned long long)arg1;	// IMP=0x000000000018ab33
- (void)prepare;	// IMP=0x000000000018a8e0
- (void)recordUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000018a57c
- (id)description;	// IMP=0x000000000018a3fb
@property(nonatomic) _Bool endWithTransparencyAllowed;
@property(nonatomic) _Bool beginWithTransparencyAllowed;
@property(nonatomic) _Bool sharesContentViewLayouts;
@property(nonatomic) _Bool observedScrollViewOffsetIsApplicable;
@property(nonatomic) _Bool endWithLargeTitle;
@property(nonatomic) _Bool beginWithLargeTitle;
@property(nonatomic) _Bool twoPart;
@property(nonatomic) _Bool allowLargeTitles;
@property(nonatomic) _Bool compact;
@property(nonatomic, setter=setRTL:) _Bool isRTL;

// Remaining properties
@property(readonly, nonatomic) int transition; // @dynamic transition;

@end

