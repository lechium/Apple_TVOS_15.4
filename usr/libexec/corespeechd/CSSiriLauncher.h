//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSSiriLauncher : NSObject
{
}

+ (id)sharedLauncher;	// IMP=0x004000000008607e
- (void)notifyDarwinVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 myriadLateActivationExpirationTime:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00400000000874db
- (void)notifyDarwinVoiceTriggerPrewarmWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000873ad
- (void)deactivateSiriActivationConnectionWithReason:(long long)arg1 withOptions:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x001000000008725b
- (void)notifyWakeKeywordSpokenRemora:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000087255
- (void)notifyRemoraVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 deviceId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000087242
- (void)notifyRemoraVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000871b4
- (void)notifyWakeKeywordSpokenBluetoothDevice:(id)arg1 deviceId:(id)arg2;	// IMP=0x00100000000870f5
- (void)notifyBluetoothDeviceVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086ea7
- (void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086d43
- (void)notifyWakeKeywordSpokenCarPlay:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000086c84
- (void)notifyCarPlayVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008690b
- (void)notifyCarPlayVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008674e
- (void)notifyWakeKeywordSpokenInBuiltInMic:(id)arg1;	// IMP=0x00100000000866ac
- (void)notifyBuiltInVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008623f
- (void)notifyBuiltInVoiceTriggerPrewarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000860f8

@end

