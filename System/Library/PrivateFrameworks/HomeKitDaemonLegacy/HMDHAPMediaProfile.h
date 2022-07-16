//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMDHAPMediaProfile
{
    long long _airPlayEnable;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000090cae4
- (void).cxx_destruct;	// IMP=0x0000000000909def
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)setEnable:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000009098ea
- (void)_notifyProfileSettingsUpdated:(id)arg1;	// IMP=0x0000000000909864
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009097a4
- (void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 enable:(id)arg4 message:(id)arg5;	// IMP=0x000000000090930c
- (_Bool)_updateAudioControl:(id)arg1;	// IMP=0x0000000000908d0c
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x0000000000908c9b
- (void)handleResidentAdded:(id)arg1;	// IMP=0x0000000000908bea
- (void)_disableCharacteristicNotifications;	// IMP=0x0000000000908a41
- (void)_setCharacteristicNotifications:(_Bool)arg1;	// IMP=0x000000000090880e
- (id)_allCharacteristicsToMonitor;	// IMP=0x0000000000908772
- (void)handleCharacteristicsUpdated:(id)arg1;	// IMP=0x00000000009086c1
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x0000000000908610
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;	// IMP=0x000000000090838e
- (void)_updateCharacteristicChanges;	// IMP=0x00000000009081b5
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x0000000000907c3f
- (void)updateMediaSessionState:(id)arg1 usingCharacteristics:(id)arg2;	// IMP=0x00000000009077df
- (void)updateMediaSessionState:(id)arg1 usingServices:(id)arg2;	// IMP=0x0000000000907704
- (id)_mediaSessionStateFromProfile;	// IMP=0x000000000090756d
- (id)mediaSessionFromProfile;	// IMP=0x0000000000907415
- (_Bool)_updateRefreshPlayback:(id)arg1;	// IMP=0x0000000000906bb5
- (_Bool)_updatePlayback:(id)arg1;	// IMP=0x0000000000906725
@property long long airPlayEnable; // @synthesize airPlayEnable=_airPlayEnable;
- (id)_smartSpeakerAirPlayEnableReadRequest;	// IMP=0x0000000000906544
- (id)_smartSpeakerAirPlayEnableCharacteristic;	// IMP=0x00000000009064ed
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1;	// IMP=0x000000000090642a
- (id)_smartSpeakerMutedReadRequest;	// IMP=0x00000000009063ca
- (id)_smartSpeakerMutedCharacteristic;	// IMP=0x0000000000906370
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1;	// IMP=0x00000000009060ba
- (id)volumeWriteRequestWithVolumePercentage:(id)arg1;	// IMP=0x00000000009060a8
- (id)_smartSpeakerVolumeReadRequest;	// IMP=0x0000000000906048
- (id)_smartSpeakerVolumeCharacteristic;	// IMP=0x0000000000905fee
- (id)_smartSpeakerCurrentMediaStateReadRequest;	// IMP=0x0000000000905f8e
- (id)_smartSpeakerCurrentMediaStateCharacteristic;	// IMP=0x0000000000905f34
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1;	// IMP=0x0000000000905e20
- (id)playStateWriteRequestWithPlaybackState:(long long)arg1;	// IMP=0x0000000000905dba
- (id)_smartSpeakerTargetMediaStateCharacteristic;	// IMP=0x0000000000905d60
- (id)_smartSpeakerService;	// IMP=0x0000000000905d47
- (unsigned long long)capability;	// IMP=0x0000000000905d3c
- (void)registerForNotifications;	// IMP=0x0000000000905a3b
- (id)initWithMediaServices:(id)arg1;	// IMP=0x000000000090583d

@end

