//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface UISearchDisplayControllerContainerView
{
    _Bool _collapsedTopView;	// 112 = 0x70
    NSLayoutConstraint *_topViewHeightConstraint;	// 120 = 0x78
    NSLayoutConstraint *_topViewAttributeTopConstraint;	// 128 = 0x80
    UIView *_topView;	// 136 = 0x88
    UIView *_bottomView;	// 144 = 0x90
    UIView *_behindView;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000044143d
@property(readonly, nonatomic) UIView *behindView; // @synthesize behindView=_behindView;
@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint; // @synthesize topViewAttributeTopConstraint=_topViewAttributeTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint; // @synthesize topViewHeightConstraint=_topViewHeightConstraint;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000441354
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000004412ee
- (void)configureInteractionForContainment:(_Bool)arg1;	// IMP=0x000000000044129c
- (void)adjustTopAttributeConstantByDelta:(double)arg1;	// IMP=0x000000000044123c
- (void)updateTopAttributeConstant:(double)arg1;	// IMP=0x000000000044117d
- (void)setBottomViewUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000000441160
- (void)collapseTopView;	// IMP=0x0000000000441135
- (void)updateTopViewHeight:(double)arg1 animateUpdate:(_Bool)arg2;	// IMP=0x0000000000440fce
- (void)updateTopViewHeight:(double)arg1;	// IMP=0x0000000000440fba
- (id)initWithFrame:(struct CGRect)arg1 topViewHeight:(double)arg2;	// IMP=0x0000000000440a0c

@end

