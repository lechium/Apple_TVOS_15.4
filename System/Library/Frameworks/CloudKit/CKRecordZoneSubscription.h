//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription <NSSecureCoding, NSCopying>
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010df07
- (void).cxx_destruct;	// IMP=0x000000000010e44a
@property(readonly, copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010e3a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010e233
- (id)CKPropertiesDescription;	// IMP=0x000000000010e176
@property(copy, nonatomic) NSString *recordType; // @dynamic recordType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010dfbe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010df0f
- (id)initWithZoneID:(id)arg1;	// IMP=0x000000000010dea5
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2;	// IMP=0x000000000010de19

@end

