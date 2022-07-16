//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextToSpeech/TTSSpeechConnectionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TTSSpeechSynthesizerDelegate;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate>
{
    long long _footprint;	// 8 = 0x8
    id <TTSSpeechSynthesizerDelegate> _delegate;	// 16 = 0x10
    _Bool _useSharedSession;	// 24 = 0x18
    _Bool _audioSessionIDIsValid;	// 25 = 0x19
    unsigned int _audioSessionID;	// 28 = 0x1c
    unsigned int _audioQueueFlags;	// 32 = 0x20
    _Bool _useMonarchStyleRate;	// 36 = 0x24
    NSMutableDictionary *_channels;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSMutableArray *_currentRequestOwners;	// 56 = 0x38
    NSMutableArray *_speechRequests;	// 64 = 0x40
    struct {
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int delegateSynthesizedSilentlyURL:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;	// 72 = 0x48
    unsigned long long _synthesizerInstanceID;	// 80 = 0x50
    NSArray *_outputChannels;	// 88 = 0x58
    NSMutableDictionary *_testingLastRuleConversion;	// 96 = 0x60
    _Bool _supportsAccurateWordCallbacks;	// 104 = 0x68
    _Bool _skipLuthorRules;	// 105 = 0x69
    _Bool _ignoreSubstitutions;	// 106 = 0x6a
    _Bool _synthesizeSilently;	// 107 = 0x6b
    float _rate;	// 108 = 0x6c
    float _pitch;	// 112 = 0x70
    float _volume;	// 116 = 0x74
    NSString *_voiceIdentifier;	// 120 = 0x78
    NSString *_bundleIdentifier;	// 128 = 0x80
    unsigned long long _requestClientIdentifier;	// 136 = 0x88
    void *_speakingRequestClientContext;	// 144 = 0x90
    NSArray *_userSubstitutions;	// 152 = 0x98
    NSArray *_phonemeSubstitutions;	// 160 = 0xa0
    CDUnknownBlockType _audioBufferCallback;	// 168 = 0xa8
}

+ (id)supportedIPAPhonemeLanguages;	// IMP=0x00000000000130f9
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 useFallbackDefault:(_Bool)arg4;	// IMP=0x000000000001189b
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3;	// IMP=0x0000000000011886
+ (id)audioFileSettingsForVoice:(id)arg1;	// IMP=0x00000000000116ac
+ (id)remapVoiceIdentifier:(id)arg1;	// IMP=0x000000000000fe43
+ (void)setSpeechJobStartedUnitTestBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dab4
+ (void)setSpeechJobFinishedUnitTestBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000da8b
+ (id)availableLanguageCodes;	// IMP=0x000000000000da5e
+ (id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(_Bool)arg2;	// IMP=0x000000000000d219
+ (void)setTestingAvailableVoicesForLanguageCode:(id)arg1;	// IMP=0x000000000000d205
+ (id)voiceAccessQueue;	// IMP=0x000000000000d1f4
+ (id)allAvailableVoices;	// IMP=0x000000000000cd66
+ (id)refreshAllAvailableVoices:(_Bool)arg1;	// IMP=0x000000000000c6c2
+ (id)refreshAllAvailableVoices;	// IMP=0x000000000000c6ab
+ (id)synthesizerForSynthesizerID:(unsigned long long)arg1;	// IMP=0x000000000000c592
+ (id)voiceAssetsForTesting;	// IMP=0x000000000000c571
+ (void)setVoiceAssetsForTesting:(id)arg1;	// IMP=0x000000000000c55d
+ (void)testingSetAllVoices:(id)arg1;	// IMP=0x000000000000c4ab
+ (id)speechMarkupStringForType:(long long)arg1 forIdentifier:(id)arg2 string:(id)arg3;	// IMP=0x000000000000c385
+ (_Bool)employSpeechMarkupForType:(long long)arg1 identifier:(id)arg2 withLanguage:(id)arg3;	// IMP=0x000000000000c2c7
+ (id)voiceForIdentifier:(id)arg1;	// IMP=0x000000000000b6be
+ (_Bool)isSystemVoice:(id)arg1;	// IMP=0x000000000000b67a
+ (id)availableVoices;	// IMP=0x000000000000b645
+ (void)_initializeServers;	// IMP=0x000000000000af7e
+ (_Bool)_loadOnlySystemVoices;	// IMP=0x000000000000aed5
+ (void)initialize;	// IMP=0x000000000000ae28
- (void).cxx_destruct;	// IMP=0x000000000001455e
@property(nonatomic) _Bool synthesizeSilently; // @synthesize synthesizeSilently=_synthesizeSilently;
@property(nonatomic) _Bool ignoreSubstitutions; // @synthesize ignoreSubstitutions=_ignoreSubstitutions;
@property(copy, nonatomic) CDUnknownBlockType audioBufferCallback; // @synthesize audioBufferCallback=_audioBufferCallback;
@property(copy, nonatomic) NSArray *phonemeSubstitutions; // @synthesize phonemeSubstitutions=_phonemeSubstitutions;
@property(copy, nonatomic) NSArray *userSubstitutions; // @synthesize userSubstitutions=_userSubstitutions;
@property(readonly, nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) _Bool skipLuthorRules; // @synthesize skipLuthorRules=_skipLuthorRules;
@property(nonatomic) _Bool supportsAccurateWordCallbacks; // @synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks;
@property(nonatomic) void *speakingRequestClientContext; // @synthesize speakingRequestClientContext=_speakingRequestClientContext;
@property(nonatomic) unsigned long long requestClientIdentifier; // @synthesize requestClientIdentifier=_requestClientIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x0000000000013e16
- (void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3;	// IMP=0x0000000000013d02
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;	// IMP=0x000000000001367d
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;	// IMP=0x000000000001359b
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;	// IMP=0x00000000000134b9
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;	// IMP=0x0000000000013387
- (_Bool)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000013375
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000013363
- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000001334b
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000013339
- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000013321
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000132fb
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000132d3
- (_Bool)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000132ab
- (void)useAudioQueueFlags:(unsigned int)arg1;	// IMP=0x00000000000130f0
- (void)useSpecificAudioSession:(unsigned int)arg1;	// IMP=0x00000000000130dd
- (long long)footprint;	// IMP=0x00000000000130d3
- (void)setFootprint:(long long)arg1;	// IMP=0x00000000000130c9
- (_Bool)useMonarchStyleRate;	// IMP=0x00000000000130c0
- (void)setUseMonarchStyleRate:(_Bool)arg1;	// IMP=0x00000000000130b7
- (float)maximumRate;	// IMP=0x00000000000130a9
- (float)minimumRate;	// IMP=0x000000000001309b
- (id)speechString;	// IMP=0x0000000000012f91
- (_Bool)isSpeaking;	// IMP=0x0000000000012eab
- (_Bool)continueSpeakingWithError:(id *)arg1;	// IMP=0x0000000000012deb
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000012d1b
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000012d04
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000012c34
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000012c1d
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000012bf8
- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012bde
- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012bc6
- (_Bool)startSpeakingString:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012bac
@property(nonatomic) __weak id <TTSSpeechSynthesizerDelegate> delegate; // @dynamic delegate;
- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000001287b
- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000012628
- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000123d5
- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000001071e
- (unsigned long long)synthesizerInstanceID;	// IMP=0x000000000000fe39
- (id)_determineSubstitution:(id)arg1 text:(id)arg2 wordRange:(struct _NSRange)arg3 request:(id)arg4;	// IMP=0x000000000000f889
- (void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5;	// IMP=0x000000000000e95f
- (_Bool)_skipSubstition:(id)arg1 language:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4;	// IMP=0x000000000000e5a2
- (_Bool)_substitutionLanguageMatchesSpecialCase:(id)arg1 withLanguage:(id)arg2;	// IMP=0x000000000000e4f0
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;	// IMP=0x000000000000e262
- (id)resolvedVoiceIdentifierForLanguageCode:(id)arg1;	// IMP=0x000000000000e165
@property(readonly, nonatomic) NSString *resolvedVoiceIdentifier;
@property(retain, nonatomic) NSArray *outputChannels;
- (void)_setDelegate:(id)arg1;	// IMP=0x000000000000dea1
- (void)dealloc;	// IMP=0x000000000000dcf3
- (void)_mediaServicesDied;	// IMP=0x000000000000dc7c
- (id)init;	// IMP=0x000000000000dadd
- (void)testingSetLastRuleConversion:(id)arg1 replacement:(id)arg2;	// IMP=0x000000000000c60a
- (id)testingLastRuleConversion;	// IMP=0x000000000000c5fc

@end
