//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSyncEngineDataSource-Protocol.h>

@class CKRecordZoneID, CKSyncEngine, NSArray;

@protocol CKSyncEngineDataSourcePrivate <CKSyncEngineDataSource>

@optional
- (NSArray *)syncEngine:(CKSyncEngine *)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)arg2 recordIDs:(NSArray *)arg3;
- (void)syncEngineDidEndFetchingChanges:(CKSyncEngine *)arg1;
- (void)syncEngineDidBeginFetchingChanges:(CKSyncEngine *)arg1;
- (_Bool)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2;
@end

