//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (id)sharedPreferences;	// IMP=0x00000000000a515e
- (int)adaptiveSiriVolumeRecentIntent;	// IMP=0x00000000000a57ed
- (float)adaptiveSiriVolumePermanentOffset;	// IMP=0x00000000000a5796
- (_Bool)isAdaptiveSiriVolumePermanentOffsetEnabled;	// IMP=0x00000000000a574b
- (_Bool)isAdaptiveSiriVolumeTemporaryIntentValid;	// IMP=0x00000000000a5700
- (void)disableAdaptiveSiriVolume:(id)arg1;	// IMP=0x00000000000a568a
- (_Bool)smartSiriVolumeContextAwareEnabled;	// IMP=0x00000000000a563f
- (id)trialBaseAssetDirectory;	// IMP=0x00000000000a55e8
- (_Bool)useSiriActivationSPIForHomePod;	// IMP=0x00000000000a559d
- (_Bool)enableAudioInjection:(_Bool)arg1;	// IMP=0x00000000000a5543
- (void)setAudioInjectionFilePath:(id)arg1;	// IMP=0x00000000000a54cd
- (id)getStartOfSpeechAudioLogFilePath;	// IMP=0x00000000000a5476
- (_Bool)twoShotNotificationEnabled;	// IMP=0x00000000000a542b
- (float)getAttendingTimeoutConfig;	// IMP=0x00000000000a53d4
- (_Bool)isAttentiveSiriAudioLoggingEnabled;	// IMP=0x00000000000a5389
- (_Bool)isAttentiveSiriEnabled;	// IMP=0x00000000000a533e
- (_Bool)isPHSSupported;	// IMP=0x00000000000a52f3
- (_Bool)voiceTriggerEnabled;	// IMP=0x00000000000a52a8
- (id)voiceTriggerAudioLogDirectory;	// IMP=0x00000000000a5251
- (_Bool)fileLoggingIsEnabled;	// IMP=0x00000000000a5206
- (void)setFileLoggingIsEnabled:(_Bool)arg1;	// IMP=0x00000000000a51b3

@end

