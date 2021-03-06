//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>
{
    CKRecordID *_recordID;	// 8 = 0x8
    NSString *_recordType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000339c5a
- (void).cxx_destruct;	// IMP=0x000000000033a195
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)description;	// IMP=0x000000000033a0dd
- (unsigned long long)hash;	// IMP=0x000000000033a073
- (_Bool)isEqualToDeletedRecord:(id)arg1;	// IMP=0x000000000033a021
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000339fb9
@property(readonly, nonatomic) _Bool isRemoteAsset;
@property(readonly, nonatomic) _Bool isPassCatalog;
@property(readonly, nonatomic) _Bool isPass;
@property(readonly, copy, nonatomic) NSString *recordName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000339d3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000339c62
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x0000000000339bc1

@end

