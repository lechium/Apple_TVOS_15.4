//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSString;

@interface DNDMeDeviceState : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _meDeviceStatus;	// 8 = 0x8
    NSString *_meDeviceName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b03e
- (void).cxx_destruct;	// IMP=0x000000000000b1be
@property(readonly, copy, nonatomic) NSString *meDeviceName; // @synthesize meDeviceName=_meDeviceName;
@property(readonly, nonatomic) unsigned long long meDeviceStatus; // @synthesize meDeviceStatus=_meDeviceStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b10d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b046
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b033
- (id)description;	// IMP=0x000000000000af5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ade1
- (unsigned long long)hash;	// IMP=0x000000000000ad7f
- (id)initWithStatus:(unsigned long long)arg1 name:(id)arg2;	// IMP=0x000000000000ad01

@end

