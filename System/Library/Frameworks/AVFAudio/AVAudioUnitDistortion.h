//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVAudioUnitDistortion
{
}

@property(nonatomic) float wetDryMix;
@property(nonatomic) float preGain;
- (void)loadFactoryPreset:(long long)arg1;	// IMP=0x0000000000068afc
- (struct AUPreset)FillOutAUPreset:(long long)arg1;	// IMP=0x0000000000068965
- (id)init;	// IMP=0x00000000000688f6

@end
