//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DMFDevicePropertyNotificationSubscriptionRequest
{
    NSArray *_propertyKeys;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001906c
- (void).cxx_destruct;	// IMP=0x0000000000019223
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019166
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019074

@end
