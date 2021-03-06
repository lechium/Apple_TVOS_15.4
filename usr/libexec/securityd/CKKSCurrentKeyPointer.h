//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SecCKKSKeyClass;

__attribute__((visibility("hidden")))
@interface CKKSCurrentKeyPointer
{
    NSString<SecCKKSKeyClass> *_keyclass;	// 8 = 0x8
    NSString *_currentKeyUUID;	// 16 = 0x10
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000a24d5
+ (_Bool)intransactionRecordChanged:(id)arg1 resync:(_Bool)arg2 flagHandler:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a1d2e
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000a1b76
+ (id)sqlColumns;	// IMP=0x00100000000a1b69
+ (id)sqlTable;	// IMP=0x00100000000a1b5c
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a1a46
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a196c
+ (id)forKeyClass:(id)arg1 withKeyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a183c
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a172f
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1622
- (void).cxx_destruct;	// IMP=0x00200000000a15f1
@property(retain) NSString *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
- (id)sqlValues;	// IMP=0x00100000000a137f
- (id)whereClauseToFindSelf;	// IMP=0x00100000000a127b
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000a0fc0
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000a0e11
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000a0ada
- (id)CKRecordName;	// IMP=0x00100000000a0ac8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a0807
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a0712
- (id)description;	// IMP=0x00100000000a0635
- (id)initForClass:(id)arg1 currentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4;	// IMP=0x00100000000a04e8

@end

