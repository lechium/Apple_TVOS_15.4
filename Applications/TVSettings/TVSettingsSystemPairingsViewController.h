//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSObject, NSString, TVSUIDigitEntryViewController, TVSettingsActivityIndicatorViewController, TVSettingsRemoteAppDevice, TVSettingsRemoteAppFacade, TVSettingsSystemPairingsFacade;
@protocol OS_dispatch_source;

@interface TVSettingsSystemPairingsViewController : TSKViewController
{
    _Bool _isScanning;	// 8 = 0x8
    _Bool _wasScanningOnBackground;	// 9 = 0x9
    TVSettingsSystemPairingsFacade *_systemPairingsFacade;	// 16 = 0x10
    TVSettingsRemoteAppDevice *_pairableEndpointBeingPaired;	// 24 = 0x18
    TVSUIDigitEntryViewController *_digitEntryViewController;	// 32 = 0x20
    TVSettingsActivityIndicatorViewController *_activityIndicatorViewController;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_showActivityIndicatorTimer;	// 48 = 0x30
    TVSettingsRemoteAppFacade *_remoteAppFacade;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x0020000000096f40
- (void).cxx_destruct;	// IMP=0x002000000009a080
@property(nonatomic) _Bool wasScanningOnBackground; // @synthesize wasScanningOnBackground=_wasScanningOnBackground;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(retain, nonatomic) TVSettingsRemoteAppFacade *remoteAppFacade; // @synthesize remoteAppFacade=_remoteAppFacade;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *showActivityIndicatorTimer; // @synthesize showActivityIndicatorTimer=_showActivityIndicatorTimer;
@property(retain, nonatomic) TVSettingsActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) TVSUIDigitEntryViewController *digitEntryViewController; // @synthesize digitEntryViewController=_digitEntryViewController;
@property(retain, nonatomic) TVSettingsRemoteAppDevice *pairableEndpointBeingPaired; // @synthesize pairableEndpointBeingPaired=_pairableEndpointBeingPaired;
@property(retain, nonatomic) TVSettingsSystemPairingsFacade *systemPairingsFacade; // @synthesize systemPairingsFacade=_systemPairingsFacade;
- (void)_replaceLastNavigationViewControllerWithViewController:(id)arg1;	// IMP=0x0010000000099c60
- (void)_hideActivityIndicator;	// IMP=0x0010000000099bb0
- (void)_showActivityIndicator;	// IMP=0x0010000000099b30
- (void)_stopShowActivityIndicatorTimer;	// IMP=0x0010000000099ac0
- (void)_startShowActivityIndicatorTimer;	// IMP=0x0010000000099930
- (void)_didFinishPairing;	// IMP=0x00100000000998d0
- (void)_presentPairingUIWithSettingItem:(id)arg1;	// IMP=0x00100000000995c0
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000099570
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x0010000000098f00
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000098d40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000098710
- (id)loadSettingGroups;	// IMP=0x0010000000097850
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0010000000097760
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0010000000097670
- (void)_stopPairingServices;	// IMP=0x0010000000097570
- (void)_startPairingServices;	// IMP=0x00100000000973f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000097390
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000972e0
- (void)dealloc;	// IMP=0x00100000000971d0
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000096ff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

