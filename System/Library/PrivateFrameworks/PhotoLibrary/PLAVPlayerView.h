//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView
{
    long long _scaleMode;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0000000000002139
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000002042
@property(retain, nonatomic) AVPlayer *player;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000001f48

// Remaining properties
@property(readonly, retain, nonatomic) AVPlayerLayer *layer; // @dynamic layer;

@end
