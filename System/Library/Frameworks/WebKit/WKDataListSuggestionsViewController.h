//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class WKDataListSuggestionsControl;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsViewController : UITableViewController
{
    WKDataListSuggestionsControl *_control;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000036b896
@property(nonatomic) __weak WKDataListSuggestionsControl *control; // @synthesize control=_control;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000036b827
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000036b653
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000036b628
- (void)reloadData;	// IMP=0x000000000036b5a6

@end

