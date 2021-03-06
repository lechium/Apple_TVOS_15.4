//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVVCAudioBuffer : NSObject
{
    void *_impl;	// 8 = 0x8
}

@property(readonly) _Bool upsamplingSourceAudio;
@property(readonly) _Bool remoteVoiceActivityAvailable;
@property(readonly) unsigned char remoteVoiceActivityVAD;
@property(readonly) unsigned char remoteVoiceActivityRMS;
@property(readonly) struct AudioStreamBasicDescription *streamDescription;
@property(readonly) unsigned long long timeStamp;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;	// IMP=0x00000000000853ba
@property(readonly) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly) int packetDescriptionCount;
@property(readonly) int packetDescriptionCapacity;
@property(readonly) void *data;
@property int bytesDataSize;
@property(readonly) int bytesCapacity;
@property(readonly) int channels;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;	// IMP=0x0000000000085505
- (void)dealloc;	// IMP=0x00000000000854a8
- (void)finalize;	// IMP=0x000000000008544b

@end

