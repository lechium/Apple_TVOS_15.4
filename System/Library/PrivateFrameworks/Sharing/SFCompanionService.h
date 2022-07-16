//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSCopying-Protocol.h>
#import <Sharing/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_deviceName;	// 8 = 0x8
    NSString *_deviceID;	// 16 = 0x10
    NSString *_serviceType;	// 24 = 0x18
    NSString *_managerID;	// 32 = 0x20
    NSString *_ipAddress;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSNumber *_nsxpcVersion;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000056d6b
+ (id)serviceFromAuthorData:(id)arg1;	// IMP=0x0000000000056632
+ (id)serviceFromDictionary:(id)arg1;	// IMP=0x0000000000056494
- (void).cxx_destruct;	// IMP=0x00000000000575fb
@property(copy) NSNumber *nsxpcVersion; // @synthesize nsxpcVersion=_nsxpcVersion;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(copy) NSString *managerID; // @synthesize managerID=_managerID;
@property(copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)description;	// IMP=0x00000000000573ef
- (unsigned long long)hash;	// IMP=0x000000000005735a
- (_Bool)isEqualToService:(id)arg1;	// IMP=0x0000000000056f51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056ee9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056d73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056cae
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056af2
- (id)messageData;	// IMP=0x0000000000056889
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000000056772

@end
