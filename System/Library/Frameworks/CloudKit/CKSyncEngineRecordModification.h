//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID;

@interface CKSyncEngineRecordModification : NSObject <NSSecureCoding, NSCopying>
{
    CKRecordID *_recordID;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016d0f1
+ (id)recordModificationsWithOppositeTypeFromRecordModifications:(id)arg1;	// IMP=0x000000000016d0c0
- (void).cxx_destruct;	// IMP=0x000000000016d233
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016d214
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016d16b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016d0f9
- (id)oppositeTypeModification;	// IMP=0x000000000016d043
- (unsigned long long)hash;	// IMP=0x000000000016d01e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016cfac
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x000000000016ceda
- (id)description;	// IMP=0x000000000016cec8
- (id)initWithRecordID:(id)arg1 type:(long long)arg2;	// IMP=0x000000000016ce52

@end

