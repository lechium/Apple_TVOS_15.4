//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/SiriTVUITemplateItemViewControllerDelegate-Protocol.h>
#import <SiriTVUI/SiriTVUITemplateTabularDataTableViewLayoutDelegate-Protocol.h>
#import <SiriTVUI/UITableViewDataSource-Protocol.h>
#import <SiriTVUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SiriTVUITabularDataRow, SiriTVUITabularDataRowCell, SiriTVUITabularDataTableViewTemplateItem, SiriTVUITemplateTabularDataTableView;

@interface SiriTVUITemplateTabularDataTableViewController <SiriTVUITemplateItemViewControllerDelegate, SiriTVUITemplateTabularDataTableViewLayoutDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SiriTVUITabularDataRowCell *_headerCell;	// 8 = 0x8
    NSMutableDictionary *_cellItemViewControllers;	// 16 = 0x10
    NSArray *_cellColumnWidths;	// 24 = 0x18
    NSArray *_cellRowHeights;	// 32 = 0x20
    NSMutableDictionary *_imageCacheByURL;	// 40 = 0x28
    SiriTVUITabularDataRow *_focusedRow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000011b73
- (void)_updateForUserInterfaceStyle:(long long)arg1 andReloadVisibleRows:(_Bool)arg2;	// IMP=0x0000000000011848
- (void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x000000000001179e
- (void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(_Bool)arg4;	// IMP=0x0000000000011798
@property(readonly, nonatomic) struct UIEdgeInsets contentMargins;
@property(readonly, nonatomic) double fullScreenFraction;
- (double)contentWidthForTabularDataTableView:(id)arg1;	// IMP=0x00000000000115bf
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000114c2
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000011097
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000010e8a
- (void)_configureCell:(id)arg1 forDataRow:(id)arg2 cellForLoadedImageCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fd9f
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2 inTableView:(id)arg3;	// IMP=0x000000000000fc20
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000fb8d
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000fb1f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000fab1
- (_Bool)supportsSwipeDismissal;	// IMP=0x000000000000faa9
- (void)_calculateLayout;	// IMP=0x000000000000f396
- (void)loadView;	// IMP=0x000000000000f220
- (id)initWithTemplateItem:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000000f19d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriTVUITabularDataTableViewTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateTabularDataTableView *view; // @dynamic view;

@end

