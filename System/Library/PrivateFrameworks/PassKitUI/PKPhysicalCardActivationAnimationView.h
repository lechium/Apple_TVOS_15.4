//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, UILabel;

@interface PKPhysicalCardActivationAnimationView : UIView
{
    AVPlayerLayer *_playerLayer;	// 8 = 0x8
    AVPlayer *_player;	// 16 = 0x10
    AVPlayerItem *_playerItem;	// 24 = 0x18
    _Bool _playerStarted;	// 32 = 0x20
    UILabel *_nameOnCardLabel;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
    NSString *_nameOnCard;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001de5ae
@property(copy, nonatomic) NSString *nameOnCard; // @synthesize nameOnCard=_nameOnCard;
- (void)_removePlayerItem;	// IMP=0x00000000001de503
- (void)_didFinishPlaying;	// IMP=0x00000000001de45a
- (void)_invalidate;	// IMP=0x00000000001de3bc
- (void)startAnimation;	// IMP=0x00000000001de14d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001de05e
- (void)layoutSubviews;	// IMP=0x00000000001dde9b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001dde89
- (void)dealloc;	// IMP=0x00000000001dde4b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ddb1e

@end

