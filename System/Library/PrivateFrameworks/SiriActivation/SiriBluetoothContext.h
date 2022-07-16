//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SiriBluetoothContext
{
    NSNumber *_isTemporaryDevice;	// 8 = 0x8
    NSNumber *_isEyesFree;	// 16 = 0x10
    NSString *_address;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000036b2b
- (void).cxx_destruct;	// IMP=0x0000000000036d37
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036c6c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036b33
- (id)description;	// IMP=0x0000000000036a90
- (_Bool)isEyesFree;	// IMP=0x0000000000036a73
- (_Bool)isTemporaryDevice;	// IMP=0x0000000000036a56
- (id)initWithBluetoothDevice:(id)arg1;	// IMP=0x000000000003691f

@end
