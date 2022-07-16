//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioInjectionFileOption, MISSING_TYPE, NSMutableArray, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioInjectionEngine : NSObject
{
    _Bool _isRecording;	// 8 = 0x8
    _Bool _didSetScaleFactor;	// 9 = 0x9
    float _scaleFactor;	// 12 = 0xc
    unsigned long long _audioStreamHandleId;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <CSAudioInjectionEngineDelegate> _delegate;	// 32 = 0x20
    CSAudioInjectionFileOption *_fileOption;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 48 = 0x30
    double _bufferDuration;	// 56 = 0x38
    NSMutableArray *_injectionAudioFileList;	// 64 = 0x40
    MISSING_TYPE *_injectionStartNotifyBlocks;	// 72 = 0x48
    NSMutableArray *_injectionCompletionNotifyBlocks;	// 80 = 0x50
    NSUUID *_uuid;	// 88 = 0x58
    struct OpaqueAudioConverter *_deinterleaver;	// 96 = 0x60
    struct AudioBufferList *_pNonInterleavedABL;	// 104 = 0x68
    struct AudioStreamBasicDescription _outASBD;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000d2094
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool didSetScaleFactor; // @synthesize didSetScaleFactor=_didSetScaleFactor;
@property(nonatomic) struct AudioBufferList *pNonInterleavedABL; // @synthesize pNonInterleavedABL=_pNonInterleavedABL;
@property(nonatomic) struct OpaqueAudioConverter *deinterleaver; // @synthesize deinterleaver=_deinterleaver;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSMutableArray *injectionCompletionNotifyBlocks; // @synthesize injectionCompletionNotifyBlocks=_injectionCompletionNotifyBlocks;
@property(retain, nonatomic) NSMutableArray *injectionStartNotifyBlocks; // @synthesize injectionStartNotifyBlocks=_injectionStartNotifyBlocks;
@property(retain, nonatomic) NSMutableArray *injectionAudioFileList; // @synthesize injectionAudioFileList=_injectionAudioFileList;
@property(nonatomic) double bufferDuration; // @synthesize bufferDuration=_bufferDuration;
@property(nonatomic) struct AudioStreamBasicDescription outASBD; // @synthesize outASBD=_outASBD;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) CSAudioInjectionFileOption *fileOption; // @synthesize fileOption=_fileOption;
@property(nonatomic) __weak id <CSAudioInjectionEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long audioStreamHandleId; // @synthesize audioStreamHandleId=_audioStreamHandleId;
- (struct AudioStreamBasicDescription)_defaultOutASBD;	// IMP=0x00100000000d1e80
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;	// IMP=0x00100000000d1caa
- (id)_deinterleaveBufferIfNeeded:(struct AudioBufferList *)arg1;	// IMP=0x00100000000d1b53
- (void)stopAudioStream;	// IMP=0x00100000000d19fb
- (void)startAudioStreamWithOption:(id)arg1;	// IMP=0x00100000000d190c
- (_Bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 outASBD:(struct AudioStreamBasicDescription)arg3 playbackStarted:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d13c2
- (_Bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d1301
- (_Bool)injectAudio:(id)arg1;	// IMP=0x00100000000d12e2
- (void)_readAudioBufferAndFeed;	// IMP=0x00100000000d0689
- (void)_startAudioFeedingTimer;	// IMP=0x00100000000d0566
- (void)stop;	// IMP=0x00100000000d03e1
- (void)_createDeInterleaverIfNeeded;	// IMP=0x00100000000d024e
- (void)start;	// IMP=0x00100000000d01d0
- (void)attachDevice:(id)arg1;	// IMP=0x00100000000d01ca
- (_Bool)alwaysOnVoiceTriggerEnabled;	// IMP=0x00100000000d01c2
- (void)setAlwaysOnVoiceTriggerEnabled:(_Bool)arg1;	// IMP=0x00100000000d01bc
- (_Bool)isAlwaysOnVoiceTriggerAvailable;	// IMP=0x00100000000d01b4
- (void)dealloc;	// IMP=0x00100000000d0164
- (id)initWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000d003e

@end

