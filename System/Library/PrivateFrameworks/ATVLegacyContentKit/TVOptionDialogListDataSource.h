//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/UITableViewDataSource-Protocol.h>

@class NSArray, NSString;

@interface TVOptionDialogListDataSource : NSObject <UITableViewDataSource>
{
    NSArray *_menuItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ca929
@property(readonly, copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000ca7bc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000ca7a6
- (id)menuItemAtIndexPath:(id)arg1;	// IMP=0x00000000000ca711
- (id)initWithMenuItems:(id)arg1 listView:(id)arg2;	// IMP=0x00000000000ca69e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
