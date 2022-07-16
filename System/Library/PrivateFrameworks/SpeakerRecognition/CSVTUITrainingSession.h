//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/CSVTUIAudioSessionDelegate-Protocol.h>
#import <SpeakerRecognition/CSVTUIEndPointDelegate-Protocol.h>
#import <SpeakerRecognition/SFSpeechRecognitionTaskDelegate-Protocol.h>

@class CSVTUIKeywordDetector, NSMutableArray, NSString, NSTimer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, SFSpeechRecognizer;
@protocol CSVTUIAudioSession, CSVTUITrainingSessionDelegate, OS_dispatch_queue;

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>
{
    long long _status;	// 8 = 0x8
    long long _utteranceId;	// 16 = 0x10
    long long _sessionNumber;	// 24 = 0x18
    NSString *_locale;	// 32 = 0x20
    CSVTUIKeywordDetector *_keywordDetector;	// 40 = 0x28
    id <CSVTUIAudioSession> _audioSession;	// 48 = 0x30
    SFSpeechRecognizer *_speechRecognizer;	// 56 = 0x38
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;	// 64 = 0x40
    SFSpeechRecognitionTask *_speechRecognitionTask;	// 72 = 0x48
    NSTimer *_masterTimer;	// 80 = 0x50
    NSMutableArray *_pcmBufArray;	// 88 = 0x58
    _Bool _resultReported;	// 96 = 0x60
    _Bool _sessionProcess;	// 97 = 0x61
    _Bool _sessionSuspended;	// 98 = 0x62
    _Bool _ASRErrorOccured;	// 99 = 0x63
    id <CSVTUITrainingSessionDelegate> _sessionDelegate;	// 104 = 0x68
    CDUnknownBlockType _trainingCompletion;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
    long long _numRequiredTrailingSamples;	// 128 = 0x80
    long long _numTrailingSamples;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000028327
- (void)_registerEndPointTimeout;	// IMP=0x0000000000028256
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;	// IMP=0x00000000000280cc
- (void)stopMasterTimer;	// IMP=0x0000000000028013
- (void)handleMasterTimeout:(id)arg1;	// IMP=0x0000000000027ec3
- (void)startMasterTimerWithTimeout:(float)arg1;	// IMP=0x0000000000027d76
- (void)finishSpeechRecognitionTask;	// IMP=0x0000000000027d34
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg1;	// IMP=0x0000000000027bb2
- (void)didDetectEndOfSpeech:(long long)arg1;	// IMP=0x0000000000027a70
- (void)didDetectBeginOfSpeech;	// IMP=0x00000000000279f1
- (void)audioSessionUnsupportedAudioRoute;	// IMP=0x0000000000027954
- (void)audioSessionErrorDidOccur:(id)arg1;	// IMP=0x000000000002793b
- (void)audioSessionRecordBufferAvailable:(id)arg1;	// IMP=0x0000000000027929
- (void)audioSessionDidStopRecording:(long long)arg1;	// IMP=0x0000000000027909
- (void)audioSessionDidStartRecording:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000027903
- (long long)numSamplesInPCMBuffer;	// IMP=0x00000000000277cd
- (id)createAVAudioPCMBufferWithNSData:(id)arg1;	// IMP=0x000000000002768b
- (void)pushAudioInputIntoPCMBuffer:(id)arg1;	// IMP=0x0000000000027614
- (void)computeRequiredTrailingSamples;	// IMP=0x00000000000275bd
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg1;	// IMP=0x000000000002701d
- (void)feedSpeechRecognitionWithPCMBuffer;	// IMP=0x0000000000026f64
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026e63
- (void)handleAudioBufferForVTWithAudioInput:(id)arg1 withDetectedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026afe
- (void)updateMeterAndForward;	// IMP=0x0000000000026a53
- (id)requestTriggeredUtterance:(id)arg1;	// IMP=0x0000000000026a3d
- (void)handleAudioInput:(id)arg1;	// IMP=0x0000000000026603
- (_Bool)setupPhraseSpotter;	// IMP=0x000000000002655f
- (void)resumeTraining;	// IMP=0x00000000000263c9
- (void)suspendTraining;	// IMP=0x0000000000026233
- (void)closeSessionWithStatus:(int)arg1 successfully:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025faf
- (void)closeSessionWithStatus:(int)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000025ef6
- (void)closeSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025dcd
- (_Bool)resultAlreadyReported;	// IMP=0x0000000000025dc4
- (void)startTraining;	// IMP=0x0000000000025d27
- (id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0000000000025afd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

