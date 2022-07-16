//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKTableViewTextCell.h>

@class NSString, TVSBluetoothDevice, TVSettingsBluetoothRecognizer, UIImageView;

@interface TVSettingsBluetoothCell : TSKTableViewTextCell
{
    UIImageView *_batteryIconView;	// 8 = 0x8
    TVSettingsBluetoothRecognizer *_touchGesture;	// 16 = 0x10
    NSString *_originalText;	// 24 = 0x18
    TVSBluetoothDevice *_bluetoothDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000016bb50
@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x001000000016bac0
- (void)_touchGesture:(id)arg1;	// IMP=0x001000000016b8d0
- (void)_updateBatteryImage;	// IMP=0x001000000016b570
- (void)_enableTouchGestureIfPossible;	// IMP=0x001000000016b490
- (void)_updateAccessoryTintColor;	// IMP=0x001000000016b2b0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000016b190
- (void)willMoveToWindow:(id)arg1;	// IMP=0x001000000016b080
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000016afa0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000016ae60
- (void)layoutSubviews;	// IMP=0x001000000016a780
- (void)prepareForReuse;	// IMP=0x001000000016a550
- (void)dealloc;	// IMP=0x001000000016a500
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000016a2c0

@end

