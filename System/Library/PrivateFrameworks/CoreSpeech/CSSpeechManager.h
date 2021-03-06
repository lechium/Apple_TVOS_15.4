//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSActivationEventNotificationHandlerDelegate-Protocol.h>
#import <CoreSpeech/CSAudioProviderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioRecorderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioServerCrashMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSOpportuneSpeakEventMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetHandlerDelegate-Protocol.h>

@class CSAudioRecorder, CSFallbackAudioSessionReleaseProvider, CSOpportuneSpeakListnerTestService, CSPostBuildInstallService, CSSmartSiriVolumeManager, NSMutableDictionary, NSString;
@protocol CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject <CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioRecorderDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetQueryQueue;	// 16 = 0x10
    CSAudioRecorder *_audioRecorder;	// 24 = 0x18
    NSMutableDictionary *_audioProviders;	// 32 = 0x20
    CSFallbackAudioSessionReleaseProvider *_fallbackAudioSessionReleaseProvider;	// 40 = 0x28
    id <CSSpeechManagerDelegate> _clientController;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;	// 56 = 0x38
    long long _clearLoggingFileTimerCount;	// 64 = 0x40
    CSOpportuneSpeakListnerTestService *_opportuneSpeakListnerTestService;	// 72 = 0x48
    CSPostBuildInstallService *_postBuildInstallService;	// 80 = 0x50
    CSSmartSiriVolumeManager *_ssvManager;	// 88 = 0x58
}

+ (id)sharedManagerForCoreSpeechDaemon;	// IMP=0x000000000002d556
+ (id)sharedManager;	// IMP=0x000000000002d54e
- (void).cxx_destruct;	// IMP=0x000000000002f6d3
@property(retain, nonatomic) CSSmartSiriVolumeManager *ssvManager; // @synthesize ssvManager=_ssvManager;
@property(retain, nonatomic) CSPostBuildInstallService *postBuildInstallService; // @synthesize postBuildInstallService=_postBuildInstallService;
@property(retain, nonatomic) CSOpportuneSpeakListnerTestService *opportuneSpeakListnerTestService; // @synthesize opportuneSpeakListnerTestService=_opportuneSpeakListnerTestService;
@property(nonatomic) long long clearLoggingFileTimerCount; // @synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // @synthesize clearLoggingFileTimer=_clearLoggingFileTimer;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSFallbackAudioSessionReleaseProvider *fallbackAudioSessionReleaseProvider; // @synthesize fallbackAudioSessionReleaseProvider=_fallbackAudioSessionReleaseProvider;
@property(retain, nonatomic) NSMutableDictionary *audioProviders; // @synthesize audioProviders=_audioProviders;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(_Bool)arg2;	// IMP=0x000000000002f59f
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x000000000002f586
- (void)_startClearLoggingFilesTimer;	// IMP=0x000000000002f4bf
- (void)_createClearLoggingFileTimer;	// IMP=0x000000000002f39e
- (void)_handleClearLoggingFileTimer;	// IMP=0x000000000002f299
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;	// IMP=0x000000000002f27c
- (void)voiceTriggerAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;	// IMP=0x000000000002f1fd
- (void)audioRecorderWillBeDestroyed:(id)arg1;	// IMP=0x000000000002f0d5
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x000000000002f0cf
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;	// IMP=0x000000000002f0c9
- (void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x000000000002edf7
- (id)_getAudioRecorderWithError:(id *)arg1;	// IMP=0x000000000002ea97
- (id)fetchFallbackAudioSessionReleaseProvider;	// IMP=0x000000000002e980
- (id)audioProviderWithStreamID:(unsigned long long)arg1;	// IMP=0x000000000002e6b5
- (id)audioProviderWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ded8
- (id)audioProviderWithUUID:(id)arg1;	// IMP=0x000000000002dc9d
- (void)registerSiriClientProxy:(id)arg1;	// IMP=0x000000000002dbfa
- (void)registerSpeechController:(id)arg1;	// IMP=0x000000000002db41
- (void)_getVoiceTriggerAssetIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x000000000002da98
- (id)audioFingerprintProvider;	// IMP=0x000000000002da90
- (void)startManager;	// IMP=0x000000000002d7c1
- (void)dealloc;	// IMP=0x000000000002d74c
- (id)init;	// IMP=0x000000000002d5bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

