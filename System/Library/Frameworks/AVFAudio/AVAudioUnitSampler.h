//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVAudioUnitSampler
{
}

@property(nonatomic) float globalTuning;
@property(nonatomic) float masterGain;
@property(nonatomic) float overallGain;
@property(nonatomic) float stereoPan;
- (_Bool)loadAudioFilesAtURLs:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b04aa
- (_Bool)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id *)arg5;	// IMP=0x00000000000b03b1
- (_Bool)loadInstrumentAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b01d6
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;	// IMP=0x00000000000b016b
- (id)init;	// IMP=0x00000000000b0124

@end

