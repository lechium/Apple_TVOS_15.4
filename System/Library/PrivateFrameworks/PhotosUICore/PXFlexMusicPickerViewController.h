//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSMutableSet, NSString, UITableView;
@protocol PXAudioAssetFetchResult, PXFlexMusicPickerViewControllerDelegate;

@interface PXFlexMusicPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <PXFlexMusicPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    id <PXAudioAssetFetchResult> _songs;	// 24 = 0x18
    NSMutableSet *_pickedSongs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004981b9
@property(readonly, nonatomic) NSMutableSet *pickedSongs; // @synthesize pickedSongs=_pickedSongs;
@property(copy, nonatomic) id <PXAudioAssetFetchResult> songs; // @synthesize songs=_songs;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <PXFlexMusicPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleDoneButton:(id)arg1;	// IMP=0x0000000000498096
- (void)_handleCancelButton:(id)arg1;	// IMP=0x000000000049804a
- (void)_updateDoneButtonEnabledness;	// IMP=0x0000000000497fa2
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000497e83
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000497cc2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000497c7e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000497c73
- (void)viewDidLoad;	// IMP=0x00000000004979c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
