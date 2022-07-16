//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioFormat, SigX;

@interface SHMutableSignature
{
    unsigned int _currentFrameCount;	// 8 = 0x8
    double _maximumSeconds;	// 16 = 0x10
    long long _clipStyle;	// 24 = 0x18
    AVAudioFormat *_format;	// 32 = 0x20
    SigX *_sigX;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017e95
- (void).cxx_destruct;	// IMP=0x0000000000019516
@property(nonatomic) unsigned int currentFrameCount; // @synthesize currentFrameCount=_currentFrameCount;
@property(retain, nonatomic) SigX *sigX; // @synthesize sigX=_sigX;
@property(retain, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) long long clipStyle; // @synthesize clipStyle=_clipStyle;
@property(readonly, nonatomic) double maximumSeconds; // @synthesize maximumSeconds=_maximumSeconds;
- (double)secondsFromFrameCount:(unsigned int)arg1 forFormat:(id)arg2;	// IMP=0x0000000000019416
- (double)duration;	// IMP=0x00000000000192e5
- (id)dataRepresentation;	// IMP=0x00000000000190c9
- (id)generate:(id *)arg1;	// IMP=0x0000000000018f6f
- (long long)currentPosition;	// IMP=0x0000000000018ef8
- (_Bool)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000183d3
- (id)clipExcessAudio:(id)arg1;	// IMP=0x0000000000018244
- (void)configureWithFormat:(id)arg1;	// IMP=0x0000000000017f7b
- (int)signatureType;	// IMP=0x0000000000017f4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017e9d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017dc9
- (id)initWithMaximumSeconds:(double)arg1 clipStyle:(long long)arg2;	// IMP=0x0000000000017c74
- (id)init;	// IMP=0x0000000000017c57

@end
