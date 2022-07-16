//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer
{
    CDStruct_1b6d18a9 _videoDuration;	// 8 = 0x8
    double _smoothedVelocity;	// 32 = 0x20
    _Bool _touching;	// 40 = 0x28
    _Bool __active;	// 41 = 0x29
    _Bool __seeking;	// 42 = 0x2a
    float __playRate;	// 44 = 0x2c
    double _force;	// 48 = 0x30
    ISDisplayLink *__displayLink;	// 56 = 0x38
}

@property(nonatomic, setter=_setPlayRate:) float _playRate; // @synthesize _playRate=__playRate;
@property(nonatomic, getter=_isSeeking, setter=_setSeeking:) _Bool _seeking; // @synthesize _seeking=__seeking;
@property(nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setActive:) _Bool _active; // @synthesize _active=__active;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic, getter=isTouching) _Bool touching; // @synthesize touching=_touching;
- (void)_handleDidFinishSeeking:(_Bool)arg1;	// IMP=0x0000000000014779
- (void)_seekVideoToEnd;	// IMP=0x0000000000014607
- (void)_seekVideoToBeginning;	// IMP=0x00000000000144b1
- (void)_updatePlayer;	// IMP=0x0000000000014259
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)_update;	// IMP=0x0000000000013a7c
- (void)statusDidChange;	// IMP=0x0000000000013a4d
- (void)didPerformChanges;	// IMP=0x0000000000013a0c
- (void)setPlayerItem:(id)arg1;	// IMP=0x0000000000013921

@end

