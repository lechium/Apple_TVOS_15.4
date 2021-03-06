//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraClipManager, HMCameraRecordingEventManager, HMCameraRecordingReachabilityEventManager, HMCameraUserSettings, NSArray, _HMCameraAudioControl, _HMCameraSettingsControl, _HMCameraSnapshotControl, _HMCameraStreamControl;

@interface _HMCameraProfile
{
    _HMCameraStreamControl *_streamControlInternal;	// 16 = 0x10
    _HMCameraSnapshotControl *_snapshotControlInternal;	// 24 = 0x18
    _HMCameraSettingsControl *_settingsControl;	// 32 = 0x20
    _HMCameraAudioControl *_speakerControl;	// 40 = 0x28
    _HMCameraAudioControl *_microphoneControl;	// 48 = 0x30
    HMCameraUserSettings *_userSettings;	// 56 = 0x38
    HMCameraClipManager *_clipManager;	// 64 = 0x40
    HMCameraRecordingReachabilityEventManager *_reachabilityEventManager;	// 72 = 0x48
    HMCameraRecordingEventManager *_recordingEventManager;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e4b60
- (void).cxx_destruct;	// IMP=0x00000000000e4ab8
@property(retain) HMCameraRecordingEventManager *recordingEventManager; // @synthesize recordingEventManager=_recordingEventManager;
@property(retain) HMCameraRecordingReachabilityEventManager *reachabilityEventManager; // @synthesize reachabilityEventManager=_reachabilityEventManager;
@property(retain) HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain) HMCameraUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(readonly) _HMCameraAudioControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property(readonly) _HMCameraAudioControl *speakerControl; // @synthesize speakerControl=_speakerControl;
@property(readonly) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(readonly) _HMCameraSnapshotControl *snapshotControlInternal; // @synthesize snapshotControlInternal=_snapshotControlInternal;
@property(readonly) _HMCameraStreamControl *streamControlInternal; // @synthesize streamControlInternal=_streamControlInternal;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e49a8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e47b8
- (void)addUserSettings:(id)arg1;	// IMP=0x00000000000e471e
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000000e4304
- (void)_createControls:(id)arg1;	// IMP=0x00000000000e3e92
@property(readonly, copy) NSArray *controls;
- (id)initWithUUID:(id)arg1 services:(id)arg2;	// IMP=0x00000000000e3c24

@end

