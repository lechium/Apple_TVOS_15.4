//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSNumber, NSString;

@interface HAPCharacteristicEvent : HMFObject
{
    NSString *_serverIdentifier;	// 8 = 0x8
    NSNumber *_accessoryInstanceID;	// 16 = 0x10
    NSNumber *_serviceInstanceID;	// 24 = 0x18
    NSNumber *_characteristicInstanceID;	// 32 = 0x20
    id _value;	// 40 = 0x28
    NSDate *_updateTime;	// 48 = 0x30
    NSNumber *_stateNumber;	// 56 = 0x38
}

+ (id)eventWithCharacteristic:(id)arg1;	// IMP=0x00000000001aeb8c
- (void).cxx_destruct;	// IMP=0x00000000001aeb06
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, copy, nonatomic) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy, nonatomic) NSNumber *accessoryInstanceID; // @synthesize accessoryInstanceID=_accessoryInstanceID;
@property(readonly, copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (id)init;	// IMP=0x00000000001aea81
- (id)initWithCharacteristic:(id)arg1;	// IMP=0x00000000001ae8b5

@end

