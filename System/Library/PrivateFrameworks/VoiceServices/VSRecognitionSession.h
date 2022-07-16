//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VSKeepAlive, VSRecognitionAction, VSSpeechSynthesizer;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject
{
    NSString *_modelIdentifier;	// 8 = 0x8
    VSKeepAlive *_keepAlive;	// 16 = 0x10
    id <VSRecognitionSessionDelegate> _delegate;	// 24 = 0x18
    VSRecognitionAction *_currentAction;	// 32 = 0x20
    NSArray *_topLevelKeywords;	// 40 = 0x28
    id _handlingThread;	// 48 = 0x30
    VSSpeechSynthesizer *_synthesizer;	// 56 = 0x38
    NSString *_languageID;	// 64 = 0x40
    NSString *_debugDumpPath;	// 72 = 0x48
    NSString *_audioInputPath;	// 80 = 0x50
    double _levelInterval;	// 88 = 0x58
    unsigned long long _keywordPhase;	// 96 = 0x60
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateBegin:1;
        unsigned int delegateOpenURL:1;
        unsigned int delegateOpenURLAsync:1;
        unsigned int delegateFinishedSpeaking:1;
        unsigned int delegateComplete:1;
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int performHandlerActions:1;
        unsigned int allowSensitiveActions:1;
        unsigned int bluetoothAllowed:1;
        unsigned int resetNextAction:1;
        unsigned int isSpeaking:1;
        unsigned int actionBegan:1;
        unsigned int actionBeginning:1;
        unsigned int actionBeginDeferred:1;
        unsigned int invalid:1;
        unsigned int observeKeywordChange:1;
    } _sessionFlags;	// 104 = 0x68
}

- (void)setPerformRecognitionHandlerActions:(_Bool)arg1;	// IMP=0x0000000000023112
- (_Bool)setPreferredEngine:(int)arg1;	// IMP=0x00000000000230a3
- (_Bool)setNextRecognitionRequiresReset:(_Bool)arg1;	// IMP=0x000000000002303e
- (_Bool)setNextRecognitionAudioInputPath:(id)arg1;	// IMP=0x0000000000022fe4
- (id)debugDumpPath;	// IMP=0x0000000000022fda
- (_Bool)setDebugDumpEnabled:(_Bool)arg1;	// IMP=0x0000000000022f1f
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;	// IMP=0x0000000000022ef0
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;	// IMP=0x0000000000022ecc
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000022de3
- (id)_beginSpeakingAttributedString:(id)arg1;	// IMP=0x0000000000022d8f
- (id)beginSpeakingString:(id)arg1;	// IMP=0x0000000000022d3b
- (id)beginSpeakingFeedbackString;	// IMP=0x0000000000022c94
- (void)_keywordIndexChanged;	// IMP=0x0000000000022c06
- (id)_keywordsForModelIdentifier:(id)arg1;	// IMP=0x0000000000022b65
- (id)_topLevelKeywords;	// IMP=0x0000000000022ad4
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;	// IMP=0x00000000000228c2
- (struct __CFDictionary *)_createKeywordIndex;	// IMP=0x000000000002280b
- (long long)keywordCount;	// IMP=0x00000000000227e0
- (id)keywordAtIndex:(long long)arg1;	// IMP=0x00000000000227af
- (void)setKeywordPhase:(unsigned long long)arg1;	// IMP=0x0000000000022783
- (float)inputLevelDB;	// IMP=0x0000000000022757
- (float)inputLevel;	// IMP=0x000000000002272b
- (void)setInputLevelUpdateInterval:(double)arg1;	// IMP=0x00000000000226da
- (id)displayStatusString;	// IMP=0x00000000000226c4
- (id)displayResultString;	// IMP=0x00000000000226ae
- (id)spokenFeedbackAttributedString;	// IMP=0x0000000000022698
- (id)spokenFeedbackString;	// IMP=0x0000000000022682
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;	// IMP=0x0000000000022642
- (id)_recognitionResultHandlingThread;	// IMP=0x0000000000022602
- (id)_currentRecognizeAction;	// IMP=0x00000000000225cc
- (void)_setAction:(id)arg1;	// IMP=0x000000000002243f
- (void)_notifyDelegateOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000223e1
- (void)_notifyDelegateActionStarted;	// IMP=0x00000000000223c0
- (_Bool)_actionStarted:(id)arg1;	// IMP=0x000000000002235a
- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;	// IMP=0x000000000002217f
- (id)cancel;	// IMP=0x000000000002216b
- (id)cancelMaintainingKeepAlive:(_Bool)arg1;	// IMP=0x000000000002209b
- (_Bool)setBluetoothInputAllowed:(_Bool)arg1;	// IMP=0x0000000000022029
- (_Bool)sensitiveActionsEnabled;	// IMP=0x000000000002201b
- (void)setSensitiveActionsEnabled:(_Bool)arg1;	// IMP=0x0000000000022005
- (_Bool)nextActionWillRecognize;	// IMP=0x0000000000021fe2
- (_Bool)nextActionWillTerminateSession;	// IMP=0x0000000000021fc6
- (_Bool)isBusy;	// IMP=0x0000000000021fae
- (_Bool)hasDeferredAction;	// IMP=0x0000000000021fa3
- (_Bool)isValid;	// IMP=0x0000000000021f96
- (_Bool)isFinished;	// IMP=0x0000000000021f88
- (_Bool)isActivelyRecognizing;	// IMP=0x0000000000021f5d
- (_Bool)isRecognizing;	// IMP=0x0000000000021f32
- (id)reset;	// IMP=0x0000000000021e9b
- (id)beginNextAction;	// IMP=0x0000000000021ccf
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000021be3
- (void)dealloc;	// IMP=0x0000000000021b11
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x0000000000021ab1
- (id)init;	// IMP=0x0000000000021a65
- (void)_init;	// IMP=0x0000000000021a35

@end
