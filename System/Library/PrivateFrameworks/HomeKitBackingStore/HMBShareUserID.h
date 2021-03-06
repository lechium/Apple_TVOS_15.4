//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>
{
    CKRecordID *_userRecordID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000327ea
+ (id)logCategory;	// IMP=0x00000000000327ba
- (void).cxx_destruct;	// IMP=0x00000000000327a7
@property(readonly) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032718
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032678
- (unsigned long long)hash;	// IMP=0x0000000000032634
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032561
- (id)attributeDescriptions;	// IMP=0x0000000000032495
- (id)logIdentifier;	// IMP=0x0000000000032445
- (id)initWithUserRecordID:(id)arg1;	// IMP=0x00000000000323c6

@end

