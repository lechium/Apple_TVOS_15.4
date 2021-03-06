//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

#import <TVSystemUI/UITableViewDataSource-Protocol.h>
#import <TVSystemUI/UITableViewDelegate-Protocol.h>
#import <TVSystemUI/_TVSUITextAlertButtonViewInterface-Protocol.h>

@class NSString, UITableViewCell;

@interface _TVSUITextAlertButtonSettingsDisclosureTableView : UITableView <UITableViewDataSource, UITableViewDelegate, _TVSUITextAlertButtonViewInterface>
{
    UITableViewCell *_cell;	// 8 = 0x8
    CDUnknownBlockType _selectHandler;	// 16 = 0x10
}

+ (id)_tableViewCell;	// IMP=0x000000000003a529
- (void).cxx_destruct;	// IMP=0x000000000003a6a4
@property(copy, nonatomic) CDUnknownBlockType selectHandler; // @synthesize selectHandler=_selectHandler;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000003a489
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000003a469
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000003a454
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000003a449
- (double)ab_minimumWidth;	// IMP=0x0000000000039f89
- (void)ab_setDetailText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039e46
@property(retain, nonatomic, setter=ab_setDetailText:) NSString *ab_detailText;
- (void)ab_setTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039c2e
@property(retain, nonatomic, setter=ab_setTitle:) NSString *ab_title;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x00000000000399f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

