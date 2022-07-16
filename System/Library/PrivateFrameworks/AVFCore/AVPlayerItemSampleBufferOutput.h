//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItemSampleBufferOutputInternal, NSObject;
@protocol AVPlayerItemSampleBufferOutputDelegate, OS_dispatch_queue;

@interface AVPlayerItemSampleBufferOutput
{
    AVPlayerItemSampleBufferOutputInternal *_internal;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x00000000001388a8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly) __weak id <AVPlayerItemSampleBufferOutputDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000013901c
- (void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)arg1 extractionID:(int)arg2;	// IMP=0x0000000000138eff
- (void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)arg1 extractionID:(int)arg2;	// IMP=0x0000000000138de2
- (struct opaqueCMSampleBuffer *)copyNextSampleBufferForTrackID:(int)arg1 flags:(unsigned int *)arg2;	// IMP=0x0000000000138d3a
- (id)_weakReferenceToPlayerItemTrack;	// IMP=0x0000000000138d25
- (void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;	// IMP=0x0000000000138bc4
- (struct OpaqueFigPlaybackItem *)_figPlaybackItem;	// IMP=0x0000000000138baf
- (void)dealloc;	// IMP=0x000000000013897f
- (id)init;	// IMP=0x00000000001388b9
- (void)_setExtractionID:(int)arg1;	// IMP=0x00000000001392f4
- (int)_extractionID;	// IMP=0x00000000001392e0
- (void)_setTrackID:(int)arg1;	// IMP=0x00000000001392cc
- (int)_trackID;	// IMP=0x00000000001392b8
- (void)_detachFromPlayerItemTrack;	// IMP=0x0000000000139218
- (void)_attachToPlayerItemTrack:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2;	// IMP=0x0000000000139146

@end

