//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKFetchDatabaseChangesOperation, CKFetchRecordZoneChangesOperation, SHLSyncSessionConfiguration;

__attribute__((visibility("hidden")))
@interface SHLCloudFetchTaskTransformer : NSObject
{
    SHLSyncSessionConfiguration *_configuration;	// 8 = 0x8
    CKFetchDatabaseChangesOperation *_databaseChangesOperation;	// 16 = 0x10
    CKFetchRecordZoneChangesOperation *_recordZoneChangesOperation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003444b
@property(retain, nonatomic) CKFetchRecordZoneChangesOperation *recordZoneChangesOperation; // @synthesize recordZoneChangesOperation=_recordZoneChangesOperation;
@property(retain, nonatomic) CKFetchDatabaseChangesOperation *databaseChangesOperation; // @synthesize databaseChangesOperation=_databaseChangesOperation;
@property(readonly, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)configurationsByRecordZoneIDUsingCache:(id)arg1;	// IMP=0x0010000000034066
- (id)recordIDsFromCloudBackedZones:(id)arg1;	// IMP=0x0010000000033e3d
- (id)cloudBackedZoneChangesOperationFromFetchTask:(id)arg1 forChangedZones:(id)arg2 container:(id)arg3;	// IMP=0x0010000000032d3a
- (id)cloudBackedDatabaseChangesOperationFromFetchTask:(id)arg1 container:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031d14
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000031c40

@end

