//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary;

@interface PXSuggestersDebugViewController : UITableViewController
{
    NSArray *_items;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000120a2d
- (void)_fetchSuggesters;	// IMP=0x0000000000120741
- (void)configureCell:(id)arg1 withItem:(id)arg2;	// IMP=0x0000000000120590
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000120435
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000120418
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000012035b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000012024e
- (void)viewDidLoad;	// IMP=0x000000000012015f
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001200f1

@end
