//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSString;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController
{
    NSString *_personLocalIdentifier;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSArray *_suggestedContacts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000794119
@property(retain) NSArray *suggestedContacts; // @synthesize suggestedContacts=_suggestedContacts;
@property(retain) NSMutableArray *items; // @synthesize items=_items;
@property(retain) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000793b9a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000793b56
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000793b4b
- (id)personAtIndexPath:(id)arg1;	// IMP=0x0000000000793a9a
- (id)contactAtIndexPath:(id)arg1;	// IMP=0x00000000007939e9
@property(readonly, nonatomic) _Bool hasResults;
- (void)updateItemsForSearchString:(id)arg1;	// IMP=0x0000000000792d75
- (void)viewDidLoad;	// IMP=0x0000000000792c69
- (id)initWithStyle:(long long)arg1 personLocalIdentifier:(id)arg2 suggestedContacts:(id)arg3;	// IMP=0x0000000000792bd0
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000792b73

@end

