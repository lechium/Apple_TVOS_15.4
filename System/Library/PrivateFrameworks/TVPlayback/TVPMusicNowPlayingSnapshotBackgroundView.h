//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVPlayback/TVPMusicNowPlayingBackgroundProvider-Protocol.h>

@class CADisplayLink, NSString, UIImage;
@protocol TVPMusicNowPlayingSnapshotBackgroundViewDelegate;

@interface TVPMusicNowPlayingSnapshotBackgroundView : UIView <TVPMusicNowPlayingBackgroundProvider>
{
    id <TVPMusicNowPlayingSnapshotBackgroundViewDelegate> _delegate;	// 8 = 0x8
    UIView *_targetView;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    UIView *_currentSnapshot;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000004405
@property(retain, nonatomic) UIView *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) __weak id <TVPMusicNowPlayingSnapshotBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateSnapshot;	// IMP=0x0000000000003f11
- (void)_updateSnapshot:(id)arg1;	// IMP=0x0000000000003eff
- (void)didMoveToWindow;	// IMP=0x0000000000003ea9
- (void)_updateSnapshotTimer;	// IMP=0x0000000000003d17
@property(readonly, nonatomic) UIView *view;
- (void)dealloc;	// IMP=0x0000000000003c7d

// Remaining properties
@property(readonly, nonatomic, getter=isBlurDisabled) _Bool blurDisabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image;
@property(readonly) Class superclass;

@end

