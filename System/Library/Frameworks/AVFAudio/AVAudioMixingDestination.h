//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class AVAudioConnectionPoint, NSString;

@interface AVAudioMixingDestination : NSObject <AVAudioMixing>
{
    void *_impl;	// 8 = 0x8
}

- (float)occlusion;	// IMP=0x00000000000aea6b
- (void)setOcclusion:(float)arg1;	// IMP=0x00000000000ae9e4
- (float)obstruction;	// IMP=0x00000000000ae98e
- (void)setObstruction:(float)arg1;	// IMP=0x00000000000ae907
- (struct AVAudio3DPoint)position;	// IMP=0x00000000000ae89f
- (void)setPosition:(struct AVAudio3DPoint)arg1;	// IMP=0x00000000000ae817
- (float)reverbBlend;	// IMP=0x00000000000ae7c1
- (void)setReverbBlend:(float)arg1;	// IMP=0x00000000000ae73a
- (float)rate;	// IMP=0x00000000000ae6e4
- (void)setRate:(float)arg1;	// IMP=0x00000000000ae65d
- (long long)pointSourceInHeadMode;	// IMP=0x00000000000ae618
- (void)setPointSourceInHeadMode:(long long)arg1;	// IMP=0x00000000000ae5a1
- (long long)sourceMode;	// IMP=0x00000000000ae55c
- (void)setSourceMode:(long long)arg1;	// IMP=0x00000000000ae4e5
- (long long)renderingAlgorithm;	// IMP=0x00000000000ae4a0
- (void)setRenderingAlgorithm:(long long)arg1;	// IMP=0x00000000000ae429
- (float)pan;	// IMP=0x00000000000ae3d3
- (void)setPan:(float)arg1;	// IMP=0x00000000000ae34c
@property(nonatomic) float volume;
@property(readonly, nonatomic) AVAudioConnectionPoint *connectionPoint;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;	// IMP=0x00000000000ae03a
- (struct AVAudioMixingImpl *)implementation;	// IMP=0x00000000000ae030
- (void)dealloc;	// IMP=0x00000000000adff0
- (id)init;	// IMP=0x00000000000adfe2
- (id)initWithImpl:(struct AVAudioMixingImpl *)arg1;	// IMP=0x00000000000adf8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
