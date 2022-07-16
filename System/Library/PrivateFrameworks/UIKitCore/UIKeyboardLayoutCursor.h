//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKBAlertControllerDelegate-Protocol.h>

@class NSArray, NSString, UIAlertController, UIKBTree, UILabel, UILexicon, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutCursor <UIKBAlertControllerDelegate>
{
    UIKBTree *_indirectKeyboard;	// 696 = 0x2b8
    UIView *_selectionView;	// 704 = 0x2c0
    NSArray *_keyplaneKeys;	// 712 = 0x2c8
    long long _selectedKeyIndex;	// 720 = 0x2d0
    _Bool _ignoreEventsUntilPressEnds;	// 728 = 0x2d8
    UILexicon *_recentInputs;	// 736 = 0x2e0
    _Bool _disableTouchInput;	// 744 = 0x2e8
    _Bool _suppressOperations;	// 745 = 0x2e9
    UIKBTree *_cachedMultitapKeyplane;	// 752 = 0x2f0
    _Bool _cachedCanMultitap;	// 760 = 0x2f8
    UILabel *_dictationHelpLabel;	// 768 = 0x300
    _Bool _didVariantDelete;	// 776 = 0x308
    _Bool _isForwardingEvent;	// 777 = 0x309
    _Bool _overrideInitialKey;	// 778 = 0x30a
    int _overridenSelectedKeyType;	// 780 = 0x30c
    _Bool _shouldConfigureFloatingContentView;	// 784 = 0x310
    _Bool _shouldToggleLetterCaseNext;	// 785 = 0x311
    struct CGPoint _keyplaneSwitchSelectedKeyFrameCenter;	// 792 = 0x318
    _Bool _selectInitialKey;	// 808 = 0x328
    unsigned long long _lastSelectedKeyIndex;	// 816 = 0x330
    UIAlertController *_recentInputsAlert;	// 824 = 0x338
    NSString *_keyplaneBeforeDictation;	// 832 = 0x340
    long long _selectedKeyBeforeDictation;	// 840 = 0x348
    UIWindow *_focusWindow;	// 848 = 0x350
}

