//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKModifyRecordAccessOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDsToGrant;	// 8 = 0x8
    NSArray *_recordIDsToRevoke;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014cbed
- (void).cxx_destruct;	// IMP=0x000000000014ced9
@property(retain, nonatomic) NSArray *recordIDsToRevoke; // @synthesize recordIDsToRevoke=_recordIDsToRevoke;
@property(retain, nonatomic) NSArray *recordIDsToGrant; // @synthesize recordIDsToGrant=_recordIDsToGrant;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014cc94
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014cbf5

@end

