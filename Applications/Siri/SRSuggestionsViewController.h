//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AFConversation, NSString, SiriUISuggestionsView;
@protocol SRSuggestionsViewControllerDelegate;

@interface SRSuggestionsViewController : UIViewController
{
    AFConversation *_conversation;	// 8 = 0x8
    id <SRSuggestionsViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000fc07
@property(nonatomic) __weak id <SRSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000fbd0
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x001000000000fb4a
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x001000000000faf3
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x001000000000fa5f
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x001000000000fa08
- (double);	// IMP=0x001000000000f988
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x001000000000f8fe
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000000f8f8
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x001000000000f8f2
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x001000000000f8ec
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000000f8e6
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000000f8e0
- (void)keyboardHeightDidChange;	// IMP=0x001000000000f8da
- (void)_createGuideController;	// IMP=0x001000000000f7fb
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000000f77a
- (void)animateOut;	// IMP=0x001000000000f6cd
- (void)showRootGuide;	// IMP=0x001000000000f6c7
- (void)showGuideStart;	// IMP=0x001000000000f6c1
- (_Bool)isShowingGuide;	// IMP=0x001000000000f67e
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x001000000000f678
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000f5bd
- (void)hideAcousticIDSpinner;	// IMP=0x001000000000f580
- (void)showAcousticIDSpinner;	// IMP=0x001000000000f543
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x001000000000f3e1
- (void)showEmptyView;	// IMP=0x001000000000f388
- (_Bool)isShowingUserNudge;	// IMP=0x001000000000f2ac
- (void)showUserNudge;	// IMP=0x001000000000f226
- (void)showGreeting;	// IMP=0x001000000000f187
- (void)showUnavailable;	// IMP=0x001000000000f046
- (id)_nudgeHeaderText;	// IMP=0x001000000000ef75
- (id)_initialHeaderText;	// IMP=0x001000000000eea4
- (void)loadView;	// IMP=0x001000000000eddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end

