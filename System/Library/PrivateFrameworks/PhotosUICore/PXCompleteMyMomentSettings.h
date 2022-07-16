//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCMMWorkflowCoordinatorDelegate-Protocol.h>

@class NSString, PXCMMWorkflowCoordinator;

@interface PXCompleteMyMomentSettings <PXCMMWorkflowCoordinatorDelegate>
{
    _Bool _cmmFeatureEnabled;	// 8 = 0x8
    _Bool _alwaysSortAfterAddMore;	// 9 = 0x9
    _Bool _preventNilTitles;	// 10 = 0xa
    _Bool _enableLightCuration;	// 11 = 0xb
    _Bool _simulateMomentShareCreationError;	// 12 = 0xc
    _Bool _showTitle;	// 13 = 0xd
    _Bool _showSubtitle;	// 14 = 0xe
    _Bool _showOtherTitle;	// 15 = 0xf
    _Bool _showMessage;	// 16 = 0x10
    _Bool _showSenderField;	// 17 = 0x11
    _Bool _showPeopleSuggestions;	// 18 = 0x12
    _Bool _showMergeCandidateSuggestionsAfterBootstrapNaming;	// 19 = 0x13
    _Bool _allowOneUpGesture;	// 20 = 0x14
    _Bool _allowSwipeSelection;	// 21 = 0x15
    _Bool _allowSendBackInGridZero;	// 22 = 0x16
    _Bool _simulateImport;	// 23 = 0x17
    _Bool _simulateImportFailure;	// 24 = 0x18
    _Bool _simulateShouldPromptUserToIgnoreBudgets;	// 25 = 0x19
    _Bool _simulateCPLAlertOnPublish;	// 26 = 0x1a
    _Bool _emulatesEmptyMomentShare;	// 27 = 0x1b
    _Bool _disableOneUpDescriptiveAdd;	// 28 = 0x1c
    _Bool _disableDescriptiveWaiting;	// 29 = 0x1d
    _Bool _disableClickyOrb;	// 30 = 0x1e
    _Bool _disablePrintAction;	// 31 = 0x1f
    _Bool _disableShareAction;	// 32 = 0x20
    _Bool _disableShowInAllPhotosAction;	// 33 = 0x21
    _Bool _disableCopyAction;	// 34 = 0x22
    _Bool _disableDetailView;	// 35 = 0x23
    _Bool _allowLayoutTransitionGesture;	// 36 = 0x24
    _Bool _shouldShowInlineAddButton;	// 37 = 0x25
    _Bool _showAttachedHeaderView;	// 38 = 0x26
    _Bool _showFloatingBanner;	// 39 = 0x27
    _Bool _showSendBackFooterView;	// 40 = 0x28
    _Bool _showFakeSendBackFooterView;	// 41 = 0x29
    _Bool _showSectionHeaders;	// 42 = 0x2a
    _Bool _sectionHeadersShouldFloat;	// 43 = 0x2b
    _Bool _showStatusFooter;	// 44 = 0x2c
    _Bool _showProgressInGrid;	// 45 = 0x2d
    _Bool _showProgressBannerView;	// 46 = 0x2e
    _Bool _showProgressBannerViewPaused;	// 47 = 0x2f
    _Bool _directSendMessages;	// 48 = 0x30
    _Bool _fakeMomentShareURL;	// 49 = 0x31
    _Bool _autoAcceptBubbles;	// 50 = 0x32
    _Bool _simulateDelays;	// 51 = 0x33
    _Bool _showURLInBubble;	// 52 = 0x34
    _Bool _showDebugStatus;	// 53 = 0x35
    _Bool _alwaysTapToRetry;	// 54 = 0x36
    _Bool _useDebugColors;	// 55 = 0x37
    _Bool _useStackBubbleView;	// 56 = 0x38
    _Bool _simulateMomentShareBubbleError;	// 57 = 0x39
    _Bool _showMessageTextEntryGadget;	// 58 = 0x3a
    _Bool _graphSuggestionEnabled;	// 59 = 0x3b
    _Bool _showCMMSuggestionGadgets;	// 60 = 0x3c
    _Bool _showCMMInvitationGadgets;	// 61 = 0x3d
    _Bool _showSampleGadgets;	// 62 = 0x3e
    _Bool _shouldBakeInIfLivePhotoPlaybackDisabled;	// 63 = 0x3f
    _Bool _shouldBakeInIfLivePhotoMuted;	// 64 = 0x40
    _Bool _shouldBakeInIfAdjustedByThirdParty;	// 65 = 0x41
    _Bool _shouldBakeInIfCropped;	// 66 = 0x42
    _Bool _shouldBakeInIfTimelineTrimmed;	// 67 = 0x43
    _Bool _shouldBakeInIfPortraitDepthEffectEnabled;	// 68 = 0x44
    _Bool _shouldBakeInIfContainsPenultimateResources;	// 69 = 0x45
    _Bool _shouldIncludeSpatialOvercaptureResources;	// 70 = 0x46
    long long _cmmShareSheetBehavior;	// 72 = 0x48
    long long _shareSheetLinkAssetCountThreshold;	// 80 = 0x50
    unsigned long long _shareSheetLinkTotalFileSizeThresholdMB;	// 88 = 0x58
    long long _invitationsDataSourceType;	// 96 = 0x60
    long long _suggestionsDataSourceType;	// 104 = 0x68
    unsigned long long _suggestionsMatchingStrategy;	// 112 = 0x70
    long long _suggestionsScrollDirection;	// 120 = 0x78
    long long _simulatedMomentShareCreationErrorType;	// 128 = 0x80
    long long _publishTransport;	// 136 = 0x88
    long long _peopleSuggestionsDataSourceType;	// 144 = 0x90
    long long _sendBackDataSourceType;	// 152 = 0x98
    long long _initialLayoutType;	// 160 = 0xa0
    long long _reviewFlow;	// 168 = 0xa8
    long long _reviewFlowDataSourceType;	// 176 = 0xb0
    long long _overrideNumberOfColumnsInPortrait;	// 184 = 0xb8
    long long _overrideNumberOfColumnsInLandscape;	// 192 = 0xc0
    long long _simulatedMomentShareBubbleErrorType;	// 200 = 0xc8
    long long _sharingLinkType;	// 208 = 0xd0
    double _peopleSuggestionsTimeout;	// 216 = 0xd8
    long long _sidebarType;	// 224 = 0xe0
}

