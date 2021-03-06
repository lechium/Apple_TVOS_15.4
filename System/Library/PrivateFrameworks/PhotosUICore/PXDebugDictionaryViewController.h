//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UITableViewDataSource-Protocol.h>

@class NSArray, NSDictionary, NSString, UISegmentedControl, UITableView;

@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource>
{
    NSDictionary *_debugDictionary;	// 8 = 0x8
    UISegmentedControl *_segmentedControl;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    NSArray *_sectionTitles;	// 32 = 0x20
    NSDictionary *_tableContent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000802e3a
@property(retain, nonatomic) NSDictionary *tableContent; // @synthesize tableContent=_tableContent;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly, nonatomic) NSDictionary *debugDictionary; // @synthesize debugDictionary=_debugDictionary;
- (void)_closeAction:(id)arg1;	// IMP=0x0000000000802d7c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000802d1d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000802a88
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000008029c9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000802985
- (id)_sanitizedTextForTitle:(id)arg1 value:(id)arg2;	// IMP=0x0000000000802804
- (id)_flattenDictionary:(id)arg1;	// IMP=0x000000000080273a
- (void)_updateWithSegmentedTitle:(id)arg1;	// IMP=0x00000000008022ef
- (void)_switchLogsAction:(id)arg1;	// IMP=0x0000000000802215
- (id)segmentedTitles;	// IMP=0x00000000008021b8
- (void)viewDidLoad;	// IMP=0x0000000000801c7b
- (id)initWithDebugDictionary:(id)arg1;	// IMP=0x0000000000801bc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

