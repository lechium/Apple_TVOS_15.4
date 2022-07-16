//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, _UIDatePickerOverlayPresentation, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIDatePickerContainerView
{
    _Bool _lastHitTestWasPassedThrough;	// 112 = 0x70
    _UIDatePickerOverlayPresentation *_presentation;	// 120 = 0x78
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 128 = 0x80
    UIView *_contentView;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000f4d8bb
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool lastHitTestWasPassedThrough; // @synthesize lastHitTestWasPassedThrough=_lastHitTestWasPassedThrough;
@property(retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // @synthesize passthroughInteraction=_passthroughInteraction;
@property(retain, nonatomic) _UIDatePickerOverlayPresentation *presentation; // @synthesize presentation=_presentation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f4d507
- (_Bool)isTransparentFocusItem;	// IMP=0x0000000000f4d4ff
- (void)didMoveToWindow;	// IMP=0x0000000000f4d465
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000f4d3f4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000f4d289
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000f4d11e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f4cfba

@end

