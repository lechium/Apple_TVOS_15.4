//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CSEndpointDelayReporter : NSObject
{
    _Bool _didReportEndpointDelay;	// 8 = 0x8
    double _endpointTimeInMs;	// 16 = 0x10
    double _userSpeakingStartedTimeInMs;	// 24 = 0x18
    double _userSpeakingEndedTimeInMs;	// 32 = 0x20
    unsigned long long _endpointBufferHostTime;	// 40 = 0x28
    unsigned long long _userSpeakingStartedHostTime;	// 48 = 0x30
    unsigned long long _userSpeakingEndedHostTime;	// 56 = 0x38
    unsigned long long _stopRecordingHostTime;	// 64 = 0x40
    NSString *_requestMHUUID;	// 72 = 0x48
    NSUUID *_turnIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000a3332
@property(nonatomic) _Bool didReportEndpointDelay; // @synthesize didReportEndpointDelay=_didReportEndpointDelay;
@property(retain, nonatomic) NSUUID *turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(retain, nonatomic) NSString *requestMHUUID; // @synthesize requestMHUUID=_requestMHUUID;
@property(nonatomic) unsigned long long stopRecordingHostTime; // @synthesize stopRecordingHostTime=_stopRecordingHostTime;
@property(nonatomic) unsigned long long userSpeakingEndedHostTime; // @synthesize userSpeakingEndedHostTime=_userSpeakingEndedHostTime;
@property(nonatomic) unsigned long long userSpeakingStartedHostTime; // @synthesize userSpeakingStartedHostTime=_userSpeakingStartedHostTime;
@property(nonatomic) unsigned long long endpointBufferHostTime; // @synthesize endpointBufferHostTime=_endpointBufferHostTime;
@property(nonatomic) double userSpeakingEndedTimeInMs; // @synthesize userSpeakingEndedTimeInMs=_userSpeakingEndedTimeInMs;
@property(nonatomic) double userSpeakingStartedTimeInMs; // @synthesize userSpeakingStartedTimeInMs=_userSpeakingStartedTimeInMs;
@property(nonatomic) double endpointTimeInMs; // @synthesize endpointTimeInMs=_endpointTimeInMs;
- (void)_reportUEIUserSpeakingContext;	// IMP=0x00000000000a3252
- (void)reportEndpointDelayIfNeed;	// IMP=0x00000000000a324c
- (void)setSpeechRecognizedContext:(id)arg1 withEndpointerMetrics:(id)arg2;	// IMP=0x00000000000a2fb0
- (unsigned long long)estimatedUserSpeakingEndedHostTime;	// IMP=0x00000000000a2f6c
- (unsigned long long)estimatedUserSpeakingStartedHostTime;	// IMP=0x00000000000a2f36
- (void)reset;	// IMP=0x00000000000a2e75
- (id)initWithRequestMHUUID:(id)arg1 turnIdentifier:(id)arg2;	// IMP=0x00000000000a2d2b

@end

