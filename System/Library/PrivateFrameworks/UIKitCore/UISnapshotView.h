//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIColor, UIImageView, UIView;

@interface UISnapshotView
{
    struct CGSize _contentSize;	// 112 = 0x70
    struct UIEdgeInsets _contentBeyondBounds;	// 128 = 0x80
    struct UIEdgeInsets _edgePadding;	// 160 = 0xa0
    struct UIEdgeInsets _edgeInsets;	// 192 = 0xc0
    struct CGPoint _contentOffset;	// 224 = 0xe0
    UIColor *_edgePaddingColor;	// 240 = 0xf0
    UIView *_imageView;	// 248 = 0xf8
    NSMutableArray *_edgePaddingViews;	// 256 = 0x100
    struct CGRect _snapshotRect;	// 264 = 0x108
    UIImageView *_shadowView;	// 296 = 0x128
    unsigned int _disableEdgeAntialiasing:1;	// 304 = 0x130
    unsigned int _disableVerticalStretch:1;	// 304 = 0x130
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIColor *edgePaddingColor; // @synthesize edgePaddingColor=_edgePaddingColor;
@property(nonatomic, getter=_contentOffset, setter=_setContentOffset:) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(readonly, nonatomic, getter=_contentSize) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic, getter=_snapshotView) UIView *snapshotView; // @synthesize snapshotView=_imageView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) struct UIEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
- (void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2;	// IMP=0x000000000102f363
- (void)captureSnapshotRect:(struct CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3;	// IMP=0x000000000102e79a
- (void)_addEdgePaddingViewInRect:(struct CGRect)arg1;	// IMP=0x000000000102e6fb
- (struct CGRect)_contentsCenterForEdgePadding:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;	// IMP=0x000000000102e6bd
- (void)_drawEdges:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;	// IMP=0x000000000102e2de
- (struct UIEdgeInsets)_edgePadding;	// IMP=0x000000000102e28c
- (void)layoutSubviews;	// IMP=0x000000000102e08f
- (void)_updateContentsRect;	// IMP=0x000000000102dddf
- (void)_positionImageView;	// IMP=0x000000000102ddb1
- (void)setContentStretch:(struct CGRect)arg1;	// IMP=0x000000000102dd27
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000102dc37
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000102db47
@property(nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) struct CGRect snapshotRect;
@property(nonatomic, getter=isVerticalStretchEnabled) _Bool verticalStretchEnabled;
@property(nonatomic, getter=isEdgeAntialiasingEnabled) _Bool edgeAntialiasingEnabled;
- (void)dealloc;	// IMP=0x000000000102d823
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000102d750

@end
