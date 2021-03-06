//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADDictationSessionTracker : NSObject
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSMutableDictionary *_activeSessionsByUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000136bb8
- (void)_endAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0010000000136a3b
- (void)_endSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x00100000001368d3
- (void)_endSessionTransactionForReason:(id)arg1 session:(id)arg2 isSpeechTransaction:(_Bool)arg3;	// IMP=0x00100000001367a1
- (void)_beginAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000013655e
- (void)_beginSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000013633a
- (id)_sessionWithUUID:(id)arg1;	// IMP=0x0010000000136324
- (id)_startedOrStartingSession;	// IMP=0x0010000000136299
- (void)_removeSession:(id)arg1;	// IMP=0x001000000013614e
- (void)_addSession:(id)arg1;	// IMP=0x0010000000136000
- (void)notifyAudioFileIOTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0010000000135cc7
- (void)notifySpeechRecognitionTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x001000000013598e
- (void)stopSessionForReason:(id)arg1;	// IMP=0x001000000013570d
- (id)startSessionForReason:(id)arg1 languageCode:(id)arg2 options:(id)arg3 speechRequestOptions:(id)arg4;	// IMP=0x00100000001352ad
- (id)init;	// IMP=0x00100000001351d2

@end

