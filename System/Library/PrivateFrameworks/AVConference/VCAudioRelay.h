//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class NSString, VCAudioRelayIO;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications>
{
    _Bool _isRelayRunning;	// 8 = 0x8
    struct OpaqueFigThread *_relayThread;	// 16 = 0x10
    struct _opaque_pthread_mutex_t _wakeUpMutex;	// 24 = 0x18
    struct _opaque_pthread_cond_t _wakeUpCondition;	// 88 = 0x58
    double _IOBufferDuration;	// 136 = 0x88
    struct OpaqueAudioConverter *_clientToRemoteConverter;	// 144 = 0x90
    struct OpaqueAudioConverter *_remoteToClientConverter;	// 152 = 0x98
    struct tagVCAudioRelayIOInfo _remoteIOInfo;	// 160 = 0xa0
    struct tagVCAudioRelayIOInfo _clientIOInfo;	// 248 = 0xf8
    struct _opaque_pthread_mutex_t _relayLock;	// 336 = 0x150
    NSObject<OS_dispatch_source> *_periodicHealthPrintDispatchSource;	// 400 = 0x190
    unsigned int _blocksRelayedCount;	// 408 = 0x198
    float _clientUplinkPowerMovingAverage;	// 412 = 0x19c
    float _clientDownlinkPowerMovingAverage;	// 416 = 0x1a0
    struct _VCRemoteCodecInfo _remoteCodecInfo;	// 424 = 0x1a8
    VCAudioRelayIO *_remoteIO;	// 440 = 0x1b8
    VCAudioRelayIO *_clientIO;	// 448 = 0x1c0
}

@property(copy, nonatomic) VCAudioRelayIO *clientIO; // @synthesize clientIO=_clientIO;
@property(copy, nonatomic) VCAudioRelayIO *remoteIO; // @synthesize remoteIO=_remoteIO;
@property(readonly) float clientUplinkPowerMovingAverage; // @synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage;
@property(readonly) float clientDownlinkPowerMovingAverage; // @synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage;
@property(readonly) unsigned int blocksRelayedCount; // @synthesize blocksRelayedCount=_blocksRelayedCount;
@property(readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource; // @synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource;
@property(readonly) struct OpaqueAudioConverter *clientToRemoteConverter; // @synthesize clientToRemoteConverter=_clientToRemoteConverter;
@property(readonly) struct OpaqueAudioConverter *remoteToClientConverter; // @synthesize remoteToClientConverter=_remoteToClientConverter;
@property(readonly) double IOBufferDuration; // @synthesize IOBufferDuration=_IOBufferDuration;
@property(readonly) _Bool isRelayRunning; // @synthesize isRelayRunning=_isRelayRunning;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x000000000003c5f0
- (void)relayCallback;	// IMP=0x000000000003c3c1
- (void)relayProcessSamples;	// IMP=0x000000000003c2e0
- (void)startPeriodicHealthPrint;	// IMP=0x000000000003c032
- (void)updateRealTimeStats;	// IMP=0x000000000003bf7c
- (void)sleepTillTime:(struct timespec *)arg1;	// IMP=0x000000000003bf3c
- (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter *)arg3;	// IMP=0x000000000003bce3
- (float)rmsPowerOfBuffer:(float *)arg1 numSamples:(unsigned int)arg2;	// IMP=0x000000000003bc77
- (void)printStreamFormats;	// IMP=0x000000000003bb06
- (void)destroyAudioConverters;	// IMP=0x000000000003babe
- (struct OpaqueAudioConverter *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription *)arg1 outputFormat:(struct AudioStreamBasicDescription *)arg2 withError:(id *)arg3;	// IMP=0x000000000003b941
- (_Bool)createAudioConvertersWithError:(id *)arg1;	// IMP=0x000000000003b7a7
- (void)stopRelayThread;	// IMP=0x000000000003b733
- (_Bool)startRelayThreadWithError:(id *)arg1;	// IMP=0x000000000003b55f
- (void)stopRemoteIO;	// IMP=0x000000000003b3da
- (void)stopClientIO;	// IMP=0x000000000003b255
- (_Bool)startRemoteIO;	// IMP=0x000000000003b100
- (_Bool)startClientIO;	// IMP=0x000000000003afab
- (void)stopRelayIO:(struct tagVCAudioRelayIOInfo *)arg1 otherRelayIO:(struct tagVCAudioRelayIOInfo *)arg2;	// IMP=0x000000000003ac8b
- (void)internalStopRelayThread;	// IMP=0x000000000003ab90
- (_Bool)startRelayIO:(struct tagVCAudioRelayIOInfo *)arg1 otherRelayIO:(struct tagVCAudioRelayIOInfo *)arg2;	// IMP=0x000000000003a5fb
- (_Bool)canSetPropertyWithError:(id *)arg1;	// IMP=0x000000000003a5ae
- (_Bool)setClientIO:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000003a472
- (_Bool)setRemoteIO:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000003a2ab
- (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x000000000003a269
- (double)ioBufferDurationWithFirstIO:(id)arg1 secondIO:(id)arg2;	// IMP=0x000000000003a213
- (_Bool)setIOBufferDuration:(double)arg1 withError:(id *)arg2;	// IMP=0x000000000003a15c
- (void)unlock;	// IMP=0x000000000003a14b
- (void)lock;	// IMP=0x000000000003a13a
- (void)dealloc;	// IMP=0x000000000003a045
- (id)init;	// IMP=0x0000000000039f23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

