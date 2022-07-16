//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarActionable-Protocol.h>
#import <UIKitCore/_UIStatusBarPrioritized-Protocol.h>

@class NSString, UIView, _UIStatusBarAction, _UIStatusBarDisplayItemPlacement, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol UILayoutItem, _UIStatusBarDisplayable;

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized, _UIStatusBarActionable>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _background;	// 9 = 0x9
    _Bool _floating;	// 10 = 0xa
    _Bool _needsAddingToLayout;	// 11 = 0xb
    UIView<_UIStatusBarDisplayable> *_view;	// 16 = 0x10
    _UIStatusBarAction *_action;	// 24 = 0x18
    _UIStatusBarIdentifier *_identifier;	// 32 = 0x20
    _UIStatusBarItem *_item;	// 40 = 0x28
    UIView *_highlightView;	// 48 = 0x30
    double _alpha;	// 56 = 0x38
    double _viewAlpha;	// 64 = 0x40
    double _baselineOffset;	// 72 = 0x48
    double _centerOffset;	// 80 = 0x50
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;	// 88 = 0x58
    long long _overriddenVerticalAlignment;	// 96 = 0x60
    _UIStatusBarRegion *_region;	// 104 = 0x68
    UIView *_containerView;	// 112 = 0x70
    id <UILayoutItem> _layoutItem;	// 120 = 0x78
    _UIStatusBarDisplayItemPlacement *_placement;	// 128 = 0x80
    struct UIEdgeInsets _actionInsets;	// 136 = 0x88
    struct CGAffineTransform _transform;	// 168 = 0xa8
    struct CGAffineTransform _viewTransform;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000c4663c
@property(nonatomic) _Bool needsAddingToLayout; // @synthesize needsAddingToLayout=_needsAddingToLayout;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) id <UILayoutItem> layoutItem; // @synthesize layoutItem=_layoutItem;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak _UIStatusBarRegion *region; // @synthesize region=_region;
@property(nonatomic) long long overriddenVerticalAlignment; // @synthesize overriddenVerticalAlignment=_overriddenVerticalAlignment;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // @synthesize overriddenStyleAttributes=_overriddenStyleAttributes;
@property(nonatomic) double centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) struct CGAffineTransform viewTransform; // @synthesize viewTransform=_viewTransform;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) double viewAlpha; // @synthesize viewAlpha=_viewAlpha;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic, getter=isBackground) _Bool background; // @synthesize background=_background;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) __weak _UIStatusBarItem *item; // @synthesize item=_item;
@property(readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct UIEdgeInsets actionInsets; // @synthesize actionInsets=_actionInsets;
@property(retain, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000c4616e
@property(readonly, nonatomic) long long priority;
@property(nonatomic) struct CGRect absoluteFrame;
- (void)_updateComputedTransform;	// IMP=0x0000000000c45cc7
- (void)_updateComputedAlpha;	// IMP=0x0000000000c45bee
@property(readonly, nonatomic) _Bool visible;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <_UIStatusBarDisplayable> displayable;
@property(readonly, nonatomic) UIView<_UIStatusBarDisplayable> *view; // @synthesize view=_view;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;	// IMP=0x0000000000c4541f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
