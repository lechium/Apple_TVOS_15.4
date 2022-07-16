//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceServices/VSSpeechServiceDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, VSPresynthesizedAudioRequest, VSSpeechConnection, VSSpeechRequest;
@protocol VSSpeechConnectionDelegate;

__attribute__((visibility("hidden")))
@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>
{
    id <VSSpeechConnectionDelegate> _delegate;	// 8 = 0x8
    VSSpeechRequest *_currentRequest;	// 16 = 0x10
    NSMutableArray *_requests;	// 24 = 0x18
    NSMutableDictionary *_concurrentSynthesisRequests;	// 32 = 0x20
    VSPresynthesizedAudioRequest *_currentAudioRequest;	// 40 = 0x28
    NSMutableArray *_audioRequests;	// 48 = 0x30
    NSMutableArray *_previewRequests;	// 56 = 0x38
    VSSpeechConnection *_connection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003bad6
@property(nonatomic) __weak VSSpeechConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableArray *previewRequests; // @synthesize previewRequests=_previewRequests;
@property(retain, nonatomic) NSMutableArray *audioRequests; // @synthesize audioRequests=_audioRequests;
@property(retain, nonatomic) VSPresynthesizedAudioRequest *currentAudioRequest; // @synthesize currentAudioRequest=_currentAudioRequest;
@property(retain, nonatomic) NSMutableDictionary *concurrentSynthesisRequests; // @synthesize concurrentSynthesisRequests=_concurrentSynthesisRequests;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) VSSpeechRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)previewRequestDidStartPlaying:(id)arg1;	// IMP=0x000000000003b8c0
- (oneway void)audioRequest:(id)arg1 didReportInstrumentMetrics:(id)arg2 error:(id)arg3;	// IMP=0x000000000003b7a0
- (oneway void)audioRequest:(id)arg1 didStopAtEnd:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000003b64d
- (oneway void)audioRequestDidStart:(id)arg1;	// IMP=0x000000000003b55e
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;	// IMP=0x000000000003b370
- (oneway void)synthesisRequest:(id)arg1 didGenerateAudioChunk:(id)arg2;	// IMP=0x000000000003b20b
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(_Bool)arg2 phonemesSpoken:(id)arg3 error:(id)arg4;	// IMP=0x000000000003b0a2
- (oneway void)speechRequest:(id)arg1 didReportInstrumentMetrics:(id)arg2;	// IMP=0x000000000003af9b
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;	// IMP=0x000000000003ae36
- (oneway void)speechRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;	// IMP=0x000000000003ad2f
- (oneway void)speechRequest:(id)arg1 didStartWithMark:(long long)arg2 forRange:(struct _NSRange)arg3;	// IMP=0x000000000003ac2a
- (oneway void)speechRequestDidContinue:(id)arg1;	// IMP=0x000000000003ab3b
- (oneway void)speechRequestDidPause:(id)arg1;	// IMP=0x000000000003aa4c
- (oneway void)speechRequestDidStart:(id)arg1;	// IMP=0x000000000003a95d
- (id)getLocalPreviewRequest:(id)arg1;	// IMP=0x000000000003a7b4
- (id)getLocalAudioRequest:(id)arg1;	// IMP=0x000000000003a60b
- (id)getLocalRequest:(id)arg1;	// IMP=0x000000000003a462
- (id)init;	// IMP=0x000000000003a3af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

