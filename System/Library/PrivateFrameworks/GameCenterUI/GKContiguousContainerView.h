//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface GKContiguousContainerView : UIView
{
    _Bool _vertical;	// 8 = 0x8
    _Bool _applyOrthogonalConstraints;	// 9 = 0x9
    UIView *_baselineView;	// 16 = 0x10
    double _overlap;	// 24 = 0x18
    NSArray *_replaceableConstraints;	// 32 = 0x20
    struct UIEdgeInsets _insets;	// 40 = 0x28
}

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2;	// IMP=0x00000000000ba0d5
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3 applyOrthogonalConstraints:(_Bool)arg4;	// IMP=0x00000000000ba02b
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3;	// IMP=0x00000000000ba013
- (void).cxx_destruct;	// IMP=0x00000000000bac3d
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(nonatomic) _Bool applyOrthogonalConstraints; // @synthesize applyOrthogonalConstraints=_applyOrthogonalConstraints;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double overlap; // @synthesize overlap=_overlap;
@property(nonatomic) UIView *baselineView; // @synthesize baselineView=_baselineView;
- (id)viewForBaselineLayout;	// IMP=0x00000000000ba9e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ba794
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000ba777
- (void)replaceSubviews:(id)arg1;	// IMP=0x00000000000ba682
- (void)_addContiguousSubviews:(id)arg1;	// IMP=0x00000000000ba54a

@end

