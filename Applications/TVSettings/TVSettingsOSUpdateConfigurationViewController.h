//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSDictionary, NSString;

@interface TVSettingsOSUpdateConfigurationViewController : TSKViewController
{
    unsigned long long _configurationCheckState;	// 8 = 0x8
    NSString *_lastConfigurationCheckResult;	// 16 = 0x10
    NSDictionary *_trainMap;	// 24 = 0x18
    NSDictionary *_colorMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b09c0
@property(retain, nonatomic) NSDictionary *colorMap; // @synthesize colorMap=_colorMap;
@property(retain, nonatomic) NSDictionary *trainMap; // @synthesize trainMap=_trainMap;
@property(copy, nonatomic) NSString *lastConfigurationCheckResult; // @synthesize lastConfigurationCheckResult=_lastConfigurationCheckResult;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (void)_warnAbout:(id)arg1;	// IMP=0x00100000000b0690
- (void)_configurationDidChange:(id)arg1;	// IMP=0x00100000000b02d0
- (void)_configurationWillChange:(id)arg1;	// IMP=0x00100000000b0250
- (void)_clearConfiguration:(id)arg1;	// IMP=0x00100000000b01c0
- (void)_checkConfiguration:(id)arg1;	// IMP=0x00100000000af950
- (void)_updateCheckConfigurationItem:(id)arg1;	// IMP=0x00100000000af6c0
- (void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x00100000000af540
- (void)_updateLivAPIConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x00100000000af3c0
- (void)_updateLocalConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x00100000000af240
- (id)loadSettingGroups;	// IMP=0x00100000000ae690
- (void)viewDidLoad;	// IMP=0x00100000000ae480
- (void)dealloc;	// IMP=0x00100000000ae400
- (id)initWithColorMap:(id)arg1 andTrainMap:(id)arg2;	// IMP=0x00100000000ae2d0

@end
