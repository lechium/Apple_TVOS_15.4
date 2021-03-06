//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData
{
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0000000000072134
- (int)constituentDeviceCaptureID;	// IMP=0x0000000000072427
- (_Bool)hasCorrespondingVisionData;	// IMP=0x0000000000072413
- (_Bool)hasCorrespondingDepthData;	// IMP=0x00000000000723ff
@property(readonly) long long droppedReason;
@property(readonly) _Bool sampleBufferWasDropped;
@property(readonly) struct opaqueCMSampleBuffer *sampleBuffer;
- (void)dealloc;	// IMP=0x0000000000072361
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sampleBufferWasDropped:(_Bool)arg2;	// IMP=0x0000000000072145

@end

