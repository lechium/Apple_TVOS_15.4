//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSFPreferences : NSObject
{
}

+ (id)sharedPreferences;	// IMP=0x00000000000127c2
- (long long)geckoLoggingLevel;	// IMP=0x0000000000016fd3
- (_Bool)isModelBenchmarkingEnabled;	// IMP=0x0000000000016f52
- (_Bool)isReducedPHSThresholdEnabled;	// IMP=0x0000000000016ed1
- (_Bool)isP2PTransferEnabled;	// IMP=0x0000000000016e60
- (id)getIdleUserPreventSleepAssertionAcquitionDate;	// IMP=0x0000000000016e02
- (void)setIdleUserPreventSleepAssertionAcquitionDate:(id)arg1;	// IMP=0x0000000000016de2
- (void)setRemoteDarwinEverConnectedWithNotifyKey:(const char *)arg1;	// IMP=0x0000000000016d53
- (id)languageCodeDarwin;	// IMP=0x0000000000016cb3
- (void)setSiriLanguageCodeDarwin:(id)arg1;	// IMP=0x0000000000016c38
- (void)getASVUserIntent:(id)arg1;	// IMP=0x00000000000165b1
- (void)setASVUserIntent:(id)arg1;	// IMP=0x000000000001631c
- (_Bool)isSelfTriggerFileLoggingEnabled;	// IMP=0x00000000000162a2
- (_Bool)isAdBlockerAudioLoggingEnabled;	// IMP=0x0000000000016228
- (_Bool)isMultiChannelAudioLoggingEnabled;	// IMP=0x000000000001615b
- (_Bool)isMultiPhraseVTEnabled;	// IMP=0x00000000000160da
- (_Bool)bypassPersonalizedHeySiri;	// IMP=0x0000000000016050
- (_Bool)opportuneSpeakListenerBypassEnabled;	// IMP=0x0000000000015ffd
- (_Bool)companionSyncVoiceTriggerUtterancesEnabled;	// IMP=0x0000000000015fa1
- (id)fakeHearstModelPath;	// IMP=0x0000000000015f21
- (void)setHearstSecondPassModelVersion:(id)arg1;	// IMP=0x0000000000015ec6
- (void)setHearstFirstPassModelVersion:(id)arg1;	// IMP=0x0000000000015e6b
- (float)overwritingRemoteVADScore;	// IMP=0x0000000000015df6
- (_Bool)shouldOverwriteRemoteVADScore;	// IMP=0x0000000000015d9e
- (_Bool)useSiriActivationSPIForwatchOS;	// IMP=0x0000000000015d2d
- (_Bool)useSiriActivationSPIForHomePod;	// IMP=0x0000000000015cbc
- (unsigned long long)maxNumGradingFiles;	// IMP=0x0000000000015c61
- (unsigned long long)maxNumLoggingFiles;	// IMP=0x0000000000015c06
- (double)audioSessionActivationDelay;	// IMP=0x0000000000015bad
- (int)adaptiveSiriVolumeRecentIntent;	// IMP=0x0000000000015b62
- (float)adaptiveSiriVolumePermanentOffset;	// IMP=0x0000000000015b0d
- (_Bool)isAdaptiveSiriVolumePermanentOffsetEnabled;	// IMP=0x0000000000015ac2
- (_Bool)isAdaptiveSiriVolumeTemporaryIntentValid;	// IMP=0x00000000000159b0
- (_Bool)smartSiriVolumeContextAwareEnabled;	// IMP=0x000000000001599b
- (_Bool)smartSiriVolumeContextAwareLoggingEnabled;	// IMP=0x00000000000158d4
- (_Bool)smartSiriVolumeSoftVolumeEnabled;	// IMP=0x0000000000015878
- (unsigned long long)speakerIdScoreReportingType;	// IMP=0x0000000000015767
- (_Bool)isSpeakerRecognitionAvailable;	// IMP=0x00000000000156e0
- (_Bool)_isRemoteVoiceTriggerAvailable;	// IMP=0x00000000000156d8
- (_Bool)isPHSSupported;	// IMP=0x00000000000156d0
- (id)audioInjectionFilePath;	// IMP=0x0000000000015425
- (void)setAudioInjectionFilePath:(id)arg1;	// IMP=0x0000000000015367
- (_Bool)audioInjectionEnabledWithKey:(struct __CFString *)arg1;	// IMP=0x0000000000015304
- (_Bool)enableAudioInjection:(_Bool)arg1 withKey:(struct __CFString *)arg2;	// IMP=0x00000000000151c2
- (_Bool)programmableAudioInjectionEnabled;	// IMP=0x00000000000151a9
- (_Bool)useSpeexForAudioInjection;	// IMP=0x000000000001512f
- (_Bool)enableProgrammableAudioInjection:(_Bool)arg1;	// IMP=0x0000000000015116
- (_Bool)audioInjectionEnabled;	// IMP=0x00000000000150fd
- (_Bool)enableAudioInjection:(_Bool)arg1;	// IMP=0x00000000000150e4
- (_Bool)myriadFileLoggingEnabled;	// IMP=0x0000000000015063
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;	// IMP=0x0000000000014fdd
- (id)interstitialRelativeDirForLevel:(long long)arg1;	// IMP=0x0000000000014f73
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;	// IMP=0x0000000000014f1f
- (double)remoteVoiceTriggerDelayTime;	// IMP=0x0000000000014ecb
- (_Bool)_isDirectory:(id)arg1;	// IMP=0x0000000000014e48
- (id)getStartOfSpeechAudioLogFilePath;	// IMP=0x0000000000014bfa
- (void)clearMyriadSettingsOnAccessory:(id)arg1;	// IMP=0x000000000001499d
- (void)clearTimerPlayingStatusOnAccessory:(id)arg1;	// IMP=0x00000000000148e9
- (void)setIsTimerPlayingOnAccessory:(id)arg1 isTimerPlaying:(_Bool)arg2;	// IMP=0x00000000000148c8
- (_Bool)isTimerPlayingOnAccessory:(id)arg1;	// IMP=0x00000000000148ac
- (void)clearAlarmPlayingStatusOnAccessory:(id)arg1;	// IMP=0x00000000000147f8
- (void)setIsAlarmPlayingOnAccessory:(id)arg1 isAlarmPlaying:(_Bool)arg2;	// IMP=0x00000000000147d7
- (_Bool)isAlarmPlayingOnAccessory:(id)arg1;	// IMP=0x00000000000147bb
- (void)clearMediaPlayingStatusOnAccessory:(id)arg1;	// IMP=0x0000000000014707
- (void)setIsMediaPlayingOnAccessory:(id)arg1 isMediaPlaying:(_Bool)arg2 isInterrupted:(_Bool)arg3 interruptedTime:(double)arg4;	// IMP=0x00000000000146f5
- (_Bool)isMediaPlayingOnAccessory:(id)arg1;	// IMP=0x00000000000146d9
- (void)clearMediaPlaybackInterruptedTimeOnAccessory:(id)arg1;	// IMP=0x0000000000014625
- (double)getMediaPlaybackInterruptedTime:(id)arg1;	// IMP=0x000000000001448f
- (void)_clearAccessorySettingForKeys:(id)arg1 forAccessory:(id)arg2;	// IMP=0x00000000000141f9
- (_Bool)getBooleanAccessorySettingValueForKey:(id)arg1 forAccessory:(id)arg2;	// IMP=0x0000000000014069
- (void)setMediaPlayingSettingForAccessory:(id)arg1 isMediaPlaying:(_Bool)arg2 isInterrupted:(_Bool)arg3 interruptedTime:(double)arg4;	// IMP=0x0000000000013e7c
- (void)setBooleanAccessorySettingValue:(_Bool)arg1 forKey:(id)arg2 forAccessory:(id)arg3;	// IMP=0x0000000000013d05
- (void)_updatePreferenceSettingsForAccessory:(id)arg1 settingsUpdateBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013b82
- (_Bool)forceVoiceTriggerAOPMode;	// IMP=0x0000000000013a69
- (_Bool)forceVoiceTriggerAPMode;	// IMP=0x0000000000013950
- (_Bool)startOfSpeechAudioLoggingEnabled;	// IMP=0x00000000000138fb
- (long long)getJarvisTriggerMode;	// IMP=0x00000000000138ad
- (void)setJarvisTriggerMode:(long long)arg1;	// IMP=0x00000000000137cf
- (_Bool)jarvisAudioLoggingEnabled;	// IMP=0x000000000001377a
- (_Bool)speakerRecognitionAudioLoggingEnabled;	// IMP=0x00000000000136ee
- (_Bool)secondPassAudioLoggingEnabled;	// IMP=0x0000000000013699
- (id)myriadHashFilePath;	// IMP=0x00000000000135b2
- (id)myriadHashDirectory;	// IMP=0x000000000001355b
- (id)assistantAudioFileLogDirectory;	// IMP=0x0000000000013460
- (id)assistantLogDirectory;	// IMP=0x0000000000013409
- (id)trialBaseAssetDirectory;	// IMP=0x00000000000133b2
- (id)getSSVLogFilePathWithSessionIdentifier:(id)arg1;	// IMP=0x00000000000131fd
- (id)ssvLogDirectory;	// IMP=0x00000000000131a6
- (id)remoteGradingDataDirectory;	// IMP=0x000000000001314f
- (id)remoteP2pLogDirectory;	// IMP=0x00000000000130f8
- (id)mhLogDirectory;	// IMP=0x00000000000130a1
- (id)geckoAudioLogDirectory;	// IMP=0x0000000000012fd7
- (id)voiceTriggerAudioLogDirectory;	// IMP=0x0000000000012f0d
- (id)baseDir;	// IMP=0x0000000000012e7f
- (void)setFileLoggingLevel:(id)arg1;	// IMP=0x0000000000012e5f
- (id)fileLoggingLevel;	// IMP=0x0000000000012e32
- (void)disableAdaptiveSiriVolume:(id)arg1;	// IMP=0x0000000000012e12
- (_Bool)_isAdaptiveSiriVolumeDisabled;	// IMP=0x0000000000012d9d
- (_Bool)fileLoggingIsEnabled;	// IMP=0x0000000000012d39
- (void)setFileLoggingIsEnabled:(_Bool)arg1;	// IMP=0x0000000000012d15
- (_Bool)_storeModeEnabled;	// IMP=0x0000000000012caf
- (float)getAttendingTimeoutConfig;	// IMP=0x0000000000012bc8
- (_Bool)twoShotNotificationEnabled;	// IMP=0x0000000000012b75
- (_Bool)isDeferredActivationEnabled;	// IMP=0x0000000000012afb
- (_Bool)isAttentiveSiriAudioLoggingEnabled;	// IMP=0x00000000000129f3
- (void)setVoiceTriggerEverUsed;	// IMP=0x0000000000012932
- (_Bool)phraseSpotterEnabled;	// IMP=0x00000000000128c0
- (_Bool)voiceTriggerEnabled;	// IMP=0x000000000001281c

@end

