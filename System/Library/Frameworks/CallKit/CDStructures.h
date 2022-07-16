//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct CXCallUpdateHasSet {
    unsigned int remoteHandle:1;
    unsigned int localizedCallerName:1;
    unsigned int emergency:1;
    unsigned int failureExpected:1;
    unsigned int usingBaseband:1;
    unsigned int blocked:1;
    unsigned int ttyType:1;
    unsigned int supportsTTYWithVoice:1;
    unsigned int mayRequireBreakBeforeMake:1;
    unsigned int hasVideo:1;
    unsigned int audioCategory:1;
    unsigned int audioMode:1;
    unsigned int audioInterruptionProvider:1;
    unsigned int audioInterruptionOperationMode:1;
    unsigned int verificationStatus:1;
    unsigned int priority:1;
    unsigned int requiresInCallSounds:1;
    unsigned int inCallSoundRegion:1;
    unsigned int supportsHolding:1;
    unsigned int supportsGrouping:1;
    unsigned int supportsUngrouping:1;
    unsigned int supportsDTMF:1;
    unsigned int supportsUnambiguousMultiPartyState:1;
    unsigned int supportsAddCall:1;
    unsigned int supportsSendingToVoicemail:1;
    unsigned int videoStreamToken:1;
    unsigned int crossDeviceIdentifier:1;
    unsigned int ISOCountryCode:1;
    unsigned int localSenderIdentityUUID:1;
    unsigned int localSenderIdentityAccountUUID:1;
    unsigned int participantGroupUUID:1;
    unsigned int remoteParticipantHandles:1;
    unsigned int otherInvitedHandles:1;
    unsigned int activeRemoteParticipantHandles:1;
    unsigned int handoffContext:1;
    unsigned int screenShareAttributes:1;
    unsigned int context:1;
    unsigned int prefersExclusiveAccessToCellularNetwork:1;
    unsigned int remoteUplinkMuted:1;
    unsigned int shouldSuppressInCallUI:1;
    unsigned int requiresAuthentication:1;
    unsigned int mutuallyExclusiveCall:1;
    unsigned int originatingUIType:1;
    unsigned int junkConfidence:1;
    unsigned int identificationCategory:1;
    unsigned int conversation:1;
    unsigned int mixesVoiceWithMedia:1;
    unsigned int mediaPlaybackOnExternalDevice:1;
    unsigned int oneToOneModeEnabled:1;
    unsigned int sharingScreen:1;
    unsigned int bluetoothAudioFormat:1;
    unsigned int ignoresBluetoothDeviceUID:1;
};

struct CXVoicemailUpdateHasSet {
    unsigned int sender:1;
    unsigned int dateReceived:1;
    unsigned int audioFileURL:1;
    unsigned int played:1;
    unsigned int trashed:1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

