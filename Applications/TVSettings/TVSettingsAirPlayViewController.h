//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSMutableSet, NSString, TSKSettingItem, TVSettingsHomeSetupController, TVSiCloudAccountManager;

@interface TVSettingsAirPlayViewController : TSKViewController
{
    TSKSettingItem *_nameItem;	// 8 = 0x8
    TVSettingsHomeSetupController *_homeSetupController;	// 16 = 0x10
    TVSiCloudAccountManager *_accountManager;	// 24 = 0x18
    NSMutableSet *_updatingResidentDevices;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000129b70
@property(retain, nonatomic) NSMutableSet *updatingResidentDevices; // @synthesize updatingResidentDevices=_updatingResidentDevices;
@property(readonly, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) TVSettingsHomeSetupController *homeSetupController; // @synthesize homeSetupController=_homeSetupController;
@property(readonly, nonatomic) TSKSettingItem *nameItem; // @synthesize nameItem=_nameItem;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000129980
- (void)_pushRoomPickerViewController;	// IMP=0x0010000000129940
- (void)_presentWHASetupViewController;	// IMP=0x0010000000129900
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x0010000000129730
- (void)_setDeviceName:(id)arg1;	// IMP=0x0010000000129010
- (id)_makeDeviceNameChildViewControllerWithItem:(id)arg1;	// IMP=0x0010000000128e30
- (void)_toggleResidenceEnabled:(id)arg1;	// IMP=0x0010000000128ac0
- (id)_homeNoiCloudAccountAlertViewController;	// IMP=0x0010000000128850
- (id)_homeNeedsUserInterentionAlertViewController;	// IMP=0x00100000001285e0
- (id)_crdViewController;	// IMP=0x0010000000128420
- (id)_overscanAdjustmentFormatter;	// IMP=0x0010000000128220
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x00100000001281c0
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;	// IMP=0x0010000000128160
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;	// IMP=0x00100000001280e0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000127bb0
- (id)loadSettingGroups;	// IMP=0x0010000000123680
- (void)dealloc;	// IMP=0x0010000000123560
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000123370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

