//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class CKRecord, CKRecordID, CKRecordZoneID, NSArray, NSData, NSString;

@protocol DNDSSyncEngineMetadataStoring <NSObject>
@property(nonatomic, getter=isEncryptionAvailable) _Bool encryptionAvailable;
@property(nonatomic) long long accountStatus;
@property(copy, nonatomic) NSString *userRecordID;
@property(copy, nonatomic) NSData *metadata;
- (NSArray *)recordIDsWithZoneID:(CKRecordZoneID *)arg1;
- (void)purge;
- (void)removeRecordsWithZoneID:(CKRecordZoneID *)arg1;
- (void)removeRecordWithID:(CKRecordID *)arg1;
- (void)addRecord:(CKRecord *)arg1;
- (CKRecord *)recordWithID:(CKRecordID *)arg1;
@end

