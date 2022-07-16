//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKNotificationInfo, NSString;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_subscriptionID;	// 8 = 0x8
    long long _subscriptionType;	// 16 = 0x10
    CKNotificationInfo *_notificationInfo;	// 24 = 0x18
    NSString *_recordType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010ed52
- (void).cxx_destruct;	// IMP=0x000000000010f009
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(copy, nonatomic) CKNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(nonatomic) long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010ee94
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010ed5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010ec5f
- (unsigned long long)hash;	// IMP=0x000000000010ec1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010e979
- (id)zoneID;	// IMP=0x000000000010e936
- (id)init;	// IMP=0x000000000010e8f3
- (id)description;	// IMP=0x000000000010e8e1
- (id)debugDescription;	// IMP=0x000000000010e7d4
- (id)_initWithSubscriptionID:(id)arg1 subscriptionType:(long long)arg2 recordType:(id)arg3;	// IMP=0x000000000010e64f
- (id)predicate;	// IMP=0x0000000000167391
- (unsigned long long)subscriptionOptions;	// IMP=0x000000000016726b
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000001670f3
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000166f91
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000166e38
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000166cf9

@end

