//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWindow, _UIFallbackPresentationWindow;

@interface _UIFallbackPresentationViewController
{
    _UIFallbackPresentationWindow *_presentationWindow;	// 400 = 0x190
    _Bool _hasPreservedKeyboardInputViews;	// 408 = 0x198
    _Bool _hasDismissCompletionHandler;	// 409 = 0x199
    UIWindow *_rotationDecider;	// 416 = 0x1a0
    CDUnknownBlockType _presentationPreparationBlock;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x0000000000435571
@property(nonatomic) _Bool hasDismissCompletionHandler; // @synthesize hasDismissCompletionHandler=_hasDismissCompletionHandler;
@property(nonatomic) _Bool hasPreservedKeyboardInputViews; // @synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews;
@property(copy, nonatomic) CDUnknownBlockType presentationPreparationBlock; // @synthesize presentationPreparationBlock=_presentationPreparationBlock;
@property(retain, nonatomic) UIWindow *rotationDecider; // @synthesize rotationDecider=_rotationDecider;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000004354e2
- (void)_preparePresentationControllerForPresenting:(id)arg1;	// IMP=0x000000000043548a
- (void)_restoreInputViewsAnimated:(_Bool)arg1;	// IMP=0x00000000004353b7
- (void)_preserveInputViewsAnimated:(_Bool)arg1;	// IMP=0x00000000004352fa
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000435178
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000434adb
- (void)viewDidLoad;	// IMP=0x0000000000434a43

@end

