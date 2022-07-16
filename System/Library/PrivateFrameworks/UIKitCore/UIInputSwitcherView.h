//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIInputSwitcherSplitMenu-Protocol.h>

@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView <_UIInputSwitcherSplitMenu>
{
    NSMutableArray *m_inputModes;	// 256 = 0x100
    NSArray *m_inputSwitcherItems;	// 264 = 0x108
    _Bool m_isForDictation;	// 272 = 0x110
    UIInputSwitcherGestureState *m_gestureState;	// 280 = 0x118
    _Bool _messagesWriteboardFromSwitcher;	// 288 = 0x120
    _Bool _fileReportFromSwitcher;	// 289 = 0x121
    _Bool _showsSwitches;	// 290 = 0x122
    CDUnknownBlockType m_finishSplitTransitionBlock;	// 296 = 0x128
}

+ (_Bool)canShowKeyboardSettings;	// IMP=0x00000000007f770c
+ (id)activeInstance;	// IMP=0x00000000007f73d9
+ (id)sharedInstance;	// IMP=0x00000000007f7385
@property(nonatomic) _Bool showsSwitches; // @synthesize showsSwitches=_showsSwitches;
@property(nonatomic) _Bool fileReportFromSwitcher; // @synthesize fileReportFromSwitcher=_fileReportFromSwitcher;
@property(nonatomic) _Bool messagesWriteboardFromSwitcher; // @synthesize messagesWriteboardFromSwitcher=_messagesWriteboardFromSwitcher;
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=m_finishSplitTransitionBlock;
@property(readonly, nonatomic) NSArray *inputModes; // @synthesize inputModes=m_inputModes;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3 isForDictation:(_Bool)arg4 tapAction:(CDUnknownBlockType)arg5;	// IMP=0x00000000007fa16f
- (_Bool)didHitDockItemWithinTypingWindow;	// IMP=0x00000000007fa0c6
- (_Bool)_isHandBiasSwitchVisible;	// IMP=0x00000000007fa07a
- (void)switchAction;	// IMP=0x00000000007fa066
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000007f9cd8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000007f9c04
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9bce
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9b6f
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9af5
- (id)fontForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9aa4
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9a6e
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9a38
- (unsigned long long)defaultSelectedIndex;	// IMP=0x00000000007f99eb
- (id)defaultInputMode;	// IMP=0x00000000007f9917
- (id)_itemWithIdentifier:(id)arg1;	// IMP=0x00000000007f97e8
- (struct CGSize)preferredSize;	// IMP=0x00000000007f93ce
- (unsigned long long)numberOfItems;	// IMP=0x00000000007f938a
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f9022
- (void)willFade;	// IMP=0x00000000007f9006
- (void)didShow;	// IMP=0x00000000007f8ee5
- (_Bool)shouldShow;	// IMP=0x00000000007f8e92
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;	// IMP=0x00000000007f8e09
- (void)selectPreviousInputMode;	// IMP=0x00000000007f8dbc
- (id)previousInputMode;	// IMP=0x00000000007f8d14
- (void)selectNextInputMode;	// IMP=0x00000000007f8cc7
- (id)nextInputMode;	// IMP=0x00000000007f8c30
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f8aa7
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f8a54
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000007f87bc
- (void)_segmentControlValueDidChange:(id)arg1;	// IMP=0x00000000007f871e
- (void)selectInputMode:(id)arg1;	// IMP=0x00000000007f86e4
- (void)setInputMode:(id)arg1;	// IMP=0x00000000007f84dd
- (void)returnToKeyboardIfNeeded;	// IMP=0x00000000007f847d
- (void)fadeWithDelay:(double)arg1;	// IMP=0x00000000007f843c
- (void)selectRowForInputMode:(id)arg1;	// IMP=0x00000000007f83a3
- (long long)_indexOfFastSwitchToggleModeForIdentifier:(id)arg1;	// IMP=0x00000000007f82f1
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1;	// IMP=0x00000000007f8244
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;	// IMP=0x00000000007f81c2
- (id)selectedInputMode;	// IMP=0x00000000007f811a
- (void)toggleKeyboardFloatingPreference;	// IMP=0x00000000007f80b3
- (void)_reloadInputSwitcherItems;	// IMP=0x00000000007f77db
- (_Bool)_canAddLaunchItem;	// IMP=0x00000000007f7704
- (void)reloadInputModes;	// IMP=0x00000000007f7444
- (void)didFinishSplitTransition;	// IMP=0x00000000007f73e6
- (void)dealloc;	// IMP=0x00000000007f7311
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007f724a

@end

