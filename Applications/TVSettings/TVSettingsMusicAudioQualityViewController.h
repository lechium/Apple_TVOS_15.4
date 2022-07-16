//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController, TVSPreferences;

@interface TVSettingsMusicAudioQualityViewController : TSKViewController
{
    TSKPreviewViewController *_appPreviewViewController;	// 8 = 0x8
    TVSPreferences *_airplayPreferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004b160
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004b060
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000004aef0
- (void)_itemSelected:(id)arg1;	// IMP=0x001000000004ad80
- (id)_createItemWithInfo:(id)arg1;	// IMP=0x001000000004aa50
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x001000000004a930
- (id)loadSettingGroups;	// IMP=0x001000000004a2d0
- (void)viewDidLoad;	// IMP=0x001000000004a240
- (void)dealloc;	// IMP=0x001000000004a1b0
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000004a090

@end

