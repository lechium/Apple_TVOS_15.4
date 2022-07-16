//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSString, PHFetchResult, UITableView;

@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    PHFetchResult *_fetchResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000041ed35
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000041ec85
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000041ec77
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000041e92e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000041e8ea
- (void)_markVariationsAsUnseenForAssetAtIndexPath:(id)arg1;	// IMP=0x000000000041e6b3
- (void)_presentConfirmationForAssetAtIndexPath:(id)arg1;	// IMP=0x000000000041e472
- (long long)_recommendedVariationTypeForAsset:(id)arg1;	// IMP=0x000000000041e3f9
- (void)_fetchSeenAssetsAndReload:(_Bool)arg1;	// IMP=0x000000000041e340
- (id)_suggestedSeenFetchOptions;	// IMP=0x000000000041e161
- (void)viewDidLayoutSubviews;	// IMP=0x000000000041e098
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000041e069
- (void)viewDidLoad;	// IMP=0x000000000041df81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
