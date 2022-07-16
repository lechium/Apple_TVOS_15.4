//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isActiveDevice;	// 8 = 0x8
    _Bool _isThisDevice;	// 9 = 0x9
    _Bool _isCompanionDevice;	// 10 = 0xa
    _Bool _isAutoMeCapable;	// 11 = 0xb
    NSString *_deviceId;	// 16 = 0x10
    NSString *_deviceName;	// 24 = 0x18
    NSString *_idsDeviceId;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ab65
+ (id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(_Bool)arg4 isThisDevice:(_Bool)arg5 isCompanionDevice:(_Bool)arg6 isAutoMeCapable:(_Bool)arg7;	// IMP=0x000000000001a8d5
- (void).cxx_destruct;	// IMP=0x000000000001b456
@property(nonatomic) _Bool isAutoMeCapable; // @synthesize isAutoMeCapable=_isAutoMeCapable;
@property(copy, nonatomic) NSString *idsDeviceId; // @synthesize idsDeviceId=_idsDeviceId;
@property(nonatomic) _Bool isCompanionDevice; // @synthesize isCompanionDevice=_isCompanionDevice;
@property(nonatomic) _Bool isThisDevice; // @synthesize isThisDevice=_isThisDevice;
@property(nonatomic) _Bool isActiveDevice; // @synthesize isActiveDevice=_isActiveDevice;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)debugDescription;	// IMP=0x000000000001b2a2
- (id)description;	// IMP=0x000000000001b192
- (unsigned long long)hash;	// IMP=0x000000000001b14e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ae96
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001acdc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ab6d
- (void)updateIsActive:(_Bool)arg1 isThisDevice:(_Bool)arg2;	// IMP=0x000000000001ab28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a9e9

@end

