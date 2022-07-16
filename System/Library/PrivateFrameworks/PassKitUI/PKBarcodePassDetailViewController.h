//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class BluetoothManager, NSMutableDictionary, NSObject, NSString, PKBarcodeTableViewCell, PKLinkedAppView, PKPass, PKPassColorProfile, PKPassDisplayProfile, PKPassHeaderView, PKSettingTableCell, UITableViewCell, UIView;
@protocol OS_dispatch_source, PKPassDeleteHandler;

@interface PKBarcodePassDetailViewController <UITextViewDelegate, PKPassHeaderViewDelegate>
{
    PKPassDisplayProfile *_displayProfile;	// 8 = 0x8
    PKPassColorProfile *_colorProfile;	// 16 = 0x10
    PKLinkedAppView *_linkedApp;	// 24 = 0x18
    UIView *_locationHelpView;	// 32 = 0x20
    PKSettingTableCell *_automaticUpdatesCell;	// 40 = 0x28
    PKSettingTableCell *_showNotificationsCell;	// 48 = 0x30
    PKSettingTableCell *_showInLockScreenCell;	// 56 = 0x38
    PKSettingTableCell *_automaticSelectionCell;	// 64 = 0x40
    UITableViewCell *_personalizePassCell;	// 72 = 0x48
    UITableViewCell *_deleteCell;	// 80 = 0x50
    PKBarcodeTableViewCell *_barcodeCell;	// 88 = 0x58
    NSMutableDictionary *_fieldCellsByRow;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_refreshTimeout;	// 104 = 0x68
    BluetoothManager *_btManager;	// 112 = 0x70
    _Bool _isBluetoothEnabled;	// 120 = 0x78
    _Bool _isLocationEnabled;	// 121 = 0x79
    _Bool _isWifiEnabled;	// 122 = 0x7a
    _Bool _showsLinks;	// 123 = 0x7b
    double _headerHeight;	// 128 = 0x80
    struct UIEdgeInsets _headerContentInset;	// 136 = 0x88
    struct CGSize _previousLayoutTableViewBoundsSize;	// 168 = 0xa8
    double _titleOpacity;	// 184 = 0xb8
    struct CGRect _headerFrame;	// 192 = 0xc0
    UIView *_headerView;	// 224 = 0xe0
    PKPassHeaderView *_passHeaderView;	// 232 = 0xe8
    _Bool _didRampScreenBrightness;	// 240 = 0xf0
    unsigned char _visiblityState;	// 241 = 0xf1
    _Bool _showDoneButton;	// 242 = 0xf2
    PKPass *_pass;	// 248 = 0xf8
    unsigned long long _suppressedContent;	// 256 = 0x100
    id <PKPassDeleteHandler> _deleteOverrider;	// 264 = 0x108
}

+ (_Bool)isWifiEnabled;	// IMP=0x00000000000ce804
- (void).cxx_destruct;	// IMP=0x00000000000d2dad
@property(nonatomic) _Bool showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) __weak id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)_passSettingsChanged:(id)arg1;	// IMP=0x00000000000d2a9e
- (void)pushSettingsFromViewToModel;	// IMP=0x00000000000d280b
- (id)_relevantBuckets;	// IMP=0x00000000000d27ee
- (_Bool)shouldAllowRefresh;	// IMP=0x00000000000d275e
- (void)_refreshFinished:(_Bool)arg1;	// IMP=0x00000000000d2711
- (id)_fieldForRow:(unsigned long long)arg1;	// IMP=0x00000000000d2678
- (id)_fieldCellForRow:(unsigned long long)arg1;	// IMP=0x00000000000d2553
- (id)_settingsCellForRow:(unsigned long long)arg1;	// IMP=0x00000000000d232c
- (unsigned long long)_settingForRow:(unsigned long long)arg1;	// IMP=0x00000000000d225a
- (id)_personalizePassCell;	// IMP=0x00000000000d2111
- (id)_barcodeCell;	// IMP=0x00000000000d2072
- (id)_deleteCell;	// IMP=0x00000000000d1f6c
- (id)_automaticSelectionCell;	// IMP=0x00000000000d1e92
- (_Bool)_personalizeAvailable;	// IMP=0x00000000000d1e75
- (_Bool)_settingsAvailable;	// IMP=0x00000000000d1e33
- (_Bool)_linkedAppAvailable;	// IMP=0x00000000000d1d92
- (void)_updateStandardAppearance:(id)arg1;	// IMP=0x00000000000d1c85
- (void)_updateNavigationItem;	// IMP=0x00000000000d1afc
- (void)_updatePassProperties;	// IMP=0x00000000000d1a95
- (unsigned long long)_numberOfAvailableSettings;	// IMP=0x00000000000d1a25
- (void)_deletePass;	// IMP=0x00000000000d1729
- (void)_sharePass;	// IMP=0x00000000000d12ab
- (void)_done:(id)arg1;	// IMP=0x00000000000d1292
- (void)passHeaderViewPassWasDeleted:(id)arg1;	// IMP=0x00000000000d1224
- (void)passHeaderViewDidChangePass:(id)arg1;	// IMP=0x00000000000d1212
- (void)_reloadPassAndView;	// IMP=0x00000000000d11bc
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000d1121
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000d1086
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000000d0ff8
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000000d0f6c
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000000d0ec8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000d0e25
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000000d0d2f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000d0954
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000d0917
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000d0800
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000d06f4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000d0617
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000d059e
- (id)_locationHelpViewForTableView:(id)arg1;	// IMP=0x00000000000d0414
- (id)_locationHelpTextWithLink:(id *)arg1 linkRange:(struct _NSRange *)arg2;	// IMP=0x00000000000d0130
- (void)_bluetoothPowerChanged:(id)arg1;	// IMP=0x00000000000d00b4
- (_Bool)_isBluetoothEnabled;	// IMP=0x00000000000d006a
- (void)_wifiChanged:(id)arg1;	// IMP=0x00000000000d001a
- (void)setShowsLinks:(_Bool)arg1;	// IMP=0x00000000000cfec6
- (id)linkedApp;	// IMP=0x00000000000cfd8e
- (double)_offscreenHeaderHeight;	// IMP=0x00000000000cfd7c
- (_Bool)_updateHeaderHeight;	// IMP=0x00000000000cfb27
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;	// IMP=0x00000000000cfaed
- (_Bool)reloadData;	// IMP=0x00000000000cfa34
- (void)reloadSections:(id)arg1;	// IMP=0x00000000000cf90c
- (void)reloadSection:(unsigned long long)arg1;	// IMP=0x00000000000cf828
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000000cf6af
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000cf5fc
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000cefec
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000cef60
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000cee7b
- (void)loadView;	// IMP=0x00000000000cec72
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000cec47
- (void)dealloc;	// IMP=0x00000000000ceb26
- (id)initWithPass:(id)arg1;	// IMP=0x00000000000ce83c
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;	// IMP=0x00000000000ce828
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ce81a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ce80c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

