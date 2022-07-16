//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSObject;

__attribute__((visibility("hidden")))
@interface TVPMusicBarsView : UIView
{
    NSArray *_barViews;	// 8 = 0x8
    long long _musicBarsStyle;	// 16 = 0x10
    NSObject *_didChangeReduceTransparencyNotification;	// 24 = 0x18
    _Bool _animating;	// 32 = 0x20
    NSMutableDictionary *_animators;	// 40 = 0x28
    long long _numberOfBars;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000011871
@property(readonly, nonatomic) NSMutableDictionary *animators; // @synthesize animators=_animators;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (id)_createBarViews;	// IMP=0x0000000000011655
- (struct CGRect)_frameForBarAtIndex:(long long)arg1;	// IMP=0x0000000000011591
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000114d3
@property(nonatomic) long long musicBarsStyle;
- (void)_updateMusicBarsStyle;	// IMP=0x0000000000011146
- (void)stopAnimating;	// IMP=0x0000000000010ccf
- (void)_createAnimationForBarIndex:(long long)arg1;	// IMP=0x0000000000010608
- (void)resumeAnimatingIfNeeded;	// IMP=0x0000000000010573
- (void)didMoveToWindow;	// IMP=0x0000000000010505
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000104d5
- (void)dealloc;	// IMP=0x0000000000010458
- (void)layoutSubviews;	// IMP=0x000000000001034c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000100d3
- (id)init;	// IMP=0x000000000001008e

@end

