//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor;

@interface MPUNowPlayingIndicatorView : UIControl
{
    NSMutableArray *_levelViews;	// 8 = 0x8
    _Bool _showsLevelGutters;	// 16 = 0x10
    double _interLevelSpacing;	// 24 = 0x18
    double _levelCornerRadius;	// 32 = 0x20
    double _levelWidth;	// 40 = 0x28
    double _maximumLevelHeight;	// 48 = 0x30
    double _minimumLevelHeight;	// 56 = 0x38
    long long _numberOfLevels;	// 64 = 0x40
    long long _playbackState;	// 72 = 0x48
    UIColor *_levelGuttersColor;	// 80 = 0x50
    double _minimumFrameInterval;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001c808
@property(nonatomic) double minimumFrameInterval; // @synthesize minimumFrameInterval=_minimumFrameInterval;
@property(retain, nonatomic) UIColor *levelGuttersColor; // @synthesize levelGuttersColor=_levelGuttersColor;
@property(nonatomic) _Bool showsLevelGutters; // @synthesize showsLevelGutters=_showsLevelGutters;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) long long numberOfLevels; // @synthesize numberOfLevels=_numberOfLevels;
@property(nonatomic) double minimumLevelHeight; // @synthesize minimumLevelHeight=_minimumLevelHeight;
@property(nonatomic) double maximumLevelHeight; // @synthesize maximumLevelHeight=_maximumLevelHeight;
@property(nonatomic) double levelWidth; // @synthesize levelWidth=_levelWidth;
@property(nonatomic) double levelCornerRadius; // @synthesize levelCornerRadius=_levelCornerRadius;
@property(nonatomic) double interLevelSpacing; // @synthesize interLevelSpacing=_interLevelSpacing;
- (void)_updateLevelAnimations;	// IMP=0x000000000001bdd5
- (void)_reloadLevelViews;	// IMP=0x000000000001baa5
- (void)_removeAllAnimations:(_Bool)arg1;	// IMP=0x000000000001b79b
- (void)tintColorDidChange;	// IMP=0x000000000001b5ec
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001b591
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000001b463
- (void)layoutSubviews;	// IMP=0x000000000001b1eb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b07a

@end

