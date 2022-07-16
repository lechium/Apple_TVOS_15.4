//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAudioRecordContext, CSServerEndpointFeatures, MISSING_TYPE, NSDate, NSMutableArray, NSString, OSDAnalyzer, OSDFeatures, _EAREndpointer;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

@interface CSHybridEndpointAnalyzer : NSObject
{
    _Bool _saveSamplesSeenInReset;	// 8 = 0x8
    _Bool _canProcessCurrentRequest;	// 9 = 0x9
    _Bool _isAnchorTimeBuffered;	// 10 = 0xa
    _Bool _isRequestTimeout;	// 11 = 0xb
    _Bool _didAddAudio;	// 12 = 0xc
    _Bool _epResult;	// 13 = 0xd
    _Bool _didReceiveServerFeatures;	// 14 = 0xe
    _Bool _useDefaultServerFeaturesOnClientLag;	// 15 = 0xf
    _Bool _didCommunicateEndpoint;	// 16 = 0x10
    _Bool _speechEndpointDetected;	// 17 = 0x11
    _Bool _didTimestampFirstAudioPacket;	// 18 = 0x12
    _Bool _recordingDidStop;	// 19 = 0x13
    _Bool _didDetectSpeech;	// 20 = 0x14
    float _lastEndpointPosterior;	// 24 = 0x18
    id <CSEndpointAnalyzerDelegate> _delegate;	// 32 = 0x20
    id <CSEndpointAnalyzerImplDelegate> _implDelegate;	// 40 = 0x28
    unsigned long long _activeChannel;	// 48 = 0x30
    NSString *_mhId;	// 56 = 0x38
    long long _endpointStyle;	// 64 = 0x40
    long long _endpointMode;	// 72 = 0x48
    double _startWaitTime;	// 80 = 0x50
    double _endWaitTime;	// 88 = 0x58
    double _interspeechWaitTime;	// 96 = 0x60
    double _delay;	// 104 = 0x68
    double _automaticEndpointingSuspensionEndTime;	// 112 = 0x70
    double _minimumDurationForEndpointer;	// 120 = 0x78
    CSAsset *_currentAsset;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_targetQueue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_apQueue;	// 144 = 0x90
    unsigned long long _numSamplesProcessed;	// 152 = 0x98
    unsigned long long _numSamplesProcessedBeforeAnchorTime;	// 160 = 0xa0
    unsigned long long _anchorMachAbsTime;	// 168 = 0xa8
    OSDAnalyzer *_osdAnalyzer;	// 176 = 0xb0
    OSDFeatures *_osdFeaturesAtEndpoint;	// 184 = 0xb8
    _EAREndpointer *_hybridClassifier;	// 192 = 0xc0
    NSString *_endpointerModelVersion;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_serverFeaturesQueue;	// 208 = 0xd0
    CSServerEndpointFeatures *_lastKnownServerEPFeatures;	// 216 = 0xd8
    OSDFeatures *_lastKnownOSDFeatures;	// 224 = 0xe0
    NSMutableArray *_serverFeatureLatencies;	// 232 = 0xe8
    double _lastKnowServerFeaturesLatency;	// 240 = 0xf0
    double _serverFeaturesWarmupLatency;	// 248 = 0xf8
    NSDate *_lastServerFeatureTimestamp;	// 256 = 0x100
    double _clientLagThresholdMs;	// 264 = 0x108
    double _clampedSFLatencyMsForClientLag;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_hybridClassifierQueue;	// 280 = 0x118
    double _lastReportedEndpointTimeMs;	// 288 = 0x120
    double _processedAudioInSeconds;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_stateSerialQueue;	// 304 = 0x130
    unsigned long long _currentRequestSampleRate;	// 312 = 0x138
    double _vtExtraAudioAtStartInMs;	// 320 = 0x140
    unsigned long long _vtEndInSampleCount;	// 328 = 0x148
    double _hepAudioOriginInMs;	// 336 = 0x150
    CSAudioRecordContext *_recordContext;	// 344 = 0x158
    NSDate *_firstAudioPacketTimestamp;	// 352 = 0x160
    double _firstAudioSampleSensorTimestamp;	// 360 = 0x168
    NSObject<OS_dispatch_queue> *_osdQueue;	// 368 = 0x170
    double _elapsedTimeWithNoSpeech;	// 376 = 0x178
    double _trailingSilenceDurationAtEndpoint;	// 384 = 0x180
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000069f48
@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(nonatomic) double elapsedTimeWithNoSpeech; // @synthesize elapsedTimeWithNoSpeech=_elapsedTimeWithNoSpeech;
@property(nonatomic) _Bool didDetectSpeech; // @synthesize didDetectSpeech=_didDetectSpeech;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue; // @synthesize osdQueue=_osdQueue;
@property(nonatomic) _Bool recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(nonatomic) _Bool didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(nonatomic) double firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) _Bool speechEndpointDetected; // @synthesize speechEndpointDetected=_speechEndpointDetected;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(nonatomic) double hepAudioOriginInMs; // @synthesize hepAudioOriginInMs=_hepAudioOriginInMs;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(nonatomic) _Bool didCommunicateEndpoint; // @synthesize didCommunicateEndpoint=_didCommunicateEndpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // @synthesize stateSerialQueue=_stateSerialQueue;
@property(nonatomic) float lastEndpointPosterior; // @synthesize lastEndpointPosterior=_lastEndpointPosterior;
@property(nonatomic) double processedAudioInSeconds; // @synthesize processedAudioInSeconds=_processedAudioInSeconds;
@property(nonatomic) double lastReportedEndpointTimeMs; // @synthesize lastReportedEndpointTimeMs=_lastReportedEndpointTimeMs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue; // @synthesize hybridClassifierQueue=_hybridClassifierQueue;
@property(nonatomic) _Bool useDefaultServerFeaturesOnClientLag; // @synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag;
@property(nonatomic) double clampedSFLatencyMsForClientLag; // @synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag;
@property(nonatomic) double clientLagThresholdMs; // @synthesize clientLagThresholdMs=_clientLagThresholdMs;
@property(nonatomic) _Bool didReceiveServerFeatures; // @synthesize didReceiveServerFeatures=_didReceiveServerFeatures;
@property(retain, nonatomic) NSDate *lastServerFeatureTimestamp; // @synthesize lastServerFeatureTimestamp=_lastServerFeatureTimestamp;
@property(nonatomic) double serverFeaturesWarmupLatency; // @synthesize serverFeaturesWarmupLatency=_serverFeaturesWarmupLatency;
@property(nonatomic) _Bool epResult; // @synthesize epResult=_epResult;
@property(nonatomic) double lastKnowServerFeaturesLatency; // @synthesize lastKnowServerFeaturesLatency=_lastKnowServerFeaturesLatency;
@property(retain, nonatomic) NSMutableArray *serverFeatureLatencies; // @synthesize serverFeatureLatencies=_serverFeatureLatencies;
@property(retain, nonatomic) OSDFeatures *lastKnownOSDFeatures; // @synthesize lastKnownOSDFeatures=_lastKnownOSDFeatures;
@property(retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures; // @synthesize lastKnownServerEPFeatures=_lastKnownServerEPFeatures;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue; // @synthesize serverFeaturesQueue=_serverFeaturesQueue;
@property(retain, nonatomic) NSString *endpointerModelVersion; // @synthesize endpointerModelVersion=_endpointerModelVersion;
@property(retain, nonatomic) _EAREndpointer *hybridClassifier; // @synthesize hybridClassifier=_hybridClassifier;
@property(retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint; // @synthesize osdFeaturesAtEndpoint=_osdFeaturesAtEndpoint;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(nonatomic) _Bool didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) _Bool isRequestTimeout; // @synthesize isRequestTimeout=_isRequestTimeout;
@property(nonatomic) _Bool isAnchorTimeBuffered; // @synthesize isAnchorTimeBuffered=_isAnchorTimeBuffered;
@property(nonatomic) unsigned long long anchorMachAbsTime; // @synthesize anchorMachAbsTime=_anchorMachAbsTime;
@property(nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime; // @synthesize numSamplesProcessedBeforeAnchorTime=_numSamplesProcessedBeforeAnchorTime;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(nonatomic) _Bool canProcessCurrentRequest; // @synthesize canProcessCurrentRequest=_canProcessCurrentRequest;
@property(nonatomic) _Bool saveSamplesSeenInReset; // @synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset;
@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property(nonatomic) double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property(nonatomic) double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property(nonatomic) long long endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) long long endpointStyle; // @synthesize endpointStyle=_endpointStyle;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) __weak id <CSEndpointAnalyzerImplDelegate> implDelegate; // @synthesize implDelegate=_implDelegate;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_multimodalEndpointerEnabled;	// IMP=0x001000000006995f
- (_Bool)_shouldUsePhaticWithRecordContext;	// IMP=0x00100000000698c1
- (id)_getCSHybridEndpointerConfigForAsset:(id)arg1;	// IMP=0x00100000000695e7
- (void)_updateAssetWithCurrentLanguage;	// IMP=0x0010000000069571
- (void)_updateAssetWithLanguage:(id)arg1;	// IMP=0x001000000006939e
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;	// IMP=0x00100000000692d4
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;	// IMP=0x001000000006923e
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0010000000069181
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
- (void)reset;	// IMP=0x001000000006915b
- (void)_readParametersFromHEPAsset:(id)arg1;	// IMP=0x0010000000068e7a
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2;	// IMP=0x00100000000681c3
- (long long)fetchCurrentEndpointerOperationMode;	// IMP=0x00100000000681bb
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x00100000000681b5
- (void)stopEndpointer;	// IMP=0x001000000006811f
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x0010000000068077
- (void)terminateProcessing;	// IMP=0x0010000000068004
- (void)preheat;	// IMP=0x0010000000067ffe
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;	// IMP=0x0010000000067d08
- (void)logFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000674dd
- (void)_emitEndpointDetectedEventWithEndpointTimeMs:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 endpointerFeatures:(id)arg3 endpointerDecisionLagInNs:(double)arg4 extraDelayMs:(unsigned long long)arg5 endpointScore:(double)arg6 asrFeatureLatencies:(id)arg7;	// IMP=0x00100000000674cc
- (void)osdAnalyzer:(id)arg1 didUpdateOSDFeatures:(id)arg2;	// IMP=0x0010000000065527
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064e00
- (void)processServerEndpointFeatures:(id)arg1;	// IMP=0x0010000000064b32
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x0010000000064a89
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x00100000000649dc
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x00100000000642b2
- (void)_loadAndSetupEndpointerAssetIfNecessary;	// IMP=0x0010000000063f97
- (id)init;	// IMP=0x00100000000637de

// Remaining properties
@property(nonatomic) double bypassSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

