//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IMFeatureFlags : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000000006571e
@property(readonly, nonatomic, getter=isBackgroundAudioEnabled) _Bool backgroundAudioEnabled;
@property(readonly, nonatomic, getter=isNewAudioMessageFlowEnabled) _Bool newAudioMessageFlowEnabled;
- (_Bool)isCKScreenshotTestFeatureFlagMember:(id)arg1 withDomain:(id)arg2;	// IMP=0x00000000000664e3
@property(readonly, nonatomic) NSDictionary *CKScreenshotTestFeatureFlagMembers;
- (_Bool)CKScreenshotTestFeatureFlagValue;	// IMP=0x0000000000066448
@property(readonly, nonatomic) _Bool threeAttachmentStackEnabled;
@property(readonly, nonatomic) _Bool improvedPriorityInversionFixEnabled;
@property(readonly, nonatomic) _Bool systemImageAdoptionEnabled;
- (_Bool)psEnabled;	// IMP=0x0000000000066293
@property(readonly, nonatomic) _Bool messagesNotificationFilteringUIEnabled;
@property(readonly, nonatomic) _Bool uiConsistencyEnabled;
@property(readonly, nonatomic) _Bool newSuggestionsBannerEnabled;
@property(readonly, nonatomic) _Bool newInboxViewEnabled;
@property(readonly, nonatomic) _Bool threeColumnLayoutEnabled;
- (_Bool)photoAnalysisInSpotlightEnabled;	// IMP=0x000000000006614b
- (_Bool)hubbleCMMProcessingEnabled;	// IMP=0x00000000000660c6
- (_Bool)hubbleUIEnabled;	// IMP=0x000000000006605f
- (_Bool)hubbleTranscriptEnabled;	// IMP=0x0000000000065f83
- (_Bool)modernAppPresentationEnabled;	// IMP=0x0000000000065f37
@property(readonly, nonatomic) _Bool commSafetyInternalEnabled;
@property(readonly, nonatomic) _Bool commSafetyUIEnabled;
@property(readonly, nonatomic) _Bool micInlineReplyBackfillEnabled;
@property(readonly, nonatomic) _Bool micGroupPhotoEnabled;
@property(readonly, nonatomic) _Bool chatCacheEnabled;
@property(readonly, nonatomic) _Bool fullTranscriptLoggingEnabled;
@property(readonly, nonatomic) _Bool messageSyncP2Enabled;
@property(readonly, nonatomic) _Bool macApplicationMetricsGatheringEnabled;
@property(readonly, nonatomic) _Bool macToolbarEnabled;
@property(readonly, nonatomic) _Bool mentionsKeyboardSuggestionsEnabled;
- (_Bool)isUnknownGroupSendersEnabled;	// IMP=0x0000000000065d2c
@property(readonly, nonatomic) _Bool mentionsEnabled;
@property(readonly, nonatomic) _Bool sendSMSAutoReplyDuringUnavailability;
@property(readonly, nonatomic) _Bool notificationCommunicationContextEnabled;
@property(readonly, nonatomic) _Bool showKettleAvailability;
@property(readonly, nonatomic) _Bool showAllInstalledMessageApps;
@property(readonly, nonatomic) _Bool avatarViewAllowsStaleRendering;
@property(readonly, nonatomic) _Bool conversationPinningTouchdownDimEnabled;
@property(readonly, nonatomic) _Bool conversationPinningMultiDragEnabled;
@property(readonly, nonatomic) _Bool conversationPinningUsesLastNameForDuplicatesEnabled;
@property(readonly, nonatomic) _Bool animatedImagesBlastDoorEnabled;
@property(readonly, nonatomic) _Bool smsMmsBlastDoorEnabled;
- (_Bool)isPassKitBlastDoorEnabled;	// IMP=0x0000000000065b00
- (_Bool)isAudioPreviewBlastDoorEnabled;	// IMP=0x0000000000065ae8
- (_Bool)isImagePreviewBlastDoorEnabled;	// IMP=0x0000000000065ad0
- (_Bool)isBlastDoorAttachmentPreviewEnabled;	// IMP=0x0000000000065ac8
- (_Bool)isGreenfieldBlastDoorEnabled;	// IMP=0x0000000000065ac0
- (_Bool)isGreenfieldEnabled;	// IMP=0x0000000000065aa8
- (_Bool)fixIMDPersistenceAgentPriorityInversion;	// IMP=0x0000000000065a73
- (_Bool)fixIMTranscoderAgentPriorityInversion;	// IMP=0x0000000000065a3e
@property(readonly, nonatomic) _Bool businessGreeting;
@property(readonly, nonatomic) _Bool businessBrandedNewCompose;
- (_Bool)messageAppFreezerEnabled;	// IMP=0x00000000000659f6
- (_Bool)fixImagentPriorityInversion;	// IMP=0x0000000000065940
- (_Bool)loadAllChatsProgressivelyEnabled;	// IMP=0x000000000006590b
@property(readonly, nonatomic) _Bool simSwitcherEnabled;
@property(readonly, nonatomic) _Bool isExpanseEnabled;
- (_Bool)isInterstellarEnabled;	// IMP=0x0000000000065859
@property(readonly, nonatomic) _Bool translationEnabled;
- (_Bool)allCallOptionsInNavBarButtonEnabled;	// IMP=0x000000000006580a
- (_Bool)messagesBlastdoorEnabled;	// IMP=0x0000000000065802
@property(readonly, nonatomic) _Bool supplementalLexiconMentionsEnabled;
@property(readonly, nonatomic) _Bool smsfilterForBrazilEnabled;
- (_Bool)manuallyAckMessagesEnabled;	// IMP=0x0000000000065780
- (_Bool)certifiedDeliveryEnabled;	// IMP=0x0000000000065763

@end

