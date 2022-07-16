//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPVolumeControllerDelegate-Protocol.h"

@class MPAVBatteryLevel, MPAVOutputDeviceRoute, MPVolumeController, NSString;

@interface TVNPOutputDeviceRoute <MPVolumeControllerDelegate>
{
    NSString *_overrideTitle;	// 96 = 0x60
    _Bool _spatialAudioSupported;	// 104 = 0x68
    _Bool _noiseControlSupported;	// 105 = 0x69
    MPAVOutputDeviceRoute *_outputDeviceRoute;	// 112 = 0x70
    MPAVBatteryLevel *_batteryLevel;	// 120 = 0x78
    MPVolumeController *_volumeController;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000000bc00
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) MPAVBatteryLevel *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) _Bool noiseControlSupported; // @synthesize noiseControlSupported=_noiseControlSupported;
@property(readonly, nonatomic) _Bool spatialAudioSupported; // @synthesize spatialAudioSupported=_spatialAudioSupported;
@property(retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
- (void)_updateVolume;	// IMP=0x000000000000b660
- (id)_imageForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x000000000000b4c0
- (id)overrideTitle;	// IMP=0x000000000000b490
- (void)setOverrideTitle:(id)arg1;	// IMP=0x000000000000b400
- (void)volumeController:(id)arg1 mutedStateDidChange:(_Bool)arg2;	// IMP=0x000000000000b300
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000000000b1f0
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000000000b0f0
- (id)deviceTypeDescription;	// IMP=0x000000000000af60
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000000aee0
- (void)setVolumeLevel:(id)arg1;	// IMP=0x000000000000ae10
- (id)deviceImage;	// IMP=0x000000000000ad70
- (void)updateWithOutputDevice:(id)arg1 selectionState:(unsigned long long)arg2 destination:(id)arg3 wantsVolumeUpdates:(_Bool)arg4;	// IMP=0x000000000000a360
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000a230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
