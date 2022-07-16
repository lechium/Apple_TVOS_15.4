//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSShadow, PXLayoutGenerator;

@protocol PXStoryFeedViewLayoutSpec
@property(nonatomic) _Bool isFullScreen;
@property(readonly, nonatomic) struct UIEdgeInsets viewOutsets;
@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) NSShadow *itemShadow;
@property(readonly, nonatomic) double itemCornerRadius;
@property(readonly, nonatomic) _Bool wantsScrollIndicators;
@property(readonly, nonatomic) CDStruct_f69270d1 scrollBehavior;
- (PXLayoutGenerator *)layoutGeneratorWithReferenceSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@end

