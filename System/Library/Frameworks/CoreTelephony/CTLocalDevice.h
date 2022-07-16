//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTDeviceIdentifier, NSArray;

@interface CTLocalDevice : NSObject <NSSecureCoding>
{
    CTDeviceIdentifier *_deviceID;	// 8 = 0x8
    NSArray *_installedPlans;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b9f95
- (void).cxx_destruct;	// IMP=0x00000000000ba162
@property(retain, nonatomic) NSArray *installedPlans; // @synthesize installedPlans=_installedPlans;
@property(retain, nonatomic) CTDeviceIdentifier *deviceID; // @synthesize deviceID=_deviceID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ba0be
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b9f9d
- (id)EID;	// IMP=0x00000000000b9f7f
- (unsigned long long)deviceType;	// IMP=0x00000000000b9f69
- (id)deviceName;	// IMP=0x00000000000b9f53
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b9d80
- (id)description;	// IMP=0x00000000000b9c96
- (id)init;	// IMP=0x00000000000b9c32

@end

