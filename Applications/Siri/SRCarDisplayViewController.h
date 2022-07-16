//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSArray, NSString, NSTimer, NSUUID, SASRequestOptions, SRStarkView;
@protocol SRStarkItemController, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCarDisplayViewController : UIViewController
{
    _Bool _siriIsIdleAndQuiet;	// 8 = 0x8
    _Bool _autoDismissScheduled;	// 9 = 0x9
    _Bool _isRightHandDrive;	// 10 = 0xa
    _Bool _hidingHeaderForNewRequest;	// 11 = 0xb
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
    UIViewController<SRStarkItemController> *_currentSnippetController;	// 32 = 0x20
    SASRequestOptions *_requestOptions;	// 40 = 0x28
    double _selectButtonTimeInterval;	// 48 = 0x30
    NSTimer *_selectButtonHoldToTalkTimer;	// 56 = 0x38
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 64 = 0x40
    NSArray *_delayedAceCommands;	// 72 = 0x48
    NSUUID *_delayedAceCommandsTurnIdentifier;	// 80 = 0x50
}

+ (_Bool)_areRequestOptions:(id)arg1 containingAnEqualSubsetOfPropertiesOfOtherRequestOptions:(id)arg2;	// IMP=0x002000000007482c
+ (_Bool)_shouldClearScreenWhenTransitioningFromRequestOptions:(id)arg1 toRequestOptions:(id)arg2;	// IMP=0x001000000007471d
- (void).cxx_destruct;	// IMP=0x0020000000079dd6
@property(retain, nonatomic) NSUUID *delayedAceCommandsTurnIdentifier; // @synthesize delayedAceCommandsTurnIdentifier=_delayedAceCommandsTurnIdentifier;
@property(retain, nonatomic) NSArray *delayedAceCommands; // @synthesize delayedAceCommands=_delayedAceCommands;
@property(nonatomic, getter=isHidingHeaderForNewRequest) _Bool hidingHeaderForNewRequest; // @synthesize hidingHeaderForNewRequest=_hidingHeaderForNewRequest;
@property(retain, nonatomic, getter=_currentTurnContext, setter=_setCurrentTurnContext:) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(retain, nonatomic, getter=_selectButtonHoldToTalkTimer, setter=_setSelectButtonHoldToTalkTimer:) NSTimer *selectButtonHoldToTalkTimer; // @synthesize selectButtonHoldToTalkTimer=_selectButtonHoldToTalkTimer;
@property(nonatomic, getter=_selectButtonTimeInterval, setter=_setSelectButtonTimeInterval:) double selectButtonTimeInterval; // @synthesize selectButtonTimeInterval=_selectButtonTimeInterval;
@property(retain, nonatomic, getter=_requestOptions, setter=_setRequestOptions:) SASRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain, nonatomic, getter=_currentSnippetController, setter=_setCurrentSnippetController:) UIViewController<SRStarkItemController> *currentSnippetController; // @synthesize currentSnippetController=_currentSnippetController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_performAceCommands:(id)arg1 turnIdentifier:(id)arg2;	// IMP=0x0010000000079ab4
- (void)_clearDelayedAceCommands;	// IMP=0x0010000000079a6d
- (void)_stopSpeakingAndPerformAceCommandsAfterSpeakingHasCompleted:(id)arg1 turnIdentifier:(id)arg2;	// IMP=0x0010000000079879
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000007986f
- (_Bool)starkDisambiguationSnippetControllerIsRightHandDrive:(id)arg1;	// IMP=0x001000000007985f
- (void)confirmationSnippetControllerRequestsRestartSpeechSynthesis:(id)arg1;	// IMP=0x0010000000079813
- (void)confirmationSnippetControllerRequestsStopSpeechSynthesis:(id)arg1;	// IMP=0x0010000000079776
- (void)starkView:(id)arg1 requestsDismissalWithDismissalReason:(unsigned long long)arg2;	// IMP=0x0010000000079761
- (void)starkView:(id)arg1 didRemoveSnippetView:(id)arg2;	// IMP=0x001000000007954d
- (void)starkView:(id)arg1 didReceiveBackButtonTapGestureRecognizer:(id)arg2;	// IMP=0x0010000000079338
- (void)starkViewDidReceiveSelectSiriEvent:(id)arg1;	// IMP=0x0010000000079050
- (_Bool)_isEligibleForHoldToTalk;	// IMP=0x0010000000078ffb
- (void)_selectButtonHoldToTalkIntervalFired:(id)arg1;	// IMP=0x0010000000078ed9
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000078d61
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000078ba5
- (_Bool)_buttons:(id)arg1 hasType:(long long)arg2;	// IMP=0x0010000000078a54
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000007899a
- (void)_dismissForIdleIfNoDelayedAceCommands;	// IMP=0x0010000000078823
- (void)_cancelAutoDismiss;	// IMP=0x001000000007875b
- (void)_scheduleAutoDismiss;	// IMP=0x0010000000078672
- (void)_rescheduleAutoDismiss;	// IMP=0x00100000000784f6
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x0010000000078300
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x00100000000782f8
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000782f0
- (void)siriDidOpenURL:(id)arg1 bundleId:(id)arg2 inPlace:(_Bool)arg3;	// IMP=0x00100000000781c5
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x001000000007816c
- (void)presentationStateUpdatedFromPresentationState:(long long)arg1 toPresentationState:(long long)arg2;	// IMP=0x00100000000780b0
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x0010000000077feb
- (_Bool)shouldProceedToNextCommandAtSpeechSynthesisEnd;	// IMP=0x0010000000077f9c
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0010000000077f88
- (void)startNewConversation;	// IMP=0x0010000000077f76
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0010000000077cfd
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0010000000077ca4
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000077c8f
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000077c7a
- (_Bool)_shouldIgnoreConversationItem:(id)arg1;	// IMP=0x0010000000077c1d
- (_Bool)_isStarkSupportedSnippetClass:(id)arg1;	// IMP=0x0010000000077b8b
- (void)_updateItemsForConversation:(id)arg1 atIndexPaths:(id)arg2;	// IMP=0x00100000000760e5
- (void)_updateItemsAtIndexPath:(id)arg1;	// IMP=0x0010000000075fe0
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x0010000000075e08
- (id)preferredFocusEnvironments;	// IMP=0x0010000000075d7d
- (id)viewController;	// IMP=0x0010000000075d74
- (long long)options;	// IMP=0x0010000000075d69
- (void)starkItemController:(id)arg1 performAceCommands:(id)arg2 turnIdentifier:(id)arg3 clearSnippetDisplay:(_Bool)arg4;	// IMP=0x0010000000075d2b
- (void)starkItemControllerItemViewDidAppear:(id)arg1 withAceObject:(id)arg2;	// IMP=0x0010000000075c6f
- (void)starkItemControllerRequestsReschedulingAutoDismiss:(id)arg1;	// IMP=0x0010000000075b83
- (void)starkItemController:(id)arg1 requestsFullScreen:(_Bool)arg2;	// IMP=0x0010000000075ae5
- (void)starkItemControllerRequestsDismissal:(id)arg1 withDismissalReason:(unsigned long long)arg2;	// IMP=0x00100000000759d2
- (void)starkItemController:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000075949
- (void)_setTouchPassThroughEnabled:(_Bool)arg1;	// IMP=0x00100000000758bb
- (void)_updateHeaderAndContactContainerViewForAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000007557a
- (void)_notifyPresentationForAppBundleIdentifier:(id)arg1;	// IMP=0x00100000000754d7
- (void)_setCarDisplaySnippetMode:(long long)arg1;	// IMP=0x00100000000753b3
- (void)_setGatekeeperHeaderForRequestOptions:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000075233
- (_Bool)_isSnippetControllerUsingSystemStyle:(id)arg1;	// IMP=0x0010000000075173
- (_Bool)_shouldAnimateSnippetViewTransitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x0010000000074eb9
- (void)_clearSnippetDisplay;	// IMP=0x0010000000074ea5
- (void)_dismissWithReason:(unsigned long long)arg1;	// IMP=0x0010000000074d92
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000074d51
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000074cad
- (void)loadView;	// IMP=0x0010000000074c57
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x0010000000074af0
- (void)_configureForRequestOptions:(id)arg1;	// IMP=0x00100000000742af
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x001000000007429d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x00100000000741ed
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000000741d1
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000741b9
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007419d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRStarkView *view; // @dynamic view;

@end

