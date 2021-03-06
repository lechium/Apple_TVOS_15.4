//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayer, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol AVPlaybackCoordinationMediumDelegate, AVPlayerPlaybackCoordinatorDelegate, OS_dispatch_queue;

@interface AVPlayerPlaybackCoordinator
{
    AVPlayer *_weakPlayer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_figPlaybackCoordinatorConfigQueue;	// 24 = 0x18
    struct OpaqueFigPlaybackCoordinator *_figPlaybackCoordinator;	// 32 = 0x20
    NSMutableArray *_suspensionReasons;	// 40 = 0x28
    NSMutableArray *_otherParticipants;	// 48 = 0x30
    NSMutableDictionary *_controlStates;	// 56 = 0x38
    NSMutableDictionary *_participantStates;	// 64 = 0x40
    NSMutableDictionary *_participantLimitPerSuspensionReason;	// 72 = 0x48
    NSMutableArray *_suspensionReasonsThatTriggerWaiting;	// 80 = 0x50
    _Bool _pauseSnapsToMediaTimeOfOriginator;	// 88 = 0x58
    NSMutableArray *_waitingPoliciesArray;	// 96 = 0x60
    NSMutableArray *_currentSuspensions;	// 104 = 0x68
    id _suspensionsChangedNotificationToken;	// 112 = 0x70
    id _participantsChangedNotificationToken;	// 120 = 0x78
    id _didIssueCommandToPlaybackObjectNotificationToken;	// 128 = 0x80
    id <AVPlayerPlaybackCoordinatorDelegate> _delegate;	// 136 = 0x88
    id <AVPlaybackCoordinationMediumDelegate> _coordinationMediumDelegate;	// 144 = 0x90
    _Bool _isInExpanseMediaPlayback;	// 152 = 0x98
    NSString *_mediumLoggingIdentifier;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000009e62f
- (_Bool)pauseSnapsToMediaTimeOfOriginator;	// IMP=0x000000000009e567
- (void)setPauseSnapsToMediaTimeOfOriginator:(_Bool)arg1;	// IMP=0x000000000009e417
- (_Bool)_doesSuspensionReasonTriggerWaiting:(id)arg1;	// IMP=0x000000000009e3e6
- (id)suspensionReasonsThatTriggerWaiting;	// IMP=0x000000000009e2e7
- (void)setSuspensionReasonsThatTriggerWaiting:(id)arg1;	// IMP=0x000000000009dd8b
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)arg1;	// IMP=0x000000000009dc6b
- (void)setParticipantLimit:(long long)arg1 forWaitingOutSuspensionsWithReason:(id)arg2;	// IMP=0x000000000009da18
- (void)_setWaitingPolicies:(id)arg1 onFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg2;	// IMP=0x000000000009d9c3
- (id)_currentWaitingPoliciesArray;	// IMP=0x000000000009d8c4
- (id)_updateWaitingPoliciesArrayWithPolicies:(id)arg1;	// IMP=0x000000000009d4bf
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg1 proposingNewTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000009d3c8
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg1;	// IMP=0x000000000009d2f5
- (void)_synchronizeFigPlayerEvents;	// IMP=0x000000000009d25f
- (id)beginSuspensionForReason:(id)arg1;	// IMP=0x000000000009d13d
- (id)currentSuspensions;	// IMP=0x000000000009d03e
- (id)suspensionReasons;	// IMP=0x000000000009cf3f
- (void)_updateSuspensionReasons:(id)arg1;	// IMP=0x000000000009cde9
- (void)handleRemovalOfParticipant:(id)arg1;	// IMP=0x000000000009ccc9
- (void)handleReplacementParticipantStateDictionaries:(id)arg1;	// IMP=0x000000000009ca81
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x000000000009c823
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x000000000009c5ce
- (void)_replaceParticipantStates:(id)arg1;	// IMP=0x000000000009c3e0
- (void)_removeAllParticipantStates;	// IMP=0x000000000009c36d
- (void)_removeParticipantStateWithIdentifier:(id)arg1;	// IMP=0x000000000009c2d6
- (id)_participantStateForIdentifier:(id)arg1;	// IMP=0x000000000009c1bf
- (void)_updateParticipantStateDictionaryWithParticipantState:(id)arg1;	// IMP=0x000000000009c112
- (id)participantStates;	// IMP=0x000000000009c013
- (void)_removeAllTransportControlStates;	// IMP=0x000000000009bfa0
- (void)_removeUnusedTransportControlStates;	// IMP=0x000000000009bd14
- (id)_transportControlStateForItemIdentifier:(id)arg1;	// IMP=0x000000000009bbfd
- (void)_updateTransportControlStateDictionaryWithTransportControlState:(id)arg1;	// IMP=0x000000000009b811
- (id)trackedTransportControlStateDictionaries;	// IMP=0x000000000009b712
- (id)mediumLoggingIdentifier;	// IMP=0x000000000009b6ed
- (void)setMediumLoggingIdentifier:(id)arg1;	// IMP=0x000000000009b6c2
- (id)coordinationMediumDelegate;	// IMP=0x000000000009b6b1
- (void)setCoordinationMediumDelegate:(id)arg1;	// IMP=0x000000000009b602
- (CDStruct_1b6d18a9)expectedItemTimeAtHostTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009b57f
- (id)participantForIdentifier:(id)arg1;	// IMP=0x000000000009b3ca
- (id)otherParticipants;	// IMP=0x000000000009b2a1
- (void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)arg1;	// IMP=0x000000000009b126
- (id)avfParticipantsForFigParticipantsUUIDs:(id)arg1;	// IMP=0x000000000009adb7
- (void)_setIsInExpanseMediaPlaybackOnAVAudioSession;	// IMP=0x000000000009ad02
- (void)_setLocalParticipantUUID:(id)arg1 onFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg2;	// IMP=0x000000000009ac94
- (id)interstitialTimeRangesForPlayerItem:(id)arg1;	// IMP=0x000000000009ac33
- (id)identifierForPlayerItem:(id)arg1;	// IMP=0x000000000009abd2
@property __weak id <AVPlayerPlaybackCoordinatorDelegate> delegate;
- (void)_setMediumCallbacksOnFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg1;	// IMP=0x000000000009a71c
- (id)figPlaybackCoordinatorConfigQueue;	// IMP=0x000000000009a70b
- (struct OpaqueFigPlaybackCoordinator *)_copyFigPlaybackCoordinator;	// IMP=0x000000000009a629
- (void)setFigPlaybackCoordinator:(struct OpaqueFigPlaybackCoordinator *)arg1;	// IMP=0x0000000000099cd1
@property(readonly, nonatomic) __weak AVPlayer *player;
- (void)dealloc;	// IMP=0x0000000000099bba
- (void)_removeFigPlaybackCoordinatorListeners;	// IMP=0x0000000000099ac7
- (void)_addFigPlaybackCoordinatorListeners:(struct OpaqueFigPlaybackCoordinator *)arg1;	// IMP=0x00000000000995f8
- (id)initWithPlayer:(id)arg1;	// IMP=0x0000000000099486

@end

