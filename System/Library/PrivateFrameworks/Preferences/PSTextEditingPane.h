//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UITableViewDataSource-Protocol.h>
#import <Preferences/UITableViewDelegate-Protocol.h>

@class NSString, PSTextEditingCell, UITableView, UITextField;

@interface PSTextEditingPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;	// 40 = 0x28
    PSTextEditingCell *_cell;	// 48 = 0x30
    UITextField *_textField;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000037ee1
- (void)setPreferenceSpecifier:(id)arg1;	// IMP=0x0000000000037ce2
- (id)preferenceValue;	// IMP=0x0000000000037cc5
- (void)setPreferenceValue:(id)arg1;	// IMP=0x0000000000037ca8
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000037c8b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000037c80
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000037c6b
- (void)layoutSubviews;	// IMP=0x0000000000037b1e
- (void)dealloc;	// IMP=0x0000000000037ad3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000037958

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

