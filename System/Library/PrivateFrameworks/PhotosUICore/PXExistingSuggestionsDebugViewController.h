//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PHSuggestion;

@interface PXExistingSuggestionsDebugViewController : UITableViewController <PXOneUpPresentationDelegate>
{
    NSArray *_sectionNames;	// 8 = 0x8
    NSDictionary *_itemsBySectionName;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    PHSuggestion *_currentSuggestion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000fc0b2
- (void)_fetchExistingSuggestions;	// IMP=0x00000000000fbb9f
- (void)configureCell:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000fb95d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fb78c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000fb702
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000fb6e2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000fb6c5
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x00000000000fb6ac
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x00000000000fb68f
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000000fb687
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000000fb681
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000000fb679
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fb671
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000000000fb4e3
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fb3aa
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fb22f
- (id)assetsDataSourceManagerForSuggestion:(id)arg1;	// IMP=0x00000000000fb078
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000fb008
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000fafd9
- (void)viewDidLoad;	// IMP=0x00000000000faf0a
- (id)initWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000000000fae68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
