//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TUCallNotificationManager : NSObject
{
    NSMutableArray *_deferredNotificationBlocks;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008cb4f
@property(retain, nonatomic) NSMutableArray *deferredNotificationBlocks; // @synthesize deferredNotificationBlocks=_deferredNotificationBlocks;
- (void)conferenceParticipantCallsChangedForCallContainer:(id)arg1 conferenceParticipantCalls:(id)arg2;	// IMP=0x000000000008ca46
- (void)modelChangedForCall:(id)arg1;	// IMP=0x000000000008c95d
- (void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)arg1;	// IMP=0x000000000008c894
- (void)mixesVoiceWithMediaChangedForCall:(id)arg1;	// IMP=0x000000000008c7cb
- (void)conversationChangedForCall:(id)arg1;	// IMP=0x000000000008c702
- (void)videoStreamTokenChangedForCall:(id)arg1;	// IMP=0x000000000008c639
- (void)mediaPropertiesChangedForCall:(id)arg1 remoteAspectRatioDidChange:(_Bool)arg2 remoteCameraOrientationDidChange:(_Bool)arg3;	// IMP=0x000000000008c45b
- (void)remoteParticipantHandlesChangedForCall:(id)arg1;	// IMP=0x000000000008c392
- (void)providerContextChangedForCall:(id)arg1;	// IMP=0x000000000008c2c9
- (void)remoteScreenAspectRatioChangedForCall:(id)arg1;	// IMP=0x000000000008c200
- (void)remoteScreenOrientationChangedForCall:(id)arg1;	// IMP=0x000000000008c137
- (void)remoteCameraOrientationChangedForCall:(id)arg1;	// IMP=0x000000000008c06e
- (void)videoMirroredChangedForCall:(id)arg1;	// IMP=0x000000000008bfa5
- (void)cameraTypeChangedForCall:(id)arg1;	// IMP=0x000000000008bedc
- (void)remoteVideoContentRectChangedForCall:(id)arg1;	// IMP=0x000000000008be13
- (void)remoteAspectRatioChangedForCall:(id)arg1;	// IMP=0x000000000008bd4a
- (void)supportsTTYWithVoiceChangedForCall:(id)arg1;	// IMP=0x000000000008bc81
- (void)localSenderIdentityAccountUUIDChangedForCall:(id)arg1;	// IMP=0x000000000008bbb8
- (void)remoteUplinkMutedChangedForCall:(id)arg1;	// IMP=0x000000000008baef
- (void)bluetoothAudioFormatChangedForCall:(id)arg1;	// IMP=0x000000000008ba26
- (void)ttyTypeChangedForCall:(id)arg1;	// IMP=0x000000000008b95d
- (void)audioPropertiesChangedForCall:(id)arg1;	// IMP=0x000000000008b894
- (void)videoPausedChangedForCall:(id)arg1;	// IMP=0x000000000008b7cb
- (void)videoDegradedChangedForCall:(id)arg1;	// IMP=0x000000000008b702
- (void)mediaStalledChangedForCall:(id)arg1;	// IMP=0x000000000008b639
- (void)isThirdPartyVideoChangedForCall:(id)arg1;	// IMP=0x000000000008b570
- (void)sharingScreenChangedForCall:(id)arg1;	// IMP=0x000000000008b4a7
- (void)isSendingVideoChangedForCall:(id)arg1;	// IMP=0x000000000008b3de
- (void)isSendingAudioChangedForCall:(id)arg1;	// IMP=0x000000000008b315
- (void)isFailureExpectedChangedForCall:(id)arg1;	// IMP=0x000000000008b24c
- (void)isEmergencyChangedForCall:(id)arg1;	// IMP=0x000000000008b183
- (void)displayContextChangedForCall:(id)arg1;	// IMP=0x000000000008b0ba
- (void)destinationIDChangedForCall:(id)arg1;	// IMP=0x000000000008aff1
- (void)isUplinkMutedChangedForCall:(id)arg1;	// IMP=0x000000000008af28
- (void)isOnHoldChangedForCall:(id)arg1;	// IMP=0x000000000008ae5f
- (void)isUsingBasebandChangedForCall:(id)arg1;	// IMP=0x000000000008ad96
- (void)hasSentInvitationChangedForCall:(id)arg1;	// IMP=0x000000000008acb1
- (void)needsManualInCallSoundsChangedForCall:(id)arg1;	// IMP=0x000000000008abe8
- (void)hardPauseDigitsStateChangedForCall:(id)arg1;	// IMP=0x000000000008ab1f
- (void)faceTimeIDStatusChangedForCall:(id)arg1;	// IMP=0x000000000008aa56
- (void)shouldSuppressRingtoneChangedForCall:(id)arg1;	// IMP=0x000000000008a98d
- (void)endpointOnCurrentDeviceChangedForCall:(id)arg1;	// IMP=0x000000000008a8c4
- (void)wantsHoldMusicChangedForCall:(id)arg1;	// IMP=0x000000000008a7fb
- (void)connectedChangedForCall:(id)arg1;	// IMP=0x000000000008a723
- (void)connectingChangedForCall:(id)arg1;	// IMP=0x000000000008a64b
- (void)statusChangedForCall:(id)arg1;	// IMP=0x000000000008a533
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000008a407
- (void)_postNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x000000000008a3f2
- (void)deferNotificationsUntilAfterPerformingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a161
- (void)postNotificationsForCallContainer:(id)arg1 afterUpdatesInBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089f64
- (void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2 afterUpdatesInBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000088500
- (void)postNotificationsForCall:(id)arg1 usingComparisonCall:(id)arg2;	// IMP=0x00000000000884eb
- (void)postNotificationsForCall:(id)arg1 afterUpdatesInBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000884d3

@end

