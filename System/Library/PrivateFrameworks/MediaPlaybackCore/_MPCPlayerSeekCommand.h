//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerSeekCommand-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerSeekCommand <MPCPlayerSeekCommand>
{
    _Bool _prefersNegativeBackwardSkipIntervals;	// 16 = 0x10
    unsigned long long _seekSupport;	// 24 = 0x18
    NSArray *_preferredBackwardJumpIntervals;	// 32 = 0x20
    NSArray *_preferredForwardJumpIntervals;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001394de
@property(copy, nonatomic) NSArray *preferredForwardJumpIntervals; // @synthesize preferredForwardJumpIntervals=_preferredForwardJumpIntervals;
@property(copy, nonatomic) NSArray *preferredBackwardJumpIntervals; // @synthesize preferredBackwardJumpIntervals=_preferredBackwardJumpIntervals;
@property(nonatomic) _Bool prefersNegativeBackwardSkipIntervals; // @synthesize prefersNegativeBackwardSkipIntervals=_prefersNegativeBackwardSkipIntervals;
@property(readonly, nonatomic) unsigned long long seekSupport; // @synthesize seekSupport=_seekSupport;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2;	// IMP=0x00000000001392b5
- (id)changePositionToElapsedInterval:(double)arg1;	// IMP=0x00000000001391e4
- (id)jumpByInterval:(double)arg1;	// IMP=0x000000000013904e
- (id)endSeek;	// IMP=0x0000000000139009
- (id)beginSeekWithDirection:(long long)arg1;	// IMP=0x0000000000138fa8
- (id)initWithResponse:(id)arg1 seekSupport:(unsigned long long)arg2;	// IMP=0x0000000000138f64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

