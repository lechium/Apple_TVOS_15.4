//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/NviAudioDataSource-Protocol.h>

@class CSAudioStream, NSHashTable, NSString, NviContext;
@protocol OS_dispatch_queue;

@interface NviCSAudioDataSource : NSObject <CSAudioStreamProvidingDelegate, NviAudioDataSource>
{
    NviContext *_nviCtx;	// 8 = 0x8
    NSHashTable *_receivers;	// 16 = 0x10
    CSAudioStream *_audioStream;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a0393
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NviContext *nviCtx; // @synthesize nviCtx=_nviCtx;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x00000000000a02a8
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x00000000000a01f3
- (void)audioStreamProvider:(id)arg1 avBufferAvailable:(id)arg2;	// IMP=0x00000000000a0174
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x000000000009fdf0
- (void)_createAudioStreamWithCurrentNviContext;	// IMP=0x000000000009fb28
- (void)stopWithDidStopHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009f954
- (void)startWithNviContext:(id)arg1 didStartHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009f645
- (void)removeReceiver:(id)arg1;	// IMP=0x000000000009f59c
- (void)addReceiver:(id)arg1;	// IMP=0x000000000009f4f3
@property(readonly, nonatomic) unsigned long long sampleRate;
@property(readonly, nonatomic) unsigned long long numBytesPerSample;
@property(readonly, nonatomic) unsigned long long type;
- (id)init;	// IMP=0x000000000009f3fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

