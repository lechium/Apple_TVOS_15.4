//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PHAssetCollection, UISegmentedControl, UITableView;

@interface PXCMMDebugSharingSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_sectionTitles;	// 8 = 0x8
    NSDictionary *_tableContent;	// 16 = 0x10
    NSDictionary *_sourceDictionary;	// 24 = 0x18
    UISegmentedControl *_segmentedControl;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    PHAssetCollection *_sourceSuggestion;	// 48 = 0x30
}

+ (_Bool)generateSectionTitles:(out id *)arg1 andTableContent:(out id *)arg2 forIndex:(long long)arg3 sourceSuggestion:(id)arg4 sourceDictionary:(id)arg5;	// IMP=0x00000000009054e3
- (void).cxx_destruct;	// IMP=0x000000000090546e
@property(retain, nonatomic) PHAssetCollection *sourceSuggestion; // @synthesize sourceSuggestion=_sourceSuggestion;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000009053df
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000009050d4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000905058
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000090503b
- (void)_closeAction:(id)arg1;	// IMP=0x0000000000905022
- (void)_sendByEmailAction:(id)arg1;	// IMP=0x000000000090501c
- (void)_switchLogsAction:(id)arg1;	// IMP=0x0000000000904eb7
- (void)viewDidLoad;	// IMP=0x0000000000904a03
- (id)_debugDictionary;	// IMP=0x00000000009049f6
- (id)initWithSharingSuggestion:(id)arg1;	// IMP=0x0000000000904813

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

