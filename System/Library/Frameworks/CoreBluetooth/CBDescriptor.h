//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor
{
    CBCharacteristic *_characteristic;	// 8 = 0x8
    id _value;	// 16 = 0x10
    CBPeripheral *_peripheral;	// 24 = 0x18
    NSNumber *_handle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027fc0
@property(readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain) id value; // @synthesize value=_value;
@property(nonatomic) __weak CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)handleValueWritten:(id)arg1;	// IMP=0x0000000000027ef0
- (id)handleValueUpdated:(id)arg1;	// IMP=0x0000000000027e90
- (void)invalidate;	// IMP=0x0000000000027e60
- (id)description;	// IMP=0x0000000000027dc0
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;	// IMP=0x0000000000027c40

@end

