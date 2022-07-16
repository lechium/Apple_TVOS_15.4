//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, _EARFormatter, _EARSpeakerCodeInfo, _EARSpeechModelInfo, _EARSpeechRecognitionAudioBuffer;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognizer : NSObject
{
    NSObject<OS_dispatch_queue> *_formatterQueue;	// 8 = 0x8
    _EARFormatter *_formatter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_trainingQueue;	// 24 = 0x18
    struct shared_ptr<quasar::SpeakerCodeTraining> _training;	// 32 = 0x20
    shared_ptr_22b796d4 _recognizer;	// 48 = 0x30
    unique_ptr_69213b6f _tokenizer;	// 64 = 0x40
    _EARSpeechRecognitionAudioBuffer *_currentAudioBuffer;	// 72 = 0x48
    struct weak_ptr<ResultStreamWrapper> _currentResultStreamWrapper;	// 80 = 0x50
    NSString *_currentLanguage;	// 96 = 0x60
    NSString *_currentTask;	// 104 = 0x68
    unsigned long long _currentSamplingRate;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_recognitionQueue;	// 120 = 0x78
    _Bool _detectUtterances;	// 128 = 0x80
    _Bool _concatenateUtterances;	// 129 = 0x81
    _Bool _allowUtteranceDelay;	// 130 = 0x82
    _Bool _formatAcrossUtterances;	// 131 = 0x83
    _Bool _recognizeEagerCandidates;	// 132 = 0x84
    _Bool _farField;	// 133 = 0x85
    _Bool _highPriority;	// 134 = 0x86
    _Bool _enableSpeakerCodeTraining;	// 135 = 0x87
    _Bool _scoreNbest;	// 136 = 0x88
    _Bool _disableAutoPunctuation;	// 137 = 0x89
    _Bool _disablePartialResults;	// 138 = 0x8a
    NSData *_userProfileData;	// 144 = 0x90
    NSData *_jitProfileData;	// 152 = 0x98
    _EARSpeakerCodeInfo *_speakerCodeInfo;	// 160 = 0xa0
    double _endpointStart;	// 168 = 0xa8
    double _maximumRecognitionDuration;	// 176 = 0xb0
    NSDictionary *_recognitionReplacements;	// 184 = 0xb8
    NSDictionary *_recognitionConfidenceSubtraction;	// 192 = 0xc0
    NSArray *_leftContext;	// 200 = 0xc8
    NSString *_inputOrigin;	// 208 = 0xd0
    NSString *_deviceId;	// 216 = 0xd8
    NSString *_refTranscriptForErrorBlaming;	// 224 = 0xe0
    NSString *_bluetoothDeviceId;	// 232 = 0xe8
    NSString *_userId;	// 240 = 0xf0
    NSString *_sessionId;	// 248 = 0xf8
    NSArray *_extraLmList;	// 256 = 0x100
    NSArray *_scoreNbestExtraLmList;	// 264 = 0x108
    double _latitude;	// 272 = 0x110
    double _longitude;	// 280 = 0x118
    NSString *_configPath;	// 288 = 0x120
}

