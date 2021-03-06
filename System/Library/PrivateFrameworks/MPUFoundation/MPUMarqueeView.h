//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MPUFoundation/CAAnimationDelegate-Protocol.h>

@class CAGradientLayer, NSArray, NSPointerArray, NSString, NSUUID;
@protocol MPUMarqueeViewDelegate;

@interface MPUMarqueeView : UIView <CAAnimationDelegate>
{
    NSUUID *_currentAnimationID;	// 8 = 0x8
    long long _options;	// 16 = 0x10
    NSPointerArray *_coordinatedMarqueeViews;	// 24 = 0x18
    MPUMarqueeView *_primaryMarqueeView;	// 32 = 0x20
    _Bool _marqueeEnabled;	// 40 = 0x28
    double _contentGap;	// 48 = 0x30
    UIView *_contentView;	// 56 = 0x38
    UIView *_animationReferenceView;	// 64 = 0x40
    id <MPUMarqueeViewDelegate> _delegate;	// 72 = 0x48
    double _marqueeDelay;	// 80 = 0x50
    double _marqueeScrollRate;	// 88 = 0x58
    UIView *_viewForContentSize;	// 96 = 0x60
    long long _animationDirection;	// 104 = 0x68
    struct CGSize _contentSize;	// 112 = 0x70
    struct UIEdgeInsets _fadeEdgeInsets;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000005bbc
@property(nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(retain, nonatomic) UIView *viewForContentSize; // @synthesize viewForContentSize=_viewForContentSize;
@property(nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property(nonatomic) double marqueeScrollRate; // @synthesize marqueeScrollRate=_marqueeScrollRate;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic) __weak id <MPUMarqueeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets fadeEdgeInsets; // @synthesize fadeEdgeInsets=_fadeEdgeInsets;
@property(nonatomic) __weak UIView *animationReferenceView; // @synthesize animationReferenceView=_animationReferenceView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double contentGap; // @synthesize contentGap=_contentGap;
- (void)sceneWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000000059f7
- (void)sceneDidEnterBackgroundNotification:(id)arg1;	// IMP=0x000000000000594a
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;
- (double)_duration;	// IMP=0x000000000000583c
- (void)_tearDownMarqueeAnimation;	// IMP=0x00000000000057ed
- (void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x0000000000005345
- (void)_createMarqueeAnimationIfNeeded;	// IMP=0x0000000000004f9f
- (void)_applyMarqueeFade;	// IMP=0x0000000000004af1
- (void)resetMarqueePosition;	// IMP=0x0000000000004ac3
@property(readonly, nonatomic) NSArray *coordinatedMarqueeViews;
- (void)addCoordinatedMarqueeView:(id)arg1;	// IMP=0x00000000000049d3
- (void)setMarqueeEnabled:(_Bool)arg1 withOptions:(long long)arg2;	// IMP=0x00000000000047a5
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000000450d
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000004488
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000004403
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000043a7
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000004344
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000004285
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000041b5
- (void)layoutSubviews;	// IMP=0x0000000000003f00
- (void)didMoveToWindow;	// IMP=0x0000000000003e81
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003c95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

