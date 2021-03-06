//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, _UICAPackageView;

@interface PBSharePlayWaitViewController : UIViewController
{
    NSString *_deviceName;	// 8 = 0x8
    long long _deviceModel;	// 16 = 0x10
    _UICAPackageView *_confirmOnNearbyDevicePackageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000022bb90
@property(retain, nonatomic) _UICAPackageView *confirmOnNearbyDevicePackageView; // @synthesize confirmOnNearbyDevicePackageView=_confirmOnNearbyDevicePackageView;
@property(nonatomic) long long deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)userNotificationWasCancelled;	// IMP=0x001000000022ba30
- (void)menuPressed:(id)arg1;	// IMP=0x001000000022b970
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000022b8e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000022b840
- (void)viewDidLoad;	// IMP=0x001000000022abb0
- (id)initWithDeviceName:(id)arg1 deviceModel:(long long)arg2;	// IMP=0x001000000022aab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

