//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _EARFormatter;
@protocol OS_dispatch_queue;

@interface _EARSyncSpeechRecognizer : NSObject
{
    NSObject<OS_dispatch_queue> *_formatterQueue;	// 8 = 0x8
    _EARFormatter *_formatter;	// 16 = 0x10
    struct shared_ptr<quasar::SyncSpeechRecognizer> _syncRecognizer;	// 24 = 0x18
    NSString *_configPath;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000000000ef1ed
- (id).cxx_construct;	// IMP=0x00000000000f01ef
- (void).cxx_destruct;	// IMP=0x00000000000f01b3
- (id)resultsWithEndedAudio;	// IMP=0x00000000000f00d2
- (id)resultsWithAddedFloatAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;	// IMP=0x00000000000eff2b
- (id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;	// IMP=0x00000000000efde1
- (id)getSpeechRecognitionResultFromTokens:(vector_daa4424d)arg1 taskName:(id)arg2;	// IMP=0x00000000000ef809
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(_Bool)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;	// IMP=0x00000000000ef4ae
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000ef215

@end

