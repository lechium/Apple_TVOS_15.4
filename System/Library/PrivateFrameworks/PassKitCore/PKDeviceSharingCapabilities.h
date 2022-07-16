//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKOSVersionRequirement;

@interface PKDeviceSharingCapabilities : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _supportsManatee;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    NSString *_deviceRegion;	// 32 = 0x20
    PKOSVersionRequirement *_fromDeviceVersion;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000291a4c
+ (id)deviceSharingCapbilitesRequestWithProtobuf:(id)arg1;	// IMP=0x00000000001716bb
- (void).cxx_destruct;	// IMP=0x000000000029216f
@property(retain, nonatomic) PKOSVersionRequirement *fromDeviceVersion; // @synthesize fromDeviceVersion=_fromDeviceVersion;
@property(nonatomic) _Bool supportsManatee; // @synthesize supportsManatee=_supportsManatee;
@property(copy, nonatomic) NSString *deviceRegion; // @synthesize deviceRegion=_deviceRegion;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (id)description;	// IMP=0x0000000000291fdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000291f10
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000291cf6
- (unsigned long long)hash;	// IMP=0x0000000000291c5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000291bad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000291a54
- (id)protobuf;	// IMP=0x0000000000171850

@end

