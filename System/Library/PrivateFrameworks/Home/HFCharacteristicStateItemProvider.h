//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessory, HMService, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFCharacteristicStateItemProvider
{
    HMAccessory *_accessory;	// 8 = 0x8
    HMService *_service;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    NSSet *_characteristicStateItems;	// 32 = 0x20
    NSSet *_batteryItems;	// 40 = 0x28
}

+ (id)_createBatteryItemWithSourceItem:(id)arg1 characteristicType:(id)arg2 valueFormatBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002838b5
+ (id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3;	// IMP=0x000000000028355f
+ (id)standardCharacteristicTypes;	// IMP=0x00000000002833a4
- (void).cxx_destruct;	// IMP=0x0000000000283bd0
@property(retain, nonatomic) NSSet *batteryItems; // @synthesize batteryItems=_batteryItems;
@property(retain, nonatomic) NSSet *characteristicStateItems; // @synthesize characteristicStateItems=_characteristicStateItems;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (CDUnknownBlockType)characteristicStateItemComparator;	// IMP=0x00000000002832af
- (id)_reloadCharacteristicStateItems;	// IMP=0x0000000000282679
- (id)_reloadBatteryItems;	// IMP=0x000000000028220f
- (id)reloadItems;	// IMP=0x0000000000282161
- (id)items;	// IMP=0x00000000002820e1
- (id)invalidationReasons;	// IMP=0x000000000028206c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000281fb8
- (id)init;	// IMP=0x0000000000281f03
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2 service:(id)arg3;	// IMP=0x0000000000281dd3
- (id)initWithValueSource:(id)arg1 service:(id)arg2;	// IMP=0x0000000000281d40
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2;	// IMP=0x0000000000281d2b

@end

