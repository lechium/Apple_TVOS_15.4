//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TSKListSettingGroup;

@interface TVSettingsScreenSaverTypesViewController : TSKViewController
{
    TSKListSettingGroup *_photoCollectionSettingGroup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005ab80
@property(readonly, nonatomic) TSKListSettingGroup *photoCollectionSettingGroup; // @synthesize photoCollectionSettingGroup=_photoCollectionSettingGroup;
- (id)_photoCollectionGroupTitleFormatter;	// IMP=0x001000000005a9c0
- (void)selectedItem:(id)arg1;	// IMP=0x001000000005a610
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000005a4f0
- (id)loadSettingGroups;	// IMP=0x0010000000059cf0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000059c60
- (id)title;	// IMP=0x0010000000059be0
- (void)dealloc;	// IMP=0x0010000000059b10
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000599d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
