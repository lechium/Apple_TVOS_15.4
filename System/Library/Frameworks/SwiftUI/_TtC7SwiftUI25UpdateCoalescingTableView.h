//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI25UpdateCoalescingTableView : UITableView
{
    MISSING_TYPE *isSidebarStyle;	// 8 = 0x8
    MISSING_TYPE *cachedIdealSize;	// 16 = 0x10
    MISSING_TYPE *rowSpacing;	// 40 = 0x28
    MISSING_TYPE *longPressDelegate;	// 56 = 0x38
    MISSING_TYPE *longPressGestureRecognizer;	// 72 = 0x48
    MISSING_TYPE *visibleCellsUpdate;	// 80 = 0x50
    MISSING_TYPE *ignoreGraphUpdates;	// 96 = 0x60
    MISSING_TYPE *pendingGraphUpdate;	// 100 = 0x64
    MISSING_TYPE *pendingScrollTarget;	// 0 = 0x0
    MISSING_TYPE *previousHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *_lastUpdateSeed;	// 0 = 0x0
    MISSING_TYPE *bridgedState;	// 13654336 = 0xd05940
    MISSING_TYPE *shouldDetermineInsetStyle;	// 2144 = 0x860
    MISSING_TYPE *needsUpdateAlignmentInsets;	// 0 = 0x0
    MISSING_TYPE *lastConfigurationHash;	// 0 = 0x0
}

+ (_Bool)_isInternalTableView;	// IMP=0x000000000075c807
- (void).cxx_destruct;	// IMP=0x000000000075df2c
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000075dda0
- (void)layoutSubviews;	// IMP=0x000000000075da50
- (double)_rowSpacing;	// IMP=0x000000000075d327
- (double)_alignedContentMarginGivenMargin:(double)arg1;	// IMP=0x000000000075d2a1
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000075d243
- (void)layoutMarginsDidChange;	// IMP=0x000000000075d200
@property(nonatomic) struct CGRect bounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000075c7ef
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000000075c700
- (void)_setSectionContentInsetFollowsLayoutMargins:(_Bool)arg1;	// IMP=0x000000000075c403
- (_Bool)_sectionContentInsetFollowsLayoutMargins;	// IMP=0x000000000075c3a1

// Remaining properties
@property(nonatomic) _Bool sectionContentInsetFollowsLayoutMargins;

@end

