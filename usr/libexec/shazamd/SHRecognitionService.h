//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAttribution, SHAudioTap, SHMatcherRequest, SHSession;
@protocol SHMatcherDelegate, SHServiceDelegate;

__attribute__((visibility("hidden")))
@interface SHRecognitionService : NSObject
{
    id <SHServiceDelegate> _serviceDelegate;	// 8 = 0x8
    SHSession *_session;	// 16 = 0x10
    id <SHMatcherDelegate> _delegate;	// 24 = 0x18
    SHAudioTap *_tap;	// 32 = 0x20
    SHMatcherRequest *_matcherRequest;	// 40 = 0x28
    SHAttribution *_attribution;	// 48 = 0x30
    long long _clientType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000160b5
@property(readonly, nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(readonly, nonatomic) SHAudioTap *tap; // @synthesize tap=_tap;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SHSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (void)stopWithOutcome:(long long)arg1;	// IMP=0x0010000000015eac
- (oneway void)stop;	// IMP=0x0010000000015e98
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (id)requiredEntitlements;	// IMP=0x0010000000015e83
- (double)timeRequiredToPerformWork;	// IMP=0x0010000000015da9
- (void)session:(id)arg1 didNotFindMatchForResponse:(id)arg2;	// IMP=0x0010000000015bc8
- (void)session:(id)arg1 didFindMatchForResponse:(id)arg2;	// IMP=0x0010000000015a1b
- (_Bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;	// IMP=0x00100000000158fb
@property(readonly, nonatomic) _Bool isRunning;
- (_Bool)finishSessionConditionsMetForRequest:(id)arg1 response:(id)arg2 outcome:(long long)arg3;	// IMP=0x00100000000156e6
- (void)finishSessionIfNecessaryForRequest:(id)arg1 response:(id)arg2 outcome:(long long)arg3;	// IMP=0x001000000001564b
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0010000000014f92
- (void)startRecognitionForRequest:(id)arg1 withAudioTap:(id)arg2;	// IMP=0x0010000000014f20
- (id)initWithAttribution:(id)arg1 clientType:(long long)arg2;	// IMP=0x0010000000014eaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
