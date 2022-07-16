//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBulletinNotificationRegistrationRemoteCoding-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSPredicate, NSSet, NSUUID;

@interface HMDBulletinNotificationRegistration : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>
{
    NSUUID *_remoteDeviceIdentifier;	// 8 = 0x8
    NSSet *_conditions;	// 16 = 0x10
}

+ (_Bool)doesTypeMatch:(id)arg1 against:(id)arg2;	// IMP=0x0000000000259bb7
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000259baf
+ (id)type;	// IMP=0x0000000000259b07
- (void).cxx_destruct;	// IMP=0x0000000000259722
@property(readonly, copy) NSSet *conditions; // @synthesize conditions=_conditions;
@property(readonly, copy) NSUUID *remoteDeviceIdentifier; // @synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier;
- (id)attributeDescriptions;	// IMP=0x00000000002595ca
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000259334
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000259286
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025927b
- (unsigned long long)hash;	// IMP=0x0000000000259237
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002590f6
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000258eb7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000258c2f
@property(readonly, copy) NSPredicate *predicate;
- (id)initWithRemoteDeviceIdentifier:(id)arg1 conditions:(id)arg2;	// IMP=0x0000000000258a82

@end

