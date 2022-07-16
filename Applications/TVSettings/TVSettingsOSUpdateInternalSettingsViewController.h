//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSDictionary;

@interface TVSettingsOSUpdateInternalSettingsViewController : TSKViewController
{
    NSDictionary *_trainMap;	// 8 = 0x8
    NSDictionary *_colorMap;	// 16 = 0x10
    unsigned long long _configurationLoadingState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000010e120
@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(retain, nonatomic) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(retain, nonatomic) NSDictionary *trainMap; // @synthesize trainMap=_trainMap;
- (id)_descriptionForConfiguration:(id)arg1;	// IMP=0x001000000010ded0
- (void)_updateVPNItem:(id)arg1;	// IMP=0x001000000010dbf0
- (void)_updateAppleConnectItem:(id)arg1;	// IMP=0x001000000010da10
- (void)_toggleAdvancedSettingsItems:(id)arg1;	// IMP=0x001000000010d980
- (void)_setShouldShowAdvancedSettings:(_Bool)arg1;	// IMP=0x001000000010d870
- (_Bool)_shouldShowAdvancedSettings;	// IMP=0x001000000010d7a0
- (void)_clearNumericSettingItem:(id)arg1;	// IMP=0x001000000010d740
- (void)_configurationDidChange:(id)arg1;	// IMP=0x001000000010d6d0
- (void)_configurationWillChange:(id)arg1;	// IMP=0x001000000010d660
- (void)_fetchCurrentConfiguration;	// IMP=0x001000000010d320
- (id)loadSettingGroups;	// IMP=0x001000000010ae30
- (void)viewDidLoad;	// IMP=0x001000000010ac90

@end

