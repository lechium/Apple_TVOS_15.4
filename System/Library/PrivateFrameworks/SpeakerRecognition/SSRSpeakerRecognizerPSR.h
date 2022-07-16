//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/SSRSpeakerAnalyzerPSRDelegate-Protocol.h>
#import <SpeakerRecognition/SSRSpeakerRecognizer-Protocol.h>

@class NSDictionary, NSString, SSRSpeakerAnalyzerPSR, SSRSpeakerRecognitionContext;
@protocol OS_dispatch_queue, SSRSpeakerRecognizerDelegate;

@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer>
{
    _Bool _processingEnded;	// 8 = 0x8
    SSRSpeakerRecognitionContext *_spIdCtx;	// 16 = 0x10
    NSString *_sessionId;	// 24 = 0x18
    NSDictionary *_lastSpeakerInfo;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <SSRSpeakerRecognizerDelegate> _delegate;	// 48 = 0x30
    NSString *_invocationStyleStr;	// 56 = 0x38
    unsigned long long _extraSamplesAtStart;	// 64 = 0x40
    unsigned long long _vtEndInSampleCount;	// 72 = 0x48
    unsigned long long _endInSampleCount;	// 80 = 0x50
    unsigned long long _numSamplesProcessed;	// 88 = 0x58
    unsigned long long _totalNumSamplesReceived;	// 96 = 0x60
    SSRSpeakerAnalyzerPSR *_psrAnalyzer;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000566e
@property(retain, nonatomic) SSRSpeakerAnalyzerPSR *psrAnalyzer; // @synthesize psrAnalyzer=_psrAnalyzer;
@property(nonatomic) unsigned long long totalNumSamplesReceived; // @synthesize totalNumSamplesReceived=_totalNumSamplesReceived;
@property(nonatomic) _Bool processingEnded; // @synthesize processingEnded=_processingEnded;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(nonatomic) unsigned long long endInSampleCount; // @synthesize endInSampleCount=_endInSampleCount;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) unsigned long long extraSamplesAtStart; // @synthesize extraSamplesAtStart=_extraSamplesAtStart;
@property(retain, nonatomic) NSString *invocationStyleStr; // @synthesize invocationStyleStr=_invocationStyleStr;
@property(nonatomic) __weak id <SSRSpeakerRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *lastSpeakerInfo; // @synthesize lastSpeakerInfo=_lastSpeakerInfo;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx; // @synthesize spIdCtx=_spIdCtx;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)arg1 withVoiceRecognitionInfo:(id)arg2;	// IMP=0x00000000000051bd
- (void)voiceRecognitionPSRAnalyzer:(id)arg1 hasVoiceRecognitionInfo:(id)arg2;	// IMP=0x0000000000004e4b
@property(readonly, nonatomic) NSDictionary *lastScoreCard;
- (void)resetWithContext:(id)arg1;	// IMP=0x0000000000004dd6
- (void)endAudio;	// IMP=0x0000000000004dbc
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0000000000004da2
- (void)dealloc;	// IMP=0x0000000000004cfe
- (void)_initializeWithContext:(id)arg1;	// IMP=0x0000000000004b2a
- (id)initWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000000475c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

