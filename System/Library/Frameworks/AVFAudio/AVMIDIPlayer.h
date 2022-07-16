//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVMIDIPlayer : NSObject
{
    void *_impl;	// 8 = 0x8
}

@property(nonatomic) double currentPosition;
@property(readonly, nonatomic) double duration;
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;	// IMP=0x000000000006c38f
- (void)play:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c23f
- (void)prepareToPlay;	// IMP=0x000000000006c101
- (double)beatsForHostTime:(unsigned long long)arg1;	// IMP=0x000000000006c0bf
- (unsigned long long)hostTimeForBeats:(double)arg1;	// IMP=0x000000000006c07b
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006bfc0
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006bef9
- (void)dealloc;	// IMP=0x000000000006bdea
- (void)finalize;	// IMP=0x000000000006bdac
- (void)destroyBase;	// IMP=0x000000000006ddfb
- (id)initBase;	// IMP=0x000000000006dbec
- (struct MIDIPlayerImpl *)impl;	// IMP=0x000000000006dbe2

@end

