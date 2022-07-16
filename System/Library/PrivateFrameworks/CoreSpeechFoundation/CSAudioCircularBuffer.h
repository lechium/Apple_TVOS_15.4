//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioTimeConverter;

@interface CSAudioCircularBuffer : NSObject
{
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> _csAudioCircularBufferImpl;	// 8 = 0x8
    unsigned long long _bufferLength;	// 16 = 0x10
    CSAudioTimeConverter *_audioTimeConverter;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000001013d
- (void).cxx_destruct;	// IMP=0x0000000000010115
@property(retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // @synthesize audioTimeConverter=_audioTimeConverter;
@property(nonatomic) unsigned long long bufferLength; // @synthesize bufferLength=_bufferLength;
- (unsigned long long)sampleCount;	// IMP=0x00000000000100d8
- (void)reset;	// IMP=0x0000000000010047
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)arg1;	// IMP=0x000000000000ff03
- (id)copybufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000000fdbd
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;	// IMP=0x000000000000fa41
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000000f5f9
- (id)copySamplesFromHostTime:(unsigned long long)arg1;	// IMP=0x000000000000f4ff
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3;	// IMP=0x000000000000f3bb
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x000000000000f380
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3 audioTimeConverter:(id)arg4;	// IMP=0x000000000000f19b
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3;	// IMP=0x000000000000f186

@end
