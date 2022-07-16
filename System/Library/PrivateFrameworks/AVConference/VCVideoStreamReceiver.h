//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>

@class NSObject, NSString, VCMediaStreamStats, VCVideoStreamRateAdaptation, VideoAttributes;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCVideoStreamReceiver <VCMediaStreamSyncDestination>
{
    struct tagHANDLE *_hRTP;	// 72 = 0x48
    struct OpaqueCMMemoryPool *_blockBufferMemoryPool;	// 80 = 0x50
    struct __CFAllocator *_blockBufferMemoryPoolAllocator;	// 88 = 0x58
    struct OpaqueVTDecompressionSession *_decompressionSession;	// 96 = 0x60
    struct _opaque_pthread_mutex_t _decompressionSessionMutex;	// 104 = 0x68
    _Bool _receivedFirstPacket;	// 168 = 0xa8
    _Bool _receivedFirstRemoteFrame;	// 169 = 0xa9
    unsigned short _lastSequenceNumber;	// 170 = 0xaa
    int _sequenceNumberOutOfOrder;	// 172 = 0xac
    unsigned char _firSequenceNumber;	// 176 = 0xb0
    double _lastFIRArrivalTime;	// 184 = 0xb8
    VCVideoStreamRateAdaptation *_rateAdaptation;	// 192 = 0xc0
    struct opaqueCMBufferQueue *_videoQueue;	// 200 = 0xc8
    unsigned int _mostRecentTimestamp;	// 208 = 0xd0
    unsigned int _lastVideoTimestamp;	// 212 = 0xd4
    unsigned int _videoTimestampWrapCount;	// 216 = 0xd8
    struct opaqueCMFormatDescription *_formatDescription;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_videoStreamReceiverQueue;	// 232 = 0xe8
    struct OpaqueFigThread *_networkReceiveThread;	// 240 = 0xf0
    _Bool _runNetworkReceiveThread;	// 248 = 0xf8
    int _sRecvReset;	// 252 = 0xfc
    struct VideoPacketBuffer_t *_videoPacketBuffer;	// 256 = 0x100
    VideoAttributes *_remoteVideoAttributes;	// 264 = 0x108
    int _remoteVideoCamera;	// 272 = 0x110
    _Bool _remoteVideoMirrored;	// 276 = 0x114
    _Bool _enableCVO;	// 277 = 0x115
    unsigned long long _cvoExtensionID;	// 280 = 0x118
    unsigned long long _lastKeyFrameSampleBufferSize;	// 288 = 0x120
    CDStruct_1b6d18a9 _lastFrameTime;	// 296 = 0x128
    CDStruct_1b6d18a9 _lastDisplayTime;	// 320 = 0x140
    VCMediaStreamStats *_stats;	// 344 = 0x158
    double _reportingIntervalStartTime;	// 352 = 0x160
    double _reportingLastUpdateTime;	// 360 = 0x168
    unsigned int _receivedBytes;	// 368 = 0x170
    unsigned int _videoStallDurationMillis;	// 372 = 0x174
    double _videoStallStartTime;	// 376 = 0x178
    struct opaqueRTCReporting *_reportingAgent;	// 384 = 0x180
    int _reportingModuleID;	// 392 = 0x188
    _Bool _enableReceiveBitstreamDump;	// 396 = 0x18c
    struct OpaqueVCTransportStreamRunLoop *_runLoop;	// 400 = 0x190
    void *_rtcpContext;	// 408 = 0x198
    CDUnknownFunctionPointerType _rtcpPacketsCallback;	// 416 = 0x1a0
}

- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x0000000000108fd7
- (void)reportingVideoStreamEvent:(unsigned short)arg1;	// IMP=0x0000000000108e00
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x00000000001086a6
- (int)showDecodedFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000001085d9
- (_Bool)handleRemoteVideoAttributesChange:(struct __CVBuffer *)arg1;	// IMP=0x00000000001084a1
- (void)handleAlarmForTimeStamp:(unsigned int)arg1;	// IMP=0x0000000000108427
- (void)dequeueAndDecodeForTimestamp:(unsigned int)arg1;	// IMP=0x0000000000108248
- (_Bool)canDequeue:(struct opaqueCMBufferQueue *)arg1 forTimestamp:(unsigned int)arg2;	// IMP=0x00000000001080a3
- (int)decodeFrame:(struct opaqueCMSampleBuffer *)arg1 showFrame:(_Bool)arg2;	// IMP=0x0000000000107f44
- (void)teardownDecodeSession:(_Bool)arg1;	// IMP=0x0000000000107ed8
- (void)createDecodeSession:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000107df3
- (void)updateVideoStallStatus:(_Bool)arg1;	// IMP=0x0000000000107d6d
- (int)scheduleDecodeForFrameWithBuffer:(struct VCVideoReceiverSampleBuffer_t *)arg1 timestamp:(unsigned int)arg2 hostTime:(double)arg3 showFrame:(_Bool)arg4;	// IMP=0x00000000001077e4
- (int)processVideoRTCP;	// IMP=0x0000000000106726
- (void)processReceptionReportBlock:(struct tagRTCP_RRB *)arg1 blockCount:(unsigned int)arg2 arrivalNTPTime:(union tagNTP)arg3;	// IMP=0x00000000001064fd
- (void)rtcpSendIntervalElapsed;	// IMP=0x00000000001062d9
- (int)processVideoRTP;	// IMP=0x0000000000105be7
- (struct tagVCVideoPacketBufferConfig)newVideoPacketBufferConfig:(struct _RTPMediaPacket *)arg1;	// IMP=0x0000000000105b41
- (void)scheduleVideoDecode:(unsigned int)arg1;	// IMP=0x0000000000105ae7
- (void)scheduleDecodeForTimestamp:(unsigned int)arg1;	// IMP=0x00000000001056ed
- (void)updateSequenceNumber:(unsigned short)arg1;	// IMP=0x00000000001055a5
- (void *)networkReceivePackets;	// IMP=0x000000000010548b
- (int)stopNetworkReceiveThread;	// IMP=0x0000000000105301
- (int)startNetworkReceiveThread;	// IMP=0x0000000000104fc9
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;	// IMP=0x0000000000104fc3
- (void)setSyncSource:(id)arg1;	// IMP=0x0000000000104fac
- (id)syncSource;	// IMP=0x0000000000104f98
- (void)stopSynchronization;	// IMP=0x0000000000104f2f
- (_Bool)startSynchronization:(id)arg1;	// IMP=0x0000000000104e13
- (void)pauseVideo;	// IMP=0x0000000000104e0d
- (void)stopVideo;	// IMP=0x0000000000104d8f
- (void)startVideo;	// IMP=0x0000000000104d2f
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;	// IMP=0x0000000000104d12
- (void)setEnableCVO:(_Bool)arg1 cvoExtensionID:(unsigned long long)arg2;	// IMP=0x0000000000104cf7
- (void)dealloc;	// IMP=0x0000000000104b4f
- (id)initWithConfig:(struct tagVCVideoStreamReceiverConfig *)arg1;	// IMP=0x000000000010479c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

