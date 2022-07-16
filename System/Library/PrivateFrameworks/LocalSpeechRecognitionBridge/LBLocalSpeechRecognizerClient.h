//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LocalSpeechRecognitionBridge/LBLocalSpeechServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol LBLocalSpeechRecognizerClientDelegate, OS_dispatch_queue;

@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate>
{
    _Bool _recognitionActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    id <LBLocalSpeechRecognizerClientDelegate> _delegate;	// 32 = 0x20
}

+ (_Bool)isInstalledFromStatusString:(id)arg1;	// IMP=0x0000000000001c9c
- (void).cxx_destruct;	// IMP=0x000000000000221b
@property(nonatomic) __weak id <LBLocalSpeechRecognizerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_service;	// IMP=0x00000000000021a4
- (id)_connection;	// IMP=0x0000000000001d7e
- (id)_newConnection;	// IMP=0x0000000000001cb8
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(long long)arg3 error:(id)arg4;	// IMP=0x0000000000001aed
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 shouldAccept:(_Bool)arg3 mitigationSignal:(_Bool)arg4 featuresToLog:(id)arg5;	// IMP=0x0000000000001a49
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4;	// IMP=0x00000000000018f0
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2;	// IMP=0x000000000000186b
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3;	// IMP=0x00000000000017cd
- (void)invalidate;	// IMP=0x00000000000016cc
- (void)disableLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x000000000000156e
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)arg1;	// IMP=0x000000000000142e
- (void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)arg1;	// IMP=0x0000000000001287
- (void)preheatLocalSpeechRecognitionWithLanguage:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00000000000010de
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000000102d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

