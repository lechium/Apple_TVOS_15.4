//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictationServiceDelegate-Protocol.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate>
{
    AFDictationConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008f98e
- (oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg1;	// IMP=0x000000000008f8b1
- (oneway void)languageDetectorFailedWithError:(id)arg1;	// IMP=0x000000000008f7d4
- (oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1;	// IMP=0x000000000008f6f7
- (oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x000000000008f5e4
- (oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(_Bool)arg3 final:(_Bool)arg4;	// IMP=0x000000000008f4c2
- (oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;	// IMP=0x000000000008f3be
- (oneway void)speechRecognitionDidFinishWithError:(id)arg1;	// IMP=0x000000000008f18a
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;	// IMP=0x000000000008ef18
- (oneway void)speechDidProcessAudioDuration:(double)arg1;	// IMP=0x000000000008ee4b
- (oneway void)speechDidRecognizePartialResult:(id)arg1;	// IMP=0x000000000008ed54
- (oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2;	// IMP=0x000000000008eae2
- (oneway void)speechDidRecognizePhrases:(id)arg1 utterances:(id)arg2 usingSpeechModel:(id)arg3 correctionContext:(id)arg4 audioAnalytics:(id)arg5;	// IMP=0x000000000008e791
- (oneway void)speechDidRecognizePackage:(id)arg1;	// IMP=0x000000000008e4e3
- (oneway void)speechRecordingDidFail:(id)arg1;	// IMP=0x000000000008e391
- (oneway void)speechRecordingDidCancel;	// IMP=0x000000000008e28c
- (oneway void)speechRecordingDidEnd;	// IMP=0x000000000008e179
- (oneway void)speechRecordingDidBeginWithOptions:(id)arg1 sessionUUID:(id)arg2 sessionRequestUUID:(id)arg3;	// IMP=0x000000000008de5c
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;	// IMP=0x000000000008dd3f
- (id)initWithDictationConnection:(id)arg1;	// IMP=0x000000000008dcdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

