//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardLayoutStarDelegate-Protocol.h>

@class NSMutableArray, NSString, UIKBScreenTraits, UIKBTree, UIKBViewForResponderForwarding, UIKeyboardLayoutStar, UIKeyboardTaskQueue, UITextInputTraits;

__attribute__((visibility("hidden")))
@interface UIKeyboardPopoverController <UIKeyboardLayoutStarDelegate>
{
    NSString *_inputMode;	// 8 = 0x8
    UIKeyboardLayoutStar *_layout;	// 16 = 0x10
    UIKBScreenTraits *_screenTraits;	// 24 = 0x18
    UITextInputTraits *_textInputTraits;	// 32 = 0x20
    UIKeyboardTaskQueue *_taskQueue;	// 40 = 0x28
    UIKBTree *_keyboard;	// 48 = 0x30
    NSMutableArray *_hiddenKeys;	// 56 = 0x38
    UIKBViewForResponderForwarding *_containerForActiveKeys;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000fd1a73
- (id)keyboardLayout:(id)arg1 willChangeRenderConfig:(id)arg2;	// IMP=0x0000000000fd1a02
- (id)keyboardLayout:(id)arg1 containingViewForActiveKey:(id)arg2 inKeyplaneView:(id)arg3;	// IMP=0x0000000000fd19ed
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000fd19e5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000fd18c0
- (void)keyboardLayout:(id)arg1 didSwitchToKeyplane:(id)arg2;	// IMP=0x0000000000fd153f
- (long long)overrideUserInterfaceStyle;	// IMP=0x0000000000fd14ea
- (_Bool)handleHardwareKeyboardEvent:(id)arg1;	// IMP=0x0000000000fd13fd
@property(readonly, nonatomic) UIKeyboardLayoutStar *layout;
@property(readonly, nonatomic) NSString *inputModeIdentifier;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000fd134e
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000fd12b6
- (double)preferredTextFieldHeight;	// IMP=0x0000000000fd11fc
- (void)viewDidLoad;	// IMP=0x0000000000fd049e
- (void)dealloc;	// IMP=0x0000000000fd0320
- (id)initWithInputModeIdentifier:(id)arg1 textInputTraits:(id)arg2 taskQueue:(id)arg3;	// IMP=0x0000000000fd018a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

