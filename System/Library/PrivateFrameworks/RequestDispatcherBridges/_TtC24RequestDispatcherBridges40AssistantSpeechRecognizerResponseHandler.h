//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24RequestDispatcherBridges40AssistantSpeechRecognizerResponseHandler
{
    MISSING_TYPE *$__lazy_storage_$_maxEagerRCAllowed;	// 0 = 0x0
    MISSING_TYPE *myriadMonitor;	// 0 = 0x0
    MISSING_TYPE *resultSelectionGated;	// 2147484680 = 0x80000408
    MISSING_TYPE *resultSelectedMsg;	// 6 = 0x6
    MISSING_TYPE *numRCsPosted;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *rcBuffer;	// 1701866597 = 0x65706c65
}

- (void).cxx_destruct;	// IMP=0x0000000000012fe0
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;	// IMP=0x0000000000012e80
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 error:(id)arg4;	// IMP=0x0000000000012da0
- (void)localSpeechRecognizerClient:(id)arg1 didAcceptedEagerResultWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(_Bool)arg4 featuresToLog:(id)arg5;	// IMP=0x0000000000011e20
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;	// IMP=0x0000000000011d60
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x0000000000011cc0
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;	// IMP=0x0000000000011ba0

@end
