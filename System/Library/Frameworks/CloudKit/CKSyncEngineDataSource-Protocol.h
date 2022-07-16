//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKRecord, CKRecordID, CKRecordZone, CKRecordZoneID, CKSyncEngine, NSData, NSError, NSString;

@protocol CKSyncEngineDataSource <NSObject>
- (void)syncEngine:(CKSyncEngine *)arg1 didUpdateMetadata:(NSData *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 recordWithIDWasDeleted:(CKRecordID *)arg2 recordType:(NSString *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 didFetchRecord:(CKRecord *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToDeleteRecordWithID:(CKRecordID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 didDeleteRecordWithID:(CKRecordID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToSaveRecord:(CKRecord *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveRecord:(CKRecord *)arg2;
- (CKRecord *)syncEngine:(CKSyncEngine *)arg1 recordToSaveForRecordID:(CKRecordID *)arg2;

@optional
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasPurged:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasDeleted:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDChanged:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToDeleteRecordZoneWithID:(CKRecordZoneID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToSaveRecordZone:(CKRecordZone *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToFetchChangesForRecordZoneID:(CKRecordZoneID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 didDeleteRecordZoneWithID:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveRecordZone:(CKRecordZone *)arg2;
@end

