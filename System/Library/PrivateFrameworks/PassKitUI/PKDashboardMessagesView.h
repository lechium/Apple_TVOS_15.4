//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UIScrollViewDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSMutableDictionary, NSOrderedSet, NSString, PKDashboardMessageCell, UIImage, UIPageControl, UIScrollView, UITableViewCell;
@protocol PKDashboardMessagesViewDelegate;

@interface PKDashboardMessagesView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    NSOrderedSet *_messages;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    NSMutableDictionary *_tablesViews;	// 24 = 0x18
    _Bool _isSmallDevice;	// 32 = 0x20
    double _currentWidth;	// 40 = 0x28
    UITableViewCell *_sampleButtonCell;	// 48 = 0x30
    PKDashboardMessageCell *_sampleMessageCell;	// 56 = 0x38
    UIImage *_dismissImage;	// 64 = 0x40
    unsigned long long _primaryIndex;	// 72 = 0x48
    struct UIEdgeInsets _insets;	// 80 = 0x50
    double _widthForLastSizeCache;	// 112 = 0x70
    double _maxTableViewHeight;	// 120 = 0x78
    double _actionCellHeight;	// 128 = 0x80
    UIPageControl *_pageControl;	// 136 = 0x88
    id <PKDashboardMessagesViewDelegate> _delegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000104220
@property(nonatomic) __weak id <PKDashboardMessagesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOrderedSet *messages; // @synthesize messages=_messages;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000010417e
- (void)_pageControlChanged:(id)arg1;	// IMP=0x00000000001040e1
- (unsigned long long)_primaryIndexAtOffset:(struct CGPoint)arg1;	// IMP=0x00000000001040b7
- (double)_endOfItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010408e
- (double)_startOfItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010404a
- (unsigned long long)_indexAtContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000104004
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000103f0b
- (void)_switchPrimaryIndexToIndex:(unsigned long long)arg1;	// IMP=0x0000000000103e1b
- (void)_configureActionCell:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000103bf5
- (void)_configureMessageCell:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000010391b
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001037ef
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000103540
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000103485
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000010347d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000103329
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001032bf
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000103289
- (void)_reportCurrentMessageViewed;	// IMP=0x0000000000102fd7
- (id)_messageForTableView:(id)arg1;	// IMP=0x0000000000102db8
- (void)updateWithMessages:(id)arg1 currentIndex:(unsigned long long)arg2;	// IMP=0x0000000000102472
- (double)_maxHeightForSize:(struct CGSize)arg1;	// IMP=0x0000000000102128
- (double)_actionCellHeightForSize:(struct CGSize)arg1;	// IMP=0x0000000000101f4d
- (void)_updateSizeCacheIfNecessary;	// IMP=0x0000000000101eae
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000101e48
- (void)layoutSubviews;	// IMP=0x00000000001018cf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010159f
- (id)initWithInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000010151d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
