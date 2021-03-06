//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDHAPAccessory, HMDService, NSArray, NSDate, NSDictionary, NSNumber, NSObject, NSString;
@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>
{
    _Bool _configureCameraInProgress;	// 8 = 0x8
    _Bool _canConfigureCameraForRecording;	// 9 = 0x9
    _Bool _didTriggerABCForConfigure;	// 10 = 0xa
    id <HMDCameraRecordingSettingsControlDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDHAPAccessory *_accessory;	// 32 = 0x20
    HMDService *_recordingService;	// 40 = 0x28
    NSDictionary *_recordingConfigurationOverrides;	// 48 = 0x30
    HMDCameraRecordingGeneralConfiguration *_supportedRecordingConfiguration;	// 56 = 0x38
    HMDCameraRecordingSupportedVideoConfiguration *_supportedVideoConfiguration;	// 64 = 0x40
    HMDCameraRecordingSupportedAudioConfiguration *_supportedAudioConfiguration;	// 72 = 0x48
    NSDictionary *_characteristicByType;	// 80 = 0x50
    HMDCameraRecordingSelectedConfiguration *_currentSelectedConfiguration;	// 88 = 0x58
    NSString *_clientIdentifier;	// 96 = 0x60
    NSDate *_configureStartDate;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00000000007e5345
+ (id)audioCodecForCodecConfiguration:(id)arg1;	// IMP=0x00000000007e52a7
+ (id)audioBitRateForCodecConfiguration:(id)arg1;	// IMP=0x00000000007e5125
+ (_Bool)isSupportedAudioCodec:(id)arg1;	// IMP=0x00000000007e5108
+ (id)videoCodecForCodecConfiguration:(id)arg1;	// IMP=0x00000000007e506d
+ (id)h264ProfileForCodecConfiguration:(id)arg1;	// IMP=0x00000000007e4ee6
+ (_Bool)isSupportedH264Profile:(id)arg1;	// IMP=0x00000000007e4ec9
+ (_Bool)isSupportedVideoCodec:(id)arg1;	// IMP=0x00000000007e4ead
+ (id)audioConfigurationsByPreferenceOrder;	// IMP=0x00000000007e4e4a
- (void).cxx_destruct;	// IMP=0x00000000007e3cc0
@property _Bool didTriggerABCForConfigure; // @synthesize didTriggerABCForConfigure=_didTriggerABCForConfigure;
@property(retain) NSDate *configureStartDate; // @synthesize configureStartDate=_configureStartDate;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration; // @synthesize currentSelectedConfiguration=_currentSelectedConfiguration;
@property _Bool canConfigureCameraForRecording; // @synthesize canConfigureCameraForRecording=_canConfigureCameraForRecording;
@property _Bool configureCameraInProgress; // @synthesize configureCameraInProgress=_configureCameraInProgress;
@property(copy) NSDictionary *characteristicByType; // @synthesize characteristicByType=_characteristicByType;
@property(retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // @synthesize supportedAudioConfiguration=_supportedAudioConfiguration;
@property(retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // @synthesize supportedVideoConfiguration=_supportedVideoConfiguration;
@property(retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // @synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration;
@property(retain) NSDictionary *recordingConfigurationOverrides; // @synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides;
@property(readonly) HMDService *recordingService; // @synthesize recordingService=_recordingService;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraRecordingSettingsControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000007e39e7
@property(readonly) double configuredPrebufferDuration;
@property(readonly) double configuredFragmentDuration;
@property(readonly, getter=isCameraConfiguredForRecording) _Bool cameraConfiguredForRecording;
- (void)_setSelectedRecordingConfiguration:(id)arg1;	// IMP=0x00000000007e3523
- (id)_parseResponse:(id)arg1 forCharacteristicType:(id)arg2;	// IMP=0x00000000007e31fa
- (id)_parseSupportedVideoConfiguration:(id)arg1;	// IMP=0x00000000007e2ff2
- (id)_parseSupportedAudioConfiguration:(id)arg1;	// IMP=0x00000000007e2dea
- (id)_parseSupportedRecordingConfiguration:(id)arg1;	// IMP=0x00000000007e2be2
- (id)_parseSelectedRecordingConfiguration:(id)arg1;	// IMP=0x00000000007e29da
- (void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg1;	// IMP=0x00000000007e2375
- (void)_readSupportedCameraRecordingConfiguration;	// IMP=0x00000000007e20d4
- (void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg1;	// IMP=0x00000000007e1d2d
- (void)_readSelectedCameraRecordingConfiguration;	// IMP=0x00000000007e1b90
- (void)_readCameraRecordingSettings;	// IMP=0x00000000007e13ac
- (void)_selectedConfigurationDidUpdateTo:(id)arg1;	// IMP=0x00000000007e124f
- (void)_configureCameraRecordingSettings;	// IMP=0x00000000007e111d
- (void)handleAccessoryIsNotConfiguredError;	// IMP=0x00000000007e0fce
- (void)reconfigureCameraRecordingSettingsWithReason:(id)arg1;	// IMP=0x00000000007e0d94
- (void)configureCameraRecordingSettings;	// IMP=0x00000000007e0b6e
- (void)triggerABCForConfigure;	// IMP=0x00000000007e08c1
- (void)dealloc;	// IMP=0x00000000007e0743
- (void)updateCanConfigureCameraForRecording;	// IMP=0x00000000007dfc56
- (id)_recordingAudioConfiguration;	// IMP=0x00000000007df1f1
- (id)_recordingVideoConfiguration;	// IMP=0x00000000007de837
- (id)_preferredAudioConfigurationOverride;	// IMP=0x00000000007de51d
- (id)_preferredVideoConfigurationOverride;	// IMP=0x00000000007ddd6d
- (id)_recordingGeneralConfiguration;	// IMP=0x00000000007dd53f
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000007dd48e
- (void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg1;	// IMP=0x00000000007dd3dd
- (void)handleCharacteristicValueUpdated:(id)arg1;	// IMP=0x00000000007dd32c
- (void)handleCharacteristicsUpdated:(id)arg1;	// IMP=0x00000000007dd27b
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x00000000007dd1ca
- (void)handleAccessoryDisconnected:(id)arg1;	// IMP=0x00000000007dd119
- (void)start;	// IMP=0x00000000007dccc9
@property(readonly) NSArray *videoConfigurationsByPreferenceOrder;
@property(readonly, copy) NSNumber *configuredImageHeight;
@property(readonly, copy) NSNumber *configuredImageWidth;
@property(readonly, copy) NSNumber *configuredIFrameInterval;
@property(readonly, copy) NSNumber *configuredBitRate;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3;	// IMP=0x00000000007dc045

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

