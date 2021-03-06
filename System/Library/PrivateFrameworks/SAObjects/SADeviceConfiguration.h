//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SADeviceConfiguration
{
}

+ (id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000149c1
+ (id)deviceConfiguration;	// IMP=0x00000000000149af
- (_Bool)requiresResponse;	// IMP=0x0000000000014ab9
@property(nonatomic) double mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
@property(nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
@property(nonatomic) double initialInterstitialDelayForCarPlay;
@property(nonatomic) double initialInterstitialDelay;
@property(nonatomic) _Bool hasAudioSessionActivationDelay;
@property(nonatomic) double audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
@property(nonatomic) double audioSessionActivationDelay;
- (id)encodedClassName;	// IMP=0x00000000000149a2
- (id)groupIdentifier;	// IMP=0x000000000001498e

@end

