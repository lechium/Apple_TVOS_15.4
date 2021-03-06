//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, UIColor, _UIRefreshControlContentView;
@protocol _UIRefreshControlHosting;

@interface UIRefreshControl
{
    long long _style;	// 112 = 0x70
    _UIRefreshControlContentView *_contentView;	// 120 = 0x78
    double _refreshControlHeight;	// 128 = 0x80
    double _visibleHeight;	// 136 = 0x88
    double _snappingHeight;	// 144 = 0x90
    double _additionalTopInset;	// 152 = 0x98
    _Bool _insetsApplied;	// 160 = 0xa0
    _Bool _adjustingInsets;	// 161 = 0xa1
    struct UIEdgeInsets _appliedInsets;	// 168 = 0xa8
    id <_UIRefreshControlHosting> _host;	// 200 = 0xc8
    long long _refreshControlState;	// 208 = 0xd0
}

+ (Class)_contentViewClassForStyle:(long long)arg1;	// IMP=0x00000000005216d7
+ (id)_defaultColor;	// IMP=0x0000000000521628
+ (_Bool)_allowsUnsupportedMacIdiomBehavior;	// IMP=0x0000000000eee036
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(_Bool)arg1;	// IMP=0x0000000000eee01d
- (void).cxx_destruct;	// IMP=0x0000000000523ba7
@property(readonly, nonatomic) long long refreshControlState; // @synthesize refreshControlState=_refreshControlState;
@property(nonatomic, getter=_host, setter=_setHost:) __weak id <_UIRefreshControlHosting> _host;
@property(readonly, nonatomic) _Bool _hostAdjustsContentOffset;
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x0000000000523b42
- (void)_setRefreshControlState:(long long)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000523947
- (void)setRefreshControlState:(long long)arg1;	// IMP=0x0000000000523930
- (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005238a5
- (double)_scrollViewHeight;	// IMP=0x000000000052382a
- (id)_scrollView;	// IMP=0x000000000052380d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000005237cc
- (void)_updateConcealingMask;	// IMP=0x0000000000523623
- (void)endRefreshing;	// IMP=0x000000000052360f
- (void)_endRefreshingAnimated:(_Bool)arg1;	// IMP=0x000000000052340d
- (void)beginRefreshing;	// IMP=0x00000000005233f4
- (void)_removeInsetHeight:(double)arg1;	// IMP=0x000000000052336b
- (void)_addInsetHeight:(double)arg1;	// IMP=0x00000000005232f0
- (void)_removeInsets;	// IMP=0x00000000005232c2
- (void)_addInsets;	// IMP=0x0000000000523294
- (void)_update;	// IMP=0x0000000000523005
- (double)_impactIntensityForVelocity:(double)arg1;	// IMP=0x0000000000522fda
- (double)_stiffnessForVelocity:(double)arg1;	// IMP=0x0000000000522f98
- (void)_didScroll;	// IMP=0x0000000000522f86
- (double)_visibleHeightForContentOffset:(struct CGPoint)arg1 origin:(struct CGPoint)arg2;	// IMP=0x0000000000522e93
- (struct CGPoint)_originForContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000522cec
@property(readonly, nonatomic, getter=_appliedInsets) struct UIEdgeInsets appliedInsets;
- (_Bool)_isApplyingInsets;	// IMP=0x0000000000522cbc
@property(readonly, nonatomic) _Bool _areInsetsBeingApplied;
@property(readonly, nonatomic) double _snappingHeight;
- (void)_updateSnappingHeight;	// IMP=0x0000000000522aa9
- (void)_setVisibleHeight:(double)arg1;	// IMP=0x0000000000522a33
- (void)_updateHiddenStateIfNeeded;	// IMP=0x00000000005229c0
- (long long)_recomputeNewState;	// IMP=0x0000000000522606
@property(readonly, nonatomic) double _visibleHeight;
- (void)_resizeToFitContents;	// IMP=0x0000000000522527
- (id)_attributedTitle;	// IMP=0x00000000005224c4
- (void)_setAttributedTitle:(id)arg1;	// IMP=0x0000000000522445
- (id)_tintColor;	// IMP=0x0000000000522398
- (void)_setTintColor:(id)arg1;	// IMP=0x00000000005222e7
@property(readonly, nonatomic) double _refreshControlHeight;
- (id)_contentView;	// IMP=0x00000000005221b1
@property(readonly, nonatomic) long long style;
- (void)didMoveToSuperview;	// IMP=0x0000000000522006
- (void)sizeToFit;	// IMP=0x0000000000521f7e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000521ec0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000521d88
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000521c66
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) UIColor *tintColor;
- (double)revealedFraction;	// IMP=0x0000000000521bcc
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (void)dealloc;	// IMP=0x0000000000521b6c
- (id)init;	// IMP=0x0000000000521b55
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000521b04
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000521a61
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x00000000005219f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000521899
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000521748

@end

