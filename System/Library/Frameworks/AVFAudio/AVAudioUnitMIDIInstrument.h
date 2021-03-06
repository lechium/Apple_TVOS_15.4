//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class NSString;

@interface AVAudioUnitMIDIInstrument <AVAudioMixing>
{
}

- (void)sendMIDISysExEvent:(id)arg1;	// IMP=0x000000000006f213
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2;	// IMP=0x000000000006f0e3
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3;	// IMP=0x000000000006efb2
- (void)sendProgramChange:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 onChannel:(unsigned char)arg4;	// IMP=0x000000000006ee7d
- (void)sendProgramChange:(unsigned char)arg1 onChannel:(unsigned char)arg2;	// IMP=0x000000000006ed4c
- (void)sendPressureForKey:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;	// IMP=0x000000000006ec04
- (void)sendPressure:(unsigned char)arg1 onChannel:(unsigned char)arg2;	// IMP=0x000000000006ead3
- (void)sendPitchBend:(unsigned short)arg1 onChannel:(unsigned char)arg2;	// IMP=0x000000000006e999
- (void)sendController:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;	// IMP=0x000000000006e86d
- (void)stopNote:(unsigned char)arg1 onChannel:(unsigned char)arg2;	// IMP=0x000000000006e6a1
- (void)startNote:(unsigned char)arg1 withVelocity:(unsigned char)arg2 onChannel:(unsigned char)arg3;	// IMP=0x000000000006e4da
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;	// IMP=0x000000000006e34c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) float volume; // @dynamic volume;

@end