+ (void)purgeCompiledRecognizerModelsWithConfiguration:(id)arg1;	// IMP=0x00000000000929cb
+ (void)compileRecognizerModelsWithConfiguration:(id)arg1;	// IMP=0x000000000009228c
+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;	// IMP=0x0000000000091cd9
+ (id)maximumSupportedConfigurationVersion;	// IMP=0x000000000008a985
+ (id)minimumSupportedConfigurationVersion;	// IMP=0x000000000008a958
+ (void)initialize;	// IMP=0x000000000008a930
- (id).cxx_construct;	// IMP=0x00000000000947dc
- (void).cxx_destruct;	// IMP=0x0000000000094676
@property(readonly, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
@property(nonatomic) _Bool disablePartialResults; // @synthesize disablePartialResults=_disablePartialResults;
@property(nonatomic) _Bool disableAutoPunctuation; // @synthesize disableAutoPunctuation=_disableAutoPunctuation;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool scoreNbest; // @synthesize scoreNbest=_scoreNbest;
@property(copy, nonatomic) NSArray *scoreNbestExtraLmList; // @synthesize scoreNbestExtraLmList=_scoreNbestExtraLmList;
@property(copy, nonatomic) NSArray *extraLmList; // @synthesize extraLmList=_extraLmList;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *bluetoothDeviceId; // @synthesize bluetoothDeviceId=_bluetoothDeviceId;
@property(copy, nonatomic) NSString *refTranscriptForErrorBlaming; // @synthesize refTranscriptForErrorBlaming=_refTranscriptForErrorBlaming;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *inputOrigin; // @synthesize inputOrigin=_inputOrigin;
@property(copy, nonatomic) NSArray *leftContext; // @synthesize leftContext=_leftContext;
@property(copy, nonatomic) NSDictionary *recognitionConfidenceSubtraction; // @synthesize recognitionConfidenceSubtraction=_recognitionConfidenceSubtraction;
@property(copy, nonatomic) NSDictionary *recognitionReplacements; // @synthesize recognitionReplacements=_recognitionReplacements;
@property(nonatomic) double maximumRecognitionDuration; // @synthesize maximumRecognitionDuration=_maximumRecognitionDuration;
@property(nonatomic) _Bool enableSpeakerCodeTraining; // @synthesize enableSpeakerCodeTraining=_enableSpeakerCodeTraining;
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(nonatomic) _Bool farField; // @synthesize farField=_farField;
@property(nonatomic) _Bool recognizeEagerCandidates; // @synthesize recognizeEagerCandidates=_recognizeEagerCandidates;
@property(nonatomic) double endpointStart; // @synthesize endpointStart=_endpointStart;
@property(nonatomic) _Bool formatAcrossUtterances; // @synthesize formatAcrossUtterances=_formatAcrossUtterances;
@property(nonatomic) _Bool allowUtteranceDelay; // @synthesize allowUtteranceDelay=_allowUtteranceDelay;
@property(nonatomic) _Bool concatenateUtterances; // @synthesize concatenateUtterances=_concatenateUtterances;
@property(nonatomic) _Bool detectUtterances; // @synthesize detectUtterances=_detectUtterances;
@property(readonly, nonatomic) _EARSpeakerCodeInfo *speakerCodeInfo; // @synthesize speakerCodeInfo=_speakerCodeInfo;
@property(copy, nonatomic) NSData *jitProfileData; // @synthesize jitProfileData=_jitProfileData;
@property(copy, nonatomic) NSData *userProfileData; // @synthesize userProfileData=_userProfileData;
- (shared_ptr_22b796d4)getRecognizer;	// IMP=0x000000000009438f
- (void)setAlternateRawRecognitionTokenSausage:(id)arg1;	// IMP=0x0000000000093c31
- (id)activeConfiguration;	// IMP=0x0000000000093aa8
- (_Bool)isSpeakerCodeTrainingSupported:(id)arg1;	// IMP=0x00000000000939ff
- (void)setActiveConfiguration:(id)arg1;	// IMP=0x0000000000093835
- (void)dumpModelVirtualMemoryInfo;	// IMP=0x0000000000093827
- (void)_waitForInitialization;	// IMP=0x000000000009380c
- (void)getFormatterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000093717
- (id)recognitionUtteranceInfos;	// IMP=0x0000000000093689
- (id)recognitionUtterenceStatistics;	// IMP=0x0000000000093410
- (id)recognitionStatistics;	// IMP=0x0000000000093195
- (void)interruptTraining;	// IMP=0x000000000009307b
- (void)_waitForAsyncRecogToFinish;	// IMP=0x0000000000093019
- (void)cancelRecognition;	// IMP=0x0000000000092fb7
@property(readonly, nonatomic) unsigned short itnEnablingFlags;
@property(readonly, nonatomic) _Bool isContinuousListening;
- (id)testFormattingWithOneBestResults:(id)arg1 uttMillis:(id)arg2;	// IMP=0x0000000000090e04
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;	// IMP=0x0000000000090dd2
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;	// IMP=0x0000000000090c13
- (void)_restartActiveRecognition;	// IMP=0x000000000009094f
- (shared_ptr_809f9c31)_audioBufferWithLangauge:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 userProfileData:(id)arg4 resultStream:(shared_ptr_5cb47a18)arg5;	// IMP=0x000000000008ea97
- (void)writeRecordedStateAccesses;	// IMP=0x000000000008ea89
- (_Bool)canCloneIsFinalAsLastNonFinal;	// IMP=0x000000000008ea5c
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 userProfileData:(id)arg5 speakerCodeWriter:(id)arg6;	// IMP=0x000000000008e44d
- (id)runRecognitionWithResultStream:(id)arg1 speakerCodeWriter:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;	// IMP=0x000000000008e410
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;	// IMP=0x000000000008e3e2
- (void)updateJitProfileData:(id)arg1;	// IMP=0x000000000008dedb
- (void)updateUserProfileData:(id)arg1;	// IMP=0x000000000008d913
- (id)runRecognitionWithResultStream:(id)arg1;	// IMP=0x000000000008d8dd
- (void)setLeftContextText:(id)arg1;	// IMP=0x000000000008d311
- (struct TextTokenizer *)_tokenizer;	// IMP=0x000000000008cf1a
@property(readonly, nonatomic) _EARSpeechModelInfo *modelInfo;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(_Bool)arg2 activeConfiguration:(id)arg3;	// IMP=0x000000000008cc92
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(_Bool)arg2;	// IMP=0x000000000008cbed
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 modelLoadingOptions:(id)arg9 enableSpeakerCodeTraining:(_Bool)arg10;	// IMP=0x000000000008c8bd
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8 enableSpeakerCodeTraining:(_Bool)arg9;	// IMP=0x000000000008c880
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7 activeConfiguration:(id)arg8;	// IMP=0x000000000008c84c
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6 language:(id)arg7;	// IMP=0x000000000008c6ee
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;	// IMP=0x000000000008c6c2
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;	// IMP=0x000000000008c698
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6;	// IMP=0x000000000008c66c
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;	// IMP=0x000000000008c644
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;	// IMP=0x000000000008c472
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 modelLoadingOptions:(id)arg6 enableSpeakerCodeTraining:(_Bool)arg7;	// IMP=0x000000000008ac40
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5 enableSpeakerCodeTraining:(_Bool)arg6;	// IMP=0x000000000008ac1b
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4 activeConfiguration:(id)arg5;	// IMP=0x000000000008abff
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 language:(id)arg4;	// IMP=0x000000000008aae6
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3;	// IMP=0x000000000008a9f5
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2;	// IMP=0x000000000008a9dd
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2;	// IMP=0x000000000008a9c7
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000008a9af

@end

