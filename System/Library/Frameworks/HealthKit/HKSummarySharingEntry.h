//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKProfileIdentifier, NSArray, NSDate, NSString, NSUUID;

@interface HKSummarySharingEntry : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSString *_CNContactIdentifier;	// 16 = 0x10
    NSString *_primaryContactIdentifier;	// 24 = 0x18
    NSString *_firstName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
    long long _userWheelchairMode;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    long long _status;	// 64 = 0x40
    unsigned long long _direction;	// 72 = 0x48
    long long _notificationStatus;	// 80 = 0x50
    NSDate *_modificationDate;	// 88 = 0x58
    NSDate *_dateInvited;	// 96 = 0x60
    NSDate *_dateAccepted;	// 104 = 0x68
    HKProfileIdentifier *_profileIdentifier;	// 112 = 0x70
    NSArray *_allContactIdentifiers;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b4f12
- (void).cxx_destruct;	// IMP=0x00000000001b53f7
@property(readonly, copy, nonatomic) NSArray *allContactIdentifiers; // @synthesize allContactIdentifiers=_allContactIdentifiers;
@property(readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(readonly, copy, nonatomic) NSDate *dateAccepted; // @synthesize dateAccepted=_dateAccepted;
@property(readonly, copy, nonatomic) NSDate *dateInvited; // @synthesize dateInvited=_dateInvited;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) long long notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long userWheelchairMode; // @synthesize userWheelchairMode=_userWheelchairMode;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *primaryContactIdentifier; // @synthesize primaryContactIdentifier=_primaryContactIdentifier;
@property(readonly, copy, nonatomic) NSString *CNContactIdentifier; // @synthesize CNContactIdentifier=_CNContactIdentifier;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b507e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b4f1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b4e77
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b48a7
- (unsigned long long)hash;	// IMP=0x00000000001b4891
- (void)_setDateAccepted:(id)arg1;	// IMP=0x00000000001b4864
- (void)_setCNContactIdentifier:(id)arg1;	// IMP=0x00000000001b4837
- (void)_setProfileIdentifier:(id)arg1;	// IMP=0x00000000001b480a
- (id)description;	// IMP=0x00000000001b44e9
- (id)_initWithUUID:(id)arg1 primaryContactIdentifier:(id)arg2 allContactIdentifiers:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 userWheelchairMode:(long long)arg6 type:(long long)arg7 status:(long long)arg8 notificationStatus:(long long)arg9 direction:(unsigned long long)arg10 modificationDate:(id)arg11 dateAccepted:(id)arg12 profileIdentifier:(id)arg13 CNContactIdentifier:(id)arg14;	// IMP=0x00000000001b42a8
- (id)initWithUUID:(id)arg1 primaryContactIdentifier:(id)arg2 allContactIdentifiers:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 type:(long long)arg6 status:(long long)arg7 notificationStatus:(long long)arg8 direction:(unsigned long long)arg9 modificationDate:(id)arg10;	// IMP=0x00000000001b4261
- (id)initWithUUID:(id)arg1 primaryContactIdentifier:(id)arg2 allContactIdentifiers:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 userWheelchairMode:(long long)arg6 type:(long long)arg7 status:(long long)arg8 notificationStatus:(long long)arg9 direction:(unsigned long long)arg10 modificationDate:(id)arg11;	// IMP=0x00000000001b4212
- (id)init;	// IMP=0x00000000001b4198

@end

