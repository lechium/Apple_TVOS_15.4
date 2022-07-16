//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface TVCKBackgroundShelfWrappingView : UIView
{
    UIView *_shelfView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIView *_relatedView;	// 24 = 0x18
    double _height;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006e6a2
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIView *relatedView; // @synthesize relatedView=_relatedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *shelfView; // @synthesize shelfView=_shelfView;
- (id)preferredFocusEnvironments;	// IMP=0x000000000006e5b0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006e56e
- (void)layoutSubviews;	// IMP=0x000000000006e2c6
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000006e1ae
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 crossfade:(_Bool)arg3;	// IMP=0x000000000006e005
- (void)setRelatedView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006de8d
- (void)setBackgroundView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006dd98

@end
