//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSFormatter, NSString, TSKSettingItem;

@interface TVSettingsNetworkViewController : TSKViewController
{
    TSKSettingItem *_wifiSignalStrengthItem;	// 8 = 0x8
    TSKSettingItem *_secureWiFiItem;	// 16 = 0x10
    NSFormatter *_emptyValueFormatter;	// 24 = 0x18
    NSFormatter *_dnsValueFormatter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000059950
@property(retain, nonatomic) NSFormatter *dnsValueFormatter; // @synthesize dnsValueFormatter=_dnsValueFormatter;
@property(retain, nonatomic) NSFormatter *emptyValueFormatter; // @synthesize emptyValueFormatter=_emptyValueFormatter;
@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
- (void)_handleToggleHiddenRecognizer:(id)arg1;	// IMP=0x0010000000059770
- (void)_updateWiFiItem:(id)arg1 value:(id)arg2;	// IMP=0x0010000000059420
- (void)_updateEthernetItem:(id)arg1 value:(id)arg2;	// IMP=0x0010000000059030
- (void)networkUpdated:(id)arg1;	// IMP=0x0010000000058c80
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000058a10
- (void)displayTriggeredByURL:(id)arg1;	// IMP=0x0010000000058950
- (void)loadView;	// IMP=0x0010000000058890
- (id)loadSettingGroups;	// IMP=0x0010000000055b50
- (void)viewDidLoad;	// IMP=0x0010000000055a70
- (void)dealloc;	// IMP=0x00100000000559f0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000558b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
