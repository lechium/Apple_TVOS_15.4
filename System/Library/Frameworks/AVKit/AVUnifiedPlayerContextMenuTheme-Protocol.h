//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class NSString, UIColor, UIFont;
@protocol AVUnifiedPlayerContextMenuItemTheme, AVUnifiedPlayerContextMenuPlatterTheme;

@protocol AVUnifiedPlayerContextMenuTheme <NSObject>
@property(readonly, nonatomic) id <AVUnifiedPlayerContextMenuItemTheme> item;
@property(readonly, nonatomic) id <AVUnifiedPlayerContextMenuPlatterTheme> platter;
@property(readonly, nonatomic) UIColor *sectionHeaderForegroundColor;
@property(readonly, nonatomic) UIFont *sectionHeaderFont;
@property(readonly, nonatomic) NSString *sectionSeparatorCompositingFilter;
@property(readonly, nonatomic) UIColor *sectionSeparatorColor;
@property(readonly, nonatomic) double sectionSeparatorLineWidth;
@property(readonly, nonatomic) double sectionHeaderCalloutSpacing;
@property(readonly, nonatomic) double sectionHeaderBaselineAdjustment;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) double sectionHeaderHeight;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property(readonly, nonatomic) double pinnedTargetVerticalPadding;
@property(readonly, nonatomic) struct CGSize maximumDisplaySize;
@property(readonly, nonatomic) struct CGSize minimumDisplaySize;
@property(readonly, nonatomic) double maximumRestrictedHeight;
@property(readonly, nonatomic) double expandedWidth;
- (NSString *)sectionHeaderCompositingFilterForUserInterfaceStyle:(long long)arg1;
@end

