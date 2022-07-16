//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosPlayer/ISAnimatedImagePlayerDestination-Protocol.h>

@class ISAnimatedImagePlayer, NSString, PFAnimatedImage, UIImageView;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination>
{
    UIImageView *_placeholderImageView;	// 8 = 0x8
    ISAnimatedImagePlayer *_player;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000218c3
@property(retain, nonatomic) ISAnimatedImagePlayer *player; // @synthesize player=_player;
@property(nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void)displayLayer:(id)arg1;	// IMP=0x0000000000021847
@property(nonatomic) unsigned long long displayedFrameIndex;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(retain, nonatomic) PFAnimatedImage *image;
- (void)didBeginAnimating;	// IMP=0x0000000000021617
- (_Bool)isReadyToDisplay;	// IMP=0x0000000000021577
- (void)frameDidChange;	// IMP=0x000000000002153a
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000214f1
- (void)setAlpha:(double)arg1;	// IMP=0x00000000000214a8
- (void)didMoveToSuperview;	// IMP=0x000000000002145f
- (void)didMoveToWindow;	// IMP=0x0000000000021416
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002132f
- (void)dealloc;	// IMP=0x00000000000212e3
- (id)initWithAnimatedImagePlayer:(id)arg1;	// IMP=0x00000000000211ac
- (id)initWithAnimatedImage:(id)arg1;	// IMP=0x000000000002112f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

