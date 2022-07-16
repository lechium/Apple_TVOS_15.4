//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVNPRoutingMusicBarsView : UIView
{
    _Bool _canAnimate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _internalState;	// 24 = 0x18
    NSArray *_barViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000393c0
@property(readonly, copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_removeAnimations;	// IMP=0x00000000000390f0
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x0000000000038c00
- (void)_setBarHeights:(double)arg1;	// IMP=0x0000000000038950
- (void)_setSubviewsHidden:(_Bool)arg1;	// IMP=0x0000000000038760
- (void)_updateInternalState;	// IMP=0x00000000000386f0
- (void)tintColorDidChange;	// IMP=0x00000000000382b0
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000038220
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000037e90

@end

