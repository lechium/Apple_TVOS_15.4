//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Recap/CALayerDelegate-Protocol.h>
#import <Recap/RCPTimelineViewDelegate-Protocol.h>

@class AVPlayer, AVPlayerLayer, CALayer, NSString, RCPMovie, RCPTraceLayer;

@interface RCPVizualizerView : UIView <CALayerDelegate, RCPTimelineViewDelegate>
{
    unsigned long long _time;	// 8 = 0x8
    RCPMovie *_recapMovie;	// 16 = 0x10
    AVPlayerLayer *_playerLayer;	// 24 = 0x18
    AVPlayer *_player;	// 32 = 0x20
    RCPTraceLayer *_traceLayer;	// 40 = 0x28
    CALayer *_screenshotLayer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000007b68
@property(retain, nonatomic) CALayer *screenshotLayer; // @synthesize screenshotLayer=_screenshotLayer;
@property(retain, nonatomic) RCPTraceLayer *traceLayer; // @synthesize traceLayer=_traceLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) RCPMovie *recapMovie; // @synthesize recapMovie=_recapMovie;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
- (struct CGRect)screenRect;	// IMP=0x000000000000785c
- (_Bool)isFlipped;	// IMP=0x000000000000778c
- (void)timelineView:(id)arg1 didSetTime:(unsigned long long)arg2;	// IMP=0x000000000000726b
- (void)layout;	// IMP=0x00000000000070f0
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000709e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
