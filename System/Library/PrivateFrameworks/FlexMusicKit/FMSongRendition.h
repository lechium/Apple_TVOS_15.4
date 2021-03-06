//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMTrack, NSDictionary;
@protocol FlexSongProtocol;

@interface FMSongRendition : NSObject
{
    FMTrack *_trackA;	// 8 = 0x8
    FMTrack *_trackB;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    long long _duration;	// 32 = 0x20
    long long _durationOfSilence;	// 40 = 0x28
    long long _durationOfMusic;	// 48 = 0x30
    NSObject<FlexSongProtocol> *_song;	// 56 = 0x38
}

+ (id)coalesceMixParamsA:(id)arg1 withMixParamsB:(id)arg2;	// IMP=0x0000000000005134
- (void).cxx_destruct;	// IMP=0x0000000000006f80
@property(retain, nonatomic) NSObject<FlexSongProtocol> *song; // @synthesize song=_song;
@property(nonatomic) long long durationOfMusic; // @synthesize durationOfMusic=_durationOfMusic;
@property(nonatomic) long long durationOfSilence; // @synthesize durationOfSilence=_durationOfSilence;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) FMTrack *trackB; // @synthesize trackB=_trackB;
@property(retain, nonatomic) FMTrack *trackA; // @synthesize trackA=_trackA;
- (id)_buildOutroFadeoutMixParams;	// IMP=0x0000000000006ee1
- (double)_maxPeakAndLoudness:(double *)arg1 missingPeakValueCount:(int *)arg2 missingLoudnessCount:(int *)arg3;	// IMP=0x00000000000068e6
- (id)timedMetadataItemsWithIdentifier:(id)arg1;	// IMP=0x0000000000006860
- (id)avCompositionWithAudioMix:(id *)arg1 includeShortenedOutroFadeOut:(_Bool)arg2;	// IMP=0x0000000000005a9d
- (id)description;	// IMP=0x0000000000004fd9
- (id)initWithSong:(id)arg1 andOptions:(id)arg2;	// IMP=0x0000000000004f40

@end

