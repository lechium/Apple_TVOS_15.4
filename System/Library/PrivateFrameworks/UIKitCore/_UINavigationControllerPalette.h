//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UINavigationPalette-Protocol.h>

@class NSArray, NSString, UINavigationController, UIView, UIViewController, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

@interface _UINavigationControllerPalette <_UINavigationPalette>
{
    _UIBarBackground *_backgroundView;	// 112 = 0x70
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 120 = 0x78
    double _backgroundUnderlapHeight;	// 128 = 0x80
    struct {
        unsigned int isAttached:1;
        unsigned int attachmentIsChanging:1;
        unsigned int restartPaletteTransitionIfNecessary:1;
        unsigned int pinned:1;
        unsigned int pinningBarShadowIsHidden:1;
        unsigned int paletteShadowIsHidden:1;
        unsigned int pinningBarShadowWasHidden:1;
    } _paletteFlags;	// 136 = 0x88
    _Bool __paletteOverridesPinningBar;	// 140 = 0x8c
    _Bool _visibleWhenPinningBarIsHidden;	// 141 = 0x8d
    _Bool __palettePinningBarHidden;	// 142 = 0x8e
    unsigned long long _boundaryEdge;	// 144 = 0x90
    UINavigationController *_navController;	// 152 = 0x98
    UIViewController *__unpinnedController;	// 160 = 0xa0
    id __pinningBar;	// 168 = 0xa8
    NSArray *__constraints;	// 176 = 0xb0
    NSArray *__backgroundConstraints;	// 184 = 0xb8
    struct CGSize __size;	// 192 = 0xc0
    struct UIEdgeInsets _preferredContentInsets;	// 208 = 0xd0
}

@property(nonatomic, getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:) _Bool _palettePinningBarHidden; // @synthesize _palettePinningBarHidden=__palettePinningBarHidden;
@property(retain, nonatomic, setter=_setBackgroundConstraints:) NSArray *_backgroundConstraints; // @synthesize _backgroundConstraints=__backgroundConstraints;
@property(nonatomic, setter=_setSize:) struct CGSize _size; // @synthesize _size=__size;
@property(retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, setter=_setPinningBar:) id _pinningBar; // @synthesize _pinningBar=__pinningBar;
@property(nonatomic) UIViewController *_unpinnedController; // @synthesize _unpinnedController=__unpinnedController;
@property(nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden; // @synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden;
@property(readonly, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(nonatomic) struct UIEdgeInsets preferredContentInsets; // @synthesize preferredContentInsets=_preferredContentInsets;
@property(readonly, nonatomic) unsigned long long boundaryEdge; // @synthesize boundaryEdge=_boundaryEdge;
@property(nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar; // @synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;	// IMP=0x00000000002166a0
- (void)_setVisualAltitude:(double)arg1;	// IMP=0x000000000021664f
- (void)didMoveToSuperview;	// IMP=0x0000000000216596
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (id)_backgroundViewLayout;	// IMP=0x00000000002164f9
- (void)_setupBackgroundViewIfNecessary;	// IMP=0x0000000000216414
- (void)_resetHeightConstraintConstant;	// IMP=0x0000000000216361
- (void)_setLeftConstraintConstant:(double)arg1;	// IMP=0x00000000002162d5
- (void)_setTopConstraintConstant:(double)arg1;	// IMP=0x0000000000216246
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000002161c3
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;	// IMP=0x0000000000215f34
- (void)_resetConstraintConstants:(double)arg1;	// IMP=0x0000000000215afb
- (void)_enableConstraints;	// IMP=0x0000000000215aa1
- (void)_disableConstraints;	// IMP=0x0000000000215a52
- (void)_configurePaletteConstraintsForBoundary;	// IMP=0x000000000021540d
- (void)_updateBackgroundConstraintsIfNecessary;	// IMP=0x0000000000215258
- (void)_propagateBackgroundToContents;	// IMP=0x0000000000215252
- (_Bool)_shouldUpdateBackground;	// IMP=0x0000000000215240
- (void)_updateLayoutForCurrentConfiguration;	// IMP=0x000000000021523a
- (void)_configureConstraintsForBackground:(id)arg1;	// IMP=0x000000000021503e
- (_Bool)paletteIsHidden;	// IMP=0x0000000000215014
- (_Bool)isAttached;	// IMP=0x0000000000215002
@property(nonatomic, getter=isPinned) _Bool pinned;
- (void)_setAttached:(_Bool)arg1 didComplete:(_Bool)arg2;	// IMP=0x0000000000214eae
@property(nonatomic) _Bool paletteShadowIsHidden;
- (void)_updateBackgroundView;	// IMP=0x0000000000214e2b
- (id)_attachedPinningTopBar;	// IMP=0x0000000000214de5
@property(nonatomic) _Bool pinningBarShadowWasHidden;
@property(nonatomic) _Bool pinningBarShadowIsHidden;
@property(nonatomic, setter=_setRestartPaletteTransitionIfNecessary:) _Bool _restartPaletteTransitionIfNecessary;
@property(readonly, nonatomic, getter=_attachmentIsChanging) _Bool _attachmentIsChanging;
- (void)_setAttachmentIsChanging:(_Bool)arg1;	// IMP=0x0000000000214c42
- (void)dealloc;	// IMP=0x0000000000214bcf
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x0000000000214b44
- (_Bool)_supportsSpecialSearchBarTransitions;	// IMP=0x0000000000214b3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
