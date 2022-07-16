//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentPass, PKPaymentPassActionGroup, PKSelectActionGroupHeader, UITableView;
@protocol PKSelectActionGroupViewDelegate;

@interface PKSelectActionGroupView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    PKPaymentPass *_pass;	// 8 = 0x8
    NSArray *_actionGroups;	// 16 = 0x10
    PKSelectActionGroupHeader *_actionGroupHeader;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    id <PKSelectActionGroupViewDelegate> _delegate;	// 40 = 0x28
    PKPaymentPassActionGroup *_selectedActionGroup;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002dd563
@property(nonatomic) __weak id <PKSelectActionGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentPassActionGroup *selectedActionGroup; // @synthesize selectedActionGroup=_selectedActionGroup;
- (void)_addSubviews;	// IMP=0x00000000002dd42a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002dd1cf
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000002dd1ba
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000002dd1ac
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002dced3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002dceb6
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002dceab
- (void)layoutSubviews;	// IMP=0x00000000002dcdba
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2;	// IMP=0x00000000002dcc9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
