//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TVSettingsNetworkWiFiConfigurationViewController
{
    _Bool _forgettingNetwork;	// 8 = 0x8
}

@property(nonatomic) _Bool forgettingNetwork; // @synthesize forgettingNetwork=_forgettingNetwork;
- (void)_popToMainNetworkController;	// IMP=0x001000000004ffb0
- (void)_updateForgetNetworkItem:(id)arg1 value:(id)arg2;	// IMP=0x001000000004fe10
- (void)_forgetNetwork:(id)arg1;	// IMP=0x001000000004fd40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004fbb0
- (id)interface;	// IMP=0x001000000004fb80
- (id)loadSettingGroups;	// IMP=0x001000000004f5e0
- (void)dealloc;	// IMP=0x001000000004f550
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000004f470

@end