+ (id)sharedInstance;	// IMP=0x000000000046eaf6
+ (id)_enabledAllCmmImprovementsActionPredicate;	// IMP=0x00000000003d1a7b
+ (id)_enableAllCmmImprovementsAction;	// IMP=0x00000000003d1a12
+ (id)simulatedMomentShareErrorLabels;	// IMP=0x00000000003d1a05
+ (id)simulatedMomentShareErrorValues;	// IMP=0x00000000003d19f8
+ (id)transientProperties;	// IMP=0x00000000003d1995
+ (id)settingsControllerModule;	// IMP=0x00000000003cf915
@property(nonatomic) _Bool shouldIncludeSpatialOvercaptureResources; // @synthesize shouldIncludeSpatialOvercaptureResources=_shouldIncludeSpatialOvercaptureResources;
@property(nonatomic) _Bool shouldBakeInIfContainsPenultimateResources; // @synthesize shouldBakeInIfContainsPenultimateResources=_shouldBakeInIfContainsPenultimateResources;
@property(nonatomic) _Bool shouldBakeInIfPortraitDepthEffectEnabled; // @synthesize shouldBakeInIfPortraitDepthEffectEnabled=_shouldBakeInIfPortraitDepthEffectEnabled;
@property(nonatomic) _Bool shouldBakeInIfTimelineTrimmed; // @synthesize shouldBakeInIfTimelineTrimmed=_shouldBakeInIfTimelineTrimmed;
@property(nonatomic) _Bool shouldBakeInIfCropped; // @synthesize shouldBakeInIfCropped=_shouldBakeInIfCropped;
@property(nonatomic) _Bool shouldBakeInIfAdjustedByThirdParty; // @synthesize shouldBakeInIfAdjustedByThirdParty=_shouldBakeInIfAdjustedByThirdParty;
@property(nonatomic) _Bool shouldBakeInIfLivePhotoMuted; // @synthesize shouldBakeInIfLivePhotoMuted=_shouldBakeInIfLivePhotoMuted;
@property(nonatomic) _Bool shouldBakeInIfLivePhotoPlaybackDisabled; // @synthesize shouldBakeInIfLivePhotoPlaybackDisabled=_shouldBakeInIfLivePhotoPlaybackDisabled;
@property(nonatomic) _Bool showSampleGadgets; // @synthesize showSampleGadgets=_showSampleGadgets;
@property(nonatomic) _Bool showCMMInvitationGadgets; // @synthesize showCMMInvitationGadgets=_showCMMInvitationGadgets;
@property(nonatomic) _Bool showCMMSuggestionGadgets; // @synthesize showCMMSuggestionGadgets=_showCMMSuggestionGadgets;
@property(nonatomic) long long sidebarType; // @synthesize sidebarType=_sidebarType;
@property(nonatomic) double peopleSuggestionsTimeout; // @synthesize peopleSuggestionsTimeout=_peopleSuggestionsTimeout;
@property(nonatomic) _Bool graphSuggestionEnabled; // @synthesize graphSuggestionEnabled=_graphSuggestionEnabled;
@property(nonatomic) long long sharingLinkType; // @synthesize sharingLinkType=_sharingLinkType;
@property(nonatomic) _Bool showMessageTextEntryGadget; // @synthesize showMessageTextEntryGadget=_showMessageTextEntryGadget;
@property(nonatomic) long long simulatedMomentShareBubbleErrorType; // @synthesize simulatedMomentShareBubbleErrorType=_simulatedMomentShareBubbleErrorType;
@property(nonatomic) _Bool simulateMomentShareBubbleError; // @synthesize simulateMomentShareBubbleError=_simulateMomentShareBubbleError;
@property(nonatomic) _Bool useStackBubbleView; // @synthesize useStackBubbleView=_useStackBubbleView;
@property(nonatomic) _Bool useDebugColors; // @synthesize useDebugColors=_useDebugColors;
@property(nonatomic) long long overrideNumberOfColumnsInLandscape; // @synthesize overrideNumberOfColumnsInLandscape=_overrideNumberOfColumnsInLandscape;
@property(nonatomic) long long overrideNumberOfColumnsInPortrait; // @synthesize overrideNumberOfColumnsInPortrait=_overrideNumberOfColumnsInPortrait;
@property(nonatomic) _Bool alwaysTapToRetry; // @synthesize alwaysTapToRetry=_alwaysTapToRetry;
@property(nonatomic) _Bool showDebugStatus; // @synthesize showDebugStatus=_showDebugStatus;
@property(nonatomic) _Bool showURLInBubble; // @synthesize showURLInBubble=_showURLInBubble;
@property(nonatomic) _Bool simulateDelays; // @synthesize simulateDelays=_simulateDelays;
@property(nonatomic) _Bool autoAcceptBubbles; // @synthesize autoAcceptBubbles=_autoAcceptBubbles;
@property(nonatomic) _Bool fakeMomentShareURL; // @synthesize fakeMomentShareURL=_fakeMomentShareURL;
@property(nonatomic) _Bool directSendMessages; // @synthesize directSendMessages=_directSendMessages;
@property(nonatomic) _Bool showProgressBannerViewPaused; // @synthesize showProgressBannerViewPaused=_showProgressBannerViewPaused;
@property(nonatomic) _Bool showProgressBannerView; // @synthesize showProgressBannerView=_showProgressBannerView;
@property(nonatomic) _Bool showProgressInGrid; // @synthesize showProgressInGrid=_showProgressInGrid;
@property(nonatomic) _Bool showStatusFooter; // @synthesize showStatusFooter=_showStatusFooter;
@property(nonatomic) _Bool sectionHeadersShouldFloat; // @synthesize sectionHeadersShouldFloat=_sectionHeadersShouldFloat;
@property(nonatomic) _Bool showSectionHeaders; // @synthesize showSectionHeaders=_showSectionHeaders;
@property(nonatomic) _Bool showFakeSendBackFooterView; // @synthesize showFakeSendBackFooterView=_showFakeSendBackFooterView;
@property(nonatomic) _Bool showSendBackFooterView; // @synthesize showSendBackFooterView=_showSendBackFooterView;
@property(nonatomic) _Bool showFloatingBanner; // @synthesize showFloatingBanner=_showFloatingBanner;
@property(nonatomic) _Bool showAttachedHeaderView; // @synthesize showAttachedHeaderView=_showAttachedHeaderView;
@property(nonatomic) _Bool shouldShowInlineAddButton; // @synthesize shouldShowInlineAddButton=_shouldShowInlineAddButton;
@property(nonatomic) _Bool allowLayoutTransitionGesture; // @synthesize allowLayoutTransitionGesture=_allowLayoutTransitionGesture;
@property(nonatomic) long long reviewFlowDataSourceType; // @synthesize reviewFlowDataSourceType=_reviewFlowDataSourceType;
@property(nonatomic) long long reviewFlow; // @synthesize reviewFlow=_reviewFlow;
@property(nonatomic) _Bool disableDetailView; // @synthesize disableDetailView=_disableDetailView;
@property(nonatomic) _Bool disableCopyAction; // @synthesize disableCopyAction=_disableCopyAction;
@property(nonatomic) _Bool disableShowInAllPhotosAction; // @synthesize disableShowInAllPhotosAction=_disableShowInAllPhotosAction;
@property(nonatomic) _Bool disableShareAction; // @synthesize disableShareAction=_disableShareAction;
@property(nonatomic) _Bool disablePrintAction; // @synthesize disablePrintAction=_disablePrintAction;
@property(nonatomic) _Bool disableClickyOrb; // @synthesize disableClickyOrb=_disableClickyOrb;
@property(nonatomic) _Bool disableDescriptiveWaiting; // @synthesize disableDescriptiveWaiting=_disableDescriptiveWaiting;
@property(nonatomic) _Bool disableOneUpDescriptiveAdd; // @synthesize disableOneUpDescriptiveAdd=_disableOneUpDescriptiveAdd;
@property(nonatomic) _Bool emulatesEmptyMomentShare; // @synthesize emulatesEmptyMomentShare=_emulatesEmptyMomentShare;
@property(nonatomic) _Bool simulateCPLAlertOnPublish; // @synthesize simulateCPLAlertOnPublish=_simulateCPLAlertOnPublish;
@property(nonatomic) _Bool simulateShouldPromptUserToIgnoreBudgets; // @synthesize simulateShouldPromptUserToIgnoreBudgets=_simulateShouldPromptUserToIgnoreBudgets;
@property(nonatomic) _Bool simulateImportFailure; // @synthesize simulateImportFailure=_simulateImportFailure;
@property(nonatomic) _Bool simulateImport; // @synthesize simulateImport=_simulateImport;
@property(nonatomic) _Bool allowSendBackInGridZero; // @synthesize allowSendBackInGridZero=_allowSendBackInGridZero;
@property(nonatomic) _Bool allowSwipeSelection; // @synthesize allowSwipeSelection=_allowSwipeSelection;
@property(nonatomic) _Bool allowOneUpGesture; // @synthesize allowOneUpGesture=_allowOneUpGesture;
@property(nonatomic) long long initialLayoutType; // @synthesize initialLayoutType=_initialLayoutType;
@property(nonatomic) long long sendBackDataSourceType; // @synthesize sendBackDataSourceType=_sendBackDataSourceType;
@property(nonatomic) long long peopleSuggestionsDataSourceType; // @synthesize peopleSuggestionsDataSourceType=_peopleSuggestionsDataSourceType;
@property(nonatomic) long long publishTransport; // @synthesize publishTransport=_publishTransport;
@property(nonatomic) _Bool showMergeCandidateSuggestionsAfterBootstrapNaming; // @synthesize showMergeCandidateSuggestionsAfterBootstrapNaming=_showMergeCandidateSuggestionsAfterBootstrapNaming;
@property(nonatomic) _Bool showPeopleSuggestions; // @synthesize showPeopleSuggestions=_showPeopleSuggestions;
@property(nonatomic) _Bool showSenderField; // @synthesize showSenderField=_showSenderField;
@property(nonatomic) _Bool showMessage; // @synthesize showMessage=_showMessage;
@property(nonatomic) _Bool showOtherTitle; // @synthesize showOtherTitle=_showOtherTitle;
@property(nonatomic) _Bool showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) long long simulatedMomentShareCreationErrorType; // @synthesize simulatedMomentShareCreationErrorType=_simulatedMomentShareCreationErrorType;
@property(nonatomic) _Bool simulateMomentShareCreationError; // @synthesize simulateMomentShareCreationError=_simulateMomentShareCreationError;
@property(nonatomic) _Bool enableLightCuration; // @synthesize enableLightCuration=_enableLightCuration;
@property(nonatomic) long long suggestionsScrollDirection; // @synthesize suggestionsScrollDirection=_suggestionsScrollDirection;
@property(nonatomic) unsigned long long suggestionsMatchingStrategy; // @synthesize suggestionsMatchingStrategy=_suggestionsMatchingStrategy;
@property(nonatomic) long long suggestionsDataSourceType; // @synthesize suggestionsDataSourceType=_suggestionsDataSourceType;
@property(nonatomic) _Bool preventNilTitles; // @synthesize preventNilTitles=_preventNilTitles;
@property(nonatomic) long long invitationsDataSourceType; // @synthesize invitationsDataSourceType=_invitationsDataSourceType;
@property(nonatomic) _Bool alwaysSortAfterAddMore; // @synthesize alwaysSortAfterAddMore=_alwaysSortAfterAddMore;
@property(nonatomic) unsigned long long shareSheetLinkTotalFileSizeThresholdMB; // @synthesize shareSheetLinkTotalFileSizeThresholdMB=_shareSheetLinkTotalFileSizeThresholdMB;
@property(nonatomic) long long shareSheetLinkAssetCountThreshold; // @synthesize shareSheetLinkAssetCountThreshold=_shareSheetLinkAssetCountThreshold;
@property(nonatomic) long long cmmShareSheetBehavior; // @synthesize cmmShareSheetBehavior=_cmmShareSheetBehavior;
@property(nonatomic) _Bool cmmFeatureEnabled; // @synthesize cmmFeatureEnabled=_cmmFeatureEnabled;
- (void)setDefaultValues;	// IMP=0x000000000046dafa
- (id)parentSettings;	// IMP=0x000000000046dae1
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;	// IMP=0x00000000003cf863
@property(retain, nonatomic) PXCMMWorkflowCoordinator *workflowCoordinator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
