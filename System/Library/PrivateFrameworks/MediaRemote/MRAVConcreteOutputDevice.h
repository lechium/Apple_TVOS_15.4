//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVOutputDevice, MRAVOutputDeviceSourceInfo, NSData, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputDevice
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;	// 8 = 0x8
    AVOutputDevice *_avOutputDevice;	// 16 = 0x10
    MRAVOutputDeviceSourceInfo *_sourceInfo;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
    _Bool _overrideUID;	// 40 = 0x28
    NSString *_modelID;	// 48 = 0x30
    NSString *_firmwareVersion;	// 56 = 0x38
    NSString *_logicalDeviceID;	// 64 = 0x40
    NSString *_airPlayGroupID;	// 72 = 0x48
    _Bool _overrideGroupID;	// 80 = 0x50
    NSData *_MACAddress;	// 88 = 0x58
    NSDictionary *_modelSpecificInfo;	// 96 = 0x60
    NSString *_playingPairedDeviceName;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001d5067
- (_Bool)producesLowFidelityAudio;	// IMP=0x00000000001d4f9b
- (_Bool)supportsSharePlayHandoff;	// IMP=0x00000000001d4e6f
- (_Bool)supportsRapportRemoteControlTransport;	// IMP=0x00000000001d4d4d
- (unsigned long long)configuredClusterSize;	// IMP=0x00000000001d4c82
- (_Bool)supportsMultiplayer;	// IMP=0x00000000001d4b60
- (_Bool)supportsHAP;	// IMP=0x00000000001d4a8f
- (id)bluetoothID;	// IMP=0x00000000001d493a
- (void)setVolume:(float)arg1;	// IMP=0x00000000001d47b7
- (float)volume;	// IMP=0x00000000001d46e2
- (_Bool)isVolumeControlAvailable;	// IMP=0x00000000001d4616
- (unsigned int)volumeCapabilities;	// IMP=0x00000000001d4566
- (_Bool)requiresAuthorization;	// IMP=0x00000000001d449a
- (_Bool)supportsExternalScreen;	// IMP=0x00000000001d43ca
- (_Bool)isLocalDevice;	// IMP=0x00000000001d42b5
- (_Bool)hasBatteryLevel;	// IMP=0x00000000001d41e9
- (float)batteryLevel;	// IMP=0x00000000001d4114
- (unsigned int)clusterType;	// IMP=0x00000000001d4035
- (id)clusterComposition;	// IMP=0x00000000001d3deb
- (unsigned int)deviceSubtype;	// IMP=0x00000000001d3cff
- (unsigned int)deviceType;	// IMP=0x00000000001d3c12
- (_Bool)setHeadTrackedSpatialAudioMode:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3a52
- (_Bool)setAllowsHeadTrackedSpatialAudio:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000001d38cd
- (id)headTrackedSpatialAudioMode;	// IMP=0x00000000001d37c4
- (_Bool)isHeadTrackedSpatialAudioActive;	// IMP=0x00000000001d36f8
- (_Bool)allowsHeadTrackedSpatialAudio;	// IMP=0x00000000001d362c
- (_Bool)supportsHeadTrackedSpatialAudio;	// IMP=0x00000000001d3560
- (id)availableBluetoothListeningModes;	// IMP=0x00000000001d342f
- (_Bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3237
- (id)currentBluetoothListeningMode;	// IMP=0x00000000001d312e
- (_Bool)isPickedOnPairedDevice;	// IMP=0x00000000001d3062
- (_Bool)isDeviceGroupable;	// IMP=0x00000000001d2f96
- (_Bool)isProxyGroupPlayer;	// IMP=0x00000000001d2e8c
- (_Bool)supportsBluetoothSharing;	// IMP=0x00000000001d2da1
- (_Bool)isGroupable;	// IMP=0x00000000001d2cd5
- (id)parentGroupIdentifier;	// IMP=0x00000000001d2b80
- (_Bool)parentGroupContainsDiscoverableLeader;	// IMP=0x00000000001d2a5e
- (_Bool)isAirPlayReceiverSessionActive;	// IMP=0x00000000001d293c
- (_Bool)groupContainsGroupLeader;	// IMP=0x00000000001d2870
- (_Bool)isGroupLeader;	// IMP=0x00000000001d27a4
- (_Bool)isAddedToHomeKit;	// IMP=0x00000000001d2682
- (_Bool)supportsRapport;	// IMP=0x00000000001d2560
- (_Bool)supportsBufferedAirPlay;	// IMP=0x00000000001d2494
- (_Bool)canRelayCommunicationChannel;	// IMP=0x00000000001d23c8
- (_Bool)isRemoteControllable;	// IMP=0x00000000001d22c6
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;	// IMP=0x00000000001d21db
- (_Bool)canFetchMediaDataFromSender;	// IMP=0x00000000001d20f0
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;	// IMP=0x00000000001d2005
- (_Bool)canAccessiCloudMusicLibrary;	// IMP=0x00000000001d1f1a
- (_Bool)canAccessAppleMusic;	// IMP=0x00000000001d1e2f
- (_Bool)canAccessRemoteAssets;	// IMP=0x00000000001d1d63
- (id)playingPairedDeviceName;	// IMP=0x00000000001d1a71
- (id)modelSpecificInfo;	// IMP=0x00000000001d191e
- (id)MACAddress;	// IMP=0x00000000001d17cb
- (id)airPlayGroupID;	// IMP=0x00000000001d15f6
- (void)setAirPlayGroupID:(id)arg1;	// IMP=0x00000000001d14f1
- (id)firmwareVersion;	// IMP=0x00000000001d139e
- (id)modelID;	// IMP=0x00000000001d124b
- (id)logicalDeviceID;	// IMP=0x00000000001d104a
- (id)uid;	// IMP=0x00000000001d0eec
- (id)name;	// IMP=0x00000000001d0d0f
@property(retain, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;
@property(retain, nonatomic, setter=setAVOutputDevice:) AVOutputDevice *avOutputDevice;
- (id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2;	// IMP=0x00000000001d06df

@end
