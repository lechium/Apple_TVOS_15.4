//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MPChangePlaybackRateCommand
{
    float _preferredRate;	// 64 = 0x40
    NSArray *_supportedPlaybackRates;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000237f51
@property(copy, nonatomic) NSArray *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;
- (id)newCommandEventWithPlaybackRate:(float)arg1;	// IMP=0x0000000000237e57
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x0000000000237d7e
- (void)setPreferredRate:(float)arg1;	// IMP=0x0000000000237d45
- (float)preferredRate;	// IMP=0x0000000000237d33

@end
