//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCDefaults : NSObject
{
    int _forceCaptureWidth;	// 8 = 0x8
    int _forceCaptureHeight;	// 12 = 0xc
    int _forceEncodeWidth;	// 16 = 0x10
    int _forceEncodeHeight;	// 20 = 0x14
    int _forceEncodeFramerate;	// 24 = 0x18
    int _forceFramerate;	// 28 = 0x1c
    int _forceBitrate;	// 32 = 0x20
    int _forceVideoPayload;	// 36 = 0x24
    int _forceRecvVideoPayload;	// 40 = 0x28
    int _forceKeyFrameInterval;	// 44 = 0x2c
    _Bool _isFECVersion2Enabled;	// 48 = 0x30
    _Bool _forceWiFiAssist;	// 49 = 0x31
    _Bool _forceWiFiAssistOutOfBudget;	// 50 = 0x32
}

+ (id)copyStringValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000037dae6
+ (_Bool)booleanValueForKey:(struct __CFString *)arg1 defaultValue:(_Bool)arg2;	// IMP=0x000000000037dac3
+ (_Bool)booleanValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000037daa8
+ (long long)integerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;	// IMP=0x000000000037d95b
+ (long long)integerValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000037d940
+ (double)getDoubleValueForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;	// IMP=0x000000000037d7eb
+ (id)sharedInstance;	// IMP=0x000000000037d70c
@property(readonly) _Bool forceWiFiAssistOutOfBudget; // @synthesize forceWiFiAssistOutOfBudget=_forceWiFiAssistOutOfBudget;
@property(readonly) _Bool forceWiFiAssist; // @synthesize forceWiFiAssist=_forceWiFiAssist;
@property(readonly) _Bool isFECVersion2Enabled; // @synthesize isFECVersion2Enabled=_isFECVersion2Enabled;
- (_Bool)forceUseInternalRTPThreadingWithDefaultValue:(_Bool)arg1;	// IMP=0x000000000037f8e5
@property(readonly) double remoteMediaStallTimeout;
@property(readonly) unsigned int prominenceInactiveAccumulationThreshold;
@property(readonly) unsigned int prominenceInactiveProbabilityThreshold;
@property(readonly) unsigned int prominenceActiveAccumulationThreshold;
@property(readonly) unsigned int prominenceActiveProbabilityThreshold;
@property(readonly) _Bool forceDisableReporting;
@property(readonly) _Bool forceDisableMessageEncryption;
@property(readonly) _Bool forceDisableMediaEncryption;
- (_Bool)shouldOverrideEffectsFramerate:(unsigned int *)arg1;	// IMP=0x000000000037f5ce
@property(readonly) _Bool forceDisableMediaStalled;
@property(readonly) _Bool forceDisableVideoDegraded;
@property(readonly) _Bool forceDisableEffectsHealthCheck;
@property(readonly) float depthFrameRateMultiplier;
@property(readonly) _Bool forceDynamicEffectsFramerate;
@property(readonly) _Bool forceDisableFaceZoom;
@property(readonly) unsigned int multiwayVideoNetworkBitrateCapCellular;
@property(readonly) unsigned int multiwayVideoNetworkBitrateCapWifi;
@property(readonly) unsigned int multiwayAudioNetworkBitrateCapCellular;
@property(readonly) unsigned int multiwayAudioNetworkBitrateCapWifi;
@property(readonly) _Bool forceAudioPriorityEnabled;
@property(readonly) unsigned char forceAudioPriorityValue;
@property(readonly) unsigned int silenceLevelMovingAveragePeriod;
@property(readonly) float audioVoiceDetectionSensitivity;
@property(readonly) unsigned char audioPriorityRampUpSpeed;
@property(readonly) unsigned char audioPriorityDecayFast;
@property(readonly) unsigned char audioPriorityDecaySlow;
@property(readonly) _Bool forceDisableMediaPriority;
- (_Bool)enableAudioDumpParticipantLocal:(_Bool)arg1;	// IMP=0x000000000037f2a5
- (_Bool)enableAudioDumpParticipantRemote:(_Bool)arg1;	// IMP=0x000000000037f283
@property(readonly) _Bool forceFECRepairStream;
@property(readonly) unsigned int forceVisibilityIndex;
@property(readonly) unsigned int minParticipantCountSendVoiceActiveOnly;
@property(readonly) _Bool forceMuteAtStart;
@property(readonly) _Bool forceEVSWideBand;
@property(readonly) unsigned int maxActiveVideoDecoders;
@property(readonly) unsigned int maxActiveVideoEncoders;
@property(readonly) _Bool supportsOneToOneMode;
@property(readonly) _Bool forceOneToOneMode;
@property(readonly) _Bool cameraVideoStablization;
@property(readonly) _Bool dumpMediaBlob;
@property(readonly) _Bool momentsUseBestVideoRule;
@property(readonly) _Bool momentsUserPreferenceEnabled;
- (_Bool)forceWifiAssistOutOfBudget;	// IMP=0x000000000037efb8
- (_Bool)forceWifiAssist;	// IMP=0x000000000037ef98
@property(readonly) _Bool shouldDisplayVideoInfoLayer;
@property(readonly) float pauseHeartbeatInterval;
@property(readonly) _Bool enableGFTStatsReceiveThread;
@property(readonly) _Bool enableGFTStatsReporting;
@property(readonly) int localRATTypeOverride;
@property(readonly) int localWRMLinkType;
@property(readonly) int enableiRATSuggestion;
@property(readonly) _Bool forceIPv6;
@property(readonly) int max2GRate;
@property(readonly) int redundancyControlForceVideoRedundancyPercentage;
@property(readonly) int packetExpirationTime;
@property(readonly) int rateControlBasebandSlowDownFactor;
@property(readonly) int rateControlForceRxRate;
@property(readonly) int rateControlForceTxRate;
@property(readonly) int rateControlForceRxCap;
@property(readonly) int rateControlForceTxCap;
@property(readonly) _Bool rateControlAllowBurstyLossRampDown;
@property(readonly) _Bool rateControlAllowVideoStop;
@property(readonly) _Bool rateControlLogEnabled;
@property(readonly) _Bool rateControlDumpEnabled;
@property(readonly) _Bool bandwidthEstimationDumpEnabled;
@property(readonly) int rateControlStatisticsQueueWaitTime;
@property(readonly) int rateControllerType;
@property(readonly) _Bool mediaQueueDumpEnabled;
@property(readonly) _Bool forceDisableMediaQueue;
@property(readonly) int videoStreamRateControlAlgorithm;
@property(readonly) _Bool videoStreamRateControlDumpEnabled;
@property(readonly) _Bool enableHEIFAndHEVCForMoments;
@property(readonly) _Bool forceVideoStreamLowLatency;
@property(readonly) int forceVideoStreamPayload;
@property(readonly) _Bool forceVideoStreamDisableBitrateCap;
@property(readonly) int forceVideoStreamRxMinBitrate;
@property(readonly) int forceVideoStreamRxMaxBitrate;
@property(readonly) int forceVideoStreamKeyFrameInterval;
@property(readonly) int forceVideoStreamFramerate;
@property(readonly) int forceVideoStreamTxMinBitrate;
@property(readonly) int forceVideoStreamTxMaxBitrate;
@property(readonly) int forceVideoStreamResolution;
@property(readonly) unsigned int aacBlockSize;
@property(readonly) _Bool useSBR;
@property(readonly) int forceRedMaxDelay;
@property(readonly) int forceRedNumPayloads;
@property(readonly) _Bool disableRed;
@property(readonly) _Bool forceDisableAudioPowerSpectrumRegister;
@property(readonly) int forceAudioChannelCount;
@property(readonly) _Bool forceUseFloat;
@property(readonly) int forceAudioPowerTimeInterval;
@property(readonly) float forceAudioPowerThreshold;
@property(readonly) int forceAudioHardwareSampleRate;
@property(readonly) int forceAudioPacketsPerBundle;
@property(readonly) int forceAudioBitrate;
@property(readonly) int forceAudioPayload;
@property(readonly) _Bool audioRecordingEnabled;
@property(readonly) int bundleAudio;
@property(readonly) _Bool disableVAD;
@property(readonly) _Bool canDecodeHD;
@property(readonly) int encodingScore;
@property(readonly) _Bool enableTxTimestampAlignmentLogs;
@property(readonly) int extraPayloads;
@property(readonly) _Bool enablePacketLogging;
@property(readonly) _Bool enableTxBitstreamDump;
@property(readonly) int enableTxSourceYuvDump;
@property(readonly) _Bool enableRecvBitstreamDump;
@property(readonly) _Bool enableVPBLogging;
@property(readonly) int enableRxDecodeYUVDump;
@property(readonly) _Bool enableBitstreamCapture;
- (unsigned int)forceThermalLevelFramerate:(unsigned int)arg1;	// IMP=0x000000000037e0bc
@property(readonly) _Bool forceDisableVideoRuleCell720;
@property(readonly) _Bool forceDisableVideoRuleWiFi1080;
@property(readonly) _Bool forceEnablePearlCamera;
@property(readonly) _Bool forceMirroredCapture;
@property(readonly) _Bool forceARCapture;
@property(readonly) int forceKeyFrameInterval;
@property(readonly) int forceRecvVideoPayload;
@property(readonly) int forceVideoPayload;
@property(readonly) int forceBitrate;
@property(readonly) int forceFramerate;
@property(readonly) int forceEncodeFramerate;
@property(readonly) int forceEncodeHeight;
@property(readonly) int forceEncodeWidth;
@property(readonly) int forceCaptureHeight;
@property(readonly) int forceCaptureWidth;
- (void)seperateString:(id)arg1;	// IMP=0x000000000037ddaf
@property(readonly) _Bool forceDisableThermal;
@property(readonly) _Bool forceMultiwayHWI;
@property(readonly) _Bool forceHWI;
@property(readonly) _Bool forceScreenHWI;
- (id)autorelease;	// IMP=0x000000000037dba8
- (oneway void)release;	// IMP=0x000000000037dba2
- (unsigned long long)retainCount;	// IMP=0x000000000037db95
- (id)retain;	// IMP=0x000000000037db8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000037db83
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000037db76
- (id)init;	// IMP=0x000000000037db24

@end

