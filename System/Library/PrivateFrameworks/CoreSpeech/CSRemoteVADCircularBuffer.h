//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSRemoteVADCircularBuffer : NSObject
{
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> _remoteVADCircularBufferImpl;	// 8 = 0x8
    int _audioSamplesPerRemoteVAD;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    unsigned long long _size;	// 32 = 0x20
    unsigned long long _beginSampleCount;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000000a8a6f
- (void).cxx_destruct;	// IMP=0x00000000000a8a5f
@property(readonly, nonatomic) unsigned long long beginSampleCount; // @synthesize beginSampleCount=_beginSampleCount;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00000000000a86ed
- (id)copySamplesFromAudioSampleCount:(unsigned long long)arg1 toAudioSampleCount:(unsigned long long)arg2;	// IMP=0x00000000000a86bb
- (unsigned long long)remoteVADSampleCount;	// IMP=0x00000000000a86ad
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00000000000a855d
- (void)reset;	// IMP=0x00000000000a854c
- (id)initWithRecordingDuration:(float)arg1 audioSamplesPerRemoteVAD:(int)arg2 audioSampleRate:(float)arg3;	// IMP=0x00000000000a843c

@end

