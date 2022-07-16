//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface _TVMusicBarsView : UIView
{
    NSArray *_barViews;	// 8 = 0x8
    float _repeatCount;	// 16 = 0x10
    unsigned long long _musicBarsStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000610b6
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x0000000000060c59
- (void)_removeAnimations;	// IMP=0x0000000000060ae6
- (void)_addAnimations;	// IMP=0x0000000000060acc
- (id)_createBarViews;	// IMP=0x00000000000608bc
- (void)_setBarHeights:(double)arg1;	// IMP=0x00000000000606db
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006061d
@property(nonatomic) unsigned long long musicBarsStyle;
- (void)_updateMusicBarsStyle;	// IMP=0x00000000000602b0
- (void)resumeAnimating;	// IMP=0x000000000006021c
- (void)stopAnimating;	// IMP=0x0000000000060195
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000060151
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000060043

@end
