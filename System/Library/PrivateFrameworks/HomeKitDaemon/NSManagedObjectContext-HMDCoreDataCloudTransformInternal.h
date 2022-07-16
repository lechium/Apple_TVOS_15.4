//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class HMDCoreData, NSPersistentStore, NSString, NSUUID;

@interface NSManagedObjectContext (HMDCoreDataCloudTransformInternal)
@property(readonly, copy, nonatomic) NSString *hmd_workingStoreIdentifier;
@property(readonly, copy, nonatomic) NSString *hmd_cloudSharedStoreIdentifier;
@property(readonly, nonatomic) NSPersistentStore *hmd_cloudStore;
@property(readonly, copy, nonatomic) NSString *hmd_cloudStoreIdentifier;
@property(retain, nonatomic) HMDCoreData *hmd_coreData;
@property(retain, nonatomic) NSManagedObjectContext *hmd_homeManagerContext;
- (void)hmd_logPendingChangesWithReason:(id)arg1;	// IMP=0x00000000007645e3
- (id)hmd_fetchExistingObjectWithID:(id)arg1 propertiesToFetch:(id)arg2;	// IMP=0x000000000076448c
- (id)hmd_fetchExistingObjectWithID:(id)arg1 propertiesToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000764318
- (_Bool)hmd_saveWithTransactionAuthor:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000007640ea
- (void)hmd_assertIsExecuting;	// IMP=0x00000000007640d8
@property(readonly, nonatomic) unsigned long long hmd_transactionAuthor;
@property(readonly, copy, nonatomic) NSUUID *hmd_homeUUID;
@end

