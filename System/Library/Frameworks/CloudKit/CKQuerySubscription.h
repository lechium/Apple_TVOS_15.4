//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSPredicate, NSString;

@interface CKQuerySubscription <NSSecureCoding, NSCopying>
{
    NSPredicate *_predicate;	// 8 = 0x8
    CKRecordZoneID *_zoneID;	// 16 = 0x10
    unsigned long long _querySubscriptionOptions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010d56d
- (void).cxx_destruct;	// IMP=0x000000000010dde8
@property(nonatomic) unsigned long long querySubscriptionOptions; // @synthesize querySubscriptionOptions=_querySubscriptionOptions;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010db06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010da08
- (id)CKPropertiesDescription;	// IMP=0x000000000010d907
- (void)setRecordType:(id)arg1;	// IMP=0x000000000010d866
- (void)_validateQuerySubscriptionOptions:(unsigned long long)arg1;	// IMP=0x000000000010d81d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010d6a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010d575
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000010d4e5
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000010d2e9

// Remaining properties
@property(readonly, copy, nonatomic) NSString *recordType; // @dynamic recordType;

@end

