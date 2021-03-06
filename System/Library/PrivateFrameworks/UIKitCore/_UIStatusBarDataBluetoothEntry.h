//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry
{
    long long _state;	// 16 = 0x10
    _UIStatusBarDataBatteryEntry *_batteryEntry;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c94650
- (void).cxx_destruct;	// IMP=0x0000000000c94af4
@property(copy, nonatomic) _UIStatusBarDataBatteryEntry *batteryEntry; // @synthesize batteryEntry=_batteryEntry;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c94996
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c947cd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c946f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c94658
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c945c1
- (unsigned long long)hash;	// IMP=0x0000000000c94560

@end

