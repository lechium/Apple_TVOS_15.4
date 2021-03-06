//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TSKSettingItem;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsBluetoothInfoViewController : TSKViewController
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
    TSKSettingItem *_pivotItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000c6fc0
@property(readonly, nonatomic) TSKSettingItem *pivotItem; // @synthesize pivotItem=_pivotItem;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (_Bool)_shouldShowSpatialAudioSettings;	// IMP=0x00100000000c6e00
- (id)_bluetoothDevice;	// IMP=0x00100000000c6c20
- (void)showSpatialTutorial;	// IMP=0x00100000000c6500
- (void)_connectDevice:(id)arg1;	// IMP=0x00100000000c6430
- (void)_unpairDevice:(id)arg1;	// IMP=0x00100000000c5bb0
- (void)_disconnectDevice:(id)arg1;	// IMP=0x00100000000c5ae0
- (void)_toggleSpatialAudio:(id)arg1;	// IMP=0x00100000000c5810
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00100000000c5580
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000c52d0
- (id)loadSettingGroups;	// IMP=0x00100000000c34c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

