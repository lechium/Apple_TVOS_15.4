//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class NSString, VCAudioIO, VCAudioPayload;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTTYDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate>
{
    int _clientPid;	// 8 = 0x8
    struct tagVCAudioFrameFormat _vpioFormat;	// 16 = 0x10
    int deviceRole;	// 64 = 0x40
    _Bool isValid;	// 68 = 0x44
    NSObject<VCMediaStreamDelegate> *delegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;	// 80 = 0x50
    struct _opaque_pthread_mutex_t sessionLock;	// 88 = 0x58
    int _state;	// 152 = 0x98
    VCAudioPayload *_currentAudioPayload;	// 160 = 0xa0
    VCAudioIO *_audioIO;	// 168 = 0xa8
    struct SoundDec_t *_decoder;	// 176 = 0xb0
    struct opaqueCMSimpleQueue *_charQueue;	// 184 = 0xb8
    struct tagVCMemoryPool *_characterPool;	// 192 = 0xc0
    id _textStream;	// 200 = 0xc8
}

@property(nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property int deviceRole; // @synthesize deviceRole;
@property _Bool isValid; // @synthesize isValid;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000002f0f09
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000002f0f03
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000002f0efd
- (void)setCanProcessAudio:(_Bool)arg1;	// IMP=0x00000000002f0eeb
- (_Bool)canProcessAudio;	// IMP=0x00000000002f0ed9
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000002f0cf3
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000002f0c06
- (void)unlock;	// IMP=0x00000000002f0bf8
- (void)lock;	// IMP=0x00000000002f0bea
- (id)setPause:(_Bool)arg1;	// IMP=0x00000000002f0b00
- (id)stop;	// IMP=0x00000000002f0a8a
- (void)sendText:(id)arg1;	// IMP=0x00000000002f0a38
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x00000000002f0837
- (id)start;	// IMP=0x00000000002f0403
- (void)dealloc;	// IMP=0x00000000002f034f
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;	// IMP=0x00000000002effc0
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002effb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