+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x00000000008a4d60
+ (id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2;	// IMP=0x00000000008a4cbe
@property(retain, nonatomic) UIWindow *focusWindow; // @synthesize focusWindow=_focusWindow;
@property(nonatomic) long long selectedKeyBeforeDictation; // @synthesize selectedKeyBeforeDictation=_selectedKeyBeforeDictation;
@property(retain, nonatomic) NSString *keyplaneBeforeDictation; // @synthesize keyplaneBeforeDictation=_keyplaneBeforeDictation;
@property(retain, nonatomic) UIAlertController *recentInputsAlert; // @synthesize recentInputsAlert=_recentInputsAlert;
- (_Bool)isKeyboardRightToLeft;	// IMP=0x00000000008ace1a
- (_Bool)isAppRightToLeft;	// IMP=0x00000000008acdf6
@property(readonly, nonatomic, getter=isSlimLinearKeyboardTV) _Bool slimLinearKeyboardTV;
- (id)getRomanAccentVariantsForString:(id)arg1 inputMode:(id)arg2 keyboardVariantIndludes:(int)arg3;	// IMP=0x00000000008accc7
- (_Bool)_isKeyboardReverseOfAppLayoutDirection;	// IMP=0x00000000008acc53
- (unsigned long long)_indexOfFirstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000008acb14
- (_Bool)_handleMoveWithEvent:(id)arg1;	// IMP=0x00000000008ac9f7
- (_Bool)_isDirectionalHeading:(unsigned long long)arg1;	// IMP=0x00000000008ac9e3
- (void)_moveWithEvent:(id)arg1;	// IMP=0x00000000008ac9a9
- (_Bool)_handleWheelChangedWithEvent:(id)arg1;	// IMP=0x00000000008ac956
- (void)_wheelChangedWithEvent:(id)arg1;	// IMP=0x00000000008ac91c
- (_Bool)_handleRemoteControlReceivedWithEvent:(id)arg1;	// IMP=0x00000000008ac8c2
- (void)remoteControlReceivedWithEvent:(id)arg1;	// IMP=0x00000000008ac888
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x00000000008ac593
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008ac382
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008ac12d
- (_Bool)_menuTapShouldExitVariants;	// IMP=0x00000000008ac0b8
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008ac0b2
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008abd5e
- (void)returnToKeyplaneAfterDictation;	// IMP=0x00000000008abbe0
- (void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1;	// IMP=0x00000000008ab953
- (unsigned long long)getNextKeyplaneIndex:(unsigned long long)arg1;	// IMP=0x00000000008ab78c
- (_Bool)handleVisualDirectionalInput:(int)arg1;	// IMP=0x00000000008ab1a6
- (_Bool)handleLinearDirectionalInput:(int)arg1;	// IMP=0x00000000008aad59
- (void)handleVariantDeleteIfNecessaryForKey:(id)arg1;	// IMP=0x00000000008aaac7
- (void)clearVariantStateForKey:(id)arg1;	// IMP=0x00000000008aaa40
- (void)takeKeyAction:(id)arg1;	// IMP=0x00000000008a9ef0
- (_Bool)canHandleEvent:(id)arg1;	// IMP=0x00000000008a9cf7
- (id)keyHitTestInSameRowAsCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000008a9965
- (long long)targetKeyIndexAtOffset:(struct CGPoint)arg1 fromKey:(id)arg2;	// IMP=0x00000000008a8f23
- (long long)targetKeyIndexFromPoint:(struct CGPoint)arg1 inKeys:(id)arg2;	// IMP=0x00000000008a8eea
- (long long)targetKeyIndexFromPoint:(struct CGPoint)arg1;	// IMP=0x00000000008a8ecd
- (void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2;	// IMP=0x00000000008a8e32
- (_Bool)refreshSelectedCellIfNecessaryForKey:(id)arg1;	// IMP=0x00000000008a8cf4
- (void)setSelectedKeyIndex:(long long)arg1;	// IMP=0x00000000008a8900
- (void)deactivateKey:(id)arg1;	// IMP=0x00000000008a8860
- (struct CGRect)selectionFrameForKeyIndex:(long long)arg1;	// IMP=0x00000000008a8737
- (_Bool)shouldDeactivateWithoutWindow;	// IMP=0x00000000008a8719
- (void)restoreFocusFromEntryPoint:(struct CGPoint)arg1;	// IMP=0x00000000008a8668
- (void)setCursorLocation:(unsigned long long)arg1;	// IMP=0x00000000008a84ba
- (unsigned long long)cursorLocation;	// IMP=0x00000000008a8064
- (unsigned long long)downActionFlagsForKey:(id)arg1;	// IMP=0x00000000008a7fbd
- (int)enabledStateForKey:(id)arg1;	// IMP=0x00000000008a7f2e
- (int)activeStateForKey:(id)arg1;	// IMP=0x00000000008a7ea0
- (void)updateStatesForGridSelection;	// IMP=0x00000000008a7e9a
- (void)showPopupKeyplaneSwitcher;	// IMP=0x00000000008a7d33
- (void)longPressAction;	// IMP=0x00000000008a7bfc
- (void)endMultitapForKey:(id)arg1;	// IMP=0x00000000008a7b42
- (_Bool)canMultitap;	// IMP=0x00000000008a79c9
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;	// IMP=0x00000000008a799f
- (int)stateForCandidateListKey:(id)arg1;	// IMP=0x00000000008a7994
- (int)stateForKeyplaneSwitchKey:(id)arg1;	// IMP=0x00000000008a78db
- (_Bool)shouldMergeKey:(id)arg1;	// IMP=0x00000000008a7836
- (_Bool)isKeyplaneDisabledWithName:(id)arg1;	// IMP=0x00000000008a7701
- (_Bool)shouldToggleKeyplaneWithName:(id)arg1;	// IMP=0x00000000008a76a3
- (unsigned long long)targetEdgesForScreenGestureRecognition;	// IMP=0x00000000008a769b
- (void)setDisableTouchInput:(_Bool)arg1;	// IMP=0x00000000008a768b
- (_Bool)diacriticForwardCompose;	// IMP=0x00000000008a7656
- (_Bool)supportsContinuousPath;	// IMP=0x00000000008a762f
- (_Bool)isKanaPlane;	// IMP=0x00000000008a7604
- (_Bool)isAlphabeticPlane;	// IMP=0x00000000008a75cf
- (void)setShift:(_Bool)arg1;	// IMP=0x00000000008a7581
- (_Bool)ignoresShiftState;	// IMP=0x00000000008a754c
- (_Bool)usesAutoShift;	// IMP=0x00000000008a7517
- (id)_keyplaneForKeyplaneProperties;	// IMP=0x00000000008a74b6
- (_Bool)isPossibleToTypeFast;	// IMP=0x00000000008a74ae
- (_Bool)supportsEmoji;	// IMP=0x00000000008a74a6
- (unsigned char)getHandRestRecognizerState;	// IMP=0x00000000008a749e
- (_Bool)shouldRetestKey:(id)arg1 slidOffKey:(id)arg2 withKeyplane:(id)arg3;	// IMP=0x00000000008a7496
- (_Bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;	// IMP=0x00000000008a748e
- (void)setRecentInputs:(id)arg1;	// IMP=0x00000000008a7446
- (void)acceptRecentInputIfNecessary;	// IMP=0x00000000008a7365
- (void)updateRecentInputsKeyIfNecessary;	// IMP=0x00000000008a72de
- (void)didSelectRecentInputString:(id)arg1;	// IMP=0x00000000008a71c3
- (void)alertDidDismiss;	// IMP=0x00000000008a70bc
- (void)showRecentInputsAlert;	// IMP=0x00000000008a6d10
- (_Bool)shouldMatchCaseForDomainKeys;	// IMP=0x00000000008a6cf6
- (void)updateDictationHelpString;	// IMP=0x00000000008a6619
- (void)updateKeyplaneSwitchEdgeBiases;	// IMP=0x00000000008a635e
- (void)selectInitialKeyIfNecessary;	// IMP=0x00000000008a5ef3
- (_Bool)shouldAllowCurrentKeyplaneReload;	// IMP=0x00000000008a5ea9
- (void)setKeyplaneName:(id)arg1;	// IMP=0x00000000008a50dd
- (void)flushKeyCache:(id)arg1;	// IMP=0x00000000008a50d7
- (id)cacheTokenForKeyplane:(id)arg1;	// IMP=0x00000000008a5085
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000008a5044
- (void)setKeyboardAppearance:(long long)arg1;	// IMP=0x00000000008a4ff6
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;	// IMP=0x00000000008a4f3f
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;	// IMP=0x00000000008a4be8
- (Class)keyViewAnimatorClassForCurrentKeyboardLayout;	// IMP=0x00000000008a4b75
- (id)keyViewAnimator;	// IMP=0x00000000008a4aee
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000008a4ad1
- (void)_accessibilityBoldTextChanged:(id)arg1;	// IMP=0x00000000008a4ab4
- (void)_configureFloatingContentViewsForTV;	// IMP=0x00000000008a479a
- (void)configureFloatingContentViewsIfNeeded;	// IMP=0x00000000008a4788
- (unsigned long long)variantCountForKey:(id)arg1;	// IMP=0x00000000008a4726
@property(readonly, nonatomic) UIKBTree *currentKey;
- (void)runWithSuppressedActions:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a4693
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000008a4657
- (void)dealloc;	// IMP=0x00000000008a458f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008a4454

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

