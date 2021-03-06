//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewController
{
    NSArray *_keyCommands;	// 400 = 0x190
    struct __GSKeyboard *_keyboard;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x0000000000b3ff43
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000b3ff3b
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b3fec9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000b3fe5f
- (void)_updateVisualStyle;	// IMP=0x0000000000b3fdc8
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000b3fd7b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000b3fd3a
- (void)loadView;	// IMP=0x0000000000b3fcad
- (void)dealloc;	// IMP=0x0000000000b3fc67
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard *)arg2;	// IMP=0x0000000000b3fbcf

// Remaining properties
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDView *view; // @dynamic view;

@end

