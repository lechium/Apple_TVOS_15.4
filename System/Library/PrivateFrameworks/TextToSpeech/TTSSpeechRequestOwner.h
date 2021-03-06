//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextToSpeech/TTSSpeechRequestDelegate-Protocol.h>

@class NSString, TTSSpeechRequest;
@protocol TTSSpeechConnectionDelegate, TTSSpeechService;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate>
{
    id <TTSSpeechConnectionDelegate> _delegate;	// 8 = 0x8
    TTSSpeechRequest *_request;	// 16 = 0x10
    id <TTSSpeechService> _speechService;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015b90
@property(nonatomic) __weak id <TTSSpeechService> speechService; // @synthesize speechService=_speechService;
@property(readonly, nonatomic) TTSSpeechRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <TTSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)speechRequest:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2;	// IMP=0x0000000000015aba
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(_Bool)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;	// IMP=0x00000000000159e9
- (oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(struct _NSRange)arg3 forService:(id)arg4;	// IMP=0x0000000000015969
- (oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000015908
- (oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000158a7
- (oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000157e0
- (void)continueCurrentSpeechRequest;	// IMP=0x0000000000015781
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1 waitUntilPaused:(_Bool)arg2;	// IMP=0x000000000001571f
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1 waitUntilStopped:(_Bool)arg2;	// IMP=0x00000000000156bd
- (void)startSpeechRequest:(id)arg1;	// IMP=0x00000000000155db
- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;	// IMP=0x00000000000154f6
- (id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(_Bool)arg2;	// IMP=0x0000000000015395
- (void)_setRequest:(id)arg1;	// IMP=0x000000000001534f
- (void)dealloc;	// IMP=0x00000000000152d3
- (id)init;	// IMP=0x00000000000152c5
- (id)initWithSpeechService:(id)arg1;	// IMP=0x0000000000015235

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

