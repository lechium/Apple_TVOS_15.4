//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBulletinNotificationRegistrationRemoteCoding-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSUUID;

@interface HMDAccessoryBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSNumber *_characteristicInstanceID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e583
+ (id)type;	// IMP=0x000000000000e576
- (void).cxx_destruct;	// IMP=0x000000000000e545
@property(readonly, copy) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x000000000000e395
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e078
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dfa4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000df99
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000de30
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x000000000000dd2d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000dbaf
- (id)initWithAccessoryUUID:(id)arg1 characteristicInstanceID:(id)arg2 remoteDeviceIdentifier:(id)arg3 conditions:(id)arg4;	// IMP=0x000000000000dada

@end
