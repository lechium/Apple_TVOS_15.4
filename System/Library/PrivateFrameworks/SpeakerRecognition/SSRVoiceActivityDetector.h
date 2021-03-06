//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/EARCaesuraSilencePosteriorGeneratorDelegate-Protocol.h>

@class EARCaesuraSilencePosteriorGenerator, NSString, SSRSpeakerRecognitionContext, _EARDefaultServerEndpointFeatures, _EAREndpointer;
@protocol OS_dispatch_queue, SSRVoiceActivityDetectorDelegate;

@interface SSRVoiceActivityDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>
{
    unsigned long long _numConsecutiveNonSilenceFrames;	// 8 = 0x8
    _Bool _endpointReported;	// 16 = 0x10
    _Bool _startpointReported;	// 17 = 0x11
    SSRSpeakerRecognitionContext *_context;	// 24 = 0x18
    id <SSRVoiceActivityDetectorDelegate> _delegate;	// 32 = 0x20
    EARCaesuraSilencePosteriorGenerator *_earSpg;	// 40 = 0x28
    _EAREndpointer *_hybridClassifier;	// 48 = 0x30
    _EARDefaultServerEndpointFeatures *_defSepFeats;	// 56 = 0x38
    long long _segmentStartPointSampleCount;	// 64 = 0x40
    unsigned long long _numSamplesProcessed;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_spgQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000003245
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue; // @synthesize spgQueue=_spgQueue;
@property(nonatomic) _Bool startpointReported; // @synthesize startpointReported=_startpointReported;
@property(nonatomic) _Bool endpointReported; // @synthesize endpointReported=_endpointReported;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(nonatomic) long long segmentStartPointSampleCount; // @synthesize segmentStartPointSampleCount=_segmentStartPointSampleCount;
@property(retain, nonatomic) _EARDefaultServerEndpointFeatures *defSepFeats; // @synthesize defSepFeats=_defSepFeats;
@property(retain, nonatomic) _EAREndpointer *hybridClassifier; // @synthesize hybridClassifier=_hybridClassifier;
@property(retain, nonatomic) EARCaesuraSilencePosteriorGenerator *earSpg; // @synthesize earSpg=_earSpg;
@property(nonatomic) __weak id <SSRVoiceActivityDetectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSRSpeakerRecognitionContext *context; // @synthesize context=_context;
- (void)clientSilenceFeaturesAvailable:(id)arg1;	// IMP=0x0000000000002b82
- (void)_initializeSPGWithContext:(id)arg1;	// IMP=0x0000000000002a91
- (void)resetWithContext:(id)arg1;	// IMP=0x0000000000002a02
- (void)endAudio;	// IMP=0x00000000000029ec
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00000000000028b6
- (id)initWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000000262d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

