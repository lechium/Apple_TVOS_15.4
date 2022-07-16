//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSystemAudioCapture : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;	// 8 = 0x8
    struct {
        struct OpaqueAudioQueue *_field1;
        struct AudioStreamBasicDescription _field2;
        struct AudioQueueBuffer *_field3[10];
        unsigned int _field4;
        int _field5;
    } *_audioRecorderQueue;	// 72 = 0x48
    int _audioProcessIdToTap;	// 80 = 0x50
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioQueue;	// 88 = 0x58
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioCapture;	// 128 = 0x80
    unsigned int _samplesPerFrame;	// 168 = 0xa8
    void *_sinkContext;	// 176 = 0xb0
    CDUnknownFunctionPointerType _sinkProc;	// 184 = 0xb8
    _Bool _firstAudioBufferReceived;	// 192 = 0xc0
    struct opaqueVCAudioBufferList *_audioBufferAppendList;	// 200 = 0xc8
    struct opaqueVCAudioBufferList *_audioBufferOutputList;	// 208 = 0xd0
    double _conversionRatio;	// 216 = 0xd8
    unsigned int _timestamp;	// 224 = 0xe0
    double _hostTime;	// 232 = 0xe8
    double _startHostTime;	// 240 = 0xf0
}

+ (id)newAudioTapDescriptionForProcess:(int)arg1 audioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg2;	// IMP=0x000000000030632e
- (_Bool)stop;	// IMP=0x0000000000306058
- (_Bool)start;	// IMP=0x0000000000303c93
- (void)dealloc;	// IMP=0x0000000000303b69
- (id)initWithConfiguration:(CDStruct_29090a4b *)arg1;	// IMP=0x00000000003035ca

@end

