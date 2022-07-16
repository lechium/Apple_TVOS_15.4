//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray, _EARAudioAnalytics, _EARLatticeMitigatorResult, _EARSpeechRecognition;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>
{
    _Bool _recognitionIsFormatted;	// 8 = 0x8
    _Bool _isFinal;	// 9 = 0x9
    _EARSpeechRecognition *_recognition;	// 16 = 0x10
    _EARSpeechRecognition *_preITNRecognition;	// 24 = 0x18
    _EARSpeechRecognition *_unrepairedRecognition;	// 32 = 0x20
    _EARAudioAnalytics *_audioAnalytics;	// 40 = 0x28
    double _utteranceStart;	// 48 = 0x30
    _EARLatticeMitigatorResult *_latticeMitigatorResult;	// 56 = 0x38
    NSArray *_correctPartialResultIndexList;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000087794
@property(readonly, copy, nonatomic) NSArray *correctPartialResultIndexList; // @synthesize correctPartialResultIndexList=_correctPartialResultIndexList;
@property(readonly, copy, nonatomic) _EARLatticeMitigatorResult *latticeMitigatorResult; // @synthesize latticeMitigatorResult=_latticeMitigatorResult;
@property(readonly, nonatomic) double utteranceStart; // @synthesize utteranceStart=_utteranceStart;
@property(readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics; // @synthesize audioAnalytics=_audioAnalytics;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(readonly, nonatomic) _Bool recognitionIsFormatted; // @synthesize recognitionIsFormatted=_recognitionIsFormatted;
@property(readonly, copy, nonatomic) _EARSpeechRecognition *unrepairedRecognition; // @synthesize unrepairedRecognition=_unrepairedRecognition;
@property(readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition; // @synthesize preITNRecognition=_preITNRecognition;
@property(readonly, copy, nonatomic) _EARSpeechRecognition *recognition; // @synthesize recognition=_recognition;
- (void)setCorrectPartialResultIndexList:(const void *)arg1 oneBestFinalResult:(const void *)arg2 partialResultIndexOffset:(int)arg3;	// IMP=0x0000000000086edb
- (id)nBestResults;	// IMP=0x0000000000086c8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086ac9
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(_Bool)arg4 isFinal:(_Bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7 latticeMitigatorResult:(id)arg8;	// IMP=0x0000000000086941
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(_Bool)arg4 isFinal:(_Bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7;	// IMP=0x000000000008691a
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(_Bool)arg4 isFinal:(_Bool)arg5 audioAnalytics:(id)arg6;	// IMP=0x00000000000868f6
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(_Bool)arg4 isFinal:(_Bool)arg5;	// IMP=0x00000000000868d5

@end
