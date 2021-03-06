//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC15ConversationKit22ConversationController : NSObject
{
    MISSING_TYPE *localParticipant;	// 0 = 0x0
    MISSING_TYPE *remoteParticipants;	// 2056 = 0x808
    MISSING_TYPE *otherInvitedParticipants;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *includeLocalParticipantInVisibleParticipants;	// 0 = 0x0
    MISSING_TYPE *carPlayDisconnectRequiresLocalVideoEnable;	// 2521236 = 0x267894
    MISSING_TYPE *screenSharingEndingRequiresLocalVideoEnable;	// 1572 = 0x624
    MISSING_TYPE *showingInMiniWindowRequiresLocalVideoEnable;	// 0 = 0x0
    MISSING_TYPE *audioFrequencyController;	// 0 = 0x0
    MISSING_TYPE *audioCallbackQueue;	// 0 = 0x0
    MISSING_TYPE *didReceiveLatestRemoteAttributes;	// 0 = 0x0
    MISSING_TYPE *latestRemoteAttributes;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_momentsController;	// 0 = 0x0
    MISSING_TYPE *lastRegisteredMomentsProvider;	// 0 = 0x0
    MISSING_TYPE *blockedCallerLookupQueue;	// 0 = 0x0
    MISSING_TYPE *recentPresentationContexts;	// 0 = 0x0
    MISSING_TYPE *pauseOnFirstFrame;	// 0 = 0x0
    MISSING_TYPE *keepsPreviewActive;	// 0 = 0x0
    MISSING_TYPE *scheduledVideoInfoResetDates;	// 0 = 0x0
    MISSING_TYPE *conversationState;	// 0 = 0x0
    MISSING_TYPE *conversationLetMeInRequestState;	// 0 = 0x0
    MISSING_TYPE *ignoreLetMeInRequests;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *rejectedParticipantsCount;	// 0 = 0x0
    MISSING_TYPE *deviceOrientation;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *isOneToOneModeEnabledByCallCenter;	// 0 = 0x0
    MISSING_TYPE *isOneToOneModeDisabledByActivity;	// 0 = 0x0
    MISSING_TYPE *broadcastingState;	// 2521236 = 0x267894
    MISSING_TYPE *didAddVisibleParticipant;	// 2522808 = 0x267eb8
    MISSING_TYPE *didRemoveVisibleParticipant;	// 36436 = 0x8e54
    MISSING_TYPE *didRemoveAllVisibleParticipants;	// 2522808 = 0x267eb8
    MISSING_TYPE *didFinishMigratingConversations;	// 0 = 0x0
    MISSING_TYPE *didUpdateVisibleParticipant;	// 0 = 0x0
    MISSING_TYPE *visibleParticipantDidBecomeActive;	// 0 = 0x0
    MISSING_TYPE *visibleParticipantDidBecomeInactive;	// 1751474015 = 0x68655f5f
    MISSING_TYPE *visibleParticipantKickableStatusDidChange;	// 25965 = 0x656d
    MISSING_TYPE *didStartVideoForVisibleParticipant;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *didUpdateVisibleParticipantScreenInfo;	// 0 = 0x0
    MISSING_TYPE *participantsMediaPrioritiesDidChange;	// 0 = 0x0
    MISSING_TYPE *participantAudioPowerDidChange;	// 2559248 = 0x270d10
    MISSING_TYPE *mutedTalkerDidChange;	// 14640 = 0x3930
    MISSING_TYPE *audioRouteDidChange;	// 2559248 = 0x270d10
    MISSING_TYPE *cameraBlurEnabledDidChange;	// 0 = 0x0
    MISSING_TYPE *cameraZoomAvailabiltyDidChange;	// 0 = 0x0
    MISSING_TYPE *carPlayConnectedDidChange;	// 0 = 0x0
    MISSING_TYPE *oneToOneModeDidChange;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *isTrackingActiveConversationDidChange;	// 1852339301 = 0x6e687465
    MISSING_TYPE *isWaitingOnFirstRemoteFrameDidChange;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *activitySessionsDidChange;	// 0 = 0x0
    MISSING_TYPE *audioEnabledDidChange;	// 2573888 = 0x274640
    MISSING_TYPE *audioPausedDidChange;	// 35254 = 0x89b6
    MISSING_TYPE *videoEnabledDidChange;	// 2573888 = 0x274640
    MISSING_TYPE *bluetoothAudioFormatChanged;	// 0 = 0x0
    MISSING_TYPE *didUpdateLocalParticipant;	// 2 = 0x2
    MISSING_TYPE *didUpdateLocalMemberAuthorizedToChangeGroupMembership;	// 0 = 0x0
    MISSING_TYPE *didUpdateLocalParticipantCameraPosition;	// 25 = 0x19
    MISSING_TYPE *didUpdateRecordingLocalVideo;	// 1718511967 = 0x666e695f
    MISSING_TYPE *didFinishWindowResize;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *didUpdateLocalScreenSharing;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *didUpdateHasRingingCalls;	// 2609152 = 0x27d000
    MISSING_TYPE *didUpdateWantsHoldMusic;	// 118784 = 0x1d000
    MISSING_TYPE *didStartVideoForLocalParticipant;	// 2609152 = 0x27d000
    MISSING_TYPE *conversationStateDidChange;	// 118784 = 0x1d000
    MISSING_TYPE *conversationLetMeInRequestStateDidChange;	// 3 = 0x3
    MISSING_TYPE *conversationIgnoreLetMeInRequestsDidChange;	// 8 = 0x8
    MISSING_TYPE *conversationRejectedParticipantsCountDidChange;	// 1869045599 = 0x6f675f5f
    MISSING_TYPE *didAddPendingParticipant;	// 0 = 0x0
    MISSING_TYPE *didRemovePendingParticipant;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *didApprovePendingParticipant;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *didInviteOtherParticipants;	// 2609152 = 0x27d000
    MISSING_TYPE *blockedParticipantsAdded;	// 4184 = 0x1058
    MISSING_TYPE *cameraPositionDidChange;	// 2609152 = 0x27d000
    MISSING_TYPE *groupNameAndPhotoDidChange;	// 0 = 0x0
    MISSING_TYPE *sessionActionNoticePosted;	// 6 = 0x6
    MISSING_TYPE *appLaunchStateChanged;	// 0 = 0x0
    MISSING_TYPE *willTakeMoment;	// 1634492255 = 0x616c5f5f
    MISSING_TYPE *shouldPauseOnFirstLocalVideoFrame;	// 1600941922 = 0x5f6c6f62
    MISSING_TYPE *conversationLinkDidChange;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *didFailToStartCamera;	// 0 = 0x0
    MISSING_TYPE *callStatusDidChange;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *blocklistCheckedHandles;	// 2613336 = 0x27e058
    MISSING_TYPE *needsUserConfirmationForBlockedCaller;	// 1887007839 = 0x7079745f
    MISSING_TYPE *enableVideoOnJoin;	// 0 = 0x0
    MISSING_TYPE *expectingNewLocalCameraPositionFirstFrame;	// 0 = 0x0
    MISSING_TYPE *participantMediaProviderCreator;	// 4504 = 0x1198
    MISSING_TYPE *callCenter;	// 2519180 = 0x26708c
    MISSING_TYPE *call;	// 2519180 = 0x26708c
    MISSING_TYPE *blockedCallerChecker;	// 2613336 = 0x27e058
    MISSING_TYPE *mode;	// 0 = 0x0
    MISSING_TYPE *conversationUUID;	// 0 = 0x0
    MISSING_TYPE *callWaitingUUIDs;	// 0 = 0x0
    MISSING_TYPE *callUUIDsToReceivedFirstRemoteVideoFrame;	// 0 = 0x0
    MISSING_TYPE *callUUIDResolvingCroppedAspectRatio;	// 0 = 0x0
    MISSING_TYPE *localVideoRecordingTransactionID;	// 1853185887 = 0x6e755f5f
    MISSING_TYPE *screenSharingSession;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001bd8a5
- (id)init;	// IMP=0x00000000001d6f22
- (void)dealloc;	// IMP=0x00000000001bd888
@property(nonatomic, readonly) NSString *description;

@end

