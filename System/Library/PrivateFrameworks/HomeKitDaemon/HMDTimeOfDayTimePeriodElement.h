//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBulletinNotificationRegistrationRemoteCoding-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDTimeOfDayTimePeriodElement <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>
{
    unsigned long long _hour;	// 8 = 0x8
    unsigned long long _minute;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000068f715
+ (id)type;	// IMP=0x000000000068f708
@property(readonly) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly) unsigned long long hour; // @synthesize hour=_hour;
- (id)attributeDescriptions;	// IMP=0x000000000068f30b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000068f28e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000068f212
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068f207
- (unsigned long long)hash;	// IMP=0x000000000068f1f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068f132
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x000000000068f023
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000068eef0
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;	// IMP=0x000000000068ee9a

@end

